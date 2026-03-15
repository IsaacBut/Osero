#include "assert.h"
#include "DxLib.h"

#include <windows.h> 

#include "GameBase.h"
#include "InputDevice.h"

#include "InGame.h"
#include "GameTitle.h"


#include "Function.h"
#include "Character.h"
#include "MapManager.h"
#include "Score.h"

#include "vector"
#include <random>
#include <string>
#include <iostream>


#pragma region Test

#if DEBUG
const int testPlayerWidth = ui.ScreenWidth(12);
const int testPlayer01Height = ui.ScreenHeight(1);
const int testPlayer02Height = ui.ScreenHeight(4);

void Test() 
{
	string player01Chess;
	string player02Chess;

	string player01ChessCanPut;
	string player02ChessCanPut;
	string aiPut;

	player01Chess = "Player01 Chess Score:\n"+ score.PlayerScore(AreaType::Player01Area);
	player02Chess = "Player02 Chess Score:\n"+ score.PlayerScore(AreaType::Player02Area);

	player01ChessCanPut = "01 Chess Can Put: ";
	player02ChessCanPut = "02 Chess Can Put: ";

	aiPut= "AI puted: \n";

	player01ChessCanPut += to_string(Player01CanPut()->size()) + "\n";
	player02ChessCanPut += to_string(Player02CanPut()->size()) + "\n";

	aiPut += "{" + to_string(ai.AIPut()->first) + "," + to_string(ai.AIPut()->second) + "} ";

	int player01ChessNum = 0;
	int player02ChessNum = 0;

	int player01ChessCanPutNum = 0;
	int player02ChessCanPutNum = 0;


	if (Player01CanPut()->size() != 0)
	{
		for (int i = 0; i < Player01CanPut()->size(); i++)
		{
			player01ChessCanPut += "{" + to_string((*Player01CanPut())[i].first) + "," + to_string((*Player01CanPut())[i].second) + "} ";
			player01ChessCanPutNum++;

			if (player01ChessCanPutNum % 4 == 0) player01ChessCanPut += "\n";

		}

	}

	if (Player02CanPut()->size() != 0)
	{
		for (int i = 0;i < Player02CanPut()->size();i++)
		{
			player02ChessCanPut += "{" + to_string((*Player02CanPut())[i].first) + "," + to_string((*Player02CanPut())[i].second) + "} ";
			player02ChessCanPutNum++;

			if (player02ChessCanPutNum % 4 == 0) player02ChessCanPut += "\n";

		}

	}


	SetFontSize(15);
	DrawFormatString(testPlayerWidth, testPlayer01Height, ui.UseColor("White"), player01Chess.c_str());
	DrawFormatString(testPlayerWidth, testPlayer02Height, ui.UseColor("White"), player02Chess.c_str());

	DrawFormatString(0, 100, ui.UseColor("White"), player01ChessCanPut.c_str());
	DrawFormatString(0, 200, ui.UseColor("White"), player02ChessCanPut.c_str());

	SetFontSize(20);
	DrawFormatString(0, 300, ui.UseColor("White"), aiPut.c_str());


}
#endif
#pragma endregion

using Player = InGame::Player;

struct InGame_P
{
	float timer;
	Player nowPlayer;

};
static struct InGame_P* inGame_p = NULL;

/// <summary>
/// プレイヤーをセットする
/// Set the current player
/// </summary>
/// <param name="tartgetPlayer"></param>
void SetPlayer(Player tartgetPlayer) {
	inGame_p->nowPlayer = tartgetPlayer;
}

/// <summary>
/// プレイヤーを取得する
/// Get the current player
/// </summary>
Player InGame::GetNowPlayer() {
	return inGame_p->nowPlayer;
}

/// <summary>
/// プレイヤーのターンを切り替えます。
/// Switches the current player's turn.
/// </summary>
void SwitchPlayer() 
{
	return SetPlayer(InGame::GetNowPlayer() == Player::FirstPlayer ? Player::SecondPlayer : Player::FirstPlayer);
}
	
/// <summary>
/// 現在のプレイヤーの行動を実行し、必要に応じてプレイヤーのターンを切り替えます。
/// Executes the current player's action and switches turns if the action completes.
/// </summary>
void PlayerAction()
{

	SetFontSize(15);
	string player = InGame::GetNowPlayer() == Player::FirstPlayer ? "FirstPlayer" : "SecondPlayer";

	switch (inGame_p->nowPlayer) 
	{
	case Player::FirstPlayer:
		if (player01.Player01Act() == 1)
		{
			SwitchPlayer();
		}
		break;

	case Player::SecondPlayer:
		if (gameTitle.IsMulti()) 
		{
			if (player02.Player02Act() == 1)
			{

				SwitchPlayer();
			}
		}
		else
		{
			if (ai.AIAct() == 1)
			{

				SwitchPlayer();
			}
		}

		break;

	default:
		break;
	}

}



bool InGame::isGameStart = false;

/// <summary>
/// ゲームの主要コンポーネント（マップ、プレイヤー、AI、UI）を初期化します。
/// Initializes core game components including map, players, AI, and UI.
/// </summary>
int InGame::InGameInit() 
{
	inGame_p = (struct InGame_P*)malloc(sizeof(struct InGame_P));
	if (inGame_p)
	{
		inGame_p->timer = 0;
		inGame_p->nowPlayer = Player::FirstPlayer;
	}
	mapManager.MapManagerInit();

	player01.Player01Init();
	if (gameTitle.IsMulti())player02.Player02Init();
	else ai.AIInit(gameTitle.GetSelectedLevel());
	mapManager.PrintMap();

	isGameStart = true;
	function.MouseInit();
	UIseting();

	return 0;
}

int InGame::InGameDSP()
{

	DrawBox(0, 0, SCRN_WIDTH, SCRN_HEIGHT, GetColor(127, 81, 18), TRUE);
	
	if (!mapManager.IsMapFull()) 
	{
		PlayerInformation();
		mapManager.PrintMap();
#if DEBUG
		//Test();
#endif

		PlayerAction();


	}
	else
	{

		return 0;

	}

	return 1;
}

int InGame::InGameEnd()
{
	DrawBox(0, 0, SCRN_WIDTH, SCRN_HEIGHT, GetColor(127, 81, 18), TRUE);
	mapManager.PrintMap();
	WaitTimer(1000);
	return 0;
}

float nowPlayernFontSize = -1;
float playerNameFontSize = -1;
const int nowPlayer[] = { (int)ui.ScreenWidth(4), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(12), (int)ui.ScreenHeight(1) };
const int playerName[] = { (int)ui.ScreenWidth(0), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(4), (int)ui.ScreenHeight(1) };

TCHAR blackChessName[100];
TCHAR whiteChessName[100];

/// <summary>
/// UI設定を初期化し、プレイヤー名やフォントサイズ、表示用文字列を準備します。
/// Initializes the UI settings including font sizes and player label strings.
/// </summary>
void InGame::UIseting()
{
#if DEBUG
	nowPlayernFontSize = ui.FrontSize(nowPlayer[0], nowPlayer[1], nowPlayer[2], nowPlayer[3], "Now Player: Black");
	playerNameFontSize = ui.FrontSize(playerName[0], playerName[1], playerName[2], playerName[3], "Player01's Amount:");

#else
	nowPlayernFontSize = ui.FrontSize(nowPlayer[0], nowPlayer[1], nowPlayer[2], nowPlayer[3], L"Now Player: Black");
	playerNameFontSize = ui.FrontSize(playerName[0], playerName[1], playerName[2], playerName[3], L"Player01's Amount:");

#endif

	if (gameTitle.IsMulti()&& gameTitle.WinByScore())
	{
		_tcscpy_s(blackChessName, 100, _T("Player01's Score:"));
		_tcscpy_s(whiteChessName, 100, _T("Player02's Score:"));

	}
	else if(gameTitle.IsMulti() && !gameTitle.WinByScore())
	{
		_tcscpy_s(blackChessName, 100, _T("Player01's Amount:"));
		_tcscpy_s(whiteChessName, 100, _T("Player02's Amount:"));

	}
	else if (!gameTitle.IsMulti() && gameTitle.WinByScore())
	{
		_tcscpy_s(blackChessName, 100, _T("Player's Score:"));
		_tcscpy_s(whiteChessName, 100, _T("AI's Score:"));

	}
	else if (!gameTitle.IsMulti() && !gameTitle.WinByScore())
	{
		_tcscpy_s(blackChessName, 100, _T("Player's Amount:"));
		_tcscpy_s(whiteChessName, 100, _T("AI's Amount:"));

	}

}


