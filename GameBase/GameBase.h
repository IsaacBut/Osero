/*
*
* GameBase.h
*
*	アプ?ケーシ??全体に影響を与えるような定義をここにまとめて?く
*	すべてのソースコードは、このヘッダを読み?むようにする
*
*/
#pragma once

#include "resource.h"

#define	DEBUG	_DEBUG	/* Release/Debugの設定で切り替わる Visual Studioの定義を取り?む */

/* 使っているPCのディスプ?イ?フ?ッシ??ートを?く 60Hzなら60と定義する */
#define	DISPLAY_REFRESH_RATE	60

/* 画面の大きさ(解?度)を定義する */
#if DEBUG
#define	SCRN_DIV	2	/* Debug Buildの?は画面サイズを半分にする */
/* DEBUG?のWindow ModeのWindow Size */
#define	SCRN_WINDOW_MODE	TRUE	// window screen mode
#else
#define	SCRN_DIV	1
/* Release?のFull ScreenのSize */
#define	SCRN_WINDOW_MODE	FALSE	// full screen mode
#endif // DEBUG
/* 画面の大きさ(解?度) の定義 */
#define	SCRN_WIDTH	(1920/SCRN_DIV)		// window width
#define	SCRN_HEIGHT	(1080/SCRN_DIV)		// window height
#define SCRN_DEPTH	(32)				// Color Depth


/* ?間の定義 */
#define FRAME_PER_SECOND	(60)	// １秒間の表示回?
#define	_1SECOND	(FRAME_PER_SECOND)
#define	_2SECOND	(_1SECOND+_1SECOND)
#define	_3SECOND	(_1SECOND+_2SECOND)
#define	_4SECOND	(_2SECOND+_2SECOND)
#define	_5SECOND	(_2SECOND+_3SECOND)


void IsGameClose();