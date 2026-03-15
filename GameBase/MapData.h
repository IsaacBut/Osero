#pragma once
#include <map>
#include <vector>
#include <utility> 

class MapData {
public:
    enum AreaType { None, Player01Area, Player02Area, Error };

    static const AreaType GetMap(int targetX, int targetY);

    static int SetArea(int targetX, int targetY, AreaType target);

};