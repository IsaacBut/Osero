#include "assert.h"
#include "DxLib.h"

#include <windows.h> 

#include "GameBase.h"
#include "InputDevice.h"
#include "mode.h"

#include "MapManager.h"
#include "Function.h"
#include "Character.h"
#include "Sfx.h"
#include "Score.h"

#include "GameTitle.h"
#include "InGame.h"

#include <vector>
#include <random>
#include <string>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using AreaType = MapData::AreaType;
Function function;
UI ui;

#pragma region Function Class


// min ~ max の範囲でランダム整数を返す
// Return a random integer between min and max
int Function::GetRandomInt(int min, int max) {
	static random_device rd;
	static mt19937 gen(rd());
	uniform_int_distribution<> distrib(min, max);
	return distrib(gen);
}

// (x, y) がリストに存在しなければ追加する
// Add (x, y) to list if not already present
void Function::AddIfNotExists(vector<pair<int, int>>& list, int x, int y)
{
	pair<int, int> point = { x, y };
	if (find(list.begin(), list.end(), point) == list.end())
	{
		list.push_back(point);
	}
}

// (x, y) がターゲットリストに含まれるか判定
// Check if (x, y) is included in the target list
bool Function::IsInTargetList(const vector<pair<int, int>>& list, int x, int y)
{
	pair<int, int> point = { x, y };

	return find(list.begin(), list.end(), point) != list.end();
}

// クリック状態管理用
// Mouse click state management
bool isClicking = false;
pair<int, int> mouseClickPoint;
pair<int, int>* Function::MouseClickPoint() { return &mouseClickPoint; }
int nowMousePosX, nowMousePosY;

// マウス座標を更新
// Update current mouse position
void Function::UpdateMouse()
{
	GetMousePoint(&nowMousePosX, &nowMousePosY);
}

// マウスが指定領域内にあるか確認
// Check if mouse is inside the specified area
bool Function::IsMouseInArea(int x1, int y1, int x2, int y2)
{
	return nowMousePosX >= x1 && nowMousePosX <= x2 && nowMousePosY >= y1 && nowMousePosY <= y2;
}

// マウスクリックで石を置けるか判定
// Detect valid mouse click on available positions
int Function::MouseSearch(vector<pair<int, int>>& targetCanPut)
{
	int MouseInput;
	int MouseX, MouseY;

	SetMouseDispFlag(TRUE);
	MouseInput = GetMouseInput();
	GetMousePoint(&MouseX, &MouseY);

	if ((MouseInput & MOUSE_INPUT_LEFT) != 0 && !isClicking)
	{
		isClicking = true;

		int x = mapManager.FindWidthIndex((float)MouseX);
		int y = mapManager.FindHeightIndex((float)MouseY);

		if (IsInTargetList(targetCanPut, x, y) == 1)
		{
			// 有効な位置にクリックされた
			// Valid position clicked
			mouseClickPoint = { x,y };
			return 1;
		}
		else
		{
			// 無効クリック
			// Invalid click
			mouseClickPoint = { -1, -1 }; 
			return 0;
		}

	}
	else if ((MouseInput & MOUSE_INPUT_LEFT) == 0 && isClicking)
	{
		isClicking = false;
	}
	return 0;

}
int clickPosX, clickPosY;

// 指定範囲内でクリックを検出
// Detect mouse click inside a given area
int Function::MouseClick(int x1, int y1, int x2, int y2)
{
	int MouseInput;
	int MouseX, MouseY;
	int releasePosX, releasePosY;

	SetMouseDispFlag(TRUE);
	MouseInput = GetMouseInput();
	GetMousePoint(&MouseX, &MouseY);
	releasePosX = MouseX;
	releasePosY = MouseY;

	bool leftPressed = (MouseInput & MOUSE_INPUT_LEFT) != 0;
	//bool inArea = MouseX >= x1 && MouseX <= x2 && MouseY >= y1 && MouseY <= y2;
	bool inArea = releasePosX == nowMousePosX && releasePosY == nowMousePosY;
	bool isClickSameOnRelease = clickPosX >= x1 && clickPosX <= x2 && clickPosY >= y1 && clickPosY <= y2;


	// 範囲外クリック
	// Out of range click		
	if (MouseX < x1 || MouseX > x2 || MouseY < y1 || MouseY > y2)
		return -1;


	if (leftPressed && !isClicking)
	{
		clickPosX = MouseX;
		clickPosY = MouseY;
		// 押下中
		// Button pressed
		isClicking = true;
		return 0; 
	}
	else if (!leftPressed && isClicking && inArea&& isClickSameOnRelease)
	{
		// クリック完了
		// Click confirmed
		isClicking = false;
		sfx.Play("Press");
		return 1;
	}
	else if (!leftPressed && isClicking && !inArea)
	{
		isClicking = false;
		return 0;
	}

	return 0; 

}

// マウス状態を初期化
// Reset mouse click state
void Function::MouseInit()
{
	isClicking = false;
}

// 石を置く可能方向ベクトル
// Directions to check when placing a piece
const vector<pair<int, int>> direction = { {1,0},{-1,0},{0,1},{0,-1},{-1,1},{1,-1},{1,1},{-1,-1} };
const vector<pair<int, int>>* Function::Direction() { return &direction; }


// 配置可能エリア探索
// Find all available positions where a player can put a piece
void Function::FindCanPutArea(vector<pair<int, int>>* targetCanPut, AreaType targetType)
{
	targetCanPut->clear();
	AreaType enemyType = targetType == AreaType::Player01Area ? AreaType::Player02Area : AreaType::Player01Area;
	vector<pair<int, int>> targetArea;
	vector<pair<int, int>> enemyArea;


	// 各マスの状態を確認
	// Scan the board to categorize cells
	for (int x = 1; x < 8; x++)
	{
		for (int y = 1; y < 8; y++)
		{
			if (mapManager.GetTargetCell(x, y) == targetType)
			{
				targetArea.push_back({ x,y });
			}
			else if (mapManager.GetTargetCell(x, y) == enemyType)
			{
				enemyArea.push_back({ x,y });
			}
		}
	}

	// 各方向を探索
	// Explore all directions from player's pieces
	for (int i = 0; i < targetArea.size(); i++)
	{
		for (int j = 0; j < direction.size(); j++)
		{
			int dx = direction[j].first;
			int dy = direction[j].second;

			int x = targetArea[i].first + dx;
			int y = targetArea[i].second + dy;

			if (mapManager.IsInMap(x, y) == 0 || IsInTargetList(targetArea, x, y) || mapManager.GetTargetCell(x, y) == AreaType::None)continue;

			while (mapManager.IsInMap(x, y) == 1 && IsInTargetList(enemyArea, x, y))
			{
				x += dx;
				y += dy;
			}

			if (mapManager.IsInMap(x, y) == 1 && mapManager.GetTargetCell(x, y) == AreaType::None)
			{
				AddIfNotExists((*targetCanPut), x, y);
			}

		}
	}


}

// 石を裏返すアニメーション
// Animate flipping of pieces
void TurnChessAnimation(vector<pair<int, int>> targetCanPut, AreaType targetType)
{
	for (int i = targetCanPut.size() - 1;i > -1;i--)
	{
		mapManager.PrintMap();
		WaitTimer(250);

		mapManager.AreaMark(targetCanPut[i].first, targetCanPut[i].second, targetType);
		mapManager.CellPrint(targetCanPut[i].first, targetCanPut[i].second);
		score.ScoreUpdate(targetType);
		sfx.Play("Turn");
		WaitTimer(250);
	}

}

// 石を置いて裏返す処理
// Place a piece and flip opponent's pieces
void Function::TurnChess(int targetX, int targetY, AreaType targetType)
{
	if (mapManager.IsInMap(targetX, targetY) == 0) return;
	if (mapManager.GetTargetCell(targetX, targetY) != AreaType::None)return;
	mapManager.AreaMark(targetX, targetY, targetType);
	sfx.Play("Put");
	mapManager.PrintMap();

	AreaType enemyType = targetType == AreaType::Player01Area ? AreaType::Player02Area : AreaType::Player01Area;

	vector<pair<int, int>> turnList;

	vector<pair<int, int>> playerList;
	vector<pair<int, int>> otherList;


	// 各マスを分類
	// Categorize each cell into player or enemy
	for (int x = 1; x < 8; x++)
	{
		for (int y = 1; y < 8; y++)
		{
			if (mapManager.GetTargetCell(x, y) == targetType)
			{
				playerList.push_back({ x,y });
			}
			else if (mapManager.GetTargetCell(x, y) == enemyType)
			{
				otherList.push_back({ x,y });
			}
		}
	}

	// 8方向を探索して裏返せる石を探す
	// Explore 8 directions to find flippable pieces
	for (int i = 0; i < direction.size(); i++)
	{
		int dx = direction[i].first;
		int dy = direction[i].second;

		int x = targetX + dx;
		int y = targetY + dy;

		if (mapManager.IsInMap(x, y) == 0 || !IsInTargetList(otherList, x, y)) continue;

		while (mapManager.IsInMap(x, y) == 1 && IsInTargetList(otherList, x, y))
		{
			x += dx;
			y += dy;
		}

		if (mapManager.IsInMap(x, y) == 1 && IsInTargetList(playerList, x, y))
		{
			int flipX = x - dx;
			int flipY = y - dy;

			while (flipX != targetX || flipY != targetY)
			{
				AddIfNotExists(turnList,flipX, flipY);

				flipX -= dx;
				flipY -= dy;
			}
		}

	}

	// ゲーム開始中ならアニメーション付きで裏返す
	// Animate flipping if the game has started
	if (inGame.isGameStart)
	{
		TurnChessAnimation(turnList, targetType);
	}
}

#pragma endregion

#pragma region UI Class

// 色名を指定して対応する色コードを返す関数
// Return the corresponding color code based on color name
unsigned UI::UseColor(string color)
{

	if (color == "White")return WHITE;
	else if (color == "Black")return BLACK;
	else if (color == "Gray")return GRAY;
	else if (color == "Green")return GREEN;
	else if (color == "LGreen")return LIGHTGREEN;
	else if (color == "Red")return RED;
	else if (color == "LRed")return LIGHTRED;

	else return	-1;// 無効な色 Invalid color

}

// 横幅の比率からスクリーン座標を計算
// Convert X ratio into screen coordinate
float UI::ScreenWidth(float targetX)
{
	if (targetX < 0)targetX = 0;
	if (targetX > WIDTHRANGE)targetX = WIDTHRANGE;

	return SCRN_WIDTH * targetX / WIDTHRANGE;
}

// 高さの比率からスクリーン座標を計算
// Convert Y ratio into screen coordinate
float UI::ScreenHeight(float targetY)
{
	if (targetY < 0)targetY = 0;
	if (targetY > HEIGHTRANGE)targetY = HEIGHTRANGE;

	return SCRN_HEIGHT * targetY / HEIGHTRANGE;
}

// 指定領域に収まる最大フォントサイズを返す (float座標版)
// Return maximum font size that fits inside area (float version)
int UI::FrontSize(float x1, float y1, float x2, float y2, const TCHAR* inputChar)
{
	const int widthLimit = x2 - x1;
	const int heightLimit = y2 - y1;


	int fontSize = 8;
	int maxFontSize = 1000;
	int fontHandle = -1;
	int bestFontSize = fontSize;
	for (fontSize; fontSize <= maxFontSize; fontSize++)
	{
		fontHandle = CreateFontToHandle(inputChar, fontSize, 1, DX_FONTTYPE_NORMAL);
		if (fontHandle == -1) break;

		int width = GetDrawStringWidthToHandle(inputChar, -1, fontHandle);
		int height = GetFontSizeToHandle(fontHandle);

		if (width > widthLimit || height > heightLimit) {
			DeleteFontToHandle(fontHandle);
			break;
		}
		bestFontSize = fontSize;
		DeleteFontToHandle(fontHandle);

	}

	return bestFontSize;
}

// 指定領域に収まる最大フォントサイズを返す (int座標版)
// Return maximum font size that fits inside area (int version)
int UI::FrontSize(int x1, int y1, int x2, int y2, const TCHAR* inputChar)
{
	const int widthLimit = x2 - x1;
	const int heightLimit = y2 - y1;


	int fontSize = 8;
	int maxFontSize = 1000;
	int fontHandle = -1;
	int bestFontSize = fontSize;
	for (fontSize; fontSize <= maxFontSize; fontSize++)
	{
		fontHandle = CreateFontToHandle(inputChar, fontSize, 1, DX_FONTTYPE_NORMAL);
		if (fontHandle == -1) break;

		int width = GetDrawStringWidthToHandle(inputChar, -1, fontHandle);
		int height = GetFontSizeToHandle(fontHandle);

		if (width > widthLimit || height > heightLimit) {
			DeleteFontToHandle(fontHandle);
			break;
		}
		bestFontSize = fontSize;
		DeleteFontToHandle(fontHandle);

	}

	return bestFontSize;
}

// 左寄せで文字列を描画 (float座標版)
// Draw string aligned to left (float version)
void UI::LeftString(float x, float y1, float y2, int bestFontSize,const TCHAR* inputChar, unsigned useColor,bool isHightMiddle)
{
	int stringSize = CreateFontToHandle(NULL, bestFontSize, 1);
	int startPosY = y1;


	if (isHightMiddle)
	{
		const int heightLimit = y2 - y1;
		startPosY = y1 + (heightLimit - bestFontSize) / 2;
	}

	DrawStringToHandle(x, startPosY, inputChar, useColor, stringSize);
	DeleteFontToHandle(stringSize);
}

// 中央揃えで文字列を描画 (float座標版)
// Draw string aligned to center (float version)
void UI::MiddleString(float x1, float y1, float x2, float y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor)
{
	const int widthLimit = x2 - x1;
	const int heightLimit = y2 - y1;

	int stringSize = CreateFontToHandle(NULL, bestFontSize, 1);

	int width = GetDrawStringWidthToHandle(inputChar, -1, stringSize);
	width /= 2;
	int startPosX = (x1 + widthLimit / 2) - width;
	 
	int startPosY = y1 + (heightLimit - bestFontSize) / 2;

	DrawStringToHandle(startPosX, startPosY, inputChar, useColor, stringSize);

	DeleteFontToHandle(stringSize);
}

// 右寄せで文字列を描画 (float座標版)
// Draw string aligned to right (float version)
void UI::RightString(float x, float y1, float y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle)
{

	int stringSize = CreateFontToHandle(NULL, bestFontSize, 1);
	int width = GetDrawStringWidthToHandle(inputChar, -1, stringSize);
	int startPosX = x - width;
	int startPosY = y1;

	if (isHightMiddle)
	{
		const int heightLimit = y2 - y1;
		startPosY = y1 + (heightLimit - bestFontSize) / 2;
	}

	DrawStringToHandle(startPosX, startPosY, inputChar, GetColor(255, 255, 255), stringSize);

	DeleteFontToHandle(stringSize);
}

// 左寄せで文字列を描画 (int座標版)
// Draw string aligned to left (int version)
void UI::LeftString(int x, int y1, int y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle)
{
	int stringSize = CreateFontToHandle(NULL, bestFontSize, 1);
	int startPosY = y1;


	if (isHightMiddle)
	{
		const int heightLimit = y2 - y1;
		startPosY = y1 + (heightLimit - bestFontSize) / 2;
	}

	DrawStringToHandle(x, startPosY, inputChar, useColor, stringSize);
	DeleteFontToHandle(stringSize);
}

// 中央揃えで文字列を描画 (int座標版)
// Draw string aligned to center (int version)
void UI::MiddleString(int x1, int y1, int x2, int y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor)
{
	const int widthLimit = x2 - x1;
	const int heightLimit = y2 - y1;

	int stringSize = CreateFontToHandle(NULL, bestFontSize, 1);

	int width = GetDrawStringWidthToHandle(inputChar, -1, stringSize);
	width /= 2;
	int startPosX = (x1 + widthLimit / 2) - width;

	int startPosY = y1 + (heightLimit - bestFontSize) / 2;

	DrawStringToHandle(startPosX, startPosY, inputChar, useColor, stringSize);

	DeleteFontToHandle(stringSize);
}

// 右寄せで文字列を描画 (int座標版)
// Draw string aligned to right (int version)
void UI::RightString(int x, int y1, int y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle)
{

	int stringSize = CreateFontToHandle(NULL, bestFontSize, 1);
	int width = GetDrawStringWidthToHandle(inputChar, -1, stringSize);
	int startPosX = x - width;
	int startPosY = y1;

	if (isHightMiddle)
	{
		const int heightLimit = y2 - y1;
		startPosY = y1 + (heightLimit - bestFontSize) / 2;
	}

	DrawStringToHandle(startPosX, startPosY, inputChar, GetColor(255, 255, 255), stringSize);

	DeleteFontToHandle(stringSize);
}


#pragma endregion