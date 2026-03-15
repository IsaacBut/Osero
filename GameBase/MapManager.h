#pragma once
#include "DxLib.h"
#include "MapData.h"
   
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

#define MAPHEIGHT 8
#define MAPWIDTH  8
#define MAPSTART  1

#define MAPHEIGHTEND (MAPHEIGHT+MAPSTART)
#define MAPWIDTHEND	(MAPHEIGHT+MAPSTART)



using AreaType = MapData::AreaType;

class MapManager
{
public:
	static bool IsInMap(int targetX, int targetY);
	static bool IsMapFull();

	static vector<pair<int, int>> TargetArea(AreaType targetType);

	static int AreaMark(int targetX, int targetY, AreaType tagetType);
	static AreaType GetTargetCell(int targetX, int targetY);
	static int CellPrint(int targetAreaX, int targetAreaY);
	static int GetCellVaalue(int targetX, int targetY);

	
	static void PrintMap();
	static void PreMark(vector<pair<int, int>> targetList);

	static int FindWidthIndex(float posX);
	static int FindHeightIndex(float posY);

	static int MapManagerInit();
	static int GetBlackChessValue();
	static int GetWhiteChessValue();


};
extern MapManager mapManager;
