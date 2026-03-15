#pragma once
#include	"InGame.h"
#include	<string>
#include "MapManager.h"


#define SCOREPLUS		10
#define	SCOREREDUCE		4

using namespace std;

class Score 
{
public:

	static int PlayerScore(AreaType targetType);
	static void ScoreUpdate(AreaType targetType);

	static void ScoreInit();
	static void ScoreWriteIn();
	static void NextGame();


	vector<pair<int, bool>>* GetGameRoundInfo();
	vector<pair<int, int>>* GetBlackChessData();
	vector<pair<int, int>>* GetWhiteChessData();

	static void OpenScoreTxt();

};
extern Score score;