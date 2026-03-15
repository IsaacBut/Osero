#pragma once
#include "DxLib.h"

#include "MapData.h"

#include <tchar.h>
#include <string>
#include <vector>

using namespace std;
using AreaType = MapData::AreaType;

class Function
{
public:

	static int GetRandomInt(int min, int max);
	static void AddIfNotExists(vector<pair<int, int>>& list, int x, int y);
	static bool IsInTargetList(const vector<pair<int, int>>& list, int x, int y);

	static void FindCanPutArea(vector<pair<int, int>>* targetCanPut, AreaType targetType);

	static pair<int, int>* MouseClickPoint();

	const vector<pair<int, int>>* Direction();
	static void TurnChess(int targetX, int targetY, AreaType targetType);

	static void MouseInit();
	static void UpdateMouse();
	static bool IsMouseInArea(int x1, int y1, int x2, int y2);
	static int MouseSearch(vector<pair<int, int>>& targetCanPut);
	static int MouseClick(int x1, int y1, int x2, int y2);


};
extern Function function;


#define WHITE		GetColor(255,255,255)
#define BLACK		GetColor(0,0,0)
#define GREEN		GetColor(0, 179, 0)
#define GRAY		GetColor(128, 128, 128)
#define RED			GetColor(179, 0, 0)
#define LIGHTGREEN	GetColor(0, 255, 0)
#define LIGHTRED	GetColor(255, 0, 0)


#define WIDTHRANGE		16
#define HEIGHTRANGE		9

class UI
{
public:
	static unsigned UseColor(string color);
	static float ScreenWidth(float targetX);
	static float ScreenHeight(float targetY);

	static int FrontSize(float x1, float y1, float x2, float y2, const TCHAR* inputChar);

	static void LeftString(float x, float y1, float y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle);
	static void MiddleString(float x1, float y1, float x2, float y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor);
	static void RightString(float x, float y1, float y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle);


	static int FrontSize(int x1, int y1, int x2, int y2, const TCHAR* inputChar);

	static void LeftString(int x, int y1, int y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle);
	static void MiddleString(int x1, int y1, int x2, int y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor);
	static void RightString(int x, int y1, int y2, int bestFontSize, const TCHAR* inputChar, unsigned useColor, bool isHightMiddle);

};
extern UI ui;