/// <summary>
/// 現在のプレイヤー情報を画面に表示します。
/// Displays current player information on the screen.
/// </summary>

void InGame::PlayerInformation()
{
	// 現在のプレイヤー情報を表示する（黒または白）
	// Display current player's turn (Black or White)
	const TCHAR* black = _T("Now Player: Black");
	const TCHAR* white = _T("Now Player: White");

	if (GetNowPlayer() == FirstPlayer)
	{
		// 黒の番なら黒を表示
		// Show black's turn
		ui.MiddleString(nowPlayer[0], nowPlayer[1], nowPlayer[2], nowPlayer[3], nowPlayernFontSize, black, ui.UseColor("White"));
	}
	else
	{
		// 白の番なら白を表示
		// Show white's turn
		ui.MiddleString(nowPlayer[0], nowPlayer[1], nowPlayer[2], nowPlayer[3], nowPlayernFontSize, white, ui.UseColor("White"));
	}

	TCHAR winBy[100];
	TCHAR blackChessWinBy[100];
	TCHAR whiteChessWinBy[100];

	if (gameTitle.WinByScore())
	{
		// 勝利条件がスコアの場合
		// Win condition is based on score
		_tcscpy_s(winBy, 100, _T("Win By:\n Player`s Score"));

		_stprintf_s(blackChessWinBy, _T("%d"), score.PlayerScore(AreaType::Player01Area));
		_stprintf_s(whiteChessWinBy, _T("%d"), score.PlayerScore(AreaType::Player02Area));
	}
	else
	{
		// 勝利条件が駒の数の場合
		// Win condition is based on number of pieces
		_tcscpy_s(winBy, 100, _T("Win By:\n Chess Amount"));

		_stprintf_s(blackChessWinBy, _T("%d"), mapManager.GetBlackChessValue());
		_stprintf_s(whiteChessWinBy, _T("%d"), mapManager.GetWhiteChessValue());
	}

	// 勝利条件を画面に表示
	// Display win condition text
	ui.LeftString(ui.ScreenWidth(0), ui.ScreenHeight(0), ui.ScreenHeight(1), playerNameFontSize, winBy, ui.UseColor("White"), true);

	// 黒プレイヤーの名前とスコアを表示
	// Show black player's name and score
	ui.LeftString(ui.ScreenWidth(0), ui.ScreenHeight(1.5), ui.ScreenHeight(2.5), playerNameFontSize, blackChessName, ui.UseColor("White"), true);
	ui.LeftString(ui.ScreenWidth(0), ui.ScreenHeight(2), ui.ScreenHeight(3), playerNameFontSize, blackChessWinBy, ui.UseColor("White"), true);

	// 白プレイヤーの名前とスコアを表示
	// Show white player's name and score
	ui.LeftString(ui.ScreenWidth(0), ui.ScreenHeight(3.5), ui.ScreenHeight(4.5), playerNameFontSize, whiteChessName, ui.UseColor("White"), true);
	ui.LeftString(ui.ScreenWidth(0), ui.ScreenHeight(4), ui.ScreenHeight(5), playerNameFontSize, whiteChessWinBy, ui.UseColor("White"), true);

}

