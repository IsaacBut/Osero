#include "Release.h"
#include "GameTitle.h"

#include "Score.h"
#include "Function.h"
#include "GameBase.h"

bool releaseOff = false;
bool isReturn = false;
bool optionOn = false;

Release release;

const int width = SCRN_WIDTH;
const int height = SCRN_HEIGHT;
const int widthRange = 16;
const int heightRange = 9;

int winnerChess = -1;
int chessNameSize = -1;
int chessScoreSize = -1;
int chessAmountSize = -1;
int rSize = -1;

const int backToTitleBox[] = { (int)ui.ScreenWidth(5),(int)ui.ScreenHeight(7),(int)ui.ScreenWidth(11),(int)ui.ScreenHeight(8) };
const int quitGmeBox[] = { (int)ui.ScreenWidth(8),(int)ui.ScreenHeight(8),(int)ui.ScreenWidth(11),(int)ui.ScreenHeight(9) };
const int returnBox[] = { (int)ui.ScreenWidth(5),(int)ui.ScreenHeight(8),(int)ui.ScreenWidth(8),(int)ui.ScreenHeight(9) };


/// <summary>
/// ??ース画面の?期化??を行います。
/// Initializes the release (result/end) screen elements.
/// </summary>
/// <remarks>
/// 画面の描画先を設定し、スコアやマウスを?期化し、UIフォ?トサイズを?定します。
/// Sets the drawing screen, initializes score and mouse settings, and calculates UI font sizes.
/// </remarks>
/// <returns>
/// ?期化成功?は 0、フォ?トサイズ取得失敗?は 1 を返します。
/// Returns 0 on success, 1 if font size initialization fails.
/// </returns>
int Release::ReleaseInit()
{
	SetDrawScreen(DX_SCREEN_BACK);
	score.ScoreWriteIn();
	function.MouseInit();
	releaseOff = false;
	isReturn = false;
	optionOn = false;

#if DEBUG
	chessNameSize = ui.FrontSize(ui.ScreenWidth(1), ui.ScreenHeight(0), ui.ScreenWidth(5), ui.ScreenHeight(0.5f), "XXXXX");
	chessScoreSize = ui.FrontSize(ui.ScreenWidth(1), ui.ScreenHeight(1.5f), ui.ScreenWidth(3), ui.ScreenHeight(2.0f), "0000");
	chessAmountSize = ui.FrontSize(ui.ScreenWidth(1), ui.ScreenHeight(1.5f), ui.ScreenWidth(3), ui.ScreenHeight(2.0f), "0000");
	rSize = ui.FrontSize(ui.ScreenWidth(0), ui.ScreenHeight(0), ui.ScreenWidth(1), ui.ScreenHeight(1), "R");
	winnerChess = ui.FrontSize(ui.ScreenWidth(0), ui.ScreenHeight(0), ui.ScreenWidth(5), ui.ScreenHeight(2), "Winner : Black Chess");
#else
	chessNameSize = ui.FrontSize(ui.ScreenWidth(1), ui.ScreenHeight(0), ui.ScreenWidth(5), ui.ScreenHeight(0.5f), L"XXXXX");
	chessScoreSize = ui.FrontSize(ui.ScreenWidth(1), ui.ScreenHeight(1.5f), ui.ScreenWidth(3), ui.ScreenHeight(2.0f), L"0000");
	chessAmountSize = ui.FrontSize(ui.ScreenWidth(1), ui.ScreenHeight(1.5f), ui.ScreenWidth(3), ui.ScreenHeight(2.0f), L"0000");
	rSize = ui.FrontSize(ui.ScreenWidth(0), ui.ScreenHeight(0), ui.ScreenWidth(1), ui.ScreenHeight(1), L"R");
	winnerChess = ui.FrontSize(ui.ScreenWidth(0), ui.ScreenHeight(0), ui.ScreenWidth(5), ui.ScreenHeight(2), L"Winner : Black Chess");

#endif

	if (chessNameSize == -1 || chessScoreSize == -1 || chessAmountSize == -1 || rSize == -1) { return 1; }

	return 0;
}

/// <summary>
/// ??ース画面の描画??を行います。
/// Renders the elements of the release screen.
/// </summary>
/// <remarks>
/// ?者情報、スコア、ボタ?などを画面に描画します。
/// Draws winner info, scores, buttons, and other UI elements.
/// </remarks>
/// <returns>
/// ??ース終了?は 0 を返します。
/// Returns 0 on finish release.
/// </returns>
int Release::ReleaseDsp()
{
	ClearDrawScreen();

	DrawBox(0, 0, SCRN_WIDTH, SCRN_HEIGHT, GetColor(127, 81, 18), TRUE);
	InformationBox();

	function.UpdateMouse();

	BlackArea();
	WhiteArea();
	GameRoundInfo();
	BlackChessInfo();
	WhiteChessInfo();

	if (!optionOn)
	{
		WaitTimer(10);
		optionOn = true;
	}
	else
	{
		OptionBox();
	}

	ScreenFlip();

	if (releaseOff)return 0;

	return 1;
}

/// <summary>
/// ??ース（終了）画面の終了??を実行します。
/// Executes cleanup and final steps for the release (end) screen.
/// </summary>
/// <remarks>
/// 描画先をフ??トバッファに戻し、スコア管?を?のゲー?に進めます。
/// その後、?ーザーが?ター?を選んだかどうかで戻り値を分けます。
/// Sets the drawing target back to the front screen, prepares score for next game,
/// and returns based on whether the user chose to return to the title.
/// </remarks>
/// <returns>
/// タイト?に戻る場?は 1、それ以外は 0 を返します。
/// Returns 1 if returning to title screen, otherwise 0.
/// </returns>
int Release::ReleaseEnd() 
{ 

	SetDrawScreen(DX_SCREEN_FRONT);

	score.NextGame();

	if(isReturn)return 1;

	return 0; 
}

// -----------------------------
// ??ース描画
// -----------------------------


void Release::GameRoundInfo()
{
	TCHAR round[5];
	_tcscpy_s(round, _T("R"));

	ui.MiddleString(ui.ScreenWidth(0), ui.ScreenHeight(0), ui.ScreenWidth(1), ui.ScreenHeight(1), rSize, round, ui.UseColor("Green"));
	ui.MiddleString(ui.ScreenWidth(11), ui.ScreenHeight(0), ui.ScreenWidth(12), ui.ScreenHeight(1), rSize, round, ui.UseColor("Green"));

	TCHAR gameRound[5];
	TCHAR gameWin[5];

	float startingHeight = 1;

	for (int i = 1; i < score.GetGameRoundInfo()->size(); i++)
	{
		_stprintf_s(gameRound, _T("%d"), (*score.GetGameRoundInfo())[i].first); 
		_tcscpy_s(gameWin, sizeof(gameWin) / sizeof(TCHAR), (*score.GetGameRoundInfo())[i].second ? _T("S") : _T("A"));
		ui.MiddleString(ui.ScreenWidth(0), ui.ScreenHeight(startingHeight), ui.ScreenWidth(0.5), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, gameRound, ui.UseColor("Green"));
		ui.MiddleString(ui.ScreenWidth(0.5), ui.ScreenHeight(startingHeight), ui.ScreenWidth(1), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, gameWin, ui.UseColor("Green"));

		ui.MiddleString(ui.ScreenWidth(11), ui.ScreenHeight(startingHeight), ui.ScreenWidth(11.5), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, gameRound, ui.UseColor("Green"));
		ui.MiddleString(ui.ScreenWidth(11.5), ui.ScreenHeight(startingHeight), ui.ScreenWidth(12), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, gameWin, ui.UseColor("Green"));

		startingHeight += 0.5f;
	}



}

void Release::BlackArea()
{
	//Rank Area
	DrawBox((int)ui.ScreenWidth(0), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(5), (int)ui.ScreenHeight(9), ui.UseColor("Black"), TRUE);//Left

	DrawLine((int)ui.ScreenWidth(0.5f), (int)ui.ScreenHeight(1), (int)ui.ScreenWidth(0.5f), (int)ui.ScreenHeight(9), ui.UseColor("White"));
	DrawLine((int)ui.ScreenWidth(1), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(1), (int)ui.ScreenHeight(9), ui.UseColor("White"));


	DrawLine((int)ui.ScreenWidth(5), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(5), (int)ui.ScreenHeight(9), ui.UseColor("White"));

	DrawLine(ui.ScreenWidth(0), (int)ui.ScreenHeight(1), (int)ui.ScreenWidth(5), (int)ui.ScreenHeight(1), (int)ui.UseColor("White"));

	DrawLine((int)ui.ScreenWidth(1), (int)ui.ScreenHeight(0.5f), (int)ui.ScreenWidth(5), (int)ui.ScreenHeight(0.5f), (int)ui.UseColor("White"));
	DrawLine((int)ui.ScreenWidth(3), (int)ui.ScreenHeight(0.5f), (int)ui.ScreenWidth(3), (int)ui.ScreenHeight(9), (int)ui.UseColor("White"));

	for (float i = 1;i < heightRange;i += 0.5f)
	{
		DrawLine((int)ui.ScreenWidth(0), (int)ui.ScreenHeight(i), (int)ui.ScreenWidth(5), (int)ui.ScreenHeight(i), ui.UseColor("White"));
	}


}
void Release::BlackChessInfo()
{
	TCHAR blackChessAmount[10];
	TCHAR blackChessScore[10];
	float startingHeight = 1;

#if DEBUG

	ui.MiddleString(ui.ScreenWidth(1), ui.ScreenHeight(0), ui.ScreenWidth(5), ui.ScreenHeight(0.5f), chessNameSize, "Black", ui.UseColor("Green"));
	ui.MiddleString(ui.ScreenWidth(1), ui.ScreenHeight(0.5f), ui.ScreenWidth(3), ui.ScreenHeight(1), chessScoreSize, "Amount", ui.UseColor("Green"));
	ui.MiddleString(ui.ScreenWidth(3), ui.ScreenHeight(0.5f), ui.ScreenWidth(5), ui.ScreenHeight(1), chessScoreSize, "Score", ui.UseColor("Green"));

#else 

	ui.MiddleString(ui.ScreenWidth(1), ui.ScreenHeight(0), ui.ScreenWidth(5), ui.ScreenHeight(0.5f), chessNameSize, L"Black", ui.UseColor("Green"));

	ui.MiddleString(ui.ScreenWidth(1), ui.ScreenHeight(0.5f), ui.ScreenWidth(3), ui.ScreenHeight(1), chessScoreSize, L"Amount", ui.UseColor("Green"));
	ui.MiddleString(ui.ScreenWidth(3), ui.ScreenHeight(0.5f), ui.ScreenWidth(5), ui.ScreenHeight(1), chessScoreSize, L"Score", ui.UseColor("Green"));

#endif


	for (int i = 1; i < score.GetGameRoundInfo()->size(); i++)
	{
		_stprintf_s(blackChessAmount, _T("%d"), (*score.GetBlackChessData())[i].first);
		_stprintf_s(blackChessScore, _T("%d"), (*score.GetBlackChessData())[i].second);

		ui.MiddleString(ui.ScreenWidth(1), ui.ScreenHeight(startingHeight), ui.ScreenWidth(3), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, blackChessAmount, ui.UseColor("Green"));
		ui.MiddleString(ui.ScreenWidth(3), ui.ScreenHeight(startingHeight), ui.ScreenWidth(5), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, blackChessScore, ui.UseColor("Green"));

		startingHeight += 0.5f;
	}



}

void Release::WhiteArea()
{
	//Rank Area
	DrawBox((int)ui.ScreenWidth(11), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(16), (int)ui.ScreenHeight(9), ui.UseColor("White"), TRUE);//Right

	DrawLine((int)ui.ScreenWidth(11.5f), (int)ui.ScreenHeight(1), (int)ui.ScreenWidth(11.5f), (int)ui.ScreenHeight(9), ui.UseColor("Black"));

	DrawLine((int)ui.ScreenWidth(12), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(12), (int)ui.ScreenHeight(9), ui.UseColor("Black"));

	DrawLine((int)ui.ScreenWidth(11), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(11), (int)ui.ScreenHeight(9), ui.UseColor("Black"));

	DrawLine((int)ui.ScreenWidth(11), (int)ui.ScreenHeight(1), (int)ui.ScreenWidth(16), (int)ui.ScreenHeight(1), ui.UseColor("Black"));
	DrawLine((int)ui.ScreenWidth(12), (int)ui.ScreenHeight(0.5f), (int)ui.ScreenWidth(16), (int)ui.ScreenHeight(0.5f), ui.UseColor("Black"));

	DrawLine((int)ui.ScreenWidth(14), (int)ui.ScreenHeight(0.5f), (int)ui.ScreenWidth(14), (int)ui.ScreenHeight(9), ui.UseColor("Black"));

	for (float i = 1;i < heightRange;i += 0.5f)
	{
		DrawLine((int)ui.ScreenWidth(11), (int)ui.ScreenHeight(i), (int)ui.ScreenWidth(16), (int)ui.ScreenHeight(i), ui.UseColor("Black"));
	}


}
void Release::WhiteChessInfo()
{
	TCHAR whiteChessAmount[10];
	TCHAR whiteChessScore[10];
	float startingHeight = 1;

#if DEBUG

	ui.MiddleString(ui.ScreenWidth(12), ui.ScreenHeight(0), ui.ScreenWidth(16), ui.ScreenHeight(0.5f), chessNameSize, "White", ui.UseColor("Green"));

	ui.MiddleString(ui.ScreenWidth(12), ui.ScreenHeight(0.5f), ui.ScreenWidth(14), ui.ScreenHeight(1), chessScoreSize, "Amount", ui.UseColor("Green"));
	ui.MiddleString(ui.ScreenWidth(14), ui.ScreenHeight(0.5f), ui.ScreenWidth(16), ui.ScreenHeight(1), chessScoreSize, "Score", ui.UseColor("Green"));
#else 

	ui.MiddleString(ui.ScreenWidth(12), ui.ScreenHeight(0), ui.ScreenWidth(16), ui.ScreenHeight(0.5f), chessNameSize, L"White", ui.UseColor("Green"));

	ui.MiddleString(ui.ScreenWidth(12), ui.ScreenHeight(0.5f), ui.ScreenWidth(14), ui.ScreenHeight(1), chessScoreSize, L"Amount", ui.UseColor("Green"));
	ui.MiddleString(ui.ScreenWidth(14), ui.ScreenHeight(0.5f), ui.ScreenWidth(16), ui.ScreenHeight(1), chessScoreSize, L"Score", ui.UseColor("Green"));

#endif


	for (int i = 1; i < score.GetGameRoundInfo()->size(); i++)
	{
		_stprintf_s(whiteChessAmount, _T("%d"), (*score.GetWhiteChessData())[i].first);
		_stprintf_s(whiteChessScore, _T("%d"), (*score.GetWhiteChessData())[i].second);


		ui.MiddleString(ui.ScreenWidth(12), ui.ScreenHeight(startingHeight), ui.ScreenWidth(14), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, whiteChessAmount, ui.UseColor("Green"));
		ui.MiddleString(ui.ScreenWidth(14), ui.ScreenHeight(startingHeight), ui.ScreenWidth(16), ui.ScreenHeight(startingHeight + 0.5f), chessScoreSize, whiteChessScore, ui.UseColor("Green"));

		startingHeight += 0.5f;
	}

}

void Release::Winner(TCHAR* outBuffer, size_t bufferSize)
{
	if (outBuffer == nullptr) return;

	int nowRound = score.GetGameRoundInfo()->size() - 1;

	if (gameTitle.WinByScore())
	{
		if ((*score.GetBlackChessData())[nowRound].second > (*score.GetWhiteChessData())[nowRound].second)
		{
			_tcscpy_s(outBuffer, bufferSize, _T("Winner : Black Chess"));
		}
		else if ((*score.GetBlackChessData())[nowRound].second < (*score.GetWhiteChessData())[nowRound].second)
		{
			_tcscpy_s(outBuffer, bufferSize, _T("Winner : White Chess"));
		}
		else if((*score.GetBlackChessData())[nowRound].second == (*score.GetWhiteChessData())[nowRound].second)
		{
			_tcscpy_s(outBuffer, bufferSize, _T("Draw Game"));

		}

	}
	else
	{
		if ((*score.GetBlackChessData())[nowRound].first > (*score.GetWhiteChessData())[nowRound].first)
		{
			_tcscpy_s(outBuffer, bufferSize, _T("Winner : Black Chess"));
		}
		else if ((*score.GetBlackChessData())[nowRound].first < (*score.GetWhiteChessData())[nowRound].first)
		{
			_tcscpy_s(outBuffer, bufferSize, _T("Winner : White Chess"));
		}
		else if ((*score.GetBlackChessData())[nowRound].first == (*score.GetWhiteChessData())[nowRound].first)
		{
			_tcscpy_s(outBuffer, bufferSize, _T("Draw Game"));

		}
	}
}

void Release::WinnerInform(TCHAR* outBuffer, size_t bufferSize)
{
	if (outBuffer == nullptr) return;

	int nowRound = score.GetGameRoundInfo()->size() - 1;

	if (gameTitle.WinByScore())
	{
		if ((*score.GetBlackChessData())[nowRound].second > (*score.GetWhiteChessData())[nowRound].second)
		{
			_stprintf_s(outBuffer, bufferSize, _T("Win Condition : %d"), (*score.GetBlackChessData())[nowRound].second);
		}
		else if ((*score.GetBlackChessData())[nowRound].second < (*score.GetWhiteChessData())[nowRound].second)
		{
			_stprintf_s(outBuffer, bufferSize, _T("Win Condition : %d"), (*score.GetWhiteChessData())[nowRound].second);
		}
		else if ((*score.GetBlackChessData())[nowRound].second == (*score.GetWhiteChessData())[nowRound].second)
		{
			_stprintf_s(outBuffer, bufferSize, _T("Draw Condition : %d"), (*score.GetWhiteChessData())[nowRound].second);

		}

	}
	else
	{
		if ((*score.GetBlackChessData())[nowRound].first > (*score.GetWhiteChessData())[nowRound].first)
		{
			_stprintf_s(outBuffer, bufferSize, _T("Win Condition : %d"), (*score.GetBlackChessData())[nowRound].first);
		}
		else if ((*score.GetBlackChessData())[nowRound].first < (*score.GetWhiteChessData())[nowRound].first)
		{
			_stprintf_s(outBuffer, bufferSize, _T("Win Condition : %d"), (*score.GetWhiteChessData())[nowRound].first);
		}
		else if ((*score.GetBlackChessData())[nowRound].first == (*score.GetWhiteChessData())[nowRound].first)
		{
			_stprintf_s(outBuffer, bufferSize, _T("Draw Condition : %d"), (*score.GetWhiteChessData())[nowRound].first);

		}
	}
}

void Release::InformationBox()
{
	TCHAR round[100];
	TCHAR winBy[100];

	TCHAR winner[100];
	TCHAR winnerInform[100];

	Winner(winner, _countof(winner));
	WinnerInform(winnerInform, _countof(winnerInform));

	int nowRound = score.GetGameRoundInfo()->size() - 1;
	bool isScore = gameTitle.WinByScore;
	_stprintf_s(round, _countof(round), _T(" GameRound: %d"), nowRound);

	if (gameTitle.WinByScore())
	{
		_tcscpy_s(winBy, _countof(winBy), _T(" Win By : Score"));
	}
	else 
	{
		_tcscpy_s(winBy, _countof(winBy), _T(" Win By : Amount"));

	}

	DrawBox((int)ui.ScreenWidth(5), (int)ui.ScreenHeight(0), (int)ui.ScreenWidth(11), (int)ui.ScreenHeight(1), ui.UseColor("Green"), TRUE);
	ui.LeftString(ui.ScreenWidth(5), ui.ScreenHeight(0), ui.ScreenHeight(0.5), chessNameSize, round, ui.UseColor("White"), true);
	ui.LeftString(ui.ScreenWidth(5), ui.ScreenHeight(0.5), ui.ScreenHeight(1), chessNameSize, winBy, ui.UseColor("White"), true);

	ui.LeftString(ui.ScreenWidth(5), ui.ScreenHeight(1), ui.ScreenHeight(2), winnerChess, winner, ui.UseColor("White"), true);
	ui.LeftString(ui.ScreenWidth(5), ui.ScreenHeight(1.5), ui.ScreenHeight(2.5), winnerChess, winnerInform, ui.UseColor("White"), true);



}

void Release::OptionBox()
{
	const TCHAR* backToTitle = _T("Back To Title");
	const TCHAR* returnTitle = _T("Return");
	const TCHAR* quitGame = _T("Quit");

	if (!function.IsMouseInArea(backToTitleBox[0], backToTitleBox[1], backToTitleBox[2], backToTitleBox[3]))
	{
		DrawBox(backToTitleBox[0], backToTitleBox[1], backToTitleBox[2], backToTitleBox[3], ui.UseColor("Gray"), TRUE);
	}
	else
	{
		DrawBox(backToTitleBox[0], backToTitleBox[1], backToTitleBox[2], backToTitleBox[3], ui.UseColor("White"), TRUE);
	}
	if (function.MouseClick(backToTitleBox[0], backToTitleBox[1], backToTitleBox[2], backToTitleBox[3]) == 1)
	{
		releaseOff = true;
	}
	ui.MiddleString(backToTitleBox[0], backToTitleBox[1], backToTitleBox[2], backToTitleBox[3], winnerChess, backToTitle, ui.UseColor("Black"));

	if (!function.IsMouseInArea(returnBox[0], returnBox[1], returnBox[2], returnBox[3]))
	{
		DrawBox(returnBox[0], returnBox[1], returnBox[2], returnBox[3], ui.UseColor("Green"), TRUE);
	}
	else
	{
		DrawBox(returnBox[0], returnBox[1], returnBox[2], returnBox[3], ui.UseColor("LGreen"), TRUE);
	}

	if (function.MouseClick(returnBox[0], returnBox[1], returnBox[2], returnBox[3]) == 1)
	{
		isReturn = true;
		releaseOff = true;
	}
	ui.MiddleString(returnBox[0], returnBox[1], returnBox[2], returnBox[3], winnerChess, returnTitle, ui.UseColor("Black"));

	if (!function.IsMouseInArea(quitGmeBox[0], quitGmeBox[1], quitGmeBox[2], quitGmeBox[3]))
	{
		DrawBox(quitGmeBox[0], quitGmeBox[1], quitGmeBox[2], quitGmeBox[3], ui.UseColor("Red"), TRUE);
	}
	else
	{
		DrawBox(quitGmeBox[0], quitGmeBox[1], quitGmeBox[2], quitGmeBox[3], ui.UseColor("LRed"), TRUE);
	}
	if (function.MouseClick(quitGmeBox[0], quitGmeBox[1], quitGmeBox[2], quitGmeBox[3]) == 1)
	{
		score.OpenScoreTxt();

		WaitTimer(1);
		exit(0);
	}
	ui.MiddleString(quitGmeBox[0], quitGmeBox[1], quitGmeBox[2], quitGmeBox[3], winnerChess, quitGame, ui.UseColor("Black"));

}
