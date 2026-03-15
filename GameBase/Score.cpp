#include <iostream>
#include <fstream> 
#include <string>
#include <vector>

#include "Score.h"
#include "GameTitle.h"
#include "MapManager.h"

using namespace std;
Score score;


/// <summary>
/// スコアデータを保存するファイルパス
/// Path to score data file
/// </summary>
const string scoreData = "Resource/Score.txt";

/// <summary>
/// 現在のゲームラウンド
/// Current game round
/// </summary>
int gameRound;

/// <summary>
/// プレイヤーごとのスコア
/// Player scores
/// </summary>
int player01Score, player02Score;

/// <summary>
/// (ラウンド番号, 勝者) の記録
/// Vector of (round number, winner flag)
/// bool: true = Player01, false = Player02
/// </summary>
vector<pair<int, bool>> gameRoundAndWinBy;

/// <summary>
/// (黒駒の数, スコア) の記録
/// Records of (black pieces count, score)
/// </summary>
vector<pair<int, int>> blackChessAmountAndScore;

/// <summary>
/// (白駒の数, スコア) の記録
/// Records of (white pieces count, score)
/// </summary>
vector<pair<int, int>> whiteChessAmountAndScore;


/// <summary>
/// ゲームラウンド情報を取得
/// Get game round info
/// </summary>
vector<pair<int, bool>>* Score::GetGameRoundInfo() { return &gameRoundAndWinBy; }

/// <summary>
/// 黒駒データを取得
/// Get black chess data
/// </summary>
vector<pair<int, int>>* Score::GetBlackChessData() { return &blackChessAmountAndScore; }


/// <summary>
/// 白駒データを取得
/// Get white chess data
/// </summary>
vector<pair<int, int>>* Score::GetWhiteChessData() { return &whiteChessAmountAndScore; }

int Score::PlayerScore(AreaType targetType)
{
	// プレイヤーのスコアを文字列で返す
	// Return the player's score as string
	if (targetType == AreaType::Player01Area)return player01Score;
	else if (targetType == AreaType::Player02Area)return player02Score;

	return -1;
}

void Score::ScoreUpdate(AreaType targetType)
{
	// プレイヤーのスコアを更新
	// Update player scores
	if (targetType == AreaType::Player01Area)
	{
		player01Score += SCOREPLUS;
		player02Score -= SCOREREDUCE;
	}
	else if (targetType == AreaType::Player02Area)
	{
		player02Score += SCOREPLUS;
		player01Score -= SCOREREDUCE;
	}

	// スコアは0未満にならないよう補正
	// Ensure scores are not negative
	player01Score = player01Score < 0 ? 0 : player01Score;
	player02Score = player02Score < 0 ? 0 : player02Score;

}

void Score::ScoreInit()
{
	// ゲームスコア初期化
	// Initialize game score
	gameRound = 1;
	ofstream outFile(scoreData);   // デフォルトは ios::out (既存ファイルを上書き)

	// スコア記録ベクターを初期化
	// Initialize tracking vectors
	blackChessAmountAndScore.push_back(make_pair(0, 0));
	whiteChessAmountAndScore.push_back(make_pair(0, 0));
	gameRoundAndWinBy.push_back(make_pair(0, false));

	// ファイル先頭にタイトル書き込み
	// Write game score header
	if (outFile.is_open()) {
		outFile << "Game Score\n";
		outFile.close();
	}

}

void Score::ScoreWriteIn()
{
	// 試合結果をファイルに追記
	// Append game results to file
	ofstream outFile(scoreData, ios::app); 
	string winBy = gameTitle.WinByScore() ? "Score" : "Amount";
	string winner;

	if (gameTitle.WinByScore())// 勝敗基準が「スコア」の場合
	{
		if (player01Score > player02Score) { winner = "Black Chess"; }
		else if (player01Score < player02Score) { winner = "White Chess"; }
		else if (player01Score == player02Score) { winner = "Draw Game"; }

	}
	else
	{
		if (mapManager.GetBlackChessValue() > mapManager.GetWhiteChessValue()) { winner = "Winner : Black Chess"; }
		else if (mapManager.GetBlackChessValue() < mapManager.GetWhiteChessValue()) { winner = "Winner : White Chess"; }
		else if (mapManager.GetBlackChessValue() == mapManager.GetWhiteChessValue()) { winner = "Draw Game"; }
	}


	if (outFile.is_open()) {
		outFile << "Game Round: " << gameRound<< "\n";
		outFile << "Win By: " << winBy << "\n";
		outFile << winner << "\n";
		outFile << "Amount:" << mapManager.GetBlackChessValue() << "\n";
		outFile << "Score:" << player01Score << "\n";
		outFile << "White Chess\n";
		outFile << "Amount:" << mapManager.GetWhiteChessValue() << "\n";
		outFile << "Score:" << player02Score << "\n";
		outFile << "---------------------------------------------------\n";
		outFile.close();
	}

	// ベクターに試合結果を保存
	// Save results into vectors
	gameRoundAndWinBy.push_back(make_pair(gameRound, gameTitle.WinByScore()));
	blackChessAmountAndScore.push_back(make_pair(mapManager.GetBlackChessValue(), player01Score));
	whiteChessAmountAndScore.push_back(make_pair(mapManager.GetWhiteChessValue(), player02Score));

	
}


void Score::NextGame()
{
	// 次の試合へ (ラウンド増加 & スコアリセット)
	// Move to next game (increment round & reset scores)
	gameRound++;
	player01Score = 0;
	player02Score = 0;
}


void Score::OpenScoreTxt()
{
	// 記録したスコアファイルを開く (Windows専用)
	// Open the score file (Windows only)
	string command = "start " + scoreData;
	system(command.c_str());
}



