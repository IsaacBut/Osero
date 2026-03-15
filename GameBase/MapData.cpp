#include "MapData.h"

using namespace std;
using AreaType = MapData::AreaType;

// マップデータを保?する静的な連想配列
// Static map that stores area data with (x, y) as key
static map<pair<int, int>, MapData::AreaType> mapData;

const AreaType MapData::GetMap(int targetX, int targetY)
{
    // 指定した座標のエ?アタイプを取得
    // Get the area type at the given coordinates
    return mapData[{targetX, targetY}];
}

int MapData::SetArea(int targetX, int targetY, AreaType target)
{
    // 指定した座標のエ?アタイプを設定
    // Set the area type at the given coordinates
    mapData[{ targetX, targetY }] = target;

    // 設定が成功したか確認（値が一致しているかどうか）
    // Verify if the value was set successfully (check if it matches)
    if (mapData[{ targetX, targetY }] == target) return 1;

    // 設定が失敗した場?は0を返す
    // Return 0 if setting failed
    return 0;
}


