#pragma once
#include "DxLib.h"
#include "MapData.h"

#include <string>
#include <vector>
using namespace std;

vector<pair<int, int>>* Player01CanPut();
vector<pair<int, int>>* Player02CanPut();


class Player01
{
public:
	static int Player01Act();
	static void Player01Init();
private:
	static void FindCanPut();
};
extern Player01 player01;

class Player02
{
public:
	static int Player02Act();
	static void Player02Init();

private:
	static void FindCanPut();
};
extern Player02 player02;


class AI
{
public:

	enum AILevel { Random, Easy, Normal, Hard };
	static int AIAct();
	static void AIInit(AILevel target);

	static pair<int, int>* AIPut();
private:

	static void SetAILevel(AILevel target);
	static AILevel GetAILevel();

	static int AIJudgement();

	static int RandomJudge();
	static int EasyJudge();
	static int NormalJudge();
	static int HardJudge();

	static void FindCanPut();
	static int CountFlippableChess(pair<int, int> prePut, const vector<pair<int, int>>& enemyArea, const vector<pair<int, int>>& targetArea);
	static int CountValueChess(pair<int, int> prePut, const vector<pair<int, int>>& enemyArea, const vector<pair<int, int>>& targetArea);

	static int PutChess(pair<int, int> turnList);
	static bool haveSureChess(vector<pair<int, int>>& putList);
	static bool haveSideChess(vector<pair<int, int>>& putList);


};
extern AI ai;


