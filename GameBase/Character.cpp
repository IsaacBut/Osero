#include "assert.h"
#include "DxLib.h"

#include <windows.h> 

#include "GameBase.h"
#include "InputDevice.h"

#include "GameTitle.h"

#include "MapManager.h"
#include "Function.h"
#include "Character.h"

#include <cmath> 
#include <algorithm> 
#include <vector>
#include <random>
#include <string>
#include <iostream>

using namespace std;
using AreaType = MapData::AreaType;
Player01 player01;
Player02 player02;
AI ai;

// プ?イ?ー1が配置可能な座標の?スト
// List of possible positions where Player01 can place
vector<pair<int, int>> player01CanPut;

// プ?イ?ー1の配置可能?ストを返す関?
// Getter for Player01's possible positions
vector<pair<int, int>>* Player01CanPut() { return &player01CanPut; }

// プ?イ?ー2が配置可能な座標の?スト
// List of possible positions where Player02 can place
vector<pair<int, int>> player02CanPut;

// プ?イ?ー2の配置可能?ストを返す関?
// Getter for Player02's possible positions
vector<pair<int, int>>* Player02CanPut() { return &player02CanPut; }

// プ?イ?ー1の探索フ?グ（?回探索用）
// Flag for Player01's search (first turn only)
bool firstFindPath = true;

// プ?イ?ー2の探索フ?グ
// Flag for Player02's search
bool secondFindPath = false;


#pragma region Player01static

// プ?イ?ー1の?期化?? (?期位置を設定する)
// Player01 initialization (set initial positions)
void Player01::Player01Init()
{
	mapManager.AreaMark(5, 4, MapData::Player01Area);
	mapManager.AreaMark(4, 5, MapData::Player01Area);
}

// プ?イ?ー1の配置可能エ?アを探索
// Find possible positions for Player01
void Player01::FindCanPut()
{
	function.FindCanPutArea(&player01CanPut, AreaType::Player01Area);
}

// プ?イ?ー1の行動??
// Handle Player01's action
int Player01::Player01Act()
{
	if (firstFindPath)
	{
		// ?回のみ配置可能エ?アを探索
		// Search valid positions only on first turn
		FindCanPut();
		firstFindPath = false;
	}

	// 配置可能エ?アを仮表示
	// Pre-mark available positions on the map
	mapManager.PreMark(player01CanPut);

	// マウス入力が?れば石を置く
	// If mouse click is detected, place the piece
	if (function.MouseSearch(player01CanPut) == 1)
	{
		int x = function.MouseClickPoint()->first;
		int y = function.MouseClickPoint()->second;

		// 石を配置して?返す??
		// Place the piece and flip opponent's pieces
		function.TurnChess(x, y, MapData::Player01Area);

		// プ?イ?ー2の配置可能エ?アを探索
		// Search possible moves for Player02
		function.FindCanPutArea(&player02CanPut,AreaType::Player02Area);

		// プ?イ?ー2が打てない場?の??
		// Handle case when Player02 has no valid moves
		if (player02CanPut.size() == 0 && !mapManager.IsMapFull())
		{
			// 同じプ?イ?ーがもう一度打つ
			// Same player continues turn
			firstFindPath = true;
			return 0;
		}
		else
		{
			// プ?イ?ー2にター?を渡す
			// Pass turn to Player02
			secondFindPath = true;
			return 1;
		}
	}

	return 0;
	
}





#pragma endregion

#pragma region Player02static

// プ?イ?ー2の?期化?? (?期位置を設定する)
// Player02 initialization (set initial positions)
void Player02::Player02Init()
{
	mapManager.AreaMark(4, 4, MapData::Player02Area);
	mapManager.AreaMark(5, 5, MapData::Player02Area);

}

// プ?イ?ー2の配置可能エ?アを探索
// Find possible positions for Player02
void Player02::FindCanPut()
{

	function.FindCanPutArea(&player02CanPut, AreaType::Player02Area);
}

