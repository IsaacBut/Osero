
#pragma once

//-----------------------------------------
// フォントサイズ（デバッグ時と通常時） / Font sizes (Debug and Normal)
//-----------------------------------------
#if DEBUG
#define GAMETEXTSIZE     20
#define GAMETESTTEXTSIZE 15
#define GAMESTARTSIZE    70
#endif

class InGame
{
public:
	static enum Player { FirstPlayer, SecondPlayer };
	static Player GetNowPlayer();

	static bool isGameStart;

	static int InGameInit(void);
	static int InGameDSP(void);
	static int InGameEnd(void);
private:
	static void UIseting();
	static void PlayerInformation();
};
extern InGame inGame;

