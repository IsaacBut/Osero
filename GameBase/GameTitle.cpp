#include "assert.h"
#include "DxLib.h"

#include <windows.h> 

#include "GameBase.h"
#include "InputDevice.h"
#include "mode.h"
#include "Sfx.h"

#include "Character.h"
#include "GameTitle.h"
#include "Function.h"

GameTitle gameTitle;

bool ismulti = false;
bool isScore = false;

// -----------------------------
// UI サイズ・座標 定義
// -----------------------------

// フォントサイズ (初期値は未設定: -1)
// Font sizes (initialized as -1 = unset)
float selectButtonFontSize = -1;
float gameTitleFontSize = -1;
float aiSelectButtonFontSize[4];


// タイトル表示位置
// Title text position
const float titlePos[] = { ui.ScreenWidth(4), ui.ScreenHeight(2), ui.ScreenWidth(12), ui.ScreenHeight(5) };

// ゲームモード選択ボタン
// Game mode buttons
const float singlePlayerButtonPos[] = { ui.ScreenWidth(2) , ui.ScreenHeight(6), ui.ScreenWidth(6),ui.ScreenHeight(7) };
const float multiPlayerButtonPos[] = { ui.ScreenWidth(10) , ui.ScreenHeight(6), ui.ScreenWidth(14),ui.ScreenHeight(7) };

// フラグ管理
// Flags
bool isPrease = false;  // ボタン押下中 / Button is pressed
bool isOpenAISelect = false;  // AI選択画面を開いているか / AI selection menu open

// AI選択画面 外枠 & 内側
// AI select menu background and inner box
const int AISelectBackGrount[] = { (int)ui.ScreenWidth(2), (int)ui.ScreenHeight(1), (int)ui.ScreenWidth(14), (int)ui.ScreenHeight(8) };
const int AISelectInside[] = { (int)ui.ScreenWidth(2.1f), (int)ui.ScreenHeight(1.1f), (int)ui.ScreenWidth(13.9f), (int)ui.ScreenHeight(7.9f) };

// 戻るボタン
// Return button
const int returnButtonArea[] = { (int)ui.ScreenWidth(14), (int)ui.ScreenHeight(1) ,(int)ui.ScreenWidth(15) ,(int)ui.ScreenHeight(2) };

// AIレベル選択エリア
// AI level selection areas
const int randomAIArea[] = { (int)ui.ScreenWidth(2.5), (int)ui.ScreenHeight(1.5) ,(int)ui.ScreenWidth(7) ,(int)ui.ScreenHeight(4) };
const int easyAIArea[] = { (int)ui.ScreenWidth(9),(int)ui.ScreenHeight(1.5) ,(int)ui.ScreenWidth(13.5f) ,(int)ui.ScreenHeight(4) };
const int normalAIArea[] = { (int)ui.ScreenWidth(2.5), (int)ui.ScreenHeight(5) ,(int)ui.ScreenWidth(7) ,(int)ui.ScreenHeight(7.5f) };
const int hardAIArea[] = { (int)ui.ScreenWidth(9), (int)ui.ScreenHeight(5) ,(int)ui.ScreenWidth(13.5f) ,(int)ui.ScreenHeight(7.5f) };

// スコア表示枠
// Score & Amount display boxes
const int scoreBox[] = { (int)ui.ScreenWidth(6), (int)ui.ScreenHeight(7.5f), (int)ui.ScreenWidth(9), (int)ui.ScreenHeight(8.5) };
const int amountBox[] = { (int)ui.ScreenWidth(9), (int)ui.ScreenHeight(7.5f), (int)ui.ScreenWidth(12), (int)ui.ScreenHeight(8.5) };

// -----------------------------
// AI レベル選択管理
// -----------------------------

AI::AILevel targetLevel;

// 現在選ばれているAIレベルを返す
// Get the currently selected AI level
AI::AILevel GameTitle::GetSelectedLevel() { return targetLevel; }

// Return multi-player mode state
// マルチプレイモードかどうかを返す
bool GameTitle::IsMulti() { return ismulti; }
bool GameTitle::WinByScore() { return isScore; }



// Initialize game title state
// タイトル初期化
int GameTitle::GameTitleInit()
{
	sfx.SfxInit();
	function.MouseInit();

#if DEBUG
	selectButtonFontSize = ui.FrontSize(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3], "Single Player");
	gameTitleFontSize = ui.FrontSize(titlePos[0], titlePos[1], titlePos[2], titlePos[3], "OSERO Game");

	aiSelectButtonFontSize[0]= ui.FrontSize(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3], "Random AI");
	aiSelectButtonFontSize[1] = ui.FrontSize(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3], "Easy AI");
	aiSelectButtonFontSize[2] = ui.FrontSize(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3], "Normal AI");
	aiSelectButtonFontSize[3] = ui.FrontSize(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3], "Hard AI");

#else
	selectButtonFontSize = ui.FrontSize(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3], L"Single Player");
	gameTitleFontSize = ui.FrontSize(ui.ScreenWidth(4), ui.ScreenHeight(1), ui.ScreenWidth(12), ui.ScreenHeight(3), L"OSERO Game");

	aiSelectButtonFontSize[0] = ui.FrontSize(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3], L"Random AI");
	aiSelectButtonFontSize[1] = ui.FrontSize(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3], L"Easy AI");
	aiSelectButtonFontSize[2] = ui.FrontSize(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3], L"Normal AI");
	aiSelectButtonFontSize[3] = ui.FrontSize(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3], L"Hard AI");

#endif

	SetDrawScreen(DX_SCREEN_BACK);
	isOpenAISelect = false;
	isPrease = false;
	return 0;
}
/*		
* 	ClearDrawScreen();
*	ScreenFlip();
*/
// Display title screen
// タイトル画面の描画
int GameTitle::GameTitleDsp(void)
{
	ClearDrawScreen();
	function.UpdateMouse();

	if (isPrease)
	{
		return 0;
	}

	DrawBox(0, 0, SCRN_WIDTH, SCRN_HEIGHT, GetColor(127, 81, 18), TRUE);

	if (!isOpenAISelect) 
	{
		Title();
		SingleSelectBox();
		MultiSelectBox();
		ChooseWinBy();
	}
	else AIlevel();
	ScreenFlip();

	return 1;
}

// End title state
// タイトル終了処理
int GameTitle::GameTitleEnd(void)
{
	SetDrawScreen(DX_SCREEN_FRONT);
	return 0;

}

// -----------------------------
// タイトル描画
// -----------------------------

void GameTitle::Title()
{

#if DEBUG
	//ui.MiddleString(ui.ScreenWidth(3.56), ui.ScreenHeight(1.78), ui.ScreenWidth(13.5), ui.ScreenHeight(5.625), abc, "OSERO Game", ui.UseColor("Black"));
	ui.MiddleString(titlePos[0], titlePos[1], titlePos[2], titlePos[3], gameTitleFontSize, "OSERO Game", ui.UseColor("White"));
#else 
	ui.MiddleString(titlePos[0], titlePos[1], titlePos[2], titlePos[3], gameTitleFontSize, L"OSERO Game", ui.UseColor("White"));
#endif

}

void GameTitle::SingleSelectBox()
{

	const TCHAR* singlePlayerButton = _T("Single Player");

	//int resSingle = function.MouseSearch(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3]);
	if (!function.IsMouseInArea(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3]))
	{
		DrawBox(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3], ui.UseColor("Gray"), TRUE);
		ui.MiddleString(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3], selectButtonFontSize, singlePlayerButton, ui.UseColor("White"));

	}
	else
	{

		DrawBox(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3], ui.UseColor("White"), TRUE);
		ui.MiddleString(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3], selectButtonFontSize, singlePlayerButton, ui.UseColor("Black"));

	}
	if (function.MouseClick(singlePlayerButtonPos[0], singlePlayerButtonPos[1], singlePlayerButtonPos[2], singlePlayerButtonPos[3]) == 1)
	{
		sfx.Play("Press");

		isOpenAISelect = true;
		return;
	}
}

void GameTitle::MultiSelectBox()
{
	const TCHAR* multiPlayerButton = _T("Multi Player");

	//int resMulti = function.MouseSearch(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3]);
	if (!function.IsMouseInArea(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3]))
	{
		DrawBox(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3], ui.UseColor("Gray"), TRUE);
		ui.MiddleString(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3], selectButtonFontSize, multiPlayerButton, ui.UseColor("White"));

	}
	else
	{
		DrawBox(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3], ui.UseColor("White"), TRUE);
		ui.MiddleString(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3], selectButtonFontSize, multiPlayerButton, ui.UseColor("Black"));

	}

	if (function.MouseClick(multiPlayerButtonPos[0], multiPlayerButtonPos[1], multiPlayerButtonPos[2], multiPlayerButtonPos[3]) == 1)
	{
		ismulti = true;
		isPrease = true;
		return;
	}

}

void GameTitle::ChooseWinBy()
{
	const TCHAR* winBy = _T("Win By");
	const TCHAR* score = _T("Score");
	const TCHAR* amount = _T("Amount");

	//DrawBox(ui.ScreenWidth(2), ui.ScreenHeight(7.5f), ui.ScreenWidth(14), ui.ScreenHeight(8.5), ui.UseColor("Gray"), TRUE);
	ui.RightString(ui.ScreenWidth(6), ui.ScreenHeight(7.5),ui.ScreenHeight(8.5), selectButtonFontSize, winBy, ui.UseColor("White"), true);
	// 设置选中的胜利条件
	
	if (isScore) 
	{
		DrawBox(scoreBox[0], scoreBox[1], scoreBox[2], scoreBox[3], ui.UseColor("White"), TRUE);
		ui.MiddleString(scoreBox[0], scoreBox[1], scoreBox[2], scoreBox[3], selectButtonFontSize, score, ui.UseColor("Black"));

		DrawBox(amountBox[0], amountBox[1], amountBox[2], amountBox[3], ui.UseColor("Gray"), TRUE);
		ui.MiddleString(amountBox[0], amountBox[1], amountBox[2], amountBox[3], selectButtonFontSize, amount, ui.UseColor("Black"));

		if (function.MouseClick(amountBox[0], amountBox[1], amountBox[2], amountBox[3]) == 1)isScore = false;

	}
	else
	{
		DrawBox(scoreBox[0], scoreBox[1], scoreBox[2], scoreBox[3], ui.UseColor("Gray"), TRUE);
		ui.MiddleString(scoreBox[0], scoreBox[1], scoreBox[2], scoreBox[3], selectButtonFontSize, score, ui.UseColor("Black"));

		DrawBox(amountBox[0], amountBox[1], amountBox[2], amountBox[3], ui.UseColor("White"), TRUE);
		ui.MiddleString(amountBox[0], amountBox[1], amountBox[2], amountBox[3], selectButtonFontSize, amount, ui.UseColor("Black"));

		if (function.MouseClick(scoreBox[0], scoreBox[1], scoreBox[2], scoreBox[3]) == 1)isScore = true;


	}

}

void GameTitle::AIlevel()
{
	DrawBox(AISelectBackGrount[0], AISelectBackGrount[1], AISelectBackGrount[2], AISelectBackGrount[3], ui.UseColor("White"), TRUE);
	DrawBox(AISelectInside[0], AISelectInside[1], AISelectInside[2], AISelectInside[3], ui.UseColor("Black"), TRUE);

	const TCHAR* returnB = _T("Resource/Return.png");
	int returnButton = LoadGraph(returnB);

	const TCHAR* randomButton = _T("Random AI");
	const TCHAR* easyButton = _T("Easy AI");
	const TCHAR* normalButton = _T("Normal AI");
	const TCHAR* hardButton = _T("Hard AI");


	int backgroundImage;
	backgroundImage = DrawBox(returnButtonArea[0], returnButtonArea[1], returnButtonArea[2], returnButtonArea[3], ui.UseColor("White"), TRUE);
	DrawExtendGraph(returnButtonArea[0], returnButtonArea[1], returnButtonArea[2], returnButtonArea[3], returnButton, true);

	if (function.MouseClick(returnButtonArea[0], returnButtonArea[1], returnButtonArea[2], returnButtonArea[3])==1)
	{
		isOpenAISelect = false;
	}


	if (!function.IsMouseInArea(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3]))
	{
		DrawBox(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3], ui.UseColor("Green"), TRUE);
	}
	else DrawBox(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3], ui.UseColor("White"), TRUE);
	ui.MiddleString(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3], aiSelectButtonFontSize[0], randomButton, ui.UseColor("Black"));
	if (function.MouseClick(randomAIArea[0], randomAIArea[1], randomAIArea[2], randomAIArea[3]) == 1)
	{
		targetLevel = AI::Random;
		ismulti = false;
		isPrease = true;
	}

	if (!function.IsMouseInArea(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3]))
	{
		DrawBox(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3], ui.UseColor("Green"), TRUE);
	}
	else DrawBox(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3], ui.UseColor("White"), TRUE);
	ui.MiddleString(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3], aiSelectButtonFontSize[1], easyButton, ui.UseColor("Black"));
	if (function.MouseClick(easyAIArea[0], easyAIArea[1], easyAIArea[2], easyAIArea[3]) == 1)
	{

		targetLevel = AI::Easy;
		ismulti = false;
		isPrease = true;
	}

	if (!function.IsMouseInArea(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3]))
	{
		DrawBox(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3], ui.UseColor("Green"), TRUE);
	}
	else DrawBox(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3], ui.UseColor("White"), TRUE);
	ui.MiddleString(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3], aiSelectButtonFontSize[2], normalButton, ui.UseColor("Black"));
	if (function.MouseClick(normalAIArea[0], normalAIArea[1], normalAIArea[2], normalAIArea[3]) == 1)
	{

		targetLevel = AI::Normal;
		ismulti = false;
		isPrease = true;
	}

	if (!function.IsMouseInArea(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3]))
	{
		DrawBox(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3], ui.UseColor("Green"), TRUE);
	}
	else DrawBox(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3], ui.UseColor("White"), TRUE);
	ui.MiddleString(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3], aiSelectButtonFontSize[3], hardButton, ui.UseColor("Black"));
	if (function.MouseClick(hardAIArea[0], hardAIArea[1], hardAIArea[2], hardAIArea[3]) == 1)
	{

		targetLevel = AI::Hard;
		ismulti = false;
		isPrease = true;
	}


}