// プ?イ?ー2の行動??
// Handle Player02's action
int Player02::Player02Act()
{
	if (secondFindPath)
	{
		// ?回または?手が打てなかった場?のみ探索
		// Search valid positions only when needed
		FindCanPut();
		secondFindPath = false;
	}

	// 配置可能エ?アを仮表示
	// Pre-mark available positions on the map
	mapManager.PreMark(player02CanPut);

	// マウス入力が?れば石を置く
	// If mouse click is detected, place the piece
	if (function.MouseSearch(player02CanPut) == 1)
	{
		int x = function.MouseClickPoint()->first;
		int y = function.MouseClickPoint()->second;

		// 石を配置して?返す??
		// Place the piece and flip opponent's pieces
		function.TurnChess(x, y, MapData::Player02Area);

		// プ?イ?ー1の配置可能エ?アを探索
		// Search possible moves for Player01
		function.FindCanPutArea(&player01CanPut,AreaType::Player01Area);

		// プ?イ?ー1が打てない場?の??
		// Handle case when Player01 has no valid moves
		if (player01CanPut.size() == 0 && !mapManager.IsMapFull())
		{
			// 同じプ?イ?ーがもう一度打つ
			// Same player continues turn
			secondFindPath = true;
			return 0;
		}
		else 
		{
			// プ?イ?ー1にター?を渡す
			// Pass turn to Player01
			firstFindPath = true;
			return 1;
		}

	}

	return 0;

}





#pragma endregion

#pragma region AI

// 現在のAIの難易度?ベ?
// Current AI difficulty level
AI::AILevel nowLevel;

// AIの?ベ?を設定
// Set AI level
void AI::SetAILevel(AILevel target) { nowLevel = target; }

// AIの?ベ?を取得
// Get AI level
AI::AILevel AI::GetAILevel() { return nowLevel; }


// AIが選んだ座標
// The position chosen by AI
pair<int, int> aiput;

// AIの選択座標を返す
// Getter for AI's chosen position
pair<int, int>* AI::AIPut() { return &aiput; }

// AIの?期化（?期位置設定 + 難易度設定）
// Initialize AI (set initial positions + difficulty)
void AI::AIInit(AILevel target)
{
	mapManager.AreaMark(4, 4, MapData::Player02Area);
	mapManager.AreaMark(5, 5, MapData::Player02Area);

	SetAILevel(target);

}

// AIが打てる場?を探索
// Search for valid positions for AI
void AI::FindCanPut()
{
	aiput = { -1,-1 };
	function.FindCanPutArea(&player02CanPut,AreaType::Player02Area);
}


// AIの行動??
// Handle AI action
int AI::AIAct()
{
	if (secondFindPath)
	{
		FindCanPut();
		secondFindPath = false;
	}

	// 少し待機して自然な思考っぽさを?出
	// Wait for a short time to simulate thinking
	WaitTimer(10);

	return AIJudgement();
}

// 難易度に?じた行動判断
// Choose action based on AI level
int AI::AIJudgement() 
{
	switch (nowLevel)
	{
	case Random:
		return AI::RandomJudge();

	case Easy:
		return AI::EasyJudge();

	case Normal:
		return AI::NormalJudge();

	case Hard:
		return AI::HardJudge();

	default:
		return-1;

	}

	return -1;
}

// 盤面の四隅（安定石の座標）
// Stable positions (corners of the board)
const vector<pair<int, int>> dimension = { {1,1},{1,8},{8,1},{8,8} };

// 盤の範囲
// Board boundaries
int gameStart = MAPSTART;
int gameEnd = MAPHEIGHTEND;

// 石を置いた?にひっくり返せる??を?える
// Count how many pieces can be flipped if placed
int AI::CountFlippableChess(pair<int, int> prePut, const vector<pair<int, int>>& enemyArea, const vector<pair<int, int>>& targetArea)
{
	int count = 0;
	const vector<pair<int, int>>* direction = function.Direction();

	for (const auto& diection : *function.Direction())
	{
		int dx = diection.first;
		int dy = diection.second;

		int x = prePut.first + dx;
		int y = prePut.second + dy;

		if (!mapManager.IsInMap(x, y) || !function.IsInTargetList(enemyArea, x, y)) continue;
		while (mapManager.IsInMap(x, y) && function.IsInTargetList(enemyArea, x, y))
		{
			x += dx;
			y += dy;
		}

		if (mapManager.IsInMap(x, y) && function.IsInTargetList(targetArea, x, y))
		{
			int flipX = x - dx;
			int flipY = y - dy;

			while (flipX != prePut.first || flipY != prePut.second)
			{
				flipX -= dx;
				flipY -= dy;
				count++;
			}
		}
	}
	return count;
}

// 石を置いた?に得られる価値を計算（位置評価 + ??）
// Calculate value of placing a piece (position score + flipped pieces)
int AI::CountValueChess(pair<int, int> prePut, const vector<pair<int, int>>& enemyArea, const vector<pair<int, int>>& targetArea)
{
	int count = mapManager.GetCellVaalue(prePut.first, prePut.second);
	const vector<pair<int, int>>* direction = function.Direction();

	for (const auto& diection : *function.Direction())
	{
		int dx = diection.first;
		int dy = diection.second;

		int x = prePut.first + dx;
		int y = prePut.second + dy;

		if (!mapManager.IsInMap(x, y) || !function.IsInTargetList(enemyArea, x, y)) continue;
		while (mapManager.IsInMap(x, y) && function.IsInTargetList(enemyArea, x, y))
		{
			x += dx;
			y += dy;
		}

		if (mapManager.IsInMap(x, y) && function.IsInTargetList(targetArea, x, y))
		{
			int flipX = x - dx;
			int flipY = y - dy;

			while (flipX != prePut.first || flipY != prePut.second)
			{
				flipX -= dx;
				flipY -= dy;
				count += mapManager.GetCellVaalue(flipX, flipY);
			}
		}
	}
	return count;
}


// 実際に石を置く??
// Place a piece on the board
int AI::PutChess(pair<int, int> turnList)
{
	aiput = { turnList.first,turnList.second };

	function.TurnChess(turnList.first, turnList.second, MapData::Player02Area);

	function.FindCanPutArea(&player01CanPut, AreaType::Player01Area);

	if (player01CanPut.size() == 0 && !mapManager.IsMapFull())
	{
		// 同じプ?イ?ーが続けて打つ
		// Same player continues
		secondFindPath = true;
		return 0;
	}
	else
	{
		// ター?をプ?イ?ー1に渡す
		// Pass turn to Player01
		firstFindPath = true;
		return 1;
	}

	return -1;
}


// 確定石（四隅）を?っているか
// Check if AI can place on corners
bool AI::haveSureChess(vector<pair<int, int>>& putList)
{
	putList.clear();

	for (const auto& canPut : player02CanPut)
	{
		if (find(dimension.begin(), dimension.end(), canPut) != dimension.end())putList.push_back(canPut);
	}

	return !putList.empty();
}

// 盤の辺に置けるか
// Check if AI can place on board edges
bool AI::haveSideChess(std::vector<std::pair<int, int>>& putList)
{
	putList.clear();

	for (const auto& canPut : player02CanPut)
	{
		bool isOnSide =
			canPut.first == gameStart || canPut.first == gameEnd ||
			canPut.second == gameStart || canPut.second == gameEnd;

		if (isOnSide)
			putList.push_back(canPut);
	}

	return !putList.empty();
}

// ??ダ?に打つAI
// Random move AI
int AI::RandomJudge()
{
	if (player02CanPut.size() == 1)return PutChess(player02CanPut[0]);
	else {
		int target = function.GetRandomInt(0, player02CanPut.size() - 1);
		return PutChess(player02CanPut[target]);
	}

}

// 簡単AI（最も多くひっくり返せる手を選ぶ）
// Easy AI (choose the move flipping the most pieces)
int AI::EasyJudge()
{

	if (player02CanPut.size() == 1)return PutChess(player02CanPut[0]);

	pair<int, int>turnList;

	const vector<pair<int, int>> targetArea = mapManager.TargetArea(AreaType::Player02Area);
	const vector<pair<int, int>> enemyArea = mapManager.TargetArea(AreaType::Player01Area);

	AreaType targetType = AreaType::Player02Area;

	int maxChessTurn = 0;

	for (auto& prePut : player02CanPut)
	{
		int chessTurn = CountFlippableChess(prePut, enemyArea, targetArea);

		if (chessTurn > maxChessTurn)
		{
			maxChessTurn = chessTurn;
			turnList = prePut;
		}
	}

	return PutChess(turnList);

}

// 通常AI（優先度: 四隅 > 辺 > ??評価）
// Normal AI (priority: corners > edges > central heuristic)
int AI::NormalJudge()
{
	if (player02CanPut.size() == 1)return PutChess(player02CanPut[0]);
	else
	{
		pair<int, int> turnList = { -1,-1 };
		vector<pair<int, int>> putList;

		const vector<pair<int, int>> targetArea = mapManager.TargetArea(AreaType::Player02Area);
		const vector<pair<int, int>> enemyArea = mapManager.TargetArea(AreaType::Player01Area);

		AreaType targetType = AreaType::Player02Area;

		float maxCost = 0;
		const pair<float, float> central = { 4.5f,4.5f };

		if (haveSureChess(putList))// 四隅優先
		{
			if (putList.size() > 1)
			{
				int maxChessTurn = 0;
				for (auto& prePut : putList)
				{
					int chessTurn = CountFlippableChess(prePut, enemyArea, targetArea);
					if (chessTurn > maxChessTurn)
					{
						maxChessTurn = chessTurn;
						turnList = prePut;
					}
				}
			}
			else turnList = putList[0];
		}
		else if (haveSideChess(putList))// ?に辺を優先
		{
			if (putList.size() > 1)
			{
				int maxChessTurn = 0;
				for (auto& prePut : putList)
				{
					int chessTurn = CountFlippableChess(prePut, enemyArea, targetArea);
					if (chessTurn > maxChessTurn)
					{
						maxChessTurn = chessTurn;
						turnList = prePut;
					}
				}
			}
			else turnList = putList[0];
		}
		else // それ以外は??に近く + 多くひっくり返せる手を選ぶ
		{
			float maxCost = 0;
			const pair<float, float> central = { 4.5f,4.5f };

			for (auto& prePut : player02CanPut)
			{
				float xy_cost = abs(prePut.first - central.first) + abs(prePut.second - central.second);
				int c_cost = CountFlippableChess(prePut, enemyArea, targetArea);
				float all_cost = xy_cost * 0.4f + c_cost * 0.6f;

				if (maxCost < all_cost)
				{
					maxCost = all_cost;
					turnList = prePut;
				}
			}
		}

		if (turnList.first == -1 && turnList.second == -1)
		{
			turnList = { 1,1 };
		}
		return PutChess(turnList);
	}
}

// 難しいAI（位置評価に基づく）
// Hard AI (based on positional evaluation values)
int AI::HardJudge()
{
	if (player02CanPut.size() == 1)return PutChess(player02CanPut[0]);

	pair<int, int>turnList;

	const vector<pair<int, int>> targetArea = mapManager.TargetArea(AreaType::Player02Area);
	const vector<pair<int, int>> enemyArea = mapManager.TargetArea(AreaType::Player01Area);

	AreaType targetType = AreaType::Player02Area;

	int maxChessTurn = -42 * 42;

	for (auto& prePut : player02CanPut)
	{
		int chessTurn = CountValueChess(prePut, enemyArea, targetArea);

		if (chessTurn > maxChessTurn)
		{
			maxChessTurn = chessTurn;
			turnList = prePut;
		}
	}

	return PutChess(turnList);

}



#pragma endregion