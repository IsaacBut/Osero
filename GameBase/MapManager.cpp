#include "assert.h"
#include "DxLib.h"

#include <windows.h> 

#include "GameBase.h"
#include "InputDevice.h"
#include "mode.h"

#include "MapData.h"
#include "MapManager.h"
#include "Function.h"

#include "InGame.h"

#include <map>
#include <string>
#include <vector>

using AreaType = MapData::AreaType;
using namespace std;
MapManager mapManager;


#pragma region MapArea


/// <summary>
/// プ?イエ?アの座標範囲を定義
/// Define play area coordinate limits
/// </summary>

const int widthCorrect = 3;
const float leftLimit = ui.ScreenWidth(4);
const float rightLimit = ui.ScreenWidth(12);
const float topLimit = ui.ScreenHeight(1);
const float buttomLimit = ui.ScreenHeight(9);

/// <summary>
/// 指定した座標がマップ範囲内かどうかを判定
/// Check if given coordinates are inside the map area
/// </summary>

bool MapManager::IsInMap(int targetX, int targetY)
{
	if (targetX<MAPSTART || targetX>MAPWIDTHEND)return false;
	if (targetY<MAPSTART || targetY>MAPHEIGHTEND)return false;

	return true;
}

/// <summary>
/// 指定した種類のエ?アをすべて?索し、座標?ストを返す
/// Find all cells of the given area type and return their coordinates
/// </summary>
vector<pair<int, int>> MapManager::TargetArea(AreaType targetType)
{
	vector<pair<int, int>> targetArea;

	for (int x = MAPSTART; x < MAPWIDTHEND; x++)
	{
		for (int y = MAPSTART; y < MAPHEIGHTEND; y++)
		{
			if (GetTargetCell(x, y) == targetType)targetArea.push_back({ x, y });
		}
	}
	return targetArea;
}

/// <summary>
/// グ?ッド内の X 座標をスク?ー?座標に変換
/// Convert X grid coordinate to screen position
/// </summary>
float Width(float targetX)//targetX Must Inside the Grid
{
	if (targetX < MAPSTART) { targetX = MAPSTART; }
	else if (targetX > MAPWIDTH + 1) { targetX = MAPWIDTH; }

	return ui.ScreenWidth(targetX + widthCorrect);
}

/// <summary>
/// グ?ッド内の Y 座標をスク?ー?座標に変換
/// Convert Y grid coordinate to screen position
/// </summary>
float Height(float targetY)
{
	if (targetY < MAPSTART) { targetY = MAPSTART; }
	else if (targetY > MAPHEIGHT + 1) { targetY = MAPHEIGHT; }

	return ui.ScreenHeight(targetY);
}

/// <summary>
/// プ?イ?ーの駒の PNG ID とマーク用変?
/// Player chess piece PNG IDs and pre-mark variable
/// </summary>
int player01Png = -1;
int player02Png = -1;
int preMark = -1;

/// <summary>
/// 指定したエ?アタイプに?じて駒の PNG ID を返す
/// Return chess piece PNG ID based on area type
/// </summary>
int Chess(AreaType target)
{
	switch (target)
	{
	case MapData::Player01Area:
		return player01Png;
		break;
	case MapData::Player02Area:
		return player02Png;
		break;
	default:
		return -1;
		break;
	}


}


/// <summary>
/// マップがすべて?まっているかを判定
/// Check if the map is fully occupied (no empty cells left)
/// </summary>
bool MapManager::IsMapFull()
{
	for (int x = MAPSTART; x < MAPWIDTHEND; x++)
	{
		for (int y = MAPSTART; y < MAPHEIGHTEND; y++)
		{
			if (GetTargetCell(x, y) == AreaType::None)return false;
		}
	}
	return true;
}

/// <summary>
/// if I want to use unordered_map
/// it need to put <pair_hash>
/// it use for search the Key and take value
/// if didn't it it wont able to search anythings
/// </summary>
/// unordered_map で pair<int,int> をキーに使うためのハッシ?関?
/// Hash function for using pair<int,int> as key in unordered_map
/// </summary>
struct pair_hash {
	template <class T1, class T2>
	size_t operator()(const std::pair<T1, T2>& p) const {
		return std::hash<T1>()(p.first) ^ (std::hash<T2>()(p.second) << 1);
	}
};

/// <summary>
/// マップ上の位置ごとの重み付け値（評価値）
/// Predefined heuristic values for each map cell
/// </summary>
const unordered_map<pair<int, int>, int, pair_hash> maapValue =
{
	{{1,1},30},  {{2,1},-12}, {{3,1},0},   {{4,1},-1},  {{5,1},-1},  {{6,1},0},   {{7,1},-12}, {{8,1},30},
	{{1,2},-12}, {{2,2},-15}, {{3,2},-3},  {{4,2},-3},  {{5,2},-3},  {{6,2},-3},  {{7,2},-15}, {{8,2},-12},
	{{1,3},0},   {{2,3},-3},  {{3,3},0},   {{4,3},0},   {{5,3},0},   {{6,3},0},   {{7,3},-3},  {{8,3},0},
	{{1,4},-1},  {{2,4},-3},  {{3,4},0},   {{4,4},1},   {{5,4},1},   {{6,4},0},   {{7,4},-3},  {{8,4},-1},
	{{1,5},-1},  {{2,5},-3},  {{3,5},0},   {{4,5},1},   {{5,5},1},   {{6,5},0},   {{7,5},-3},  {{8,5},-1},
	{{1,6},0},   {{2,6},-3},  {{3,6},0},   {{4,6},0},   {{5,6},0},   {{6,6},0},   {{7,6},-3},  {{8,6},0},
	{{1,7},-12}, {{2,7},-15}, {{3,7},-3},  {{4,7},-3},  {{5,7},-3},  {{6,7},-3},  {{7,7},-15}, {{8,7},-12},
	{{1,8},30},  {{2,8},-12}, {{3,8},0},   {{4,8},-1},  {{5,8},-1},  {{6,8},0},   {{7,8},-12}, {{8,8},30}
};

/// <summary>
/// 指定座標の評価値を取得
/// Get heuristic value at given coordinates
/// </summary>
int MapManager::GetCellVaalue(int targetX, int targetY)
{
	// .at() を使うことでキーが存在しない場?に例外を?げる
	// Using .at() ensures an exception is thrown if the key does not exist
	return maapValue.at({ targetX, targetY });  
}

#pragma endregion

/// <summary>
/// 指定したセ?のエ?アタイプを取得
/// Get the area type of a specific cell
/// </summary>
AreaType MapManager::GetTargetCell(int targetX, int targetY)
{
	if (IsInMap(targetX, targetY)) {

		return MapData::GetMap(targetX, targetY);
	}
	else return AreaType::Error;

}

/// <summary>
/// 指定セ?に駒を描画
/// Draw a chess piece on the given cell
/// </summary>
int MapManager::CellPrint(int targetAreaX, int targetAreaY)
{
	int x1, x2;
	int y1, y2;

	x1 = Width(targetAreaX);
	x2 = Width(targetAreaX + 1);

	y1 = Height(targetAreaY);
	y2 = Height(targetAreaY + 1);

	int targetPhoto = Chess(MapManager::GetTargetCell(targetAreaX, targetAreaY));
	if (targetPhoto != -1)
	{
		// 駒画?を指定のセ?範囲に描画
		// Draw piece image in the cell area
		return DrawExtendGraph(x1, y1, x2, y2, targetPhoto, TRUE);
	}
	return 0;
}

/// <summary>
/// セ?に指定したエ?アタイプを設定
/// Mark the given cell with the specified area type
/// </summary>
int MapManager::AreaMark(int targetX, int targetY, AreaType targetType)
{
	if (GetTargetCell(targetX, targetY) == MapData::Error)return 0;
	if (!IsInMap(targetX, targetY))return 0;

	// 正しく設定できたら 1 を返す
	// Return 1 if successfully set
	if (MapData::SetArea(targetX, targetY, targetType) == 1)return 1;

	else return 0;
	
}

/// <summary>
/// マップ全体を描画（枠・マス目・駒）
/// Draw the full map (grid lines and chess pieces)
/// </summary>
void MapManager::PrintMap() 
{
	// マップ外枠を描画
	DrawBoxAA(leftLimit, topLimit, rightLimit, buttomLimit, ui.UseColor("Green"), true);

	// マップ外枠を描画
	for (int i = 1; i <= MAPWIDTHEND; i++)
	{
		DrawLine(Width(i), Height(1), Width(i), Height(9), ui.UseColor("Black"));
	}

	// 各セ?に駒を描画
	for (int i = 0; i <= MAPHEIGHTEND; i++)
	{
		if (i == MAPHEIGHTEND)
		{
			DrawLine(Width(0), Height(i) - 1, Width(MAPWIDTHEND), Height(i) - 1, ui.UseColor("Black"));
		}
		else
		{
			DrawLine(Width(0),Height(i), Width(MAPWIDTHEND), Height(i), ui.UseColor("Black"));
		}

	}

	for (int i = 0; i < MAPWIDTHEND; i++)
	{
		for (int j = 0; j < MAPHEIGHTEND; j++)
		{
			MapManager::CellPrint(i, j);
		}
	}

}

/// <summary>
/// 指定?ストの座標に仮マークを描画
/// Draw pre-mark image at given coordinates list
/// </summary>
void MapManager::PreMark(vector<pair<int, int>> targetList) 
{
	int x, y;
	int x1, x2;
	int y1, y2;

	for (int i = 0; i < targetList.size(); i++) 
	{
		x = targetList[i].first;
		y = targetList[i].second;

		x1 = Width(x);
		x2 = Width(x + 1);

		y1 = Height(y);
		y2 = Height(y + 1);

		// マーク画?をセ?に描画
		DrawExtendGraph(x1, y1, x2, y2, preMark, TRUE);

	}


}

/// <summary>
/// マウスX座標が属する列イ?デックスを返す
/// Find the grid X index from a given mouse position
/// </summary>
int MapManager::FindWidthIndex(float posX)
{
	for (int i = 0; i < MAPWIDTHEND; i++)
	{
		if (posX > Width(i) && posX < Width(i + 1))	return i;
	}
	return -1; // 見つからない場?
}

/// <summary>
/// マウスY座標が属する行イ?デックスを返す
/// Find the grid Y index from a given mouse position
/// </summary>
int MapManager::FindHeightIndex(float posY)
{
	for (int i = 0; i < MAPHEIGHTEND; i++)
	{
		if (posY > Height(i) && posY < Height(i + 1))	return i;
	}
	return -1;// 見つからない場?
}

/// <summary>
/// マップマネージ?ー?期化（駒画??ード、マップ?期化）
/// Initialize MapManager (load chess piece images and reset map)
/// </summary>
int MapManager::MapManagerInit()
{
	bool isSetUpChess = false;
#if DEBUG
	player01Png = LoadGraph("Resource/Black.png");;
	player02Png = LoadGraph("Resource/White.png");
	preMark = LoadGraph("Resource/PreMark.png");

#else 
	player01Png = LoadGraph(L"Resource/Black.png");;
	player02Png = LoadGraph(L"Resource/White.png");
	preMark = LoadGraph(L"Resource/PreMark.png");

#endif

	for (int x = MAPSTART; x < MAPWIDTHEND; x++)
	{
		for (int y = MAPSTART; y < MAPHEIGHTEND; y++)
		{
			AreaMark(x, y, AreaType::None);
		}
	}

	if (player01Png != -1 && player02Png != -1 && preMark != -1)
	{
		isSetUpChess = true;
		return 1;
	}
	else return 0;



}

/// <summary>
/// ?駒の?を返す
/// Get total number of black pieces
/// </summary>
int MapManager::GetBlackChessValue() { return TargetArea(AreaType::Player01Area).size(); }

/// <summary>
/// ?駒の?を返す
/// Get total number of white pieces
/// </summary>
int MapManager::GetWhiteChessValue() { return TargetArea(AreaType::Player02Area).size(); }

