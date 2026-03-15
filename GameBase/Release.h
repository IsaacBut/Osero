#pragma once
#include "GameBase.h"
#include <tchar.h>


class Release 
{
public:

	static int ReleaseInit();
	static int ReleaseDsp();

	static int ReleaseEnd();

private:

	static void BlackArea();
	static void WhiteArea();
	static void GameRoundInfo();
	static void BlackChessInfo();
	static void WhiteChessInfo();

	static void InformationBox();

	static void Winner(TCHAR* outBuffer, size_t bufferSize);
	static void WinnerInform(TCHAR* outBuffer, size_t bufferSize);

	static void OptionBox();
};
extern Release release;