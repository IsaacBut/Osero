#pragma once
#include "Character.h"

class GameTitle
{
public:
	static bool IsMulti();
	static bool WinByScore();
	static AI::AILevel GetSelectedLevel();
	static int GameTitleInit(void);
	static int GameTitleDsp(void);
	static int GameTitleEnd(void);


private:

	static void Title();
	static void SingleSelectBox();
	static void MultiSelectBox();
	static void ChooseWinBy();

	static void AIlevel();


};
extern GameTitle gameTitle;