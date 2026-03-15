/*
* キーボードやマウスの入力に対する関?を用意する
*
*
*
*
*
*/
#pragma once

int InputDevice_Init( );	//入力デバイス関?の?期化
int InputDevice_End( );	//入力デバイス関?の終了化
int InputDevice_Update( );	//入力デバイス関係のデータの更新


// マウス関係
int	 GetMouseInputAll( );		// MOUSE_INPUT_の状態を返す
int	 GetMouseInputOn();			// MOUSE_INPUT_の?された瞬間の状態を返す
int	 GetMouseInputRelease( );	// MOUSE_INPUT_の離された瞬間の状態を返す
int  GetMousePosition( int *x, int *y );// Mouseの位置を取得する

unsigned int isMouseInputDown( int mouse_input );	// MOUSE_INPUT_ が?されていたら、TRUEを返す
unsigned int isMouseInputOn( int mouse_input );		// MOUSE_INPUT_ が?された瞬間、TRUEを返す
unsigned int isMouseInputRelease( int mouse_input );// MOUSE_INPUT_ が離された瞬間、TRUEを返す

// キーボード関係
unsigned int isKeyDown( int keycode );		// keycodeで示されるキーボードが?されていたら、TRUEを返す
unsigned int isKeyOn( int keycode );		// keycodeで示されるキーボードが?された瞬間、TRUEを返す
unsigned int isKeyRelease( int keycode );	// keycodeで示されるキーボードが離された瞬間、TRUEを返す

