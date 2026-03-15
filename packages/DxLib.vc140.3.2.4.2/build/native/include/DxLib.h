// -------------------------------------------------------------------------------
// 
// 		ＤＸ?イブ??		ヘッダファイ?
// 
// 				Ver 3.24d
// 
// -------------------------------------------------------------------------------

#ifndef DX_LIB_H
#define DX_LIB_H

#include "DxCompileConfig.h"

// ＤＸ?イブ??のバージ??
#define DXLIB_VERSION 0x324d
#define DXLIB_VERSION_STR_T _T( "3.24d" )
#define DXLIB_VERSION_STR_W    L"3.24d"

// 設定 -----------------------------------------------------------------------

// ＤＸ?イブ??に必要な lib ファイ?を、プ?ジェクトのカ??トフォ?ダや
// コ?パイ?のデフォ?ト LIB パスに設定せずに使用される場?は以下の
// コ??トを外してください
//#define DX_LIB_NOT_DEFAULTPATH

#ifndef DX_MAKE

// 描画関連の関?を一切使用されない場?は以下のコ??トを外して下さい
//#define DX_NOTUSE_DRAWFUNCTION

#endif // DX_MAKE


// 定義---------------------------------------------------------------------------

// π
#define DX_PI										(3.1415926535897932384626433832795 )
#define DX_PI_F										(3.1415926535897932384626433832795f)
#define DX_TWO_PI									(3.1415926535897932384626433832795  * 2.0 )
#define DX_TWO_PI_F									(3.1415926535897932384626433832795f * 2.0f)

#define DX_CHAR										char

#define DX_DEFINE_START

#define MAX_IMAGE_NUM								(0x40000)			// 同?に?てるグ?フィックハ?ド?の最大?( ハ?ド?エ?ーチェックのマスクに使用しているので 0x40000 以下の 2 のべき乗にして下さい )
#define MAX_IMAGE_DIVNUM							(64)				// 画?分?の最大?
#define MAX_SHADOWMAP_NUM							(8192)				// シ?ドウマップデータの最大?
#define MAX_SOFTIMAGE_NUM							(8192)				// 同?に?てるソフトイ?ージハ?ド?の最大?( ハ?ド?エ?ーチェックのマスクに使用しているので 0x40000 以下の 2 のべき乗にして下さい )

#define MAX_SOUND_NUM								(32768)				// 同?に?てるサウ?ドハ?ド?の最大?
#define MAX_SOFTSOUND_NUM							(8192)				// 同?に?てるソフトウエアサウ?ドハ?ド?の最大?
#define MAX_MUSIC_NUM								(256)				// 同?に?てるミ?ージックハ?ド?の最大?
#define MAX_MOVIE_NUM								(100)				// 同?に?てる?ービーハ?ド?の最大?
#define MAX_MASK_NUM								(32768)				// 同?に?てるマスクハ?ド?の最大?
#define MAX_FONT_NUM								(256)				// 同?に?てるフォ?トハ?ド?の最大?
#define MAX_INPUT_NUM								(256)				// 同?に?てる文?列入力ハ?ド?の最大?
#define MAX_SOCKET_NUM								(8192)				// 同?に?てる通信ハ?ド?の最大?
#define MAX_LIGHT_NUM								(4096)				// 同?に?てる?イトハ?ド?の最大?
#define MAX_SHADER_NUM								(4096)				// 同?に?てるシェーダーハ?ド?の最大?
#define MAX_CONSTANT_BUFFER_NUM						(32768)				// 同?に?てる定?バッファハ?ド?の最大?
#define MAX_MODEL_BASE_NUM							(32768)				// 同?に?てる３Ｄ?デ?基本データハ?ド?の最大?
#define MAX_MODEL_NUM								(32768)				// 同?に?てる３Ｄ?デ?データハ?ド?の最大?
#define MAX_VERTEX_BUFFER_NUM						(16384)				// 同?に?てる頂点バッファハ?ド?の最大?
#define MAX_INDEX_BUFFER_NUM						(16384)				// 同?に?てるイ?デックスバッファの最大?
#define MAX_FILE_NUM								(32768)				// 同?に?てるファイ?ハ?ド?の最大?
#define MAX_LIVE2D_CUBISM4_MODEL_NUM				(32768)				// 同?に?てる Live2D Cubism 4 Model ハ?ド?の最大?

// ハ?ド?タイプ定義
#define DX_HANDLETYPE_NONE							(0)					// ハ?ド?タイプ０は未使用
#define DX_HANDLETYPE_GRAPH							(1)					// グ?フィックハ?ド?
#define DX_HANDLETYPE_SOFTIMAGE						(2)					// ソフトウエアで扱うイ?ージハ?ド?
#define DX_HANDLETYPE_SOUND							(3)					// サウ?ドハ?ド?
#define DX_HANDLETYPE_SOFTSOUND						(4)					// ソフトサウ?ドハ?ド?
#define DX_HANDLETYPE_MUSIC							(5)					// ミ?ージックハ?ド?
#define DX_HANDLETYPE_MOVIE							(6)					// ?ービーハ?ド?
#define DX_HANDLETYPE_GMASK							(7)					// マスクハ?ド?
#define DX_HANDLETYPE_FONT							(8)					// フォ?トハ?ド?
#define DX_HANDLETYPE_KEYINPUT						(9)					// 文?列入力ハ?ド?
#define DX_HANDLETYPE_NETWORK						(10)				// ネット?ークハ?ド?
#define DX_HANDLETYPE_LIGHT							(11)				// ?イト
#define DX_HANDLETYPE_SHADER						(12)				// シェーダーハ?ド?
#define DX_HANDLETYPE_MODEL_BASE					(13)				// ３Ｄ?デ?基本データ
#define DX_HANDLETYPE_MODEL							(14)				// ３Ｄ?デ?
#define DX_HANDLETYPE_VERTEX_BUFFER					(15)				// 頂点バッファハ?ド?
#define DX_HANDLETYPE_INDEX_BUFFER					(16)				// イ?デックスバッファハ?ド?
#define DX_HANDLETYPE_FILE							(17)				// ファイ?ハ?ド?
#define DX_HANDLETYPE_SHADOWMAP						(18)				// シ?ドウマップハ?ド?
#define DX_HANDLETYPE_SHADER_CONSTANT_BUFFER		(19)				// シェーダー用定?バッファハ?ド?
#define DX_HANDLETYPE_LIVE2D_CUBISM4_MODEL			(20)				// Live2D Cubism 4 ?デ?ハ?ド?

#define MAX_JOYPAD_NUM								(16)				// ジ?イパッドの最大?

#define DEFAULT_SCREEN_SIZE_X						(640)				// デフォ?トの画面の?
#define DEFAULT_SCREEN_SIZE_Y						(480)				// デフォ?トの画面の?さ
#define DEFAULT_COLOR_BITDEPTH						(16)				// デフォ?トの色ビット深度
#define DEFAULT_ZBUFFER_BITDEPTH					(16)				// デフォ?トのＺバッファビット深度

#define DEFAULT_FOV									(60.0F * 3.1415926535897932384626433832795F / 180.0F)	// デフォ?トの?野角
#define DEFAULT_TAN_FOV_HALF						(0.57735026918962576450914878050196F) // tan( FOV * 0.5 )
#define DEFAULT_NEAR								(0.0F)				// NEARク?ップ面
#define DEFAULT_FAR									(20000.0F)			// FARク?ップ面

#define DX_DEFAULT_FONT_HANDLE						(-2)				// デフォ?トフォ?トを示す値

#define DEFAULT_FONT_SIZE							(16)				// フォ?トのデフォ?トのサイズ
#define DEFAULT_FONT_THINCK							(6)					// フォ?トのデフォ?トの太さ
#define DEFAULT_FONT_TYPE							( DX_FONTTYPE_NORMAL )	// フォ?トのデフォ?トの形態
#define DEFAULT_FONT_EDGESIZE						(1)					// フォ?トのデフォ?トの太さ

#define MAX_USERIMAGEREAD_FUNCNUM					(10)				// ?ーザーが登録できるグ?フィック?ード関?の最大?

// ＷＩＮＤＯＷＳのバージ??マク?
#define DX_WINDOWSVERSION_31						(0x000)
#define DX_WINDOWSVERSION_95						(0x001)
#define DX_WINDOWSVERSION_98						(0x002)
#define DX_WINDOWSVERSION_ME						(0x003)
#define DX_WINDOWSVERSION_NT31						(0x104)
#define DX_WINDOWSVERSION_NT40						(0x105)
#define DX_WINDOWSVERSION_2000						(0x106)
#define DX_WINDOWSVERSION_XP						(0x107)
#define DX_WINDOWSVERSION_VISTA						(0x108)
#define DX_WINDOWSVERSION_7							(0x109)
#define DX_WINDOWSVERSION_8							(0x10A)
#define DX_WINDOWSVERSION_8_1						(0x10B)
#define DX_WINDOWSVERSION_10						(0x10C)
#define DX_WINDOWSVERSION_11						(0x10D)
#define DX_WINDOWSVERSION_NT_TYPE					(0x100)

// DirectXのバージ??
#define DX_DIRECTXVERSION_NON						(0)
#define DX_DIRECTXVERSION_1							(0x10000)
#define DX_DIRECTXVERSION_2							(0x20000)
#define DX_DIRECTXVERSION_3							(0x30000)
#define DX_DIRECTXVERSION_4							(0x40000)
#define DX_DIRECTXVERSION_5							(0x50000)
#define DX_DIRECTXVERSION_6							(0x60000)
#define DX_DIRECTXVERSION_6_1						(0x60100)
#define DX_DIRECTXVERSION_7							(0x70000)
#define DX_DIRECTXVERSION_8							(0x80000)
#define DX_DIRECTXVERSION_8_1						(0x80100)

// Direct3Dのバージ??
#define DX_DIRECT3D_NONE							(0)
#define DX_DIRECT3D_9								(1)
#define DX_DIRECT3D_9EX								(2)
#define DX_DIRECT3D_11								(3)

// Direct3D11 の Feature Level
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_1			(0x9100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_2			(0x9200)
#define DX_DIRECT3D_11_FEATURE_LEVEL_9_3			(0x9300)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_0			(0xa000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_10_1			(0xa100)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_0			(0xb000)
#define DX_DIRECT3D_11_FEATURE_LEVEL_11_1			(0xb100)

// 文?セット
#define DX_CHARSET_DEFAULT							(0)				// デフォ?ト文?セット
#define DX_CHARSET_SHFTJIS							(1)				// シフトJIS
#define DX_CHARSET_HANGEUL							(2)				// ハ?グ?文?セット
#define DX_CHARSET_BIG5								(3)				// 繁体文?セット
#define DX_CHARSET_GB2312							(4)				// 簡体文?セット
#define DX_CHARSET_WINDOWS_1252						(5)				// 欧文(?テ?文?の文?コード)
#define DX_CHARSET_ISO_IEC_8859_15					(6)				// 欧文(?テ?文?の文?コード)
#define DX_CHARSET_UTF8								(7)				// UTF-8
#define DX_CHARSET_NUM								(8)				// 文?セットの?

// 文?コード形式
#define DX_CHARCODEFORMAT_SHIFTJIS					(932)			// シフトJISコード
#define DX_CHARCODEFORMAT_GB2312					(936)			// 簡体?文?コード
#define DX_CHARCODEFORMAT_UHC						(949)			// ハ?グ?文?コード
#define DX_CHARCODEFORMAT_BIG5						(950)			// 繁体文?コード
#define DX_CHARCODEFORMAT_UTF16LE					(1200)			// UTF-16 ?ト?エ?ディア?
#define DX_CHARCODEFORMAT_UTF16BE					(1201)			// UTF-16 ビッグエ?ディア?
#define DX_CHARCODEFORMAT_WINDOWS_1252				(1252)			// 欧文(?テ?文?の文?コード)
#define DX_CHARCODEFORMAT_ISO_IEC_8859_15			(32764)			// 欧文(?テ?文?の文?コード)
#define DX_CHARCODEFORMAT_UTF8						(65001)			// UTF-8
#define DX_CHARCODEFORMAT_ASCII						(32765)			// アスキー文?コード
#define DX_CHARCODEFORMAT_UTF32LE					(32766)			// UTF-32 ?ト?エ?ディア?
#define DX_CHARCODEFORMAT_UTF32BE					(32767)			// UTF-32 ビッグエ?ディア?

// ＭＩＤＩの?奏?ード定義
#define DX_MIDIMODE_MCI								(0)				// ＭＣＩによる?奏
#define DX_MIDIMODE_DM								(1)				// Ｄ?????Ｍ????による?奏
#define DX_MIDIMODE_DIRECT_MUSIC_REVERB				(1)				// Ｄ?????Ｍ????(?バーブ?り)による?奏
#define DX_MIDIMODE_DIRECT_MUSIC_NORMAL				(2)				// Ｄ?????Ｍ????(?バーブなし)による?奏
#define DX_MIDIMODE_NUM								(3)				// ＭＩＤＩの?奏?ードの?

// 描画?ード定義
#define DX_DRAWMODE_NEAREST							(0)				// ネア?ストネイバー法で描画
#define DX_DRAWMODE_BILINEAR						(1)				// バイ?ニア法で描画する
#define DX_DRAWMODE_ANISOTROPIC						(2)				// 異方性フィ?タ??グ法で描画する
#define DX_DRAWMODE_OTHER							(3)				// それ以外
#define DX_DRAWMODE_NUM								(4)				// 描画?ードの?

// フォ?トのタイプ
#define DX_FONTTYPE_NORMAL							(0x00)			// ノーマ?フォ?ト
#define DX_FONTTYPE_EDGE							(0x01)			// エッジつきフォ?ト
#define DX_FONTTYPE_ANTIALIASING					(0x02)			// ア?チエイ?アスフォ?ト( 標?機能ア?チエイ?アス )
#define DX_FONTTYPE_ANTIALIASING_4X4				(0x12)			// ア?チエイ?アスフォ?ト( 4x4サ?プ??グ )
#define DX_FONTTYPE_ANTIALIASING_8X8				(0x22)			// ア?チエイ?アスフォ?ト( 8x8サ?プ??グ )
#define DX_FONTTYPE_ANTIALIASING_16X16				(0x32)			// ア?チエイ?アスフォ?ト( 16x16サ?プ??グ )
#define DX_FONTTYPE_ANTIALIASING_EDGE				(0x03)			// ア?チエイ?アス?エッジ付きフォ?ト( 標?機能ア?チエイ?アス )
#define DX_FONTTYPE_ANTIALIASING_EDGE_4X4			(0x13)			// ア?チエイ?アス?エッジ付きフォ?ト( 4x4サ?プ??グ )
#define DX_FONTTYPE_ANTIALIASING_EDGE_8X8			(0x23)			// ア?チエイ?アス?エッジ付きフォ?ト( 8x8サ?プ??グ )
#define DX_FONTTYPE_ANTIALIASING_EDGE_16X16			(0x33)			// ア?チエイ?アス?エッジ付きフォ?ト( 16x16サ?プ??グ )

// フォ?ト画?の階調ビット?
#define DX_FONTIMAGE_BIT_1							(0)
#define DX_FONTIMAGE_BIT_4							(1)
#define DX_FONTIMAGE_BIT_8							(2)

// 描画ブ??ド?ード定義
#define DX_BLENDMODE_NOBLEND						(0)				// ノーブ??ド
#define DX_BLENDMODE_ALPHA							(1)				// αブ??ド
#define DX_BLENDMODE_ADD							(2)				// 加算ブ??ド
#define DX_BLENDMODE_SUB							(3)				// 減算ブ??ド
#define DX_BLENDMODE_MUL							(4)				// 乗算ブ??ド
   // (内???用)
#define DX_BLENDMODE_SUB2							(5)				// 内???用減算ブ??ド２
//#define DX_BLENDMODE_BLINEALPHA					(7)				// 境界線ぼかし
#define DX_BLENDMODE_XOR							(6)				// XORブ??ド( ソフトウエア??ダ??グ?ードでのみ有効 )
#define DX_BLENDMODE_DESTCOLOR						(8)				// カ?ーは更新されない
#define DX_BLENDMODE_INVDESTCOLOR					(9)				// 描画先の色の反転値を掛ける
#define DX_BLENDMODE_INVSRC							(10)			// 描画元の色を反転する
#define DX_BLENDMODE_MULA							(11)			// ア?ファチ??ネ?考慮付き乗算ブ??ド
#define DX_BLENDMODE_ALPHA_X4						(12)			// αブ??ドの描画元の輝度を最大４倍にできる?ード
#define DX_BLENDMODE_ADD_X4							(13)			// 加算ブ??ドの描画元の輝度を最大４倍にできる?ード
#define DX_BLENDMODE_SRCCOLOR						(14)			// 描画元のカ?ーでそのまま描画される
#define DX_BLENDMODE_HALF_ADD						(15)			// 半加算ブ??ド
#define DX_BLENDMODE_SUB1							(16)			// 内???用減算ブ??ド１
#define DX_BLENDMODE_PMA_ALPHA						(17)			// 乗算済みαブ??ド?ードのαブ??ド
#define DX_BLENDMODE_PMA_ADD						(18)			// 乗算済みαブ??ド?ードの加算ブ??ド
#define DX_BLENDMODE_PMA_SUB						(19)			// 乗算済みαブ??ド?ードの減算ブ??ド
#define DX_BLENDMODE_PMA_INVSRC						(20)			// 乗算済みαブ??ド?ードの描画元の色を反転する
#define DX_BLENDMODE_PMA_ALPHA_X4					(21)			// 乗算済みαブ??ド?ードのαブ??ドの描画元の輝度を最大４倍にできる?ード
#define DX_BLENDMODE_PMA_ADD_X4						(22)			// 乗算済みαブ??ド?ードの加算ブ??ドの描画元の輝度を最大４倍にできる?ード
#define DX_BLENDMODE_LIVE2D_ZERO					(23)			// Live2D のブ??ド?ード Zero 用
#define DX_BLENDMODE_LIVE2D_NORMAL					(24)			// Live2D のブ??ド?ード Normal 用
#define DX_BLENDMODE_LIVE2D_ADD						(25)			// Live2D のブ??ド?ード Add 用
#define DX_BLENDMODE_LIVE2D_MULT					(26)			// Live2D のブ??ド?ード Mult 用
#define DX_BLENDMODE_LIVE2D_MASK					(27)			// Live2D のブ??ド?ード Mask 用
#define DX_BLENDMODE_SPINE_NORMAL					(28)			// Spine のブ??ド?ード Normal 用
#define DX_BLENDMODE_SPINE_ADDITIVE					(29)			// Spine のブ??ド?ード Additive 用
#define DX_BLENDMODE_SPINE_MULTIPLY					(30)			// Spine のブ??ド?ード Multiply 用
#define DX_BLENDMODE_SPINE_SCREEN					(31)			// Spine のブ??ド?ード Screen 用
#define DX_BLENDMODE_CUSTOM							(32)			// カスタ?ブ??ド?ード
#define DX_BLENDMODE_DST_RGB_SRC_A					(33)			// 描画元の A のみを?き?む( 描画先の RGB は変更されない )
#define DX_BLENDMODE_INVDESTCOLOR_A					(34)			// 描画先の A の反転値を掛ける( 描画先の RGB は変更されない )
#define DX_BLENDMODE_MUL_A							(35)			// A のみの乗算ブ??ド( 描画先の RGB は変更されない )
#define DX_BLENDMODE_PMA_INVDESTCOLOR_A				(36)			// 乗算済みα用の DX_BLENDMODE_INVDESTCOLOR_A
#define DX_BLENDMODE_PMA_MUL_A						(37)			// 乗算済みα用の DX_BLENDMODE_MUL_A
#define DX_BLENDMODE_NUM							(38)			// ブ??ド?ードの?

// カスタ?ブ??ド?ード用のブ??ド要素タイプ
// Rs = 描画元のR   Rg = 描画元のG   Rb = 描画元のB   Ra = 描画元のA
// Rd = 描画先のR   Rd = 描画先のG   Rd = 描画先のB   Rd = 描画先のA
#define DX_BLEND_ZERO								(0)				// R = 0         G = 0         B = 0         A = 0
#define DX_BLEND_ONE								(1)				// R = 255       G = 255       B = 255       A = 255
#define DX_BLEND_SRC_COLOR							(2)				// R = Rs        G = Gs        B = Gs        A = As
#define DX_BLEND_INV_SRC_COLOR						(3)				// R = 255 - Rs  G = 255 - Gs  B = 255 - Gs  A = 255 - As
#define DX_BLEND_SRC_ALPHA							(4)				// R = As        G = As        B = As        A = As
#define DX_BLEND_INV_SRC_ALPHA						(5)				// R = 255 - As  G = 255 - As  B = 255 - As  A = 255 - As
#define DX_BLEND_DEST_COLOR							(6)				// R = Rd        G = Gd        B = Bd        A = Ad
#define DX_BLEND_INV_DEST_COLOR						(7)				// R = 255 - Rd  G = 255 - Gd  B = 255 - Bd  A = 255 - Ad
#define DX_BLEND_DEST_ALPHA							(8)				// R = Ad        G = Ad        B = Ad        A = Ad
#define DX_BLEND_INV_DEST_ALPHA						(9)				// R = 255 - Ad  G = 255 - Ad  B = 255 - Ad  A = 255 - Ad
#define DX_BLEND_SRC_ALPHA_SAT						(10)			// R = f         G = f         B = f         A = 255        f = min( As, 255 - Ad )
#define DX_BLEND_NUM								(11)			// ブ??ド要素タイプの?

// カスタ?ブ??ド?ード用のブ??ド??タイプ
#define DX_BLENDOP_ADD								(0)				// ブ??ドソース1とブ??ドソース2を加算
#define DX_BLENDOP_SUBTRACT							(1)				// ブ??ドソース1からブ??ドソース2を減算
#define DX_BLENDOP_REV_SUBTRACT						(2)				// ブ??ドソース2からブ??ドソース2を減算
#define DX_BLENDOP_MIX								(3)				// ブ??ドソース1とブ??ドソース2の最小値
#define DX_BLENDOP_MAX								(4)				// ブ??ドソース1とブ??ドソース2の最大値
#define DX_BLENDOP_NUM								(5)				// ブ??ド??タイプの?

// DrawGraphF ?の?動小?点値で座標を指定する関?における座標タイプ
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D9				(0)				// Direct3D9タイプ( -0.5f の補正を行わないとテクスチ?のピクセ?が綺麗にマップされないタイプ )
#define DX_DRAWFLOATCOORDTYPE_DIRECT3D10			(1)				// Direct3D10タイプ( -0.5f の補正を行わななくてもテクスチ?のピクセ?が綺麗にマップされるタイプ )

// 画??成タイプ
#define DX_BLENDGRAPHTYPE_NORMAL					(0)				// 通常?成
#define DX_BLENDGRAPHTYPE_WIPE						(1)				// ?イプ??
#define DX_BLENDGRAPHTYPE_ALPHA						(2)				// ブ??ド画?のα値と元画?のα値を掛け?わせる
#define DX_BLENDGRAPHTYPE_NUM						(3)

// 画??成座標タイプ
#define DX_BLENDGRAPH_POSMODE_DRAWGRAPH				(0)				// 描画する画?基?で?成画?の座標を?定
#define DX_BLENDGRAPH_POSMODE_SCREEN				(1)				// スク?ー?座標基?で?成画?の座標を?定
#define DX_BLENDGRAPH_POSMODE_NUM					(2)

// グ?フィックフィ?タータイプ
#define DX_GRAPH_FILTER_MONO						(0)				// ?ノトー?フィ?タ
#define DX_GRAPH_FILTER_GAUSS						(1)				// ガウスフィ?タ
#define DX_GRAPH_FILTER_DOWN_SCALE					(2)				// 縮小フィ?タ
#define DX_GRAPH_FILTER_BRIGHT_CLIP					(3)				// 明るさク?ップフィ?タ
#define DX_GRAPH_FILTER_BRIGHT_SCALE				(4)				// 指定の明るさ領域を拡大するフィ?タ
#define DX_GRAPH_FILTER_HSB							(5)				// 色?・彩度・明度フィ?タ
#define DX_GRAPH_FILTER_INVERT						(6)				// 階調の反転フィ?タ
#define DX_GRAPH_FILTER_LEVEL						(7)				// ?ベ?補正フィ?タ
#define DX_GRAPH_FILTER_TWO_COLOR					(8)				// ２階調化フィ?タ
#define DX_GRAPH_FILTER_GRADIENT_MAP				(9)				// グ?デーシ??マップフィ?タ
#define DX_GRAPH_FILTER_REPLACEMENT					(10)			// 色の置換
#define DX_GRAPH_FILTER_PREMUL_ALPHA				(11)			// 通常のア?ファチ??ネ?付き画?を乗算済みア?ファ画?に変換するフィ?タ
#define DX_GRAPH_FILTER_INTERP_ALPHA				(12)			// 乗算済みα画?を通常のア?ファチ??ネ?付き画?に変換するフィ?タ
#define DX_GRAPH_FILTER_YUV_TO_RGB					(13)			// YUVカ?ーをRGBカ?ーに変換するフィ?タ
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB				(14)			// YUVカ?ーをRGBカ?ーに変換するフィ?タ( UV成分が Y成分の半分・?は４分の１( 横・縦片方若しくは両方 )の解?度しかない場?用 )
#define DX_GRAPH_FILTER_YUV_TO_RGB_RRA				(15)			// YUVカ?ーをRGBカ?ーに変換するフィ?タ( ?つ右側半分のRの値をア?ファ値として扱う )
#define DX_GRAPH_FILTER_Y2UV1_TO_RGB_RRA			(16)			// YUVカ?ーをRGBカ?ーに変換するフィ?タ( UV成分が Y成分の半分・?は４分の１( 横・縦片方若しくは両方 )の解?度しかない場?用 )( ?つ右側半分のRの値をア?ファ値として扱う )
#define DX_GRAPH_FILTER_BICUBIC_SCALE				(17)			// バイキ?ービックを使用した拡大・縮小フィ?タ
#define DX_GRAPH_FILTER_LANCZOS3_SCALE				(18)			// Lanczos-3を使用した拡大・縮小フィ?タ
#define DX_GRAPH_FILTER_SSAO						(19)			// Screen-Space Ambient Occlusionフィ?タ
#define DX_GRAPH_FILTER_FLOAT_COLOR_SCALE			(20)			// float型の色のスケー??グ
#define DX_GRAPH_FILTER_PMA_BRIGHT_CLIP				(21)			// 明るさク?ップフィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_BRIGHT_SCALE			(22)			// 指定の明るさ領域を拡大するフィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_HSB						(23)			// 色?・彩度・明度フィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_INVERT					(24)			// 階調の反転フィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_LEVEL					(25)			// ?ベ?補正フィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_TWO_COLOR				(26)			// ２階調化フィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_GRADIENT_MAP			(27)			// グ?デーシ??マップフィ?タ(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_PMA_REPLACEMENT				(28)			// 色の置換(乗算済みア?ファ画?用)
#define DX_GRAPH_FILTER_NUM							(29)

// グ?フィックブ??ドタイプ
#define DX_GRAPH_BLEND_NORMAL						(0)				// 通常
#define DX_GRAPH_BLEND_RGBA_SELECT_MIX				(1)				// RGBAの要素を選択して?成
#define DX_GRAPH_BLEND_MULTIPLE						(2)				// 乗算
#define DX_GRAPH_BLEND_DIFFERENCE					(3)				// 減算
#define DX_GRAPH_BLEND_ADD							(4)				// 加算
#define DX_GRAPH_BLEND_SCREEN						(5)				// スク?ー?
#define DX_GRAPH_BLEND_OVERLAY						(6)				// オーバー?イ
#define DX_GRAPH_BLEND_DODGE						(7)				// 覆い焼き
#define DX_GRAPH_BLEND_BURN							(8)				// 焼き?み
#define DX_GRAPH_BLEND_DARKEN						(9)				// 比較(暗)
#define DX_GRAPH_BLEND_LIGHTEN						(10)			// 比較(明)
#define DX_GRAPH_BLEND_SOFTLIGHT					(11)			// ソフト?イト
#define DX_GRAPH_BLEND_HARDLIGHT					(12)			// ハード?イト
#define DX_GRAPH_BLEND_EXCLUSION					(13)			// ?外
#define DX_GRAPH_BLEND_NORMAL_ALPHACH				(14)			// αチ??ネ?付き画?の通常?成
#define DX_GRAPH_BLEND_ADD_ALPHACH					(15)			// αチ??ネ?付き画?の加算?成
#define DX_GRAPH_BLEND_MULTIPLE_A_ONLY				(16)			// ア?ファチ??ネ?のみの乗算
#define DX_GRAPH_BLEND_PMA_NORMAL					(17)			// 通常( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_RGBA_SELECT_MIX			(18)			// RGBAの要素を選択して?成( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_MULTIPLE					(19)			// 乗算( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_DIFFERENCE				(20)			// 減算( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_ADD						(21)			// 加算( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_SCREEN					(22)			// スク?ー?( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_OVERLAY					(23)			// オーバー?イ( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_DODGE					(24)			// 覆い焼き( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_BURN						(25)			// 焼き?み( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_DARKEN					(26)			// 比較(暗)( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_LIGHTEN					(27)			// 比較(明)( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_SOFTLIGHT				(28)			// ソフト?イト( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_HARDLIGHT				(29)			// ハード?イト( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_EXCLUSION				(30)			// ?外( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_NORMAL_ALPHACH			(31)			// αチ??ネ?付き画?の通常?成( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_ADD_ALPHACH				(32)			// αチ??ネ?付き画?の加算?成( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY			(33)			// ア?ファチ??ネ?のみの乗算( 乗算済みα画?用 )
#define DX_GRAPH_BLEND_MASK							(34)			// マスク( SrcGrHandle に BlendGrHandle を通常描画した上で、SrcGrHandle の A を優先 )
#define DX_GRAPH_BLEND_PMA_MASK						(35)			// マスク( DX_GRAPH_BLEND_MASK の乗算済みα画?用 )
#define DX_GRAPH_BLEND_NUM							(36)

// DX_GRAPH_BLEND_RGBA_SELECT_MIX 用の色選択用定義
#define DX_RGBA_SELECT_SRC_R						(0)				// 元画?の赤成分
#define DX_RGBA_SELECT_SRC_G						(1)				// 元画?の緑成分
#define DX_RGBA_SELECT_SRC_B						(2)				// 元画?の青成分
#define DX_RGBA_SELECT_SRC_A						(3)				// 元画?のα成分
#define DX_RGBA_SELECT_BLEND_R						(4)				// ブ??ド画?の赤成分
#define DX_RGBA_SELECT_BLEND_G						(5)				// ブ??ド画?の緑成分
#define DX_RGBA_SELECT_BLEND_B						(6)				// ブ??ド画?の青成分
#define DX_RGBA_SELECT_BLEND_A						(7)				// ブ??ド画?のα成分
#define DX_RGBA_SELECT_SRC_INV_R					(8)				// 元画?の赤成分を反転したもの
#define DX_RGBA_SELECT_SRC_INV_G					(9)				// 元画?の緑成分を反転したもの
#define DX_RGBA_SELECT_SRC_INV_B					(10)			// 元画?の青成分を反転したもの
#define DX_RGBA_SELECT_SRC_INV_A					(11)			// 元画?のα成分を反転したもの
#define DX_RGBA_SELECT_BLEND_INV_R					(12)			// ブ??ド画?の赤成分を反転したもの
#define DX_RGBA_SELECT_BLEND_INV_G					(13)			// ブ??ド画?の緑成分を反転したもの
#define DX_RGBA_SELECT_BLEND_INV_B					(14)			// ブ??ド画?の青成分を反転したもの
#define DX_RGBA_SELECT_BLEND_INV_A					(15)			// ブ??ド画?のα成分を反転したもの

// フィ??ード
#define DX_FILL_WIREFRAME							(2)				// ?イ?ーフ?ー?
#define DX_FILL_SOLID								(3)				// ポ?ゴ?

// ポ?ゴ?カ??グ?ード
#define DX_CULLING_NONE								(0)				// カ??グなし
#define DX_CULLING_LEFT								(1)				// 背面を左回りでカ??グ
#define DX_CULLING_RIGHT							(2)				// 背面を右回りでカ??グ
#define DX_CULLING_NUM								(3)				// カ??グ?ードの?

// ク?ッピ?グ方向
#define DX_CAMERACLIP_LEFT							(0x01)			// 画面左方向にク?ップ
#define DX_CAMERACLIP_RIGHT							(0x02)			// 画面右方向にク?ップ
#define DX_CAMERACLIP_BOTTOM						(0x04)			// 画面下方向にク?ップ
#define DX_CAMERACLIP_TOP							(0x08)			// 画面上方向にク?ップ
#define DX_CAMERACLIP_BACK							(0x10)			// 画面後方向にク?ップ
#define DX_CAMERACLIP_FRONT							(0x20)			// 画面前方向にク?ップ

// MV1?デ?の描画?ード
#define DX_MV1_DRAWMODE_NORMAL						(0)				// 通常描画
#define DX_MV1_DRAWMODE_NORMAL_DEPTH				(1)				// 法線と深度を描画

// MV1?デ?の頂点タイプ
#define DX_MV1_VERTEX_TYPE_1FRAME					(0)				// １フ?ー?の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_4FRAME					(1)				// １～４フ?ー?の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_8FRAME					(2)				// ５～８フ?ー?の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_FREE_FRAME				(3)				// ９フ?ー?以上の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_1FRAME				(4)				// 法線マップ用の情報が含まれる１フ?ー?の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_4FRAME				(5)				// 法線マップ用の情報が含まれる１～４フ?ー?の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_8FRAME				(6)				// 法線マップ用の情報が含まれる５～８フ?ー?の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NMAP_FREE_FRAME			(7)				// 法線マップ用の情報が含まれる９フ?ー?以上の影響を受ける頂点
#define DX_MV1_VERTEX_TYPE_NUM						(8)				// 頂点タイプの?

// ?ッシ?の種類
#define DX_MV1_MESHCATEGORY_NORMAL					(0)				// ?通の?ッシ?
#define DX_MV1_MESHCATEGORY_OUTLINE					(1)				// 輪郭線描画用?ッシ?
#define DX_MV1_MESHCATEGORY_OUTLINE_ORIG_SHADER		(2)				// 輪郭線描画用?ッシ?( オ?ジナ?シェーダーでの描画用 )
#define DX_MV1_MESHCATEGORY_NUM						(3)				// ?ッシ?の種類の?

// シェイプ率の適用タイプ
#define DX_MV1_SHAPERATE_ADD						(0)				// 元の値に加算
#define DX_MV1_SHAPERATE_OVERWRITE					(1)				// 元の値に上?き

// MV1ファイ?の保存タイプ
#define MV1_SAVETYPE_MESH							(0x0001)		// ?ッシ?情報のみ保存
#define MV1_SAVETYPE_ANIM							(0x0002)		// アニ?ーシ??情報のみ保存
#define MV1_SAVETYPE_NORMAL							( MV1_SAVETYPE_MESH | MV1_SAVETYPE_ANIM )	// 通常保存

// アニ?ーシ??キーデータタイプ
#define MV1_ANIMKEY_DATATYPE_ROTATE					(0)				// 回転
#define MV1_ANIMKEY_DATATYPE_ROTATE_X				(1)				// 回転Ｘ
#define MV1_ANIMKEY_DATATYPE_ROTATE_Y				(2)				// 回転Ｙ
#define MV1_ANIMKEY_DATATYPE_ROTATE_Z				(3)				// 回転Ｚ
#define MV1_ANIMKEY_DATATYPE_SCALE					(5)				// 拡大
#define MV1_ANIMKEY_DATATYPE_SCALE_X				(6)				// スケー?Ｘ
#define MV1_ANIMKEY_DATATYPE_SCALE_Y				(7)				// スケー?Ｙ
#define MV1_ANIMKEY_DATATYPE_SCALE_Z				(8)				// スケー?Ｚ
#define MV1_ANIMKEY_DATATYPE_TRANSLATE				(10)			// 平行移動
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_X			(11)			// 平行移動Ｘ
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Y			(12)			// 平行移動Ｙ
#define MV1_ANIMKEY_DATATYPE_TRANSLATE_Z			(13)			// 平行移動Ｚ
#define MV1_ANIMKEY_DATATYPE_MATRIX4X4C				(15)			// ４×４行列の４列目( 0,0,0,1 )固定版
#define MV1_ANIMKEY_DATATYPE_MATRIX3X3				(17)			// ３×３行列
#define MV1_ANIMKEY_DATATYPE_SHAPE					(18)			// シェイプ
#define MV1_ANIMKEY_DATATYPE_OTHRE					(20)			// その他

// タイ?タイプ
#define MV1_ANIMKEY_TIME_TYPE_ONE					(0)				// ?間情報は全体で一つ
#define MV1_ANIMKEY_TIME_TYPE_KEY					(1)				// ?間情報は各キーに一つ

// アニ?ーシ??キータイプ
#define MV1_ANIMKEY_TYPE_QUATERNION_X				(0)				// クォータニオ?( Xファイ?タイプ )
#define MV1_ANIMKEY_TYPE_VECTOR						(1)				// ベクター
#define MV1_ANIMKEY_TYPE_MATRIX4X4C					(2)				// ４×４行列の４列目( 0,0,0,1 )固定版
#define MV1_ANIMKEY_TYPE_MATRIX3X3					(3)				// ３×３行列
#define MV1_ANIMKEY_TYPE_FLAT						(4)				// フ?ット
#define MV1_ANIMKEY_TYPE_LINEAR						(5)				// 線形補間
#define MV1_ANIMKEY_TYPE_BLEND						(6)				// 混?
#define MV1_ANIMKEY_TYPE_QUATERNION_VMD				(7)				// クォータニオ?( VMDタイプ )

// 描画先画面指定用定義
#define DX_SCREEN_FRONT								(0xfffffffc)
#define DX_SCREEN_BACK								(0xfffffffe) 
#define DX_SCREEN_WORK 								(0xfffffffd)
#define DX_SCREEN_TEMPFRONT							(0xfffffff0)
#define DX_SCREEN_OTHER								(0xfffffffa)

#define DX_NONE_GRAPH								(0xfffffffb)	// グ?フィックなしハ?ド?

// グ?フィック減色?の画?劣化緩和???ード
#define DX_SHAVEDMODE_NONE							(0)				// 画?劣化緩和??を行わない
#define DX_SHAVEDMODE_DITHER						(1)				// ディザ??グ
#define DX_SHAVEDMODE_DIFFUS						(2)				// 誤差拡散

// 画?の保存タイプ
#define DX_IMAGESAVETYPE_BMP						(0)				// bitmap
#define DX_IMAGESAVETYPE_JPEG						(1)				// jpeg
#define DX_IMAGESAVETYPE_PNG						(2)				// Png
#define DX_IMAGESAVETYPE_DDS						(3)				// Direct Draw Surface

// サウ?ド再生形態指定用定義
#define DX_PLAYTYPE_LOOPBIT							(0x0002)		// ?ープ再生ビット
#define DX_PLAYTYPE_BACKBIT							(0x0001)		// バックグ?ウ?ド再生ビット

#define DX_PLAYTYPE_NORMAL							(0)												// ノーマ?再生
#define DX_PLAYTYPE_BACK				  			( DX_PLAYTYPE_BACKBIT )							// バックグ?ウ?ド再生
#define DX_PLAYTYPE_LOOP							( DX_PLAYTYPE_LOOPBIT | DX_PLAYTYPE_BACKBIT )	// ?ープ再生

// 動画再生タイプ定義
#define DX_MOVIEPLAYTYPE_BCANCEL					(0)				// ボタ?キ??セ??り
#define DX_MOVIEPLAYTYPE_NORMAL						(1)				// ボタ?キ??セ?なし

// サウ?ドのタイプ
#define DX_SOUNDTYPE_NORMAL							(0)				// ノーマ?サウ?ド形式
#define DX_SOUNDTYPE_STREAMSTYLE					(1)				// スト?ー??サウ?ド形式

// サウ?ドデータタイプのマク?
#define DX_SOUNDDATATYPE_MEMNOPRESS					(0)				// 圧縮された全データは再生が始まる前にサウ?ド???にすべて解?され、格納される
#define DX_SOUNDDATATYPE_MEMNOPRESS_PLUS			(1)				// 圧縮された全データはシステ????に格納され、再生しながら??解?され、最終的にすべてサウ?ド???に格納される(その後システ????に存在する圧縮データは破棄される)
#define DX_SOUNDDATATYPE_MEMPRESS					(2)				// 圧縮された全データはシステ????に格納され、再生する?分だけ??解?しながらサウ?ド???に格納する(鳴らし終わると解?したデータは破棄されるので何度も解???が行われる)
#define DX_SOUNDDATATYPE_FILE						(3)				// 圧縮されたデータの再生する?分だけファイ?から??読み?み解?され、サウ?ド???に格納される(鳴らし終わると解?したデータは破棄されるので何度も解???が行われる)

// サウ?ドの取得する再生?間タイプ
#define DX_SOUNDCURRENTTIME_TYPE_LOW_LEVEL			(0)				// 低?ベ?APIを使用してより正確な再生?間を取得する
#define DX_SOUNDCURRENTTIME_TYPE_SOFT				(1)				// APIは使用せず、ソフトウェア???ベ?での再生?間を取得する

// 読み?み??のタイプ
#define DX_READSOUNDFUNCTION_PCM					(1 << 0)		// PCM の読み?み??
#define DX_READSOUNDFUNCTION_OGG					(1 << 1)		// Ogg Vorbis の読み?み??
#define DX_READSOUNDFUNCTION_OPUS					(1 << 2)		// Opus の読み?み??
#define DX_READSOUNDFUNCTION_DEFAULT_NUM			(3)				// 環境非依存の読み?み??タイプの?

// ３Ｄサウ?ド?バーブエフェクトのプ?セット
#define DX_REVERB_PRESET_DEFAULT					(0)				// デフォ?ト
#define DX_REVERB_PRESET_GENERIC					(1)				// 一般的な空間
#define DX_REVERB_PRESET_PADDEDCELL					(2)				// 精神病患者室(？)
#define DX_REVERB_PRESET_ROOM						(3)				// ?屋
#define DX_REVERB_PRESET_BATHROOM					(4)				// バス?ー?
#define DX_REVERB_PRESET_LIVINGROOM					(5)				// ?ビ?グ?ー?
#define DX_REVERB_PRESET_STONEROOM					(6)				// 石の?屋
#define DX_REVERB_PRESET_AUDITORIUM					(7)				// 講堂
#define DX_REVERB_PRESET_CONCERTHALL				(8)				// コ?サートホー?
#define DX_REVERB_PRESET_CAVE						(9)				// 洞?
#define DX_REVERB_PRESET_ARENA						(10)			// ?台
#define DX_REVERB_PRESET_HANGAR						(11)			// 格納庫
#define DX_REVERB_PRESET_CARPETEDHALLWAY			(12)			// カーペットが敷かれた玄関
#define DX_REVERB_PRESET_HALLWAY					(13)			// 玄関
#define DX_REVERB_PRESET_STONECORRIDOR				(14)			// 石の廊下
#define DX_REVERB_PRESET_ALLEY						(15)			// ?通り
#define DX_REVERB_PRESET_FOREST						(16)			// 森
#define DX_REVERB_PRESET_CITY						(17)			// 都市
#define DX_REVERB_PRESET_MOUNTAINS					(18)			// 山
#define DX_REVERB_PRESET_QUARRY						(19)			// 採石場
#define DX_REVERB_PRESET_PLAIN						(20)			// 平原
#define DX_REVERB_PRESET_PARKINGLOT					(21)			// ?車場
#define DX_REVERB_PRESET_SEWERPIPE					(22)			// 下?管
#define DX_REVERB_PRESET_UNDERWATER					(23)			// ?面下
#define DX_REVERB_PRESET_SMALLROOM					(24)			// 小?屋
#define DX_REVERB_PRESET_MEDIUMROOM					(25)			// ??屋
#define DX_REVERB_PRESET_LARGEROOM					(26)			// 大?屋
#define DX_REVERB_PRESET_MEDIUMHALL					(27)			// ?ホー?
#define DX_REVERB_PRESET_LARGEHALL					(28)			// 大ホー?
#define DX_REVERB_PRESET_PLATE						(29)			// 板

#define DX_REVERB_PRESET_NUM						(30)			// プ?セットの?

// マスク透過色?ード
#define DX_MASKTRANS_WHITE							(0)				// マスク画?の?い?分を透過色とする
#define DX_MASKTRANS_BLACK							(1)				// マスク画?の?い?分を透過色とする
#define DX_MASKTRANS_NONE							(2) 			// 透過色なし

// マスク画?チ??ネ?
#define DX_MASKGRAPH_CH_A							(0)				// ア?ファ
#define DX_MASKGRAPH_CH_R							(1)				// 赤
#define DX_MASKGRAPH_CH_G							(2)				// 緑
#define DX_MASKGRAPH_CH_B							(3)				// 青

// Ｚバッファ?き?み?ード
#define DX_ZWRITE_MASK								(0)				// ?き?めないようにマスクする
#define DX_ZWRITE_CLEAR								(1)				// ?き?めるようにマスクをク?アする

// 比較?ード
#define DX_CMP_NEVER								(1)				// FALSE
#define DX_CMP_LESS									(2)				// Src <  Dest		DrawAlpha <  TestParam
#define DX_CMP_EQUAL								(3)				// Src == Dest		DrawAlpha == TestParam
#define DX_CMP_LESSEQUAL							(4)				// Src <= Dest		DrawAlpha <= TestParam
#define DX_CMP_GREATER								(5)				// Src >  Dest		DrawAlpha >  TestParam
#define DX_CMP_NOTEQUAL								(6)				// Src != Dest		DrawAlpha != TestParam
#define DX_CMP_GREATEREQUAL							(7)				// Src >= Dest		DrawAlpha >= TestParam
#define DX_CMP_ALWAYS								(8)				// TRUE
#define DX_ZCMP_DEFAULT								( DX_CMP_LESSEQUAL )
#define DX_ZCMP_REVERSE								( DX_CMP_GREATEREQUAL )

// シェーディ?グ?ード
#define DX_SHADEMODE_FLAT							(1)				// D_D3DSHADE_FLAT
#define DX_SHADEMODE_GOURAUD						(2)				// D_D3DSHADE_GOURAUD

// フォグ?ード
#define DX_FOGMODE_NONE								(0)				// D_D3DFOG_NONE
#define DX_FOGMODE_EXP								(1)				// D_D3DFOG_EXP
#define DX_FOGMODE_EXP2								(2)				// D_D3DFOG_EXP2
#define DX_FOGMODE_LINEAR							(3)				// D_D3DFOG_LINEAR

// マテ?ア?タイプ
#define DX_MATERIAL_TYPE_NORMAL									(0)	// 標?マテ?ア?
#define DX_MATERIAL_TYPE_TOON									(1)	// トゥー???ダ??グ用マテ?ア?
#define DX_MATERIAL_TYPE_TOON_2									(2)	// トゥー???ダ??グ用マテ?ア?_タイプ２( MMD互換 )
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM				(3)	// マテ?ア?のスペキ??色の輝度の指定の範囲の値を 0.0f ～ 1.0f の値に正規化して?き?むマテ?ア?
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CLIP_UNORM			(4)	// DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM に『指定の値未?の場?は?き?む値を 0.0f にする』という??を加えたマテ?ア?
#define DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CMP_GREATEREQUAL	(5)	// マテ?ア?のスペキ??色の輝度が指定の?値以上 の場?は 1.0f を、未?の場?は 0.0f を?き?むマテ?ア?
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM					(6)	// マテ?ア?のスペキ??ハイ?イトの鮮明度の指定の範囲の値を 0.0f ～ 1.0f の値に正規化して?き?むマテ?ア?
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_CLIP_UNORM				(7)	// DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM に『指定の値未?の場?は?き?む値を 0.0f にする』という??を加えたマテ?ア?
#define DX_MATERIAL_TYPE_MAT_SPEC_POWER_CMP_GREATEREQUAL		(8)	// マテ?ア?のスペキ??ハイ?イトの鮮明度が指定の?値以上 の場?は 1.0f を、未?の場?は 0.0f を?き?むマテ?ア?
#define DX_MATERIAL_TYPE_NUM									(9)

// マテ?ア?ブ??ドタイプ
#define DX_MATERIAL_BLENDTYPE_TRANSLUCENT			(0)				// ア?ファ?成
#define DX_MATERIAL_BLENDTYPE_ADDITIVE				(1)				// 加算
#define DX_MATERIAL_BLENDTYPE_MODULATE				(2)				// 乗算
#define DX_MATERIAL_BLENDTYPE_NONE					(3)				// 無効

// テクスチ?アド?スタイプ
#define DX_TEXADDRESS_WRAP							(1)				// D_D3DTADDRESS_WRAP
#define DX_TEXADDRESS_MIRROR						(2)				// D_D3DTADDRESS_MIRROR
#define DX_TEXADDRESS_CLAMP							(3)				// D_D3DTADDRESS_CLAMP
#define DX_TEXADDRESS_BORDER						(4)				// D_D3DTADDRESS_BORDER
#define DX_TEXADDRESS_NUM							(5)				// テクスチ?アド?スタイプの?

// シェーダータイプ
#define DX_SHADERTYPE_VERTEX						(0)				// 頂点シェーダー
#define DX_SHADERTYPE_PIXEL							(1)				// ピクセ?シェーダー
#define DX_SHADERTYPE_GEOMETRY						(2)				// ジオ?ト?シェーダー
#define DX_SHADERTYPE_COMPUTE						(3)				// コ?ピ?ートシェーダー
#define DX_SHADERTYPE_DOMAIN						(4)				// ド?イ?シェーダー
#define DX_SHADERTYPE_HULL							(5)				// ハ?シェーダー

// 頂点データタイプ
#define DX_VERTEX_TYPE_NORMAL_3D					(0)				// VERTEX3D構造体形式
#define DX_VERTEX_TYPE_SHADER_3D					(1)				// VERTEX3DSHADER構造体形式
#define DX_VERTEX_TYPE_NUM							(2)

// イ?デックスデータタイプ
#define DX_INDEX_TYPE_16BIT							(0)				// 16bitイ?デックス
#define DX_INDEX_TYPE_32BIT							(1)				// 32bitイ?デックス

// ?デ?ファイ?読み?み?の物??算?ード
#define DX_LOADMODEL_PHYSICS_DISABLE				(1)				// 物??算を使用しない
#define DX_LOADMODEL_PHYSICS_LOADCALC				(0)				// 読み?み?に計算
#define DX_LOADMODEL_PHYSICS_REALTIME				(2)				// 実行?計算

// ?デ?ファイ?読み?み?の物??算無効名前?ードの?ード
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_ALWAYS	(0)						// 全てのファイ?に対して無効名?ードを適用する
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_DISABLEPHYSICSFILEONLY	(1)		// vmdファイ?名に NP を含めた「物??算無効」のファイ?に対してのみ無効名?ードを適用する( この場?、無効名?ードが適用されない?体については物??算が行われる )
#define DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_NUM	(2)

// PMD, PMX ファイ?読み?み?のアニ?ーシ??の FPS ?ード( 主に IK ?分の精度に影響します )
#define DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_30	(0)				// アニ?ーシ??を 30FPS で読み?む( IK?分の精度:低  データサイズ:小 )( デフォ?ト )
#define DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_60	(1)				// アニ?ーシ??を 60FPS で読み?む( IK?分の精度:?  データサイズ:大 )

// ?デ?の半透明要素が?る箇?に関する描画?ード
#define DX_SEMITRANSDRAWMODE_ALWAYS					(0)				// 半透明かどうか関係なく描画する
#define DX_SEMITRANSDRAWMODE_SEMITRANS_ONLY			(1)				// 半透明のもののみ描画する
#define DX_SEMITRANSDRAWMODE_NOT_SEMITRANS_ONLY		(2)				// 半透明ではないもののみ描画する

// キ?ーブマップの面番?
#define DX_CUBEMAP_FACE_POSITIVE_X					(0)
#define DX_CUBEMAP_FACE_NEGATIVE_X					(1)
#define DX_CUBEMAP_FACE_POSITIVE_Y					(2)
#define DX_CUBEMAP_FACE_NEGATIVE_Y					(3)
#define DX_CUBEMAP_FACE_POSITIVE_Z					(4)
#define DX_CUBEMAP_FACE_NEGATIVE_Z					(5)

// ポ?ゴ?描画タイプ
#define DX_PRIMTYPE_POINTLIST						(1)				// D_D3DPT_POINTLIST
#define DX_PRIMTYPE_LINELIST						(2)				// D_D3DPT_LINELIST
#define DX_PRIMTYPE_LINESTRIP						(3)				// D_D3DPT_LINESTRIP
#define DX_PRIMTYPE_TRIANGLELIST					(4)				// D_D3DPT_TRIANGLELIST
#define DX_PRIMTYPE_TRIANGLESTRIP					(5)				// D_D3DPT_TRIANGLESTRIP
#define DX_PRIMTYPE_TRIANGLEFAN						(6)				// D_D3DPT_TRIANGLEFAN
#define DX_PRIMTYPE_MIN								(1)
#define DX_PRIMTYPE_MAX								(6)

// ?イトタイプ
#define DX_LIGHTTYPE_D3DLIGHT_POINT					(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_D3DLIGHT_SPOT					(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_D3DLIGHT_DIRECTIONAL			(3)				// D_D3DLIGHT_DIRECTIONAL
#define DX_LIGHTTYPE_POINT							(1)				// D_D3DLIGHT_POINT
#define DX_LIGHTTYPE_SPOT							(2)				// D_D3DLIGHT_SPOT
#define DX_LIGHTTYPE_DIRECTIONAL					(3)				// D_D3DLIGHT_DIRECTIONAL

// Live2D のシェーダー
#define DX_LIVE2D_SHADER_SETUP_MASK_VERTEX								(0)				// マスク画?生成用頂点シェーダー
#define DX_LIVE2D_SHADER_SETUP_MASK_PIXEL								(1)				// マスク画?生成用ピクセ?シェーダー
#define DX_LIVE2D_SHADER_NORMAL_VERTEX									(2)				// 標?の頂点シェーダー
#define DX_LIVE2D_SHADER_NORMAL_VERTEX_MASKED							(3)				// 標?の頂点シェーダー + マスク画?
#define DX_LIVE2D_SHADER_NORMAL_PIXEL									(4)				// 標?のピクセ?シェーダー
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED							(5)				// 標?のピクセ?シェーダー + マスク画?
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED_INVERTED					(6)				// 標?のピクセ?シェーダー + マスク画?( マスク画?の値を反転して使用 )
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_PREMULALPHA						(7)				// 標?のピクセ?シェーダー + テクスチ?画?が乗算済みア?ファ
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED_PREMULALPHA				(8)				// 標?のピクセ?シェーダー + テクスチ?画?が乗算済みア?ファ + マスク画?
#define DX_LIVE2D_SHADER_NORMAL_PIXEL_MASKED_INVERTEX_PREMULALPHA		(9)				// 標?のピクセ?シェーダー + テクスチ?画?が乗算済みア?ファ + マスク画?( マスク画?の値を反転して使用 )
#define DX_LIVE2D_SHADER_NUM											(10)			// シェーダーの?

// グ?フィックイ?ージフォーマットの定義
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL4						(0)		// １６色パ?ットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_PAL8						(1)		// ２５６色パ?ットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL4				(2)		// αチ??ネ?つき１６色パ?ットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_PAL8				(3)		// αチ??ネ?つき２５６色パ?ットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL4			(4)		// αテストつき１６色パ?ットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_PAL8			(5)		// αテストつき２５６色パ?ットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB16					(6)		// １６ビットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_RGB32					(7)		// ３２ビットカ?ー標?
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB16				(8)		// αチ??ネ?付き１６ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHA_RGB32				(9)		// αチ??ネ?付き３２ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB16			(10)	// αテスト付き１６ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ALPHATEST_RGB32			(11)	// αテスト付き３２ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT1						(12)	// DXT1
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT2						(13)	// DXT2
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT3						(14)	// DXT3
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT4						(15)	// DXT4
#define DX_GRAPHICSIMAGE_FORMAT_3D_DXT5 					(16)	// DXT5
#define DX_GRAPHICSIMAGE_FORMAT_3D_BC7_UNORM 				(17)	// BC7 UNORM
#define DX_GRAPHICSIMAGE_FORMAT_3D_BC7_UNORM_SRGB			(18)	// BC7 UNORM SRGB
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM0				(19)	// プ?ットフォー?依存フォーマット０
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM1				(20)	// プ?ットフォー?依存フォーマット１
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM2				(21)	// プ?ットフォー?依存フォーマット２
#define DX_GRAPHICSIMAGE_FORMAT_3D_PLATFORM3				(22)	// プ?ットフォー?依存フォーマット３
#define DX_GRAPHICSIMAGE_FORMAT_3D_YUV	 					(23)	// ＹＵＶフォーマット
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_I16					(24)	// ARGB整?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F16					(25)	// ARGB?動小?点16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ABGR_F32					(26)	// ARGB?動小?点32ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I8					(27)	// １チ??ネ?整?8ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_I16					(28)	// １チ??ネ?整?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F16					(29)	// １チ??ネ??動少?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_ONE_F32					(30)	// １チ??ネ??動少?32ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I8					(31)	// ２チ??ネ?整?8ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_I16					(32)	// ２チ??ネ?整?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F16					(33)	// ２チ??ネ??動少?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_TWO_F32					(34)	// ２チ??ネ??動少?32ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB16			(35)	// 描画可能１６ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_RGB32			(36)	// 描画可能３２ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ALPHA_RGB32	(37)	// 描画可能α付き３２ビットカ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_I16		(38)	// 描画可能ARGB整?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F16		(39)	// 描画可能ARGB?動小?点16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ABGR_F32		(40)	// 描画可能ARGB?動小?点32ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I8			(41)	// 描画可能１チ??ネ?整?8ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_I16		(42)	// 描画可能１チ??ネ?整?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F16		(43)	// 描画可能１チ??ネ??動少?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_ONE_F32		(44)	// 描画可能１チ??ネ??動少?32ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I8			(45)	// 描画可能２チ??ネ?整?8ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_I16		(46)	// 描画可能２チ??ネ?整?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F16		(47)	// 描画可能２チ??ネ??動少?16ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_DRAWVALID_TWO_F32		(48)	// 描画可能２チ??ネ??動少?32ビット型カ?ー
#define DX_GRAPHICSIMAGE_FORMAT_3D_NUM						(49)
#define DX_GRAPHICSIMAGE_FORMAT_2D							(50)	// 標?( DirectDrawSurface の場?はこれのみ )
#define DX_GRAPHICSIMAGE_FORMAT_R5G6B5						(51)	// R5G6B5( MEMIMG 用 )
#define DX_GRAPHICSIMAGE_FORMAT_X8A8R5G6B5					(52)	// X8A8R5G6B5( MEMIMG 用 )
#define DX_GRAPHICSIMAGE_FORMAT_X8R8G8B8					(53)	// X8R8G8B8( MEMIMG 用 )
#define DX_GRAPHICSIMAGE_FORMAT_A8R8G8B8					(54)	// A8R8G8B8( MEMIMG 用 )

#define DX_GRAPHICSIMAGE_FORMAT_NUM							(55)	// グ?フィックフォーマットの種類の?

// 基本イ?ージのピクセ?フォーマット
#define DX_BASEIMAGE_FORMAT_NORMAL					(0)				// ?通の画?
#define DX_BASEIMAGE_FORMAT_DXT1					(1)				// ＤＸＴ１
#define DX_BASEIMAGE_FORMAT_DXT2					(2)				// ＤＸＴ２
#define DX_BASEIMAGE_FORMAT_DXT3					(3)				// ＤＸＴ３
#define DX_BASEIMAGE_FORMAT_DXT4					(4)				// ＤＸＴ４
#define DX_BASEIMAGE_FORMAT_DXT5					(5)				// ＤＸＴ５
#define DX_BASEIMAGE_FORMAT_BC7_UNORM				(6)				// ＢＣ７ UNORM
#define DX_BASEIMAGE_FORMAT_BC7_UNORM_SRGB			(7)				// ＢＣ７ UNORM SRGB
#define DX_BASEIMAGE_FORMAT_PLATFORM0				(8)				// プ?ットフォー?依存フォーマット０
#define DX_BASEIMAGE_FORMAT_PLATFORM1				(9)				// プ?ットフォー?依存フォーマット１
#define DX_BASEIMAGE_FORMAT_PLATFORM2				(10)			// プ?ットフォー?依存フォーマット２
#define DX_BASEIMAGE_FORMAT_PLATFORM3				(11)			// プ?ットフォー?依存フォーマット３
#define DX_BASEIMAGE_FORMAT_YUV						(12)			// ＹＵＶ

// ?ービーのサーフェス?ード
#define DX_MOVIESURFACE_NORMAL						(0)
#define DX_MOVIESURFACE_OVERLAY						(1)
#define DX_MOVIESURFACE_FULLCOLOR					(2)

// SetUserScreenImage で渡す画面のピクセ?フォーマット
#define DX_USER_SCREEN_PIXEL_FORMAT_R5G6B5			(0)				// R5G6B5( ＤＸ?イブ??の描画関?も使用できます( ソフトウェア??ダ??グ?ード?? ) )
#define DX_USER_SCREEN_PIXEL_FORMAT_R5G5B5X1		(1)				// R5G5B5X1( ＤＸ?イブ??の描画関?は使用できなくなります )
#define DX_USER_SCREEN_PIXEL_FORMAT_X1R5G5B5		(2)				// X1R5G5B5( ＤＸ?イブ??の描画関?は使用できなくなります )
#define DX_USER_SCREEN_PIXEL_FORMAT_X8B8G8R8		(3)				// X8B8G8R8( ＤＸ?イブ??の描画関?は使用できなくなります )
#define DX_USER_SCREEN_PIXEL_FORMAT_X8R8G8B8		(4)				// X8R8G8B8( ＤＸ?イブ??の描画関?も使用できます( ソフトウェア??ダ??グ?ード?? ) )
#define DX_USER_SCREEN_PIXEL_FORMAT_NUM				(5)

// ウイ?ドウの?行き位置設定タイプ
#define DX_WIN_ZTYPE_NORMAL							(0)				// 通常設定
#define DX_WIN_ZTYPE_BOTTOM							(1)				// 全てのウイ?ドウの一番?に配置する
#define DX_WIN_ZTYPE_TOP							(2)				// 全てのウイ?ドウの一番手前に配置する
#define DX_WIN_ZTYPE_TOPMOST						(3)				// 全てのウイ?ドウの一番手前に配置する( ウイ?ドウがアクティブではないときも最前面に表示される )

// ツー?バーのボタ?の状態
#define TOOLBUTTON_STATE_ENABLE						(0)				// 入力可能な状態
#define TOOLBUTTON_STATE_PRESSED					(1)				// ?されている状態
#define TOOLBUTTON_STATE_DISABLE					(2)				// 入力不可能な状態
#define TOOLBUTTON_STATE_PRESSED_DISABLE			(3)				// ?されている状態で、入力不可能な状態
#define TOOLBUTTON_STATE_NUM						(4)				// ツー?バーのボタ?の状態の?

// ツー?バーのボタ?のタイプ
#define TOOLBUTTON_TYPE_NORMAL						(0)				// ?通のボタ?
#define TOOLBUTTON_TYPE_CHECK						(1)				// ?すごとにＯＮ／ＯＦＦが切り替わるボタ?
#define TOOLBUTTON_TYPE_GROUP						(2)				// 別の TOOLBUTTON_TYPE_GROUP タイプのボタ?が?されるとＯＦＦになるタイプのボタ?(グ?ープの区切りは?間で)
#define TOOLBUTTON_TYPE_SEP							(3)				// ?間(ボタ?では?りません)
#define TOOLBUTTON_TYPE_NUM							(4)				// ツー?バーのボタ?のタイプの?

// 親?ニ?ーのＩＤ
#define MENUITEM_IDTOP								(0xabababab)

// ?ニ?ーに追加する際のタイプ
#define MENUITEM_ADD_CHILD							(0)				// 指定の?目の子として追加する
#define MENUITEM_ADD_INSERT							(1)				// 指定の?目と指定の?目より一つ上の?目の間に追加する

// ?ニ?ーの横に付くマークタイプ
#define MENUITEM_MARK_NONE							(0)				// 何も付け無い
#define MENUITEM_MARK_CHECK							(1)				// チェックマーク
#define MENUITEM_MARK_RADIO							(2)				// ?ジオボタ?

// 文?変換タイプ定義
#define DX_NUMMODE_10								(0)				// １０進?
#define DX_NUMMODE_16								(1)				// １６進?
#define DX_STRMODE_NOT0								(2)				// 空きを０で?めない
#define DX_STRMODE_USE0								(3)				// 空きを０で?める

// CheckHitKeyAll で調べる入力タイプ
#define DX_CHECKINPUT_KEY							(0x0001)		// キー入力を調べる
#define DX_CHECKINPUT_PAD							(0x0002)		// パッド入力を調べる
#define DX_CHECKINPUT_MOUSE							(0x0004)		// マウスボタ?入力を調べる
#define DX_CHECKINPUT_ALL							(DX_CHECKINPUT_KEY | DX_CHECKINPUT_PAD | DX_CHECKINPUT_MOUSE)	// すべての入力を調べる

// パッド入力取得パ??ータ
#define DX_INPUT_KEY_PAD1							(0x1001)		// キー入力とパッド１入力
#define DX_INPUT_PAD1								(0x0001)		// パッド１入力
#define DX_INPUT_PAD2								(0x0002)		// パッド２入力
#define DX_INPUT_PAD3								(0x0003)		// パッド３入力
#define DX_INPUT_PAD4								(0x0004)		// パッド４入力
#define DX_INPUT_PAD5								(0x0005)		// パッド５入力
#define DX_INPUT_PAD6								(0x0006)		// パッド６入力
#define DX_INPUT_PAD7								(0x0007)		// パッド７入力
#define DX_INPUT_PAD8								(0x0008)		// パッド８入力
#define DX_INPUT_PAD9								(0x0009)		// パッド９入力
#define DX_INPUT_PAD10								(0x000a)		// パッド１０入力
#define DX_INPUT_PAD11								(0x000b)		// パッド１１入力
#define DX_INPUT_PAD12								(0x000c)		// パッド１２入力
#define DX_INPUT_PAD13								(0x000d)		// パッド１３入力
#define DX_INPUT_PAD14								(0x000e)		// パッド１４入力
#define DX_INPUT_PAD15								(0x000f)		// パッド１５入力
#define DX_INPUT_PAD16								(0x0010)		// パッド１６入力
#define DX_INPUT_KEY								(0x1000)		// キー入力

// ゲー?コ?ト?ー?ータイプ
#define DX_PADTYPE_OTHER							(0)
#define DX_PADTYPE_XBOX_360							(1)
#define DX_PADTYPE_XBOX_ONE							(2)
#define DX_PADTYPE_DUAL_SHOCK_3						(3)
#define DX_PADTYPE_DUAL_SHOCK_4						(4)
#define DX_PADTYPE_DUAL_SENSE						(5)
#define DX_PADTYPE_SWITCH_JOY_CON_L					(6)
#define DX_PADTYPE_SWITCH_JOY_CON_R					(7)
#define DX_PADTYPE_SWITCH_PRO_CTRL					(8)
#define DX_PADTYPE_SWITCH_HORI_PAD					(9)
#define DX_PADTYPE_NUM								(10)

// タッチの同?接触?出対?最大?
#define TOUCHINPUTPOINT_MAX							(16)

// パッド入力定義
#define PAD_INPUT_DOWN								(0x00000001)	// ↓チェックマスク
#define PAD_INPUT_LEFT								(0x00000002)	// ←チェックマスク
#define PAD_INPUT_RIGHT								(0x00000004)	// →チェックマスク
#define PAD_INPUT_UP								(0x00000008)	// ↑チェックマスク
#define PAD_INPUT_A									(0x00000010)	// Ａボタ?チェックマスク
#define PAD_INPUT_B									(0x00000020)	// Ｂボタ?チェックマスク
#define PAD_INPUT_C									(0x00000040)	// Ｃボタ?チェックマスク
#define PAD_INPUT_X									(0x00000080)	// Ｘボタ?チェックマスク
#define PAD_INPUT_Y									(0x00000100)	// Ｙボタ?チェックマスク
#define PAD_INPUT_Z									(0x00000200)	// Ｚボタ?チェックマスク
#define PAD_INPUT_L									(0x00000400)	// Ｌボタ?チェックマスク
#define PAD_INPUT_R									(0x00000800)	// Ｒボタ?チェックマスク
#define PAD_INPUT_START								(0x00001000)	// ＳＴＡＲＴボタ?チェックマスク
#define PAD_INPUT_M									(0x00002000)	// Ｍボタ?チェックマスク
#define PAD_INPUT_D									(0x00004000)
#define PAD_INPUT_F									(0x00008000)
#define PAD_INPUT_G									(0x00010000)
#define PAD_INPUT_H									(0x00020000)
#define PAD_INPUT_I									(0x00040000)
#define PAD_INPUT_J									(0x00080000)
#define PAD_INPUT_K									(0x00100000)
#define PAD_INPUT_LL								(0x00200000)
#define PAD_INPUT_N									(0x00400000)
#define PAD_INPUT_O									(0x00800000)
#define PAD_INPUT_P									(0x01000000)
#define PAD_INPUT_RR								(0x02000000)
#define PAD_INPUT_S									(0x04000000)
#define PAD_INPUT_T									(0x08000000)
#define PAD_INPUT_U									(0x10000000)
#define PAD_INPUT_V									(0x20000000)
#define PAD_INPUT_W									(0x40000000)
#define PAD_INPUT_XX								(0x80000000)

#define PAD_INPUT_1									(0x00000010)
#define PAD_INPUT_2									(0x00000020)
#define PAD_INPUT_3									(0x00000040)
#define PAD_INPUT_4									(0x00000080)
#define PAD_INPUT_5									(0x00000100)
#define PAD_INPUT_6									(0x00000200)
#define PAD_INPUT_7									(0x00000400)
#define PAD_INPUT_8									(0x00000800)
#define PAD_INPUT_9									(0x00001000)
#define PAD_INPUT_10								(0x00002000)
#define PAD_INPUT_11								(0x00004000)
#define PAD_INPUT_12								(0x00008000)
#define PAD_INPUT_13								(0x00010000)
#define PAD_INPUT_14								(0x00020000)
#define PAD_INPUT_15								(0x00040000)
#define PAD_INPUT_16								(0x00080000)
#define PAD_INPUT_17								(0x00100000)
#define PAD_INPUT_18								(0x00200000)
#define PAD_INPUT_19								(0x00400000)
#define PAD_INPUT_20								(0x00800000)
#define PAD_INPUT_21								(0x01000000)
#define PAD_INPUT_22								(0x02000000)
#define PAD_INPUT_23								(0x04000000)
#define PAD_INPUT_24								(0x08000000)
#define PAD_INPUT_25								(0x10000000)
#define PAD_INPUT_26								(0x20000000)
#define PAD_INPUT_27								(0x40000000)
#define PAD_INPUT_28								(0x80000000)

// XInputボタ?入力定義
#define XINPUT_BUTTON_DPAD_UP						(0)				// デジタ?方向ボタ?上
#define XINPUT_BUTTON_DPAD_DOWN						(1)				// デジタ?方向ボタ?下
#define XINPUT_BUTTON_DPAD_LEFT						(2)				// デジタ?方向ボタ?左
#define XINPUT_BUTTON_DPAD_RIGHT					(3)				// デジタ?方向ボタ?右
#define XINPUT_BUTTON_START							(4)				// STARTボタ?
#define XINPUT_BUTTON_BACK							(5)				// BACKボタ?
#define XINPUT_BUTTON_LEFT_THUMB					(6)				// 左スティック?し?み
#define XINPUT_BUTTON_RIGHT_THUMB					(7)				// 右スティック?し?み
#define XINPUT_BUTTON_LEFT_SHOULDER					(8)				// LBボタ?
#define XINPUT_BUTTON_RIGHT_SHOULDER				(9)				// RBボタ?
#define XINPUT_BUTTON_A								(12)			// Aボタ?
#define XINPUT_BUTTON_B								(13)			// Bボタ?
#define XINPUT_BUTTON_X								(14)			// Xボタ?
#define XINPUT_BUTTON_Y								(15)			// Yボタ?

// マウス入力定義
#define MOUSE_INPUT_LEFT							(0x0001)		// マウス左ボタ?
#define MOUSE_INPUT_RIGHT							(0x0002)		// マウス右ボタ?
#define MOUSE_INPUT_MIDDLE							(0x0004)		// マウス??ボタ?
#define MOUSE_INPUT_1								(0x0001)		// マウス１ボタ?
#define MOUSE_INPUT_2								(0x0002)		// マウス２ボタ?
#define MOUSE_INPUT_3								(0x0004)		// マウス３ボタ?
#define MOUSE_INPUT_4								(0x0008)		// マウス４ボタ?
#define MOUSE_INPUT_5								(0x0010)		// マウス５ボタ?
#define MOUSE_INPUT_6								(0x0020)		// マウス６ボタ?
#define MOUSE_INPUT_7								(0x0040)		// マウス７ボタ?
#define MOUSE_INPUT_8								(0x0080)		// マウス８ボタ?

// マウスの?グ情報タイプ
#define MOUSE_INPUT_LOG_DOWN						(0)				// ボタ?を?した
#define MOUSE_INPUT_LOG_UP							(1)				// ボタ?を離した

// キー定義
#define KEY_INPUT_BACK								(0x0E)			// BackSpaceキー	D_DIK_BACK
#define KEY_INPUT_TAB								(0x0F)			// Tabキー			D_DIK_TAB
#define KEY_INPUT_RETURN							(0x1C)			// Enterキー		D_DIK_RETURN

#define KEY_INPUT_LSHIFT							(0x2A)			// 左Shiftキー		D_DIK_LSHIFT
#define KEY_INPUT_RSHIFT							(0x36)			// 右Shiftキー		D_DIK_RSHIFT
#define KEY_INPUT_LCONTROL							(0x1D)			// 左Ctrlキー		D_DIK_LCONTROL
#define KEY_INPUT_RCONTROL							(0x9D)			// 右Ctrlキー		D_DIK_RCONTROL
#define KEY_INPUT_ESCAPE							(0x01)			// Escキー			D_DIK_ESCAPE
#define KEY_INPUT_SPACE								(0x39)			// スペースキー		D_DIK_SPACE
#define KEY_INPUT_PGUP								(0xC9)			// PageUpキー		D_DIK_PGUP
#define KEY_INPUT_PGDN								(0xD1)			// PageDownキー		D_DIK_PGDN
#define KEY_INPUT_END								(0xCF)			// Endキー			D_DIK_END
#define KEY_INPUT_HOME								(0xC7)			// Homeキー			D_DIK_HOME
#define KEY_INPUT_LEFT								(0xCB)			// 左キー			D_DIK_LEFT
#define KEY_INPUT_UP								(0xC8)			// 上キー			D_DIK_UP
#define KEY_INPUT_RIGHT								(0xCD)			// 右キー			D_DIK_RIGHT
#define KEY_INPUT_DOWN								(0xD0)			// 下キー			D_DIK_DOWN
#define KEY_INPUT_INSERT							(0xD2)			// Insertキー		D_DIK_INSERT
#define KEY_INPUT_DELETE							(0xD3)			// Deleteキー		D_DIK_DELETE

#define KEY_INPUT_MINUS								(0x0C)			// －キー			D_DIK_MINUS
#define KEY_INPUT_YEN								(0x7D)			// ?キー			D_DIK_YEN
#define KEY_INPUT_PREVTRACK							(0x90)			// ＾キー			D_DIK_PREVTRACK
#define KEY_INPUT_PERIOD							(0x34)			// ．キー			D_DIK_PERIOD
#define KEY_INPUT_SLASH								(0x35)			// ／キー			D_DIK_SLASH
#define KEY_INPUT_LALT								(0x38)			// 左Altキー		D_DIK_LALT
#define KEY_INPUT_RALT								(0xB8)			// 右Altキー		D_DIK_RALT
#define KEY_INPUT_SCROLL							(0x46)			// ScrollLockキー	D_DIK_SCROLL
#define KEY_INPUT_SEMICOLON							(0x27)			// ；キー			D_DIK_SEMICOLON
#define KEY_INPUT_COLON								(0x92)			// ：キー			D_DIK_COLON
#define KEY_INPUT_LBRACKET							(0x1A)			// ［キー			D_DIK_LBRACKET
#define KEY_INPUT_RBRACKET							(0x1B)			// ］キー			D_DIK_RBRACKET
#define KEY_INPUT_AT								(0x91)			// ?キー			D_DIK_AT
#define KEY_INPUT_BACKSLASH							(0x2B)			// ＼キー			D_DIK_BACKSLASH
#define KEY_INPUT_COMMA								(0x33)			// ，キー			D_DIK_COMMA
#define KEY_INPUT_KANJI								(0x94)			// 漢?キー			D_DIK_KANJI
#define KEY_INPUT_CONVERT							(0x79)			// 変換キー			D_DIK_CONVERT
#define KEY_INPUT_NOCONVERT							(0x7B)			// 無変換キー		D_DIK_NOCONVERT
#define KEY_INPUT_KANA								(0x70)			// カナキー			D_DIK_KANA
#define KEY_INPUT_APPS								(0xDD)			// アプ?ケーシ???ニ?ーキー		D_DIK_APPS
#define KEY_INPUT_CAPSLOCK							(0x3A)			// CaspLockキー		D_DIK_CAPSLOCK
#define KEY_INPUT_SYSRQ								(0xB7)			// PrintScreenキー	D_DIK_SYSRQ
#define KEY_INPUT_PAUSE								(0xC5)			// PauseBreakキー	D_DIK_PAUSE
#define KEY_INPUT_LWIN								(0xDB)			// 左Winキー		D_DIK_LWIN
#define KEY_INPUT_RWIN								(0xDC)			// 右Winキー		D_DIK_RWIN

#define KEY_INPUT_NUMLOCK							(0x45)			// テ?キーNumLockキー		D_DIK_NUMLOCK
#define KEY_INPUT_NUMPAD0							(0x52)			// テ?キー０				D_DIK_NUMPAD0
#define KEY_INPUT_NUMPAD1							(0x4F)			// テ?キー１				D_DIK_NUMPAD1
#define KEY_INPUT_NUMPAD2							(0x50)			// テ?キー２				D_DIK_NUMPAD2
#define KEY_INPUT_NUMPAD3							(0x51)			// テ?キー３				D_DIK_NUMPAD3
#define KEY_INPUT_NUMPAD4							(0x4B)			// テ?キー４				D_DIK_NUMPAD4
#define KEY_INPUT_NUMPAD5							(0x4C)			// テ?キー５				D_DIK_NUMPAD5
#define KEY_INPUT_NUMPAD6							(0x4D)			// テ?キー６				D_DIK_NUMPAD6
#define KEY_INPUT_NUMPAD7							(0x47)			// テ?キー７				D_DIK_NUMPAD7
#define KEY_INPUT_NUMPAD8							(0x48)			// テ?キー８				D_DIK_NUMPAD8
#define KEY_INPUT_NUMPAD9							(0x49)			// テ?キー９				D_DIK_NUMPAD9
#define KEY_INPUT_MULTIPLY							(0x37)			// テ?キー?キー			D_DIK_MULTIPLY
#define KEY_INPUT_ADD								(0x4E)			// テ?キー＋キー			D_DIK_ADD
#define KEY_INPUT_SUBTRACT							(0x4A)			// テ?キー－キー			D_DIK_SUBTRACT
#define KEY_INPUT_DECIMAL							(0x53)			// テ?キー．キー			D_DIK_DECIMAL
#define KEY_INPUT_DIVIDE							(0xB5)			// テ?キー／キー			D_DIK_DIVIDE
#define KEY_INPUT_NUMPADENTER						(0x9C)			// テ?キーのエ?ターキー	D_DIK_NUMPADENTER

#define KEY_INPUT_F1								(0x3B)			// Ｆ１キー			D_DIK_F1
#define KEY_INPUT_F2								(0x3C)			// Ｆ２キー			D_DIK_F2
#define KEY_INPUT_F3								(0x3D)			// Ｆ３キー			D_DIK_F3
#define KEY_INPUT_F4								(0x3E)			// Ｆ４キー			D_DIK_F4
#define KEY_INPUT_F5								(0x3F)			// Ｆ５キー			D_DIK_F5
#define KEY_INPUT_F6								(0x40)			// Ｆ６キー			D_DIK_F6
#define KEY_INPUT_F7								(0x41)			// Ｆ７キー			D_DIK_F7
#define KEY_INPUT_F8								(0x42)			// Ｆ８キー			D_DIK_F8
#define KEY_INPUT_F9								(0x43)			// Ｆ９キー			D_DIK_F9
#define KEY_INPUT_F10								(0x44)			// Ｆ１０キー		D_DIK_F10
#define KEY_INPUT_F11								(0x57)			// Ｆ１１キー		D_DIK_F11
#define KEY_INPUT_F12								(0x58)			// Ｆ１２キー		D_DIK_F12

#define KEY_INPUT_A									(0x1E)			// Ａキー			D_DIK_A
#define KEY_INPUT_B									(0x30)			// Ｂキー			D_DIK_B
#define KEY_INPUT_C									(0x2E)			// Ｃキー			D_DIK_C
#define KEY_INPUT_D									(0x20)			// Ｄキー			D_DIK_D
#define KEY_INPUT_E									(0x12)			// Ｅキー			D_DIK_E
#define KEY_INPUT_F									(0x21)			// Ｆキー			D_DIK_F
#define KEY_INPUT_G									(0x22)			// Ｇキー			D_DIK_G
#define KEY_INPUT_H									(0x23)			// Ｈキー			D_DIK_H
#define KEY_INPUT_I									(0x17)			// Ｉキー			D_DIK_I
#define KEY_INPUT_J									(0x24)			// Ｊキー			D_DIK_J
#define KEY_INPUT_K									(0x25)			// Ｋキー			D_DIK_K
#define KEY_INPUT_L									(0x26)			// Ｌキー			D_DIK_L
#define KEY_INPUT_M									(0x32)			// Ｍキー			D_DIK_M
#define KEY_INPUT_N									(0x31)			// Ｎキー			D_DIK_N
#define KEY_INPUT_O									(0x18)			// Ｏキー			D_DIK_O
#define KEY_INPUT_P									(0x19)			// Ｐキー			D_DIK_P
#define KEY_INPUT_Q									(0x10)			// Ｑキー			D_DIK_Q
#define KEY_INPUT_R									(0x13)			// Ｒキー			D_DIK_R
#define KEY_INPUT_S									(0x1F)			// Ｓキー			D_DIK_S
#define KEY_INPUT_T									(0x14)			// Ｔキー			D_DIK_T
#define KEY_INPUT_U									(0x16)			// Ｕキー			D_DIK_U
#define KEY_INPUT_V									(0x2F)			// Ｖキー			D_DIK_V
#define KEY_INPUT_W									(0x11)			// Ｗキー			D_DIK_W
#define KEY_INPUT_X									(0x2D)			// Ｘキー			D_DIK_X
#define KEY_INPUT_Y									(0x15)			// Ｙキー			D_DIK_Y
#define KEY_INPUT_Z									(0x2C)			// Ｚキー			D_DIK_Z

#define KEY_INPUT_0 								(0x0B)			// ０キー			D_DIK_0
#define KEY_INPUT_1									(0x02)			// １キー			D_DIK_1
#define KEY_INPUT_2									(0x03)			// ２キー			D_DIK_2
#define KEY_INPUT_3									(0x04)			// ３キー			D_DIK_3
#define KEY_INPUT_4									(0x05)			// ４キー			D_DIK_4
#define KEY_INPUT_5									(0x06)			// ５キー			D_DIK_5
#define KEY_INPUT_6									(0x07)			// ６キー			D_DIK_6
#define KEY_INPUT_7									(0x08)			// ７キー			D_DIK_7
#define KEY_INPUT_8									(0x09)			// ８キー			D_DIK_8
#define KEY_INPUT_9									(0x0A)			// ９キー			D_DIK_9

// アスキーコ?ト?ー?キーコード
#define CTRL_CODE_BS								(0x08)			// バックスペース
#define CTRL_CODE_TAB								(0x09)			// タブ
#define CTRL_CODE_CR								(0x0d)			// 改行
#define CTRL_CODE_DEL								(0x10)			// ＤＥＬキー

#define CTRL_CODE_COPY								(0x03)			// コピー
#define CTRL_CODE_PASTE								(0x16)			// ペースト
#define CTRL_CODE_CUT								(0x18)			// カット
#define CTRL_CODE_ALL								(0x01)			// 全て選択

#define CTRL_CODE_LEFT								(0x1d)			// ←キー
#define CTRL_CODE_RIGHT								(0x1c)			// →キー
#define CTRL_CODE_UP								(0x1e)			// ↑キー
#define CTRL_CODE_DOWN								(0x1f)			// ↓キー

#define CTRL_CODE_HOME								(0x1a)			// ＨＯＭＥボタ?
#define CTRL_CODE_END								(0x19)			// ＥＮＤボタ?
#define CTRL_CODE_PAGE_UP							(0x17)			// ＰＡＧＥ ＵＰ
#define CTRL_CODE_PAGE_DOWN							(0x15)			// ＰＡＧＥ ＤＯＷＮ

#define CTRL_CODE_ESC								(0x1b)			// ＥＳＣキー
#define CTRL_CODE_CMP								(0x20)			// 制御コード敷?値

// SetKeyInputStringColor2 に渡す色変更対象を指定するための識別子
#define DX_KEYINPSTRCOLOR_NORMAL_STR					(0)			// 入力文?列の色
#define DX_KEYINPSTRCOLOR_NORMAL_STR_EDGE				(1)			// 入力文?列の?の色
#define DX_KEYINPSTRCOLOR_NORMAL_CURSOR					(2)			// ＩＭＥ非使用?のカーソ?の色
#define DX_KEYINPSTRCOLOR_SELECT_STR					(3)			// 入力文?列の選択?分( SHIFTキーを?しながら左右キーで選択 )の色
#define DX_KEYINPSTRCOLOR_SELECT_STR_EDGE				(4)			// 入力文?列の選択?分( SHIFTキーを?しながら左右キーで選択 )の?の色
#define DX_KEYINPSTRCOLOR_SELECT_STR_BACK				(5)			// 入力文?列の選択?分( SHIFTキーを?しながら左右キーで選択 )の周りの色
#define DX_KEYINPSTRCOLOR_IME_STR						(6)			// ＩＭＥ使用?の入力文?列の色
#define DX_KEYINPSTRCOLOR_IME_STR_EDGE					(7)			// ＩＭＥ使用?の入力文?列の?の色
#define DX_KEYINPSTRCOLOR_IME_STR_BACK					(8)			// ＩＭＥ使用?の入力文?列の周りの色
#define DX_KEYINPSTRCOLOR_IME_CURSOR					(9)			// ＩＭＥ使用?のカーソ?の色
#define DX_KEYINPSTRCOLOR_IME_LINE						(10)		// ＩＭＥ使用?の変換文?列の下線の色
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR				(11)		// ＩＭＥ使用?の選択対象の変換候補文?列の色
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_EDGE			(12)		// ＩＭＥ使用?の選択対象の変換候補文?列の?の色
#define DX_KEYINPSTRCOLOR_IME_SELECT_STR_BACK			(13)		// ＩＭＥ使用?の選択対象の変換候補文?列の周りの色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR				(14)		// ＩＭＥ使用?の変換候補ウイ?ドウ内の文?列の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_STR_EDGE			(15)		// ＩＭＥ使用?の変換候補ウイ?ドウ内の文?列の?の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR		(16)		// ＩＭＥ使用?の変換候補ウイ?ドウ内で選択している文?列の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_EDGE	(17)		// ＩＭＥ使用?の変換候補ウイ?ドウ内で選択している文?列の?の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_SELECT_STR_BACK	(18)		// ＩＭＥ使用?の変換候補ウイ?ドウ内で選択している文?列の周りの色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_EDGE				(19)		// ＩＭＥ使用?の変換候補ウイ?ドウの?の色
#define DX_KEYINPSTRCOLOR_IME_CONV_WIN_BACK				(20)		// ＩＭＥ使用?の変換候補ウイ?ドウの下地の色
#define DX_KEYINPSTRCOLOR_IME_MODE_STR					(21)		// ＩＭＥ使用?の入力?ード文?列の色(『全角ひらがな』?)
#define DX_KEYINPSTRCOLOR_IME_MODE_STR_EDGE				(22)		// ＩＭＥ使用?の入力?ード文?列の?の色
#define DX_KEYINPSTRCOLOR_NUM							(23)

// 文?列入力??の入力文??が限界に達している状態で、文?列の?端?分で入力が行われた場?の???ード
#define DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE				(0)			// 文??が限界に達している状態で文?列の?端で文?が入力された場?は、最後の文?を上?き( デフォ?ト )
#define DX_KEYINPSTR_ENDCHARAMODE_NOTCHANGE				(1)			// 文??が限界に達している状態で文?列の?端で文?が入力された場?は、何も変化しない

// タッチパネ?データのツー?タイプ
#define DX_TOUCHINPUT_TOOL_TYPE_UNKNOWN					(0)			// 不明
#define DX_TOUCHINPUT_TOOL_TYPE_FINGER					(1)			// 指
#define DX_TOUCHINPUT_TOOL_TYPE_STYLUS					(2)			// スタイ?スペ?
#define DX_TOUCHINPUT_TOOL_TYPE_MOUSE					(3)			// マウス
#define DX_TOUCHINPUT_TOOL_TYPE_ERASER					(4)			// 消しゴ?

// フ?スク?ー?解?度?ード定義
#define DX_FSRESOLUTIONMODE_BORDERLESS_WINDOW		(0)				// 仮想フ?スク?ー??ード( 実際にはフ?スク?ー??ードにせず、ボーダー?スウィ?ドウをデスクトップ画面いっぱいに拡大して仮想的にフ?スク?ー??ードを実現する?ード )
#define DX_FSRESOLUTIONMODE_DESKTOP					(1)				// ?ニターの画面?ードをデスクトップ画面と同じにしてＤＸ?イブ??画面を拡大して表示する?ード
#define DX_FSRESOLUTIONMODE_NATIVE					(2)				// ?ニターの解?度をＤＸ?イブ??画面の解?度に?わせる?ード
#define DX_FSRESOLUTIONMODE_MAXIMUM					(3)				// ?ニターの解?度を最大にしてＤＸ?イブ??画面を拡大して表示する?ード

// フ?スク?ー?拡大?ード定義
#define DX_FSSCALINGMODE_BILINEAR					(0)				// バイ?ニア?ード( ピクセ?が滲んでピクセ?とピクセ?の区切りがはっきりしない )
#define DX_FSSCALINGMODE_NEAREST					(1)				// 最近点?ード( ピクセ?が四角くくっきり表示される )

// SetGraphMode 戻り値定義
#define DX_CHANGESCREEN_OK							(0)				// 画面変更は成功した
#define DX_CHANGESCREEN_RETURN						(-1)			// 画面の変更は失敗し、元の画面?ードに戻された
#define DX_CHANGESCREEN_DEFAULT						(-2)			// 画面の変更は失敗しデフォ?トの画面?ードに変更された
#define DX_CHANGESCREEN_REFRESHNORMAL				(-3)			// 画面の変更は成功したが、?フ?ッシ??ートの変更は失敗した

// スト?ー?データ読み?み??コード簡略化関連
#define STTELL( st )								((st)->ReadShred.Tell( (st)->DataPoint ))
#define STSEEK( st, pos, type )						((st)->ReadShred.Seek( (st)->DataPoint, (pos), (type) ))
#define STREAD( buf, length, num, st )				((st)->ReadShred.Read( (buf), (length), (num), (st)->DataPoint ))
#define STWRITE( buf, length, num, st )				((st)->ReadShred.Write( (buf), (length), (num), (st)->DataPoint ))
#define STEOF( st )									((st)->ReadShred.Eof( (st)->DataPoint ))
#define STCLOSE( st )								((st)->ReadShred.Close( (st)->DataPoint ))

// スト?ー?データ制御のシークタイプ定義
#define STREAM_SEEKTYPE_SET							(SEEK_SET)
#define STREAM_SEEKTYPE_END							(SEEK_END)
#define STREAM_SEEKTYPE_CUR							(SEEK_CUR)

// グ?フィック?ード?のイ?ージタイプ
#define LOADIMAGE_TYPE_FILE							(0)				// イ?ージはファイ?で?る
#define LOADIMAGE_TYPE_MEM							(1)				// イ?ージは???で?る
#define LOADIMAGE_TYPE_NONE							(-1)			// イ?ージは無い



#ifndef DX_NON_NETWORK

// HTTP エ?ー
#define HTTP_ERR_SERVER								(0)				// サーバーエ?ー
#define HTTP_ERR_NOTFOUND							(1)				// ファイ?が見つからなかった
#define HTTP_ERR_MEMORY								(2)				// ???確保の失敗
#define HTTP_ERR_LOST								(3)				// 途?で切断された
#define HTTP_ERR_NONE								(-1)			// エ?ーは報?されていない

// HTTP ??の?果
#define HTTP_RES_COMPLETE							(0)				// ??完了
#define HTTP_RES_STOP								(1)				// ???止
#define HTTP_RES_ERROR								(2)				// エ?ー終了
#define HTTP_RES_NOW								(-1)			// 現在進行?

#endif // DX_NON_NETWORK

#define DX_DEFINE_END

// データ型定義-------------------------------------------------------------------

#if defined( __cplusplus ) && defined( DX_COMPILE_TYPE_C_LANGUAGE )
extern "C" {
#endif

// WAVEFORMATEX の定義
#ifndef _WAVEFORMATEX_
#define _WAVEFORMATEX_

typedef struct tWAVEFORMATEX
{
	WORD					wFormatTag ;					// フォーマット( WAVE_FORMAT_PCM( 値は 1 ) ? )
	WORD					nChannels ;						// チ??ネ??
	DWORD					nSamplesPerSec ;				// １秒辺りのサ?プ??
	DWORD					nAvgBytesPerSec ;				// １秒辺りのバイト?( PCMの場? nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;					// 全チ??ネ?の１サ?プ?を?わせたバイト?( wBitsPerSample / 8 * nChannels )
	WORD					wBitsPerSample ;				// １サ?プ?辺りのビット?
	WORD					cbSize ;						// 拡張情報のバイト?( 拡張情報が無い場?は 0 )
} WAVEFORMATEX, *PWAVEFORMATEX, NEAR *NPWAVEFORMATEX, FAR *LPWAVEFORMATEX ;

#endif // _WAVEFORMATEX_

// WAVEFORMAT の定義
#ifndef WAVE_FORMAT_PCM

typedef struct waveformat_tag
{
	WORD					wFormatTag ;					// フォーマット( WAVE_FORMAT_PCM( 値は 1 ) ? )
	WORD					nChannels ;						// チ??ネ??
	DWORD					nSamplesPerSec ;				// １秒辺りのサ?プ??
	DWORD					nAvgBytesPerSec ;				// １秒辺りのバイト?( PCMの場? nSamplesPerSec * nBlockAlign )
	WORD					nBlockAlign ;					// 全チ??ネ?の１サ?プ?を?わせたバイト?( wBitsPerSample / 8 * nChannels )
} WAVEFORMAT, *PWAVEFORMAT, NEAR *NPWAVEFORMAT, FAR *LPWAVEFORMAT ;

#define WAVE_FORMAT_PCM		1

#endif // WAVE_FORMAT_PCM

#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_STRUCT_START

// ＩＭＥ入力文?列の描画に必要な情報の内の文節情報
typedef struct tagIMEINPUTCLAUSEDATA
{
	int						Position ;						// 何文?目から
	int						Length ;						// 何文?か
} IMEINPUTCLAUSEDATA, *LPIMEINPUTCLAUSEDATA ;

// ＩＭＥ入力文?列の描画に必要な情報
typedef struct tagIMEINPUTDATA
{
	const TCHAR *				InputString ;				// 入力?の文?列

	int							CursorPosition ;			// カーソ?の入力文?列?の位置(バイト単位)

	const IMEINPUTCLAUSEDATA *	ClauseData ;				// 文節情報
	int							ClauseNum ;					// 文節情報の?
	int							SelectClause ;				// 選択?の分節( -1 の場?はどの文節にも属していない( ?尾にカーソ?が?る ) )

	int							CandidateNum ;				// 変換候補の?( 0の場?は変換?ではない )
	const TCHAR **				CandidateList ;				// 変換候補文?列?スト( 例：?番目の候補を描画する場?  DrawString( 0, 0, data.CandidateList[ n ], GetColor(255,255,255) ); )
	int							SelectCandidate ;			// 選択?の変換候補

	int							ConvertFlag ;				// 文?変換?かどうか( TRUE:変換?  FALSE:変換?ではない( 文?単位でカーソ?が移動できる状態 ) )
} IMEINPUTDATA, *LPIMEINPUTDATA ;

// 描画文?列一文?の情報
typedef struct tagDRAWCHARINFO
{
	TCHAR					Char[ 14 ] ;					// 文?
	WORD					Bytes ;							// 文?のバイト?
	float					DrawX, DrawY ;					// 描画位置
	float					SizeX, SizeY ;					// 描画サイズ
} DRAWCHARINFO, *LPDRAWCHARINFO ;

// 画面?ード情報データ型
typedef struct tagDISPLAYMODEDATA
{
	int						Width ;							// ?平解?度
	int						Height ;						// ?直解?度
	int						ColorBitDepth ;					// 色ビット深度
	int						RefreshRate ;					// ?フ?ッシ??ート( -1 の場?は規定値 )
} DISPLAYMODEDATA, *LPDISPLAYMODEDATA ;

// タイ?データ型
typedef struct tagDATEDATA
{
	int						Year ;							// 年
	int						Mon ;							// ?
	int						Day ;							// 日
	int						Hour ;							// ?間
	int						Min ;							// 分
	int						Sec ;							// 秒
} DATEDATA, *LPDATEDATA ;

// ファイ?情報構造体
typedef struct tagFILEINFO
{
	TCHAR					Name[ 260 ] ;					// オブジェクト名
	int						DirFlag ;						// ディ?クト?かどうか( TRUE:ディ?クト?  FALSE:ファイ? )
	LONGLONG				Size ;							// サイズ
	DATEDATA				CreationTime ;					// 作成日?
	DATEDATA				LastWriteTime ;					// 最終更新日?
} FILEINFO, *LPFILEINFO ;

// ファイ?情報構造体（ wchar_t 版 ）
typedef struct tagFILEINFOW
{
	wchar_t					Name[ 260 ] ;					// オブジェクト名
	int						DirFlag ;						// ディ?クト?かどうか( TRUE:ディ?クト?  FALSE:ファイ? )
	LONGLONG				Size ;							// サイズ
	DATEDATA				CreationTime ;					// 作成日?
	DATEDATA				LastWriteTime ;					// 最終更新日?
} FILEINFOW, *LPFILEINFOW ;

// 行列構造体
typedef struct tagMATRIX
{
	float					m[4][4] ;
} MATRIX, *LPMATRIX ;

typedef struct tagMATRIX_D
{
	double					m[4][4] ;
} MATRIX_D, *LPMATRIX_D ;

// ベクト?データ型
typedef struct tagVECTOR
{
	float					x, y, z ;
} VECTOR, *LPVECTOR, FLOAT3, *LPFLOAT3 ;

typedef struct tagVECTOR_D
{
	double					x, y, z ;
} VECTOR_D, *LPVECTOR_D, DOUBLE3, *LPDOUBLE3 ;

// FLOAT2個データ型
typedef struct tagFLOAT2
{
	float					u, v ;
} FLOAT2 ;

// float 型のカ?ー値
typedef struct tagCOLOR_F
{
	float					r, g, b, a ;
} COLOR_F, *LPCOLOR_F ;

// unsigned char 型のカ?ー値
typedef struct tagCOLOR_U8
{
	BYTE					b, g, r, a ;
} COLOR_U8 ;

// FLOAT4個データ型
typedef struct tagFLOAT4
{
	float					x, y, z, w ;
} FLOAT4, *LPFLOAT4 ;

// DOUBLE4個データ型
typedef struct tagDOUBLE4
{
	double					x, y, z, w ;
} DOUBLE4, *LPDOUBLE4 ;

// INT4個データ型
typedef struct tagINT4
{
	int						x, y, z, w ;
} INT4 ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// ２Ｄ描画に使用する頂点データ型(DrawPrimitive2D用)
typedef struct tagVERTEX2D
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	float					u, v ;
} VERTEX2D, *LPVERTEX2D ; 

// ２Ｄ描画に使用する頂点データ型(DrawPrimitive2DToShader用)
typedef struct tagVERTEX2DSHADER
{
	VECTOR					pos ;
	float					rhw ;
	COLOR_U8				dif ;
	COLOR_U8				spc ;
	float					u, v ;
	float					su, sv ;
} VERTEX2DSHADER, *LPVERTEX2DSHADER ; 

// ２Ｄ描画に使用する頂点データ型(公開用)
typedef struct tagVERTEX
{
	float					x, y ;
	float					u, v ;
	unsigned char			b, g, r, a ;
} VERTEX ;

// ３Ｄ描画に使用する頂点データ型( ?バージ??のもの )
typedef struct tagVERTEX_3D
{
	VECTOR					pos ;
	unsigned char			b, g, r, a ;
	float					u, v ;
} VERTEX_3D, *LPVERTEX_3D ;

// ３Ｄ描画に使用する頂点データ型
typedef struct tagVERTEX3D
{
	VECTOR					pos ;							// 座標
	VECTOR					norm ;							// 法線
	COLOR_U8				dif ;							// ディフ?ーズカ?ー
	COLOR_U8				spc ;							// スペキ??カ?ー
	float					u, v ;							// テクスチ?座標
	float					su, sv ;						// 補?テクスチ?座標
} VERTEX3D, *LPVERTEX3D ;

// ３Ｄ描画に使用する頂点データ型( DrawPrimitive3DToShader用 )
// ?意…??バ変?に追加が?るかもしれませんので、宣言?の?期化( VERTEX3DSHADER Vertex = { 0.0f, 0.0f, ... というようなもの )はしない方が良いです
typedef struct tagVERTEX3DSHADER
{
	VECTOR					pos ;							// 座標
	FLOAT4					spos ;							// 補?座標
	VECTOR					norm ;							// 法線
	VECTOR					tan ;							// 接線
	VECTOR					binorm ;						// 従法線
	COLOR_U8				dif ;							// ディフ?ーズカ?ー
	COLOR_U8				spc ;							// スペキ??カ?ー
	float					u, v ;							// テクスチ?座標
	float					su, sv ;						// 補?テクスチ?座標
} VERTEX3DSHADER, *LPVERTEX3DSHADER ;

// ?イトパ??ータ
typedef struct tagLIGHTPARAM
{
	int						LightType ;						// ?イトのタイプ( DX_LIGHTTYPE_D3DLIGHT_POINT ? )
	COLOR_F					Diffuse ;						// ディフ?ーズカ?ー
	COLOR_F					Specular ;						// スペキ??カ?ー
	COLOR_F					Ambient ;						// ア?ビエ?ト色
	VECTOR					Position ;						// 位置
	VECTOR					Direction ;						// 方向
	float					Range ;							// 有効?離
	float					Falloff ;						// フォー?オフ 1.0f にしておくのが好ましい
	float					Attenuation0 ;					// ?離による減?係?０
	float					Attenuation1 ;					// ?離による減?係?１
	float					Attenuation2 ;					// ?離による減?係?２
	float					Theta ;							// スポット?イトの内?コー?の照明角度( ?ジア? )
	float					Phi ;							// スポット?イトの外?コー?の照明角度
} LIGHTPARAM ;

// マテ?ア?パ??ータ
typedef struct tagMATERIALPARAM
{
	COLOR_F					Diffuse ;						// ディフ?ーズカ?ー
	COLOR_F					Ambient ;						// ア?ビエ?トカ?ー
	COLOR_F					Specular ;						// スペキ??カ?ー
	COLOR_F					Emissive ;						// エミッシブカ?ー
	float					Power ;							// スペキ??ハイ?イトの鮮明度
} MATERIALPARAM ;

#endif // DX_NOTUSE_DRAWFUNCTION

// ?イ?ヒットチェック?果格納用構造体
typedef struct tagHITRESULT_LINE
{
	int						HitFlag ;						// ?たったかどうか( 1:?たった  0:?たらなかった )
	VECTOR					Position ;						// ?たった座標
} HITRESULT_LINE ;

// ?イ?ヒットチェック?果格納用構造体
typedef struct tagHITRESULT_LINE_D
{
	int						HitFlag ;						// ?たったかどうか( 1:?たった  0:?たらなかった )
	VECTOR_D				Position ;						// ?たった座標
} HITRESULT_LINE_D ;

// 関? Segment_Segment_Analyse の?果を受け取る為の構造体
typedef struct tagSEGMENT_SEGMENT_RESULT
{
	float					SegA_SegB_MinDist_Square ;		// 線分Ａと線分Ｂが最も接近する座標間の?離の二乗

	float					SegA_MinDist_Pos1_Pos2_t ;		// 線分Ａと線分Ｂに最も接近する座標の線分Ａの t ( 0.0f ～ 1.0f 、最近点座標 = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	float					SegB_MinDist_Pos1_Pos2_t ;		// 線分Ｂが線分Ａに最も接近する座標の線分Ｂの t ( 0.0f ～ 1.0f 、最近点座標 = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR					SegA_MinDist_Pos ;				// 線分Ａが線分Ｂに最も接近する線分Ａ上の座標
	VECTOR					SegB_MinDist_Pos ;				// 線分Ｂが線分Ａに最も接近する線分Ｂ上の座標
} SEGMENT_SEGMENT_RESULT ;

// 関? Segment_Segment_Analyse の?果を受け取る為の構造体
typedef struct tagSEGMENT_SEGMENT_RESULT_D
{
	double					SegA_SegB_MinDist_Square ;		// 線分Ａと線分Ｂが最も接近する座標間の?離の二乗

	double					SegA_MinDist_Pos1_Pos2_t ;		// 線分Ａと線分Ｂに最も接近する座標の線分Ａの t ( 0.0 ～ 1.0 、最近点座標 = ( SegAPos2 - SegAPos1 ) * t + SegAPos1 )
	double					SegB_MinDist_Pos1_Pos2_t ;		// 線分Ｂが線分Ａに最も接近する座標の線分Ｂの t ( 0.0 ～ 1.0 、最近点座標 = ( SegBPos2 - SegBPos1 ) * t + SegBPos1 )

	VECTOR_D				SegA_MinDist_Pos ;				// 線分Ａが線分Ｂに最も接近する線分Ａ上の座標
	VECTOR_D				SegB_MinDist_Pos ;				// 線分Ｂが線分Ａに最も接近する線分Ｂ上の座標
} SEGMENT_SEGMENT_RESULT_D ;

// 関? Segment_Point_Analyse の?果を受け取る為の構造体
typedef struct tagSEGMENT_POINT_RESULT
{
	float					Seg_Point_MinDist_Square ;		// 線分と点が最も接近する座標間の?離の二乗
	float					Seg_MinDist_Pos1_Pos2_t ;		// 線分が点に最も接近する座標の線分の t ( 0.0f ～ 1.0f 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;				// 線分が点に最も接近する線分上の座標
} SEGMENT_POINT_RESULT ;

// 関? Segment_Point_Analyse の?果を受け取る為の構造体
typedef struct tagSEGMENT_POINT_RESULT_D
{
	double					Seg_Point_MinDist_Square ;		// 線分と点が最も接近する座標間の?離の二乗
	double					Seg_MinDist_Pos1_Pos2_t ;		// 線分が点に最も接近する座標の線分の t ( 0.0 ～ 1.0 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;				// 線分が点に最も接近する線分上の座標
} SEGMENT_POINT_RESULT_D ;

// 関? Segment_Triangle_Analyse の?果を受け取る為の構造体
typedef struct tagSEGMENT_TRIANGLE_RESULT
{
	float					Seg_Tri_MinDist_Square ;		// 線分と三角形が最も接近する座標間の?離の二乗

	float					Seg_MinDist_Pos1_Pos2_t ;		// 線分が三角形に最も接近する座標の線分の t ( 0.0f ～ 1.0f 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR					Seg_MinDist_Pos ;				// 線分が三角形に最も接近する線分上の座標

	float					Tri_MinDist_Pos1_w ;			// 三角形が線分に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;			// 三角形が線分に最も接近する座標の三角形座標２の重み
	float					Tri_MinDist_Pos3_w ;			// 三角形が線分に最も接近する座標の三角形座標３の重み
	VECTOR					Tri_MinDist_Pos ;				// 三角形が線分に最も接近する三角形上の座標
} SEGMENT_TRIANGLE_RESULT ;

// 関? Segment_Triangle_Analyse の?果を受け取る為の構造体
typedef struct tagSEGMENT_TRIANGLE_RESULT_D
{
	double					Seg_Tri_MinDist_Square ;		// 線分と三角形が最も接近する座標間の?離の二乗

	double					Seg_MinDist_Pos1_Pos2_t ;		// 線分が三角形に最も接近する座標の線分の t ( 0.0 ～ 1.0 、最近点座標 = ( SegPos2 - SegPos1 ) * t + SegPos1 )
	VECTOR_D				Seg_MinDist_Pos ;				// 線分が三角形に最も接近する線分上の座標

	double					Tri_MinDist_Pos1_w ;			// 三角形が線分に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;			// 三角形が線分に最も接近する座標の三角形座標２の重み
	double					Tri_MinDist_Pos3_w ;			// 三角形が線分に最も接近する座標の三角形座標３の重み
	VECTOR_D				Tri_MinDist_Pos ;				// 三角形が線分に最も接近する三角形上の座標
} SEGMENT_TRIANGLE_RESULT_D ;

// 関? Triangle_Point_Analyse の?果を受け取る為の構造体
typedef struct tagTRIANGLE_POINT_RESULT
{
	float					Tri_Pnt_MinDist_Square ;		// 三角形と点が最も接近する座標間の?離の二乗

	float					Tri_MinDist_Pos1_w ;			// 三角形が点に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	float					Tri_MinDist_Pos2_w ;			// 三角形が点に最も接近する座標の三角形座標２の重み
	float					Tri_MinDist_Pos3_w ;			// 三角形が点に最も接近する座標の三角形座標３の重み
	VECTOR					Tri_MinDist_Pos ;				// 三角形が点に最も接近する三角形上の座標
} TRIANGLE_POINT_RESULT ;

// 関? Triangle_Point_Analyse の?果を受け取る為の構造体
typedef struct tagTRIANGLE_POINT_RESULT_D
{
	double					Tri_Pnt_MinDist_Square ;		// 三角形と点が最も接近する座標間の?離の二乗

	double					Tri_MinDist_Pos1_w ;			// 三角形が点に最も接近する座標の三角形座標１の重み( 最近点座標 = TriPos1 * TriPos1_w + TriPos2 * TriPos2_w + TriPos3 * TriPos3_w )
	double					Tri_MinDist_Pos2_w ;			// 三角形が点に最も接近する座標の三角形座標２の重み
	double					Tri_MinDist_Pos3_w ;			// 三角形が点に最も接近する座標の三角形座標３の重み
	VECTOR_D				Tri_MinDist_Pos ;				// 三角形が点に最も接近する三角形上の座標
} TRIANGLE_POINT_RESULT_D ;

// 関? Plane_Point_Analyse の?果を受け取る為の構造体
typedef struct tagPLANE_POINT_RESULT
{
	int						Pnt_Plane_Normal_Side ;			// 点が平面の法線の側に?るかどうか( 1:法線の側に?る  0:法線と反対側に?る )
	float					Plane_Pnt_MinDist_Square ;		// 平面と点の?離
	VECTOR					Plane_MinDist_Pos ;				// 平面上の点との最近点座標
} PLANE_POINT_RESULT ;

// 関? Plane_Point_Analyse の?果を受け取る為の構造体
typedef struct tagPLANE_POINT_RESULT_D
{
	int						Pnt_Plane_Normal_Side ;			// 点が平面の法線の側に?るかどうか( 1:法線の側に?る  0:法線と反対側に?る )
	double					Plane_Pnt_MinDist_Square ;		// 平面と点の?離
	VECTOR_D				Plane_MinDist_Pos ;				// 平面上の点との最近点座標
} PLANE_POINT_RESULT_D ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// コ?ジ???果代入用ポ?ゴ?
typedef struct tagMV1_COLL_RESULT_POLY
{
	int						HitFlag ;						// ( MV1CollCheck_Line でのみ有効 )ヒットフ?グ( 1:ヒットした  0:ヒットしなかった )
	VECTOR					HitPosition ;					// ( MV1CollCheck_Line でのみ有効 )ヒット座標

	int						FrameIndex ;					// ?たったポ?ゴ?が含まれるフ?ー?の番?
	int						MeshIndex ;						// ?たったポ?ゴ?が含まれる?ッシ?の番?( ?ッシ?単位で判定した場?のみ有効 )
	int						PolygonIndex ;					// ?たったポ?ゴ?の番?
	int						MaterialIndex ;					// ?たったポ?ゴ?が使用しているマテ?ア?の番?
	VECTOR					Position[ 3 ] ;					// ?たったポ?ゴ?を形成する三点の座標
	VECTOR					Normal ;						// ?たったポ?ゴ?の法線
	float					PositionWeight[ 3 ] ;			// ?たった座標は、?たったポ?ゴ?の三点それぞれどの??で影響しているか、の値( ?たった座標 = Position[ 0 ] * PositionWeight[ 0 ] + Position[ 1 ] * PositionWeight[ 1 ] + Position[ 2 ] * PositionWeight[ 2 ] )
	int						PosMaxWeightFrameIndex[ 3 ] ;	// ?たったポ?ゴ?の座標がそれぞれ最も影響を受けているフ?ー?の番?
} MV1_COLL_RESULT_POLY ;

// コ?ジ???果代入用ポ?ゴ?配列
typedef struct tagMV1_COLL_RESULT_POLY_DIM
{
	int						HitNum ;						// ヒットしたポ?ゴ?の?
	MV1_COLL_RESULT_POLY *	Dim ;							// ヒットしたポ?ゴ?の配列( HitNum個分存在する )
} MV1_COLL_RESULT_POLY_DIM ;

// 参照用頂点構造体
typedef struct tagMV1_REF_VERTEX
{
	VECTOR					Position ;						// 位置
	VECTOR					Normal ;						// 法線
	FLOAT2					TexCoord[ 2 ] ;					// テクスチ?座標
	COLOR_U8				DiffuseColor ;					// ディフ?ーズカ?ー
	COLOR_U8				SpecularColor ;					// スペキ??カ?ー
	int						MaxWeightFrameIndex ;			// 最も大きな影響を与えているフ?ー?( スキニ?グ?ッシ?用 )
} MV1_REF_VERTEX ;

// 参照用ポ?ゴ?構造体
typedef struct tagMV1_REF_POLYGON
{
	unsigned short			FrameIndex ;					// このポ?ゴ?が属しているフ?ー?
	unsigned short			MeshIndex ;						// このポ?ゴ?が属している?ッシ?
	unsigned short			MaterialIndex ;					// 使用しているマテ?ア?
	unsigned short			VIndexTarget ;					// VIndex が指すイ?デックスの参照先( 1:フ?ー?  0:?デ?全体 )
	int						VIndex[ 3 ] ;					// ３角形ポ?ゴ?を成す参照頂点のイ?デックス
	VECTOR					MinPosition ;					// ポ?ゴ?を成す頂点座標の最小値
	VECTOR					MaxPosition ;					// ポ?ゴ?を成す頂点座標の最大値
} MV1_REF_POLYGON ;

// 参照用ポ?ゴ?データ構造体
typedef struct tagMV1_REF_POLYGONLIST
{
	int						PolygonNum ;					// 参照用ポ?ゴ?の?
	int						VertexNum ;						// 頂点の?
	VECTOR					MinPosition ;					// 頂点座標の最小値
	VECTOR					MaxPosition ;					// 頂点座標の最大値
	MV1_REF_POLYGON	*		Polygons ;						// 参照用ポ?ゴ?配列
	MV1_REF_VERTEX *		Vertexs ;						// 参照用頂点配列
} MV1_REF_POLYGONLIST ;

#endif // DX_NOTUSE_DRAWFUNCTION




// ３Ｄサウ?ド?バーブエフェクトパ??ータ構造体
// ( ?釈は MSDN の XAUDIO2FX_REVERB_PARAMETERS 構造体の解説をほぼ引用しています )
typedef struct tagSOUND3D_REVERB_PARAM
{
	float					WetDryMix ;						// ?バーブとなる出力の??( 指定可能範囲 0.0f ～ 100.0f )

	unsigned int			ReflectionsDelay ;				// ダイ?クト パスに対する?期反射の遅??間、単位はミ?秒( 指定可能範囲 0 ～ 300 )
	BYTE					ReverbDelay ;					// ?期反射に対する?バーブの遅??間、単位はミ?秒( 指定可能範囲 0 ～ 85 )
	BYTE					RearDelay ;						// 左後方出力および右後方出力の遅??間、単位はミ?秒( 指定可能範囲 0 ～ 5 )

	BYTE					PositionLeft ;					// シミ??ーシ??空間における?聴者に対する左入力の位置( 指定可能範囲 0 ～ 30 )
															// PositionLeft を最小値に設定した場?、左入力は?聴者の近くに配置されます。
															// この位置では、サウ?ド フィー?ドにおいて?期反射が優勢になり、残響減?は弱まって、振?が小さくなります。
															// PositionLeft を最大値に設定した場?、左入力はシミ??ーシ??室内で?聴者から最大限?い位置に配置されます。
															// PositionLeft は残響減??間 (?屋の残響効果) に影響せず、?聴者に対する音源の見かけの位置のみに影響します。
	BYTE					PositionRight ;					// PositionLeft と同効果の右入力値( 指定可能範囲 0 ～ 30 )、右入力にのみ影響を与える
	BYTE					PositionMatrixLeft ;			// 音源から?聴者までの?離によるイ?プ?ッシ??を?減させる値( 指定可能範囲 0 ～ 30 )
	BYTE					PositionMatrixRight ;			// 音源から?聴者までの?離によるイ?プ?ッシ??を?減させま値( 指定可能範囲 0 ～ 30 )
	BYTE					EarlyDiffusion ;				// 個々の壁の反射特性値( 指定可能範囲 0 ～ 15 )、( ?く平らな表面をシミ??ートするには小さな値を設定し、散?性の表面をシミ??ートするには大きな値を設定します。)
	BYTE					LateDiffusion ;					// 個々の壁の?バーブ特性値( 指定可能範囲 0 ～ 15 )、( ?く平らな表面をシミ??ートするには小さな値を設定し、散?性の表面をシミ??ートするには大きな値を設定します。)
	BYTE					LowEQGain ;						// 1 kHz における減??間を基?にして低周波?の減??間調整値( 指定可能範囲 0 ～ 12 )
															// 値とゲイ? (dB) の関係
															// 値          0  1  2  3  4  5  6  7  8  9 10 11 12
															// ゲイ?(dB) -8 -7 -6 -5 -4 -3 -2 -1  0 +1 +2 +3 +4
															// LowEQGain の値が 8 の場?、低周波?の減??間と 1 kHz における減??間が?しくなることに?意してください
	BYTE					LowEQCutoff ;					// LowEQGain パ??ーターにより制御される?ーパス フィ?ターの折点周波?の設定値( 指定可能範囲 0 ～ 9 )
															// 値と周波? (Hz) の関係
															// 値          0   1   2   3   4   5   6   7   8   9
															// 周波?(Hz) 50 100 150 200 250 300 350 400 450 500
	BYTE					HighEQGain ;					// 1 kHz における減??間を基?にして?周波?の減??間調整値( 指定可能範囲 0 ～ 8 )
															// 値とゲイ? (dB) の関係
															// 値          0  1  2  3  4  5  6  7 8
															// ゲイ?(dB) -8 -7 -6 -5 -4 -3 -2 -1 0
															// 0 に設定すると、?周波?の音が 1 kHz の場?と同じ??で減?します。最大値に設定すると、?周波?の音が 1 kHz の場?よりもはるかに?い??で減?します。
	BYTE					HighEQCutoff ;					// HighEQGain パ??ーターにより制御されるハイパス フィ?ターの折点周波?設定値( 指定可能範囲 0 ～ 14 )
															// 値と周波? (kHz) の関係
															// 値          0    1    2     3    4     5    6     7    8     9   10    11   12    13   14
															// 周波?(kHz) 1  1.5    2   2.5    3   3.5    4   4.5    5   5.5    6   6.5    7   7.5    8

	float					RoomFilterFreq ;				// 室内エフェクトの?ーパス フィ?ターの折点周波?、単位は Hz ( 指定可能範囲 20.0f ～ 20000.0f )
	float					RoomFilterMain ;				// ?期反射と後期フィー?ド残響の両方に適用される?ーパス フィ?ターのパス バ?ド強度?ベ?、単位は dB ( 指定可能範囲 -100.0f ～ 0.0f )
	float					RoomFilterHF ;					// 折点周波? (RoomFilterFreq) での?期反射と後期フィー?ド残響の両方に適用される?ーパス フィ?ターのパス バ?ド強度?ベ?、単位は dB ( 指定可能範囲 -100.0f ～ 0.0f )
	float					ReflectionsGain ;				// ?期反射の強度/?ベ?を調整値、単位は dB ( 指定可能範囲 -100.0f ～ 20.0f )
	float					ReverbGain ;					// ?バーブの強度/?ベ?を調整値、単位は dB ( 指定可能範囲 -100.0f ～ 20.0f )
	float					DecayTime ;						// 1 kHz における残響減??間、単位は秒 ( 指定可能範囲 0.1f ～ 上限値特になし )、これは、フ? スケー?の入力信?が 60 dB 減?するまでの?間です。
	float					Density ;						// 後期フィー?ド残響の?ード密度を制御値、単位はパーセ?ト( 指定可能範囲 0.0f ～ 100.0f )
															// 無色 (colorless) の空間では、Density を最大値 (100.0f ) に設定する必要が?ります。
															// Density を小さくすると、サウ?ドはくぐもった音 (くし形フィ?ターが適用された音) になります。
															// これはサイ?をシミ??ーシ??するときに有効なエフェクトです。
	float					RoomSize ;						// 音響空間の見かけ上のサイズ、単位はフィート( 指定可能範囲 1.0f (30.48 cm) ～ 100.0f (30.48 m) )
} SOUND3D_REVERB_PARAM ;





// スト?ー?データ制御用関?ポイ?タ構造体タイプ２
typedef struct tagSTREAMDATASHREDTYPE2
{
	DWORD_PTR				(*Open		)( const TCHAR *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*ChDir		)( const TCHAR *Path ) ;
	int						(*GetDir	)( TCHAR *Buffer ) ;
	int						(*GetDirS	)( TCHAR *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const TCHAR *FilePath, FILEINFO *Buffer ) ;		// 戻り値: -1=エ?ー  -1以外=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFO *Buffer ) ;		// 戻り値: -1=エ?ー  0=成功
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;							// 戻り値: -1=エ?ー  0=成功
} STREAMDATASHREDTYPE2 ;

// スト?ー?データ制御用関?ポイ?タ構造体タイプ２の wchar_t 使用版
typedef struct tagSTREAMDATASHREDTYPE2W
{
	DWORD_PTR				(*Open		)( const wchar_t *Path, int UseCacheFlag, int BlockReadFlag, int UseASyncReadFlag ) ;
	int						(*Close		)( DWORD_PTR Handle ) ;
	LONGLONG				(*Tell		)( DWORD_PTR Handle ) ;
	int						(*Seek		)( DWORD_PTR Handle, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR Handle ) ;
	int						(*Eof		)( DWORD_PTR Handle ) ;
	int						(*IdleCheck	)( DWORD_PTR Handle ) ;
	int						(*IsDXA		)( DWORD_PTR Handle ) ;									// 戻り値: -1=エ?ー  0=ＤＸアーカイブファイ?内のファイ?ではない  1=ＤＸアーカイブファイ?内のファイ?
	int						(*ChDir		)( const wchar_t *Path ) ;
	int						(*GetDir	)( wchar_t *Buffer ) ;
	int						(*GetDirS	)( wchar_t *Buffer, size_t BufferSize ) ;
	DWORD_PTR				(*FindFirst	)( const wchar_t *FilePath, FILEINFOW *Buffer ) ;		// 戻り値: -1=エ?ー  -1以外=FindHandle
	int						(*FindNext	)( DWORD_PTR FindHandle, FILEINFOW *Buffer ) ;			// 戻り値: -1=エ?ー  0=成功
	int						(*FindClose	)( DWORD_PTR FindHandle ) ;								// 戻り値: -1=エ?ー  0=成功
} STREAMDATASHREDTYPE2W ;

// スト?ー?データ制御用関?ポイ?タ構造体
typedef struct tagSTREAMDATASHRED
{
	LONGLONG				(*Tell		)( DWORD_PTR StreamDataPoint ) ;
	int						(*Seek		)( DWORD_PTR StreamDataPoint, LONGLONG SeekPoint, int SeekType ) ;
	size_t					(*Read		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR StreamDataPoint ) ;
//	size_t					(*Write		)( void *Buffer, size_t BlockSize, size_t DataNum, DWORD_PTR StreamDataPoint ) ;
	int						(*Eof		)( DWORD_PTR StreamDataPoint ) ;
	int						(*IdleCheck	)( DWORD_PTR StreamDataPoint ) ;
	int						(*Close		)( DWORD_PTR StreamDataPoint ) ;
} STREAMDATASHRED, *LPSTREAMDATASHRED ;

// スト?ー?データ制御用データ構造体
typedef struct tagSTREAMDATA
{
	STREAMDATASHRED			ReadShred ;
	DWORD_PTR				DataPoint ;
} STREAMDATA ;





// パ?ット情報構造体
typedef struct tagCOLORPALETTEDATA
{
	unsigned char			Blue ;
	unsigned char			Green ;
	unsigned char			Red ;
	unsigned char			Alpha ;
} COLORPALETTEDATA ;

// カ?ー構造情報構造体
typedef struct tagCOLORDATA
{
	unsigned char			Format ;										// フォーマット( DX_BASEIMAGE_FORMAT_NORMAL ? )

	unsigned char			ChannelNum ;									// チ??ネ??
	unsigned char			ChannelBitDepth ;								// １チ??ネ?辺りのビット深度
	unsigned char			FloatTypeFlag ;									// ?動小?点型かどうか( TRUE:?動小?点型  FALSE:整?型 )
	unsigned char			PixelByte ;										// １ピクセ??たりのバイト?

	// 以下は ChannelNum ?は ChannelBitDepth が 0 の?のみ有効
	unsigned char			ColorBitDepth ;									// ビット深度
	unsigned char			NoneLoc, NoneWidth ;							// 使われていないビットのアド?スと?
	unsigned char			RedWidth, GreenWidth, BlueWidth, AlphaWidth ;	// 各色のビット?
	unsigned char			RedLoc	, GreenLoc  , BlueLoc  , AlphaLoc   ;	// 各色の配置されているビットアド?ス
	unsigned int			RedMask , GreenMask , BlueMask , AlphaMask  ;	// 各色のビットマスク
	unsigned int			NoneMask ;										// 使われていないビットのマスク
	int						MaxPaletteNo ;									// 使用しているパ?ット番?の最大値( 0 の場?は 255 とみなす )

	// memo : ここより上に??バー変?を追加したら DxBaseImage.cpp の NS_GraphColorMatchBltVer2 のアセ?ブ?でのパ?ットデータ参照の?テ??値を修正する必要?り
	COLORPALETTEDATA		Palette[ 256 ] ;								// パ?ット( ColorBitDepth が８以下の場?のみ有効 )
} COLORDATA, *LPCOLORDATA ;

// 基本イ?ージデータ構造体
typedef struct tagBASEIMAGE
{
	COLORDATA				ColorData ;						// 色情報
	int						Width, Height, Pitch ;			// ?、?さ、ピッチ
	void					*GraphData ;					// グ?フィックイ?ージ
	int						MipMapCount ;					// ミップマップの?
	int						GraphDataCount ;				// グ?フィックイ?ージの?
} BASEIMAGE, GRAPHIMAGE, *LPGRAPHIMAGE ;

// 矩形データ型
typedef struct tagRECTDATA
{
	int						x1, y1, x2, y2 ;				// 座標
	unsigned int			color ;							// 色
	int						pal ;							// パ??ータ
} RECTDATA, *LPRECTDATA ;

// ?イ?データ型
typedef struct tagLINEDATA
{
	int						x1, y1, x2, y2 ;				// 座標
	unsigned int			color ;							// 色
	int						pal ;							// パ??ータ
} LINEDATA, *LPLINEDATA ;

// 座標データ型
typedef struct tagPOINTDATA
{
	int						x, y ;							// 座標
	unsigned int			color ;							// 色
	int						pal ;							// パ??ータ
} POINTDATA, *LPPOINTDATA ;

// 立方体データ型
typedef struct tagCUBEDATA
{
	VECTOR					Pos1 ;							// 座標1
	VECTOR					Pos2 ;							// 座標2
	COLOR_U8				DifColor ;						// ディフ?ーズカ?ー
	COLOR_U8				SpcColor ;						// スペキ??カ?ー
} CUBEDATA, *LPCUBEDATA ;

#ifndef DX_NOTUSE_DRAWFUNCTION

// イ?ージフォーマットデータ
typedef struct tagIMAGEFORMATDESC
{
	unsigned char			TextureFlag ;					// テクスチ?か、フ?グ( TRUE:テクスチ?  FALSE:標?サーフェス )
	unsigned char			CubeMapTextureFlag ;			// キ?ーブマップテクスチ?か、フ?グ( TRUE:キ?ーブマップテクスチ?　FALSE:それ以外 )
	unsigned char			AlphaChFlag ;					// αチ??ネ?は?るか、フ?グ	( TRUE:?る  FALSE:ない )
	unsigned char			DrawValidFlag ;					// 描画可能か、フ?グ( TRUE:可能  FALSE:不可能 )
	unsigned char			SystemMemFlag ;					// システ????上に存在しているか、フ?グ( TRUE:システ????上  FALSE:ＶＲＡＭ上 )( 標?サーフェスの?のみ有効 )
	unsigned char			UseManagedTextureFlag ;			// マネージドテクスチ?を使用するか、フ?グ
	unsigned char			UseLinearMapTextureFlag ;		// テクスチ?の???データ配置に?ニアが選択できる場?はデータ配置方式を?ニアにするかどうか( TRUE:?ニアが可能な場?は?ニアにする  FALSE:?ニアが可能な場?も特に?ニアを指定しない )
	unsigned char			PlatformTextureFormat ;			// 環境依存のテクスチ?フォーマットを直接指定するために使用するための変?( DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 など )

	unsigned char			BaseFormat ;					// 基本フォーマット( DX_BASEIMAGE_FORMAT_NORMAL ? )
	unsigned char			MipMapCount ;					// ミップマップの?
	unsigned char			AlphaTestFlag ;					// αテストチ??ネ?は?るか、フ?グ( TRUE:?る  FALSE:ない )( テクスチ?の場?のみ有効 )
	unsigned char			FloatTypeFlag ;					// ?動小?点型かどうか
	unsigned char			ColorBitDepth ;					// 色深度( テクスチ?の場?のみ有効 )
	unsigned char			ChannelNum ;					// チ??ネ?の?
	unsigned char			ChannelBitDepth ;				// １チ??ネ?辺りのビット深度( テクスチ?の場?のみ有効、0 の場?は ColorBitDepth が使用される )
	unsigned char			BlendGraphFlag ;				// ブ??ド用画?か、フ?グ
	unsigned char			UsePaletteFlag ;				// パ?ットを使用しているか、フ?グ( SystemMemFlag が TRUE の場?のみ有効 )

	unsigned char			MSSamples ;						// マ?チサ?プ??グ?( 描画対象の場?使用 )
	unsigned char			MSQuality ;						// マ?チサ?プ??グクオ?ティ( 描画対象の場?使用 )
} IMAGEFORMATDESC ;

#endif // DX_NOTUSE_DRAWFUNCTION

// DirectInput のジ?イパッド入力情報
typedef struct tagDINPUT_JOYSTATE
{
	int						X ;								// スティックのＸ軸パ??ータ( -1000～1000 )
	int						Y ;								// スティックのＹ軸パ??ータ( -1000～1000 )
	int						Z ;								// スティックのＺ軸パ??ータ( -1000～1000 )
	int						Rx ;							// スティックのＸ軸回転パ??ータ( -1000～1000 )
	int						Ry ;							// スティックのＹ軸回転パ??ータ( -1000～1000 )
	int						Rz ;							// スティックのＺ軸回転パ??ータ( -1000～1000 )
	int						Slider[ 2 ] ;					// ス?イダー二つ( 0～65535 )
	unsigned int			POV[ 4 ] ;						// ハットスイッチ４つ( 0xffffffff:入力なし 0:上 4500:右上 9000:右 13500:右下 18000:下 22500:左下 27000:左 31500:左上 )
	unsigned char			Buttons[ 32 ] ;					// ボタ?３２個( ?されたボタ?は 128 になる )
} DINPUT_JOYSTATE ;

// XInput のジ?イパッド入力情報
typedef struct tagXINPUT_STATE
{
	unsigned char			Buttons[ 16 ] ;					// ボタ?１６個( 添?には XINPUT_BUTTON_DPAD_UP ?を使用する、0:?されていない  1:?されている )
	unsigned char			LeftTrigger ;					// 左ト?ガー( 0～255 )
	unsigned char			RightTrigger ;					// 右ト?ガー( 0～255 )
	short					ThumbLX ;						// 左スティックの横軸値( -32768 ～ 32767 )
	short					ThumbLY ;						// 左スティックの縦軸値( -32768 ～ 32767 )
	short					ThumbRX ;						// 右スティックの横軸値( -32768 ～ 32767 )
	short					ThumbRY ;						// 右スティックの縦軸値( -32768 ～ 32767 )
} XINPUT_STATE ;

// タッチパネ?の１箇?分のタッチの情報
typedef struct tagTOUCHINPUTPOINT
{
	DWORD					Device ;						// タッチされたデバイス
	DWORD					ID ;							// タッチを判別するためのＩＤ
	int						PositionX ;						// タッチされた座標X
	int						PositionY ;						// タッチされた座標Y
	float					Pressure ;						// 圧力
	float					Orientation ;					// 画面の上端に対する接点の方位角
	float					Tilt ;							// 画面の?線に対する接点の?度角
	int						ToolType ;						// ツー?タイプ( DX_TOUCHINPUT_TOOL_TYPE_UNKNOWN など )
} TOUCHINPUTPOINT ;

// タッチパネ?のタッチの情報
typedef struct tagTOUCHINPUTDATA
{
	LONGLONG				Time ;							// 情報の?間

	unsigned int			Source ;
	int						PointNum ;						// 有効なタッチ情報の?
	TOUCHINPUTPOINT			Point[ TOUCHINPUTPOINT_MAX ] ;	// タッチ情報
} TOUCHINPUTDATA ;






// WinSockets使用?のアド?ス指定用構造体
typedef struct tagIPDATA
{
	unsigned char			d1, d2, d3, d4 ;				// アド?ス値
} IPDATA, *LPIPDATA ;

typedef struct tagIPDATA_IPv6
{
	union
	{
		unsigned char			Byte[ 16 ] ;
		unsigned short			Word[ 8 ] ;
	} ;
	unsigned long				ScopeID ;
} IPDATA_IPv6 ;

#define DX_STRUCT_END


#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

// 関?プ?トタイプ宣言------------------------------------------------------------------

#ifdef WINDOWS_DESKTOP_OS
#include "DxFunctionWin.h"
#endif // WINDOWS_DESKTOP_OS

#ifdef __ANDROID__
#include "DxFunctionAndroid.h"
#endif // __ANDROID__

#ifdef __APPLE__
    #include "TargetConditionals.h"
    #if TARGET_OS_IPHONE
		#include "DxFunctioniOS.h"
	#endif
#endif // __APPLE__





#ifndef DX_NON_NAMESPACE

namespace DxLib
{

#endif // DX_NON_NAMESPACE

#define DX_FUNCTION_START

// DxSystem.cpp関?プ?トタイプ宣言

// ?期化終了系関?
extern	int			DxLib_Init( void ) ;													// ?イブ???期化を行う
extern	int			DxLib_End( void ) ;														// ?イブ??使用の後始?を行う

extern	int			DxLib_GlobalStructInitialize( void ) ;									// ?イブ??の内?で使用している構造体をゼ??期化して、DxLib_Init の前に行った設定を無効化する( DxLib_Init の前でのみ有効 )
extern	int			DxLib_IsInit( void ) ;													// ?イブ??が?期化されているかどうかを取得する( 戻り値: TRUE=?期化されている  FALSE=されていない )

// エ?ー関係関?
extern	int			GetLastErrorCode( void ) ;												// 最後に発生したエ?ーのエ?ーコードを取得する( 戻り値　0:エ?ーが発生していない、?はエ?ーコード出力に対?したエ?ーが発生していない　　0以外：エ?ーコード、DX_ERRORCODE_WIN_DESKTOP_24BIT_COLOR など )
extern	int			GetLastErrorMessage( TCHAR *StringBuffer, int StringBufferBytes ) ;		// 最後に発生したエ?ーのエ?ー?ッセージを指定の文?列バッファに取得する

// ?ッセージ??関?
extern	int			ProcessMessage( void ) ;												// ウイ?ドウズの?ッセージ?ープに代わる??を行う

// 設定系関?
extern	int			SetAlwaysRunFlag( int Flag ) ;											// アプ?が非アクティブ状態でも??を実行するかどうかを設定する( TRUE:実行する  FALSE:停止する( デフォ?ト ) )

// ウエイト系関?
extern	int			WaitTimer( int WaitTime ) ;												// 指定の?間だけ??をとめる
#ifndef DX_NON_INPUT
extern	int			WaitKey( void ) ;														// キーの入力待ちを行う
#endif // DX_NON_INPUT
extern	int			SleepThread( int WaitTime ) ;											// 指定の?間だけス?ッドを眠らせる

// カウ?タ及び??取得系関?
extern	int			GetNowCount(							int UseRDTSCFlag DEFAULTPARAM( = FALSE ) ) ;	// ミ?秒単位の精度を?つカウ?タの現在の値を得る
extern	LONGLONG	GetNowHiPerformanceCount(				int UseRDTSCFlag DEFAULTPARAM( = FALSE ) ) ;	// GetNowCountの?精度バージ??( μ秒単位の精度を?つカウ?タの現在の値を得る )
extern	ULONGLONG	GetNowSysPerformanceCount(				void ) ;						// OSが提?する?精度カウ?タの現在の値を得る
extern	ULONGLONG	GetSysPerformanceFrequency(				void ) ;						// OSが提?する?精度カウ?タの周波?( 1秒辺りのカウ?ト? )を得る
extern	ULONGLONG	ConvSysPerformanceCountToSeconds(		ULONGLONG Count ) ;				// OSが提?する?精度カウ?タの値を秒の値に変換する
extern	ULONGLONG	ConvSysPerformanceCountToMilliSeconds(	ULONGLONG Count ) ;				// OSが提?する?精度カウ?タの値をミ?秒の値に変換する
extern	ULONGLONG	ConvSysPerformanceCountToMicroSeconds(	ULONGLONG Count ) ;				// OSが提?する?精度カウ?タの値をマイク?秒の値に変換する
extern	ULONGLONG	ConvSysPerformanceCountToNanoSeconds(	ULONGLONG Count ) ;				// OSが提?する?精度カウ?タの値をナノ秒の値に変換する
extern	ULONGLONG	ConvSecondsToSysPerformanceCount(		ULONGLONG Seconds ) ;			// 秒の値をOSが提?する?精度カウ?タの値に変換する
extern	ULONGLONG	ConvMilliSecondsToSysPerformanceCount(	ULONGLONG MilliSeconds ) ;		// ミ?秒の値をOSが提?する?精度カウ?タの値に変換する
extern	ULONGLONG	ConvMicroSecondsToSysPerformanceCount(	ULONGLONG MicroSeconds ) ;		// マイク?秒の値をOSが提?する?精度カウ?タの値に変換する
extern	ULONGLONG	ConvNanoSecondsToSysPerformanceCount(	ULONGLONG NanoSeconds ) ;		// ナノ秒の値をOSが提?する?精度カウ?タの値に変換する
extern	int			GetDateTime(							DATEDATA *DateBuf ) ;			// 現在??を取得する 

// ??取得
extern	int			GetRand( int RandMax ) ;												// ??を取得する( RandMax : 返って?る値の最大値 )
extern	int			SRand(	 int Seed ) ;													// ??の?期値を設定する

#ifndef DX_NON_MERSENNE_TWISTER
extern	DWORD		GetMersenneTwisterRand( void ) ;										// ??セ?ヌ・ツイスターア?ゴ?ズ?で生成された??値を無加工で取得する

extern	DWORD_PTR	CreateRandHandle( int Seed DEFAULTPARAM( = -1 ) ) ;						// ??ハ?ド?を作成する( 戻り値　0以外:??ハ?ド?　0:エ?ー )
extern	int			DeleteRandHandle( DWORD_PTR RandHandle ) ;								// ??ハ?ド?を削?する
extern	int			SRandHandle( DWORD_PTR RandHandle, int Seed ) ;							// ??ハ?ド?の?期値を再設定する
extern	int			GetRandHandle( DWORD_PTR RandHandle, int RandMax ) ;					// ??ハ?ド?を使用して??を取得する( RandMax : 返って?る値の最大値 )
extern	DWORD		GetMersenneTwisterRandHandle( DWORD_PTR RandHandle ) ;					// ??ハ?ド?を使用して??セ?ヌ・ツイスターア?ゴ?ズ?で生成された??値を無加工で取得する

#endif // DX_NON_MERSENNE_TWISTER

// バッテ?ー関連
extern	int			GetBatteryLifePercent( void ) ;											// 電池の残量を % で取得する( 戻り値： 100=フ?充電状態  0=充電残量無し )

// ク?ップボード関係
extern	int			GetClipboardText(			TCHAR *DestBuffer, int DestBufferBytes DEFAULTPARAM( = -1 ) ) ;		// ク?ップボードに格納されているテキストデータを読み出す( DestBuffer:文?列を格納するバッファの先頭アド?ス   戻り値  -1:ク?ップボードにテキストデータが無い  -1以外:ク?ップボードに格納されている文?列データのサイズ( 単位:byte ) ) 
extern	int			SetClipboardText(			const TCHAR *Text                    ) ;	// ク?ップボードにテキストデータを格納する
extern	int			SetClipboardTextWithStrLen(	const TCHAR *Text, size_t TextLength ) ;	// ク?ップボードにテキストデータを格納する

// iniファイ?関係
extern	int			GetPrivateProfileStringDx(                 const TCHAR *AppName,                       const TCHAR *KeyName,                       const TCHAR *Default,                       TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const TCHAR *IniFilePath,                           int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileString のＤＸ?イブ??版
extern	int			GetPrivateProfileStringDxWithStrLen(       const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, const TCHAR *Default, size_t DefaultLength, TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const TCHAR *IniFilePath, size_t IniFilePathLength, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileString のＤＸ?イブ??版
extern	int			GetPrivateProfileIntDx(                    const TCHAR *AppName,                       const TCHAR *KeyName,                       int          Default,                                                                                      const TCHAR *IniFilePath,                           int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileInt のＤＸ?イブ??版
extern	int			GetPrivateProfileIntDxWithStrLen(          const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, int          Default,                                                                                      const TCHAR *IniFilePath, size_t IniFilePathLength, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileInt のＤＸ?イブ??版
extern	int			GetPrivateProfileStringDxForMem(           const TCHAR *AppName,                       const TCHAR *KeyName,                       const TCHAR *Default,                       TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileStringDx の???から読み?む版
extern	int			GetPrivateProfileStringDxForMemWithStrLen( const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, const TCHAR *Default, size_t DefaultLength, TCHAR *ReturnedStringBuffer, size_t ReturnedStringBufferBytes, const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileStringDx の???から読み?む版
extern	int			GetPrivateProfileIntDxForMem(              const TCHAR *AppName,                       const TCHAR *KeyName,                       int          Default,                                                                                      const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileIntDx の???から読み?む版
extern	int			GetPrivateProfileIntDxForMemWithStrLen(    const TCHAR *AppName, size_t AppNameLength, const TCHAR *KeyName, size_t KeyNameLength, int          Default,                                                                                      const void *IniFileImage, size_t IniFileImageBytes, int IniFileCharCodeFormat DEFAULTPARAM( = -1 ) /* DX_CHARCODEFORMAT_SHIFTJIS ?、-1 でデフォ?ト */ ) ;		// GetPrivateProfileIntDx の???から読み?む版

#if defined( __APPLE__ ) || defined( __ANDROID__ )

// ?ー?アプ?を?信?ー?編集状態で起動する
// MailAddr    : 宛先( NULL で無効 )、?ー?アド?スが複??る場?はカ?マ『,』で区切ってください
// MailCCAddr  : CC の宛先( NULL で無効 )、?ー?アド?スが複??る場?はカ?マ『,』で区切ってください
// MailBCCAddr : BCC の宛先( NULL で無効 )、?ー?アド?スが複??る場?はカ?マ『,』で区切ってください
// Subject     : タイト?( NULL で無効 )、?ー?アド?スが複??る場?はカ?マ『,』で区切ってください
// Text        : 本文( NULL で無効 )、?ー?アド?スが複??る場?はカ?マ『,』で区切ってください
extern	int			MailApp_Send(           const TCHAR *MailAddr DEFAULTPARAM( = NULL ) ,                                             const TCHAR *MailCCAddr DEFAULTPARAM( = NULL ) ,                                               const TCHAR *MailBCCAddr DEFAULTPARAM( = NULL ) ,                                                const TCHAR *Subject DEFAULTPARAM( = NULL ) ,                                            const TCHAR *Text DEFAULTPARAM( = NULL )                                         ) ;
extern	int			MailApp_SendWithStrLen( const TCHAR *MailAddr DEFAULTPARAM( = NULL ) , size_t MailAddrLength DEFAULTPARAM( = 0 ) , const TCHAR *MailCCAddr DEFAULTPARAM( = NULL ) , size_t MailCCAddrLength DEFAULTPARAM( = 0 ) , const TCHAR *MailBCCAddr DEFAULTPARAM( = NULL ) , size_t MailBCCAddrLength DEFAULTPARAM( = 0 ) , const TCHAR *Subject DEFAULTPARAM( = NULL ) , size_t SubjectLength DEFAULTPARAM( = 0 ) , const TCHAR *Text DEFAULTPARAM( = NULL ) , size_t TextLength DEFAULTPARAM( = 0 ) ) ;

#endif // defined( __APPLE__ ) || defined( __ANDROID__ )











// DxLog.cpp関?プ?トタイプ宣言

#ifndef DX_NON_LOG
// ?グファイ?関?
extern	int			LogFileAdd(				const TCHAR *String ) ;							// ?グファイ?( Log.txt ) に文?列を出力する
extern	int			LogFileAddWithStrLen(	const TCHAR *String, size_t StringLength ) ;	// ?グファイ?( Log.txt ) に文?列を出力する
extern 	int			LogFileFmtAdd(			const TCHAR *FormatString , ... ) ;				// ?式付きで ?グファイ?( Log.txt ) に文?列を出力する( ?式は printf と同じ )
extern	int			LogFileTabAdd(			void ) ;										// ?グファイ?( Log.txt ) に出力する文?列の前に付けるタブの?を一つ?やす
extern	int			LogFileTabSub(			void ) ;										// ?グファイ?( Log.txt ) に出力する文?列の前に付けるタブの?を一つ減らす
extern	int			ErrorLogAdd(			const TCHAR *String ) ;							// LogFileAdd の?名称関?
extern 	int			ErrorLogFmtAdd(			const TCHAR *FormatString , ... ) ;				// LogFileFmtAdd の?名称関?
extern	int			ErrorLogTabAdd(			void ) ;										// LogFileTabAdd の?名称関?
extern	int			ErrorLogTabSub(			void ) ;										// LogFileTabSub の?名称関?
extern	int			SetUseTimeStampFlag(	int UseFlag ) ;									// ?グファイ?( Log.txt ) に出力する文?列の前に起動してからの?間を付けるかどうかを設定する( TRUE:付ける( デフォ?ト)  FALSE:付けない )
extern 	int			AppLogAdd(				const TCHAR *String , ... ) ;					// LogFileFmtAdd と同じ機能の関?

// ?グ出力設定関?
extern	int			SetOutApplicationLogValidFlag(	          int Flag ) ;													// ?グファイ?( Log.txt ) を作成するかどうかを設定する( TRUE:作成する( デフォ?ト )  FALSE:作成しない )、DxLib_Init の前でのみ使用可能　
extern	int			SetOutApplicationSystemLogValidFlag(      int Flag ) ;													// ?グファイ?( Log.txt ) にＤＸ?イブ??内?の?グ出力を行うかどうか設定する( TRUE:ＤＸ?イブ??内?の?グ出力を行う( デフォ?ト )  FALSE:ＤＸ?イブ??内?の?グ出力を行わない )
extern	int			SetApplicationLogFileName(                const TCHAR *FileName ) ;										// ?グファイ?の名前を設定する( Log.txt 以外にしたい場?に使用 )
extern	int			SetApplicationLogFileNameWithStrLen(      const TCHAR *FileName, size_t FileNameLength ) ;				// ?グファイ?の名前を設定する( Log.txt 以外にしたい場?に使用 )
extern	int			SetApplicationLogSaveDirectory(	          const TCHAR *DirectoryPath ) ;								// ?グファイ?( Log.txt ) を保存するディ?クト?パスを設定する
extern	int			SetApplicationLogSaveDirectoryWithStrLen( const TCHAR *DirectoryPath, size_t DirectoryPathLength ) ;	// ?グファイ?( Log.txt ) を保存するディ?クト?パスを設定する
extern	int			SetUseDateNameLogFile(			          int Flag ) ;													// ?グファイ?名に日付をつけるかどうかをセットする( TRUE:付ける  FALSE:付けない( デフォ?ト ) )

#ifndef DX_NON_PRINTF_DX

// ?グ出力機能関?
extern	int			SetLogDrawOutFlag(	 int DrawFlag ) ;									// printfDx の?果を画面に出力するかどうかを設定する、TRUE:出力を行う  FALSE:出力を行わない( printfDx を実行すると内?で SetLogDrawOutFlag( TRUE ) ; が呼ばれます )
extern 	int			GetLogDrawFlag(		 void ) ;											// printfDx の?果を画面に出力するかどうかの設定を取得する( 戻り値  TRUE:出力を行う  FALSE:出力を行わない )
extern	int			SetLogFontSize(		 int Size ) ;										// printfDx の?果を画面に出力する際に使用するフォ?トのサイズを設定する
extern	int			SetLogFontHandle(	 int FontHandle ) ;									// printfDx の?果を画面に出力する際に使用するフォ?トのハ?ド?を変更する
extern	int			SetLogDrawArea(		 int x1, int y1, int x2, int y2 ) ;					// printfDx の?果を画面に出力する際の描画する領域を設定する

// 簡易画面出力関?
extern 	int			printfDx(			 const TCHAR *FormatString , ... ) ;												// printf と同じ引?で画面に文?列を表示するための関?
extern	int			putsDx(				 const TCHAR *String, int NewLine DEFAULTPARAM( = TRUE ) ) ;						// puts と同じ引?で画面に文?列を表示するための関?
extern	int			putsDxWithStrLen(	 const TCHAR *String, size_t StringLength, int NewLine DEFAULTPARAM( = TRUE ) ) ;	// puts と同じ引?で画面に文?列を表示するための関?
extern	int			clsDx(				 void ) ;																			// printfDx の?果を?セットするための関?
extern	int			setPrintColorDx(     int Color, int EdgeColor DEFAULTPARAM( = 0 ) ) ;													// printf や puts で表示する文?列の色を指定する
#endif // DX_NON_PRINTF_DX

#endif // DX_NON_LOG












#ifndef DX_NON_ASYNCLOAD

// DxASyncLoad.cpp関?プ?トタイプ宣言

// 非同期読み?み関係
extern	int			SetUseASyncLoadFlag(			int Flag ) ;										// 読み?み??系の関?で非同期読み?みを行うかどうかを設定する( 非同期読み?みに対?している関?のみ有効 )( TRUE:非同期読み?みを行う  FALSE:非同期読み?みを行わない( デフォ?ト ) )
extern	int			GetUseASyncLoadFlag(			void ) ;											// 読み?み??系の関?で非同期読み?みを行うかどうかを取得する( 非同期読み?みに対?している関?のみ有効 )( TRUE:非同期読み?みを行う  FALSE:非同期読み?みを行わない( デフォ?ト ) )
extern	int			CheckHandleASyncLoad(			int Handle ) ;										// ハ?ド?の非同期読み?みが完了しているかどうかを取得する( TRUE:まだ完了していない  FALSE:完了している  -1:エ?ー )
extern	int			GetHandleASyncLoadResult(		int Handle ) ;										// ハ?ド?の非同期読み?み??の戻り値を取得する( 非同期読み?み?の場?は一つ前の非同期読み?み??の戻り値が返ってきます )
extern	int			SetASyncLoadFinishDeleteFlag(	int Handle ) ;										// ハ?ド?の非同期読み?み??が完了したらハ?ド?を削?するフ?グを立てる
extern	int			SetASyncLoadFinishCallback(		int Handle, void ( *Callback )( int Handle, void *Data ), void *Data ) ;	// ハ?ド?の非同期読み?み??が完了したら呼ばれる関?をセットする
extern	int			WaitHandleASyncLoad(			int Handle ) ;										// 指定のハ?ド?の非同期読み?み??が終了するまで待つ
extern	int			WaitHandleASyncLoadAll(			void ) ;											// 全ての非同期読み?みデータが読み?み終わるまで待つ
extern	int			GetASyncLoadNum(				void ) ;											// 非同期読み?み?の??の?を取得する
extern	int			SetASyncLoadThreadNum(			int ThreadNum ) ;									// 非同期読み?み??を行うス?ッドの?を設定する( ThreadNum に指定できる?は 1 ～ 32 )

#endif // DX_NON_ASYNCLOAD











// DxHandle.cpp関?プ?トタイプ宣言

extern	int			SetDeleteHandleFlag(		int Handle, int *DeleteFlag ) ;							// ハ?ド?が削?されたときに－１が設定される変?を登録する
extern	int			GetHandleNum(				int HandleType /* DX_HANDLETYPE_GRAPH? */ ) ;			// 指定のタイプのハ?ド?の?を取得する
extern	int			GetMaxHandleNum(			int HandleType /* DX_HANDLETYPE_GRAPH? */ ) ;			// 指定のタイプのハ?ド?が最大で幾つ作成できるかを取得する
extern	int			DumpHandleInfo(				int HandleType /* DX_HANDLETYPE_GRAPH? */ ) ;			// 指定のタイプの全ハ?ド?の情報を?グに出力する














// マウス関係関?
extern	int			SetMouseDispFlag(		int DispFlag ) ;												// マウスポイ?タの表示状態を設定する( DispFlag:マウスポイ?タを表示するかどうか( TRUE:表示する  FALSE:表示しない )
extern	int			SetMouseDispIgnoreMenuFlag(	int IgnoreMenuFlag ) ;										// マウスポイ?タの表示状態について?ニ?ーの表示状態を無?するかどうかを設定する( TRUE:?ニ?ーの表示状態を無?する  FALSE:?ニ?ーの表示状態を考慮する( デフォ?ト ) )
#ifndef DX_NON_INPUT
extern	int			GetMousePoint(			int *XBuf, int *YBuf ) ;										// マウスポイ?タの位置を取得する
extern	int			SetMousePoint(			int PointX, int PointY ) ;										// マウスポイ?タの位置を設定する
extern	int			GetMouseInput(			void ) ;														// マウスのボタ?の?下状態を取得する
extern	int			GetMouseWheelRotVol(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// ?直マウスホイー?の回転量を取得する
extern	int			GetMouseHWheelRotVol(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// ?平マウスホイー?の回転量を取得する
extern	float		GetMouseWheelRotVolF(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// ?直マウスホイー?の回転量を取得する( 戻り値が float 型 )
extern	float		GetMouseHWheelRotVolF(	int CounterReset DEFAULTPARAM( = TRUE ) ) ;						// ?平マウスホイー?の回転量を取得する( 戻り値が float 型 )
extern	int			GetMouseInputLog(		int *Button, int *ClickX, int *ClickY, int LogDelete DEFAULTPARAM( = TRUE ) ) ;					// マウスのボタ?を?した情報を一つ取得する( Button:?されたボタ?( MOUSE_INPUT_LEFT ? )を格納する変?のアド?ス  ClickX:?された?のＸ座標を格納する変?のアド?ス  ClickY:?された?のＹ座標を格納する変?のアド?ス   LogDelete:取得した?下情報一つ分を?グから削?するかどうか( TRUE:削?する  FALSE:削?しない、つまり?にこの関?が呼ばれたときに同じ値を取得することになる )　　戻り値  0:?された情報取得できた　-1:?された情報が無かった、つまり前回の呼び出し( または起動?から最?の呼び出し )の間に一度もマウスのボタ?が?されなかった )
extern	int			GetMouseInputLog2(		int *Button, int *ClickX, int *ClickY, int *LogType, int LogDelete DEFAULTPARAM( = TRUE ) ) ;	// マウスのボタ?を?したり離したりした情報を一つ取得する( Button:?されたり離されたりしたボタ?( MOUSE_INPUT_LEFT ? )を格納する変?のアド?ス  ClickX:?されたり離されたりした?のＸ座標を格納する変?のアド?ス  ClickY:?されたり離されたりした?のＹ座標を格納する変?のアド?ス  LogType：?されたのか( MOUSE_INPUT_LOG_DOWN )離されたのか( MOUSE_INPUT_LOG_UP )、?の情報を格納する変?のアド?ス  LogDelete:取得した?されたり離されたりした情報一つ分を?グから削?するかどうか( TRUE:削?する  FALSE:削?しない、つまり?にこの関?が呼ばれたときに同じ値を取得することになる )　　戻り値  0:?されたり離されたりした情報取得できた　-1:?されたり離されたりした情報が無かった、つまり前回の呼び出し( または起動?から最?の呼び出し )の間に一度もマウスのボタ?が?されたり離されたりしなかった )
#endif // DX_NON_INPUT












// タッチパネ?入力関係関?
#ifndef DX_NON_INPUT
extern	int				GetTouchInputNum( void ) ;																				// タッチされている?を取得する
extern	int				GetTouchInput( int InputNo, int *PositionX, int *PositionY, int *ID DEFAULTPARAM( = NULL ) , int *Device DEFAULTPARAM( = NULL ) , float *Pressure DEFAULTPARAM( = NULL ) ) ;		// タッチの情報を取得する

extern	int				GetTouchInputLogNum( void ) ;																			// ストックされているタッチ情報の?を取得する
extern	int				ClearTouchInputLog( void ) ;																			// ストックされているタッチ情報をク?アする
extern	TOUCHINPUTDATA	GetTouchInputLogOne( int PeekFlag DEFAULTPARAM( = FALSE ) ) ;											// ストックされているタッチ情報から一番古い情報をひとつ取得する
extern	int				GetTouchInputLog( TOUCHINPUTDATA *TouchData, int GetNum, int PeekFlag DEFAULTPARAM( = FALSE ) ) ;		// ストックされているタッチ情報から古い?に指定?バッファに取得する( 戻り値  -1:エ?ー  0以上:取得した情報の? )

extern	int				GetTouchInputDownLogNum( void ) ;																		// ストックされているタッチされ始めた情報の?を取得する
extern	int				ClearTouchInputDownLog( void ) ;																		// ストックされているタッチされ始めた情報をク?アする
extern	TOUCHINPUTPOINT	GetTouchInputDownLogOne( int PeekFlag DEFAULTPARAM( = FALSE ) ) ;										// ストックされているタッチされ始めた情報から一番古い情報をひとつ取得する
extern	int				GetTouchInputDownLog( TOUCHINPUTPOINT *PointData, int GetNum, int PeekFlag DEFAULTPARAM( = FALSE ) ) ;	// ストックされているタッチされ始めた情報から古い?に指定?バッファに取得する( 戻り値  -1:エ?ー  0以上:取得した情報の? )

extern	int				GetTouchInputUpLogNum( void ) ;																			// ストックされているタッチが離された情報の?を取得する
extern	int				ClearTouchInputUpLog( void ) ;																			// ストックされているタッチが離された情報をク?アする
extern	TOUCHINPUTPOINT	GetTouchInputUpLogOne( int PeekFlag DEFAULTPARAM( = FALSE ) ) ;											// ストックされているタッチが離された情報から一番古い情報をひとつ取得する
extern	int				GetTouchInputUpLog( TOUCHINPUTPOINT *PointData, int GetNum, int PeekFlag DEFAULTPARAM( = FALSE ) ) ;	// ストックされているタッチが離された情報から古い?に指定?バッファに取得する( 戻り値  -1:エ?ー  0以上:取得した情報の? )

#endif // DX_NON_INPUT















// DxMemory.cpp関?プ?トタイプ宣言

// ???確保系関?
extern	void*		DxAlloc(						               size_t AllocSize ,                    const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// 指定のサイズの???を確保する( AllocSize:確保する???のサイズ( 単位:byte )  File:DxAllocを呼んだソースファイ?名( デバッグ用 )  Line:DxAllocを呼んだソースファイ??の行番?( デバッグ用 )　　戻り値  NULL:???の確保失敗   NULL以外:確保した???領域の先頭アド?ス )
extern	void*		DxAllocAligned(					               size_t AllocSize , size_t Alignment , const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// 指定のサイズの???を確保する( ア?イ?指定版 )( AllocSize:確保する???のサイズ( 単位:byte )  Alignment:確保する???領域のアド?ス値の倍?  File:DxAllocを呼んだソースファイ?名( デバッグ用 )  Line:DxAllocを呼んだソースファイ??の行番?( デバッグ用 )　　戻り値  NULL:???の確保失敗   NULL以外:確保した???領域の先頭アド?ス )
extern	void*		DxCalloc(						               size_t AllocSize ,                    const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// 指定のサイズの???を確保して、０で?める、?期化後に０で?める以外は DxAlloc と動作は同じ
extern	void*		DxCallocAligned(				               size_t AllocSize , size_t Alignment , const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// 指定のサイズの???を確保して、０で?める、?期化後に０で?める以外は DxAllocAligned と動作は同じ
extern	void*		DxRealloc(						void *Memory , size_t AllocSize ,                    const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// ???の再確保を行う( Memory:再確保を行う???領域の先頭アド?ス( DxAlloc の戻り値 )  AllocSize:新しい確保サイズ　FileとLine の説明は DxAlloc の?釈の通り 　戻り値 NULL:???の再確保失敗　NULL以外:再確保した新しい???領域の先頭アド?ス　)
extern	void*		DxReallocAligned(				void *Memory , size_t AllocSize , size_t Alignment , const char *File DEFAULTPARAM( = NULL ) , int Line DEFAULTPARAM( = -1 ) ) ;	// ???の再確保を行う( ア?イ?指定版 )( Memory:再確保を行う???領域の先頭アド?ス( DxAlloc の戻り値 )  AllocSize:新しい確保サイズ   Alignment:新しく確保する???領域のアド?ス値の倍?　FileとLine の説明は DxAlloc の?釈の通り 　戻り値 NULL:???の再確保失敗　NULL以外:再確保した新しい???領域の先頭アド?ス　)
extern	void		DxFree(							void *Memory ) ;																				// ???を解放する( Memory:解放する???領域の先頭アド?ス( DxAlloc の戻り値 ) )
extern	size_t		DxSetAllocSizeTrap(				size_t Size ) ;																					// 列?対象にする???の確保容量をセットする
extern	int			DxSetAllocPrintFlag(			int Flag ) ;																					// ＤＸ?イブ??内で???確保が行われる?に情報を出力するかどうかをセットする
extern	size_t		DxGetAllocSize(					void ) ;																						// DxAlloc や DxCalloc で確保している???サイズを取得する
extern	int			DxGetAllocNum(					void ) ;																						// DxAlloc や DxCalloc で確保している???の?を取得する
extern	void		DxDumpAlloc(					void ) ;																						// DxAlloc や DxCalloc で確保している???を列?する
extern	void		DxDrawAlloc(					int x, int y, int Width, int Height ) ;															// DxAlloc や DxCalloc で確保している???の状況を描画する
extern	int			DxErrorCheckAlloc(				void ) ;																						// 確保した???情報が破壊されていないか調べる( -1:破壊?り  0:なし )
extern	int			DxSetAllocSizeOutFlag(			int Flag ) ;																					// ???が確保、解放が行われる度に確保している???の容量を出力するかどうかのフ?グをセットする
extern	int			DxSetAllocMemoryErrorCheckFlag(	int Flag ) ;																					// ???の確保、解放が行われる度に確保している???確保情報が破損していないか調べるかどうかのフ?グをセットする














// DxBaseFunc.cpp 関?プ?トタイプ宣言

// 文?コード関係
extern	int				GetCharBytes( int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ , const void *String ) ;	// 文?列の先頭の文?のバイト?を取得する
extern	int				ConvertStringCharCodeFormat( int SrcCharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ , const void *SrcString, int DestCharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ , void *DestStringBuffer ) ;		// 文?列の文?コード形式を別の文?コード形式に変換する
extern	int				SetUseCharCodeFormat( int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ ) ;		// 文?列の引?の文?コード形式を設定する( 文?列描画系関?とその他一?関?を?く )( UNICODE版では無効 )
extern	int				GetUseCharCodeFormat( void ) ;															// 文?列の引?の文?コード形式を取得する( 戻り値：文?コード形式( DX_CHARCODEFORMAT_SHIFTJIS ? ) )( UNICODE版では無効 )
extern	int				Get_wchar_t_CharCodeFormat( void ) ;													// wchar_t型の文?コード形式を取得する( 戻り値： DX_CHARCODEFORMAT_UTF16LE など )

// 文?列関係
extern	void			strcpyDx(      TCHAR *Dest,                   const TCHAR *Src ) ;						// strcpy と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strcpy_sDx(    TCHAR *Dest, size_t DestBytes, const TCHAR *Src ) ;						// strcpy_s と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpcpyDx(     TCHAR *Dest,                   const TCHAR *Src, int Pos ) ;				// 位置指定付き strcpy、Pos はコピー開始位置　( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpcpy_sDx(   TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos ) ;				// 位置指定付き strcpy_s、Pos はコピー開始位置　( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpcpy2Dx(    TCHAR *Dest,                   const TCHAR *Src, int Pos ) ;				// 位置指定付き strcpy、Pos はコピー開始位置( 全角文?も 1 扱い )　( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpcpy2_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos ) ;				// 位置指定付き strcpy_s、Pos はコピー開始位置( 全角文?も 1 扱い )　( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strncpyDx(     TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strncpy_sDx(   TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strncpy2Dx(    TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy の Num が文??( 全角文?も 1 扱い )になったもの、終端に必ずヌ?文?が代入される( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strncpy2_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s の Num が文??( 全角文?も 1 扱い )になったもの、終端に必ずヌ?文?が代入される( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strrncpyDx(    TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy の文?列の終端からの文??指定版( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strrncpy_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s の文?列の終端からの文??指定版( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strrncpy2Dx(   TCHAR *Dest,                   const TCHAR *Src, int Num ) ;				// strncpy の文?列の終端からの文??( 全角文?も 1 扱い )指定版、終端に必ずヌ?文?が代入される( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strrncpy2_sDx( TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Num ) ;				// strncpy_s の文?列の終端からの文??( 全角文?も 1 扱い )指定版、終端に必ずヌ?文?が代入される( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpncpyDx(    TCHAR *Dest,                   const TCHAR *Src, int Pos, int Num ) ;	// strncpy のコピー開始位置指定版、Pos はコピー開始位置、Num は文??( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpncpy_sDx(  TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos, int Num ) ;	// strncpy_s のコピー開始位置指定版、Pos はコピー開始位置、Num は文??( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpncpy2Dx(   TCHAR *Dest,                   const TCHAR *Src, int Pos, int Num ) ;	// strncpy のコピー開始位置指定版、Pos はコピー開始位置( 全角文?も 1 扱い )、Num は文??( 全角文?も 1 扱い )、終端に必ずヌ?文?が代入される( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strpncpy2_sDx( TCHAR *Dest, size_t DestBytes, const TCHAR *Src, int Pos, int Num ) ;	// strncpy_s のコピー開始位置指定版、Pos はコピー開始位置( 全角文?も 1 扱い )、Num は文??( 全角文?も 1 扱い )、終端に必ずヌ?文?が代入される( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strcatDx(      TCHAR *Dest,                   const TCHAR *Src ) ;						// strcat と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	void			strcat_sDx(    TCHAR *Dest, size_t DestBytes, const TCHAR *Src ) ;						// strcat_s と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	size_t			strlenDx(      const TCHAR *Str ) ;												// strlen と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	size_t			strlen2Dx(     const TCHAR *Str ) ;												// strlen の戻り値が文??( 全角文?も 1 扱い )になったもの( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strcmpDx(      const TCHAR *Str1, const TCHAR *Str2 ) ;							// strcmp と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				stricmpDx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// stricmp と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strncmpDx(     const TCHAR *Str1, const TCHAR *Str2, int Num ) ;				// strncmp と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strncmp2Dx(    const TCHAR *Str1, const TCHAR *Str2, int Num ) ;				// strncmp の Num が文??( 全角文?も 1 扱い )になったもの( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strpncmpDx(    const TCHAR *Str1, const TCHAR *Str2, int Pos, int Num ) ;		// strncmp の比較開始位置指定版、Pos が Str1 の比較開始位置、Num が文??( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strpncmp2Dx(   const TCHAR *Str1, const TCHAR *Str2, int Pos, int Num ) ;		// strncmp の比較開始位置指定版、Pos が Str1 の比較開始位置( 全角文?も 1 扱い )、Num が文??( 全角文?も 1 扱い )( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	DWORD			strgetchrDx(   const TCHAR *Str, int Pos, int *CharNums DEFAULTPARAM( = NULL ) ) ;	// 文?列の指定の位置の文?コードを取得する、Pos は取得する位置、CharNums は文??を代入する変?のアド?ス、戻り値は文?コード( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	DWORD			strgetchr2Dx(  const TCHAR *Str, int Pos, int *CharNums DEFAULTPARAM( = NULL ) ) ;	// 文?列の指定の位置の文?コードを取得する、Pos は取得する位置( 全角文?も 1 扱い )、CharNums は文??を代入する変?のアド?ス、戻り値は文?コード( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strputchrDx(   TCHAR *Str, int Pos, DWORD CharCode ) ;							// 文?列の指定の位置に文?コードを?き?む、Pos は?き?む位置、CharCode は文?コード、戻り値は?き?んだ文??( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strputchr2Dx(  TCHAR *Str, int Pos, DWORD CharCode ) ;							// 文?列の指定の位置に文?コードを?き?む、Pos は?き?む位置( 全角文?も 1 扱い )、CharCode は文?コード、戻り値は?き?んだ文??( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	const TCHAR *	strposDx(      const TCHAR *Str, int Pos ) ;									// 文?列の指定の位置のアド?スを取得する、Pos は取得する位置　( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	const TCHAR *	strpos2Dx(     const TCHAR *Str, int Pos ) ;									// 文?列の指定の位置のアド?スを取得する、Pos は取得する位置( 全角文?も 1 扱い )　( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	const TCHAR *	strstrDx(      const TCHAR *Str1, const TCHAR *Str2 ) ;							// strstr と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strstr2Dx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// strstr の戻り値が文?列先頭からの文??( 全角文?も 1 扱い ) になったもの( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	const TCHAR *	strrstrDx(     const TCHAR *Str1, const TCHAR *Str2 ) ;							// strrstr と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strrstr2Dx(    const TCHAR *Str1, const TCHAR *Str2 ) ;							// strrstr の戻り値が文?列先頭からの文??( 全角文?も 1 扱い ) になったもの( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	const TCHAR *	strchrDx(      const TCHAR *Str, DWORD CharCode ) ;								// strchr と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strchr2Dx(     const TCHAR *Str, DWORD CharCode ) ;								// strchr の戻り値が文?列先頭からの文??( 全角文?も 1 扱い ) になったもの( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	const TCHAR *	strrchrDx(     const TCHAR *Str, DWORD CharCode ) ;								// strrchr と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				strrchr2Dx(    const TCHAR *Str, DWORD CharCode ) ;								// strrchr の戻り値が文?列先頭からの文??( 全角文?も 1 扱い ) になったもの( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	TCHAR *			struprDx(      TCHAR *Str ) ;													// strupr と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				vsprintfDx(    TCHAR *Buffer,                    const TCHAR *FormatString, va_list Arg ) ;	// vsprintf と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				vsnprintfDx(   TCHAR *Buffer, size_t BufferSize, const TCHAR *FormatString, va_list Arg ) ;	// vsnprintf と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				sprintfDx(     TCHAR *Buffer,                    const TCHAR *FormatString, ... ) ;			// sprintf と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				snprintfDx(    TCHAR *Buffer, size_t BufferSize, const TCHAR *FormatString, ... ) ;			// snprintf と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	TCHAR *			itoaDx(        int Value, TCHAR *Buffer,                     int Radix ) ;		// itoa と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	TCHAR *			itoa_sDx(      int Value, TCHAR *Buffer, size_t BufferBytes, int Radix ) ;		// itoa_s と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				atoiDx(        const TCHAR *Str ) ;												// atoi と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます ) 
extern	double			atofDx(        const TCHAR *Str ) ;												// atof と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				vsscanfDx(     const TCHAR *String, const TCHAR *FormatString, va_list Arg ) ;	// vsscanf と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )
extern	int				sscanfDx(      const TCHAR *String, const TCHAR *FormatString, ... ) ;			// sscanf と同?の機能( マ?チバイト文?列版では文?コード形式として SetUseCharCodeFormat で設定した形式が使用されます )


















// DxNetwork.cpp関?プ?トタイプ宣言

#ifndef DX_NON_NETWORK

// 通信関係
extern	int			ProcessNetMessage(				int RunReleaseProcess DEFAULTPARAM( = FALSE ) ) ;										// 通信?ッセージの??をする関?

extern	int			GetHostIPbyName(				const TCHAR *HostName,							IPDATA      *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// ＤＮＳサーバーを使ってホスト名からＩＰアド?スを取得する( IPv4版 )
extern	int			GetHostIPbyNameWithStrLen(		const TCHAR *HostName, size_t HostNameLength,	IPDATA      *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// ＤＮＳサーバーを使ってホスト名からＩＰアド?スを取得する( IPv4版 )
extern	int			GetHostIPbyName_IPv6(			const TCHAR *HostName,							IPDATA_IPv6 *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// ＤＮＳサーバーを使ってホスト名からＩＰアド?スを取得する( IPv6版 )
extern	int			GetHostIPbyName_IPv6WithStrLen(	const TCHAR *HostName, size_t HostNameLength,	IPDATA_IPv6 *IPDataBuf, int IPDataBufLength DEFAULTPARAM( = 1 ) , int *IPDataGetNum DEFAULTPARAM( = NULL ) ) ;		// ＤＮＳサーバーを使ってホスト名からＩＰアド?スを取得する( IPv6版 )
extern 	int			ConnectNetWork(					IPDATA      IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// 他マシ?に接続する( IPv4版 )
extern	int			ConnectNetWork_IPv6(			IPDATA_IPv6 IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// 他マシ?に接続する( IPv6版 )
extern 	int			ConnectNetWork_ASync(			IPDATA      IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// 他マシ?に接続する( IPv4版 )、非同期版
extern	int			ConnectNetWork_IPv6_ASync(		IPDATA_IPv6 IPData, int Port DEFAULTPARAM( = -1 ) ) ;									// 他マシ?に接続する( IPv6版 )、非同期版
extern 	int			PreparationListenNetWork(		int Port DEFAULTPARAM( = -1 ) ) ;														// 接続を受けられる状態にする( IPv4版 )
extern 	int			PreparationListenNetWork_IPv6(	int Port DEFAULTPARAM( = -1 ) ) ;														// 接続を受けられる状態にする( IPv6版 )
extern 	int			StopListenNetWork(				void ) ;																				// 接続を受けつけ状態の解?
extern 	int			CloseNetWork(					int NetHandle ) ;																		// 接続を終了する

extern 	int			GetNetWorkAcceptState(			int NetHandle ) ;																		// 接続状態を取得する
extern 	int			GetNetWorkDataLength(			int NetHandle ) ;																		// 受信データの量を得る
extern	int			GetNetWorkSendDataLength(		int NetHandle ) ;																		// 未?信のデータの量を得る 
extern 	int			GetNewAcceptNetWork(			void ) ;																				// 新たに接続した通信回線を得る
extern 	int			GetLostNetWork(					void ) ;																				// 接続を切断された通信回線を得る
extern 	int			GetNetWorkIP(					int NetHandle, IPDATA      *IpBuf ) ;													// 接続先のＩＰを得る( IPv4版 )
extern 	int			GetNetWorkIP_IPv6(				int NetHandle, IPDATA_IPv6 *IpBuf ) ;													// 接続先のＩＰを得る( IPv6版 )
extern	int			GetMyIPAddress(					IPDATA      *IpBuf, int IpBufLength DEFAULTPARAM( = 1 ) , int *IpNum DEFAULTPARAM( = NULL ) ) ;			// 自分のIPv4を得る
extern	int			GetMyIPAddress_IPv6(			IPDATA_IPv6 *IpBuf, int IpBufLength DEFAULTPARAM( = 1 ) , int *IpNum DEFAULTPARAM( = NULL ) ) ;			// 自分のIPv6を得る
extern	int			SetConnectTimeOutWait(			int Time ) ;																			// 接続のタイ?アウトまでの?間を設定する
extern	int			SetUseDXNetWorkProtocol(		int Flag ) ;																			// ＤＸ?イブ??の通信形態を使うかどうかをセットする
extern	int			GetUseDXNetWorkProtocol(		void ) ; 																				// ＤＸ?イブ??の通信形態を使うかどうかを取得する
extern	int			SetUseDXProtocol(				int Flag ) ;																			// SetUseDXNetWorkProtocol の別名
extern	int			GetUseDXProtocol(				void ) ; 																				// GetUseDXNetWorkProtocol の別名
extern	int			SetNetWorkCloseAfterLostFlag(	int Flag ) ;																			// 接続が切断された直後に接続ハ?ド?を解放するかどうかのフ?グをセットする
extern	int			GetNetWorkCloseAfterLostFlag(	void ) ;																				// 接続が切断された直後に接続ハ?ド?を解放するかどうかのフ?グを取得する
//extern	int			SetProxySetting( int UseFlag, const char *Address, int Port ) ;														// ＨＴＴＰ通信で使用するプ?キシ設定を行う
//extern	int			GetProxySetting( int *UseFlagBuffer, char *AddressBuffer, int *PortBuffer ) ;										// ＨＴＴＰ通信で使用するプ?キシ設定を取得する
//extern	int			SetIEProxySetting( void ) ;																							// ＩＥのプ?キシ設定を適?する

extern 	int			NetWorkRecv(			int NetHandle, void *Buffer, int Length ) ;														// 受信したデータを読み?む
extern	int			NetWorkRecvToPeek(		int NetHandle, void *Buffer, int Length ) ;														// 受信したデータを読み?む、読み?んだデータはバッファから削?されない
extern	int			NetWorkRecvBufferClear(	int NetHandle ) ;																				// 受信したデータをク?アする
extern 	int			NetWorkSend(			int NetHandle, const void *Buffer, int Length ) ;												// データを?信する

extern	int			MakeUDPSocket(			int RecvPort DEFAULTPARAM( = -1 ) ) ;															// UDPを使用した通信を行うソケットハ?ド?を作成する( RecvPort を -1 にすると?信専用のソケットハ?ド?になります )
extern	int			MakeUDPSocket_IPv6(		int RecvPort DEFAULTPARAM( = -1 ) ) ;															// UDPを使用した通信を行うソケットハ?ド?を作成する( RecvPort を -1 にすると?信専用のソケットハ?ド?になります )( IPv6版 )
extern	int			DeleteUDPSocket(		int NetUDPHandle ) ;																			// UDPを使用した通信を行うソケットハ?ド?を削?する
extern	int			NetWorkSendUDP(			int NetUDPHandle, IPDATA       SendIP, int SendPort,  const void *Buffer, int Length ) ;			// UDPを使用した通信で指定のＩＰにデータを?信する、Length は最大65507、SendPort を -1 にすると MakeUDPSocket に RecvPort で渡したポートが使用されます( 戻り値  0以上;?信できたデータサイズ  -1:エ?ー  -2:?信データが大きすぎる  -3:?信?備ができていない  )
extern	int			NetWorkSendUDP_IPv6(	int NetUDPHandle, IPDATA_IPv6  SendIP, int SendPort,  const void *Buffer, int Length ) ;			// UDPを使用した通信で指定のＩＰにデータを?信する、Length は最大65507、SendPort を -1 にすると MakeUDPSocket に RecvPort で渡したポートが使用されます( 戻り値  0以上;?信できたデータサイズ  -1:エ?ー  -2:?信データが大きすぎる  -3:?信?備ができていない  )( IPv6版 )
extern	int			NetWorkRecvUDP(			int NetUDPHandle, IPDATA      *RecvIP, int *RecvPort,       void *Buffer, int Length, int Peek ) ;	// UDPを使用した通信でデータを受信する、Peek に TRUE を渡すと受信に成功してもデータを受信キ?ーから削?しません( 戻り値  0以上:受信したデータのサイズ  -1:エ?ー  -2:バッファのサイズが足りない  -3:受信データがない )
extern	int			NetWorkRecvUDP_IPv6(	int NetUDPHandle, IPDATA_IPv6 *RecvIP, int *RecvPort,       void *Buffer, int Length, int Peek ) ;	// UDPを使用した通信でデータを受信する、Peek に TRUE を渡すと受信に成功してもデータを受信キ?ーから削?しません( 戻り値  0以上:受信したデータのサイズ  -1:エ?ー  -2:バッファのサイズが足りない  -3:受信データがない )( IPv6版 )
//extern int		CheckNetWorkSendUDP(	int NetUDPHandle ) ;																			// UDPを使用した通信でデータが?信できる状態かどうかを調べる( 戻り値  -1:エ?ー  TRUE:?信可能  FALSE:?信不可能 )
extern	int			CheckNetWorkRecvUDP(	int NetUDPHandle ) ;																			// UDPを使用した通信で新たな受信データが存在するかどうかを調べる( 戻り値  -1:エ?ー  TRUE:受信データ?り  FALSE:受信データなし )

/*	使用不可
extern	int			HTTP_FileDownload(			const char *FileURL, const char *SavePath DEFAULTPARAM( = NULL ) , void **SaveBufferP DEFAULTPARAM( = NULL ) , int *FileSize DEFAULTPARAM( = NULL ) , char **ParamList DEFAULTPARAM( = NULL ) ) ;						// HTTP を使用してネット?ーク上のファイ?をダウ??ードする
extern	int			HTTP_GetFileSize(			const char *FileURL ) ;																		// HTTP を使用してネット?ーク上のファイ?のサイズを得る

extern	int			HTTP_StartFileDownload(		const char *FileURL, const char *SavePath, void **SaveBufferP DEFAULTPARAM( = NULL ) , char **ParamList DEFAULTPARAM( = NULL ) ) ;	// HTTP を使用したネット?ーク上のファイ?をダウ??ードする??を開始する
extern	int			HTTP_StartGetFileSize(		const char *FileURL ) ;																		// HTTP を使用したネット?ーク上のファイ?のサイズを得る??を開始する
extern	int			HTTP_Close(					int HttpHandle ) ;																			// HTTP の??を終了し、ハ?ド?を解放する
extern	int			HTTP_CloseAll(				void ) ;																					// 全てのハ?ド?に対して HTTP_Close を行う
extern	int			HTTP_GetState(				int HttpHandle ) ;																			// HTTP ??の現在の状態を得る( NET_RES_COMPLETE ? )
extern	int			HTTP_GetError(				int HttpHandle ) ;																			// HTTP ??でエ?ーが発生した場?、エ?ーの内容を得る( HTTP_ERR_NONE ? )
extern	int			HTTP_GetDownloadFileSize(	int HttpHandle ) ;																			// HTTP ??で対象となっているファイ?のサイズを得る( 戻り値: -1 = エ?ー・若しくはまだファイ?のサイズを取得していない  0以上 = ファイ?のサイズ )
extern	int			HTTP_GetDownloadedFileSize( int HttpHandle ) ;																			// HTTP ??で既にダウ??ードしたファイ?のサイズを取得する

extern	int			fgetsForNetHandle(			int NetHandle, char *strbuffer ) ;															// fgets のネット?ークハ?ド?版( -1:取得できず 0:取得できた )
extern	int			URLAnalys(					const char *URL, char *HostBuf DEFAULTPARAM( = NULL ) , char *PathBuf DEFAULTPARAM( = NULL ) , char *FileNameBuf DEFAULTPARAM( = NULL ) , int *PortBuf DEFAULTPARAM( = NULL ) ) ;	// ＵＲＬを解析する
extern	int			URLConvert(					char *URL, int ParamConvert DEFAULTPARAM( = TRUE ) , int NonConvert DEFAULTPARAM( = FALSE ) ) ;				// HTTP に渡せない記?が使われた文?列を渡せるような文?列に変換する( 戻り値: -1 = エ?ー  0以上 = 変換後の文?列のサイズ )
extern	int			URLParamAnalysis(			char **ParamList, char **ParamStringP ) ;													// HTTP 用パ??ータ?ストから一つのパ??ータ文?列を作成する( 戻り値:  -1 = エ?ー  0以上 = パ??ータの文?列の長さ )
*/

#endif // DX_NON_NETWORK
















// DxInputString.cpp関?プ?トタイプ宣言

#ifndef DX_NON_INPUTSTRING

// 文?コードバッファ?作関係
extern	int			StockInputChar(		TCHAR CharCode ) ;								// 文?コードバッファに文?コードをストックする
extern	int			ClearInputCharBuf(	void ) ;										// 文?コードバッファをク?アする
extern	TCHAR		GetInputChar(		int DeleteFlag ) ;								// 文?コードバッファに溜まったデータから文?コードを一つ取得する
extern	TCHAR		GetInputCharWait(	int DeleteFlag ) ;								// 文?コードバッファに溜まったデータから文?コードを一つ取得する、バッファになにも文?コードがない場?は文?コードがバッファに一文?分溜まるまで待つ

extern	int			GetOneChar(			TCHAR *CharBuffer, int DeleteFlag ) ;			// 文?コードバッファに溜まったデータから１文?分取得する
extern	int			GetOneCharWait(		TCHAR *CharBuffer, int DeleteFlag ) ;			// 文?コードバッファに溜まったデータから１文?分取得する、バッファに何も文?コードがない場?は文?コードがバッファに一文?分溜まるまで待つ
extern	int			GetCtrlCodeCmp(		TCHAR Char ) ;									// 指定の文?コードがアスキーコ?ト?ー?コードか調べる

#endif // DX_NON_INPUTSTRING

#ifndef DX_NON_KEYEX

extern	int			DrawIMEInputString(				int x, int y,                                 int SelectStringNum , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;	// 画面上に入力?の文?列を描画する
extern	int			DrawIMEInputExtendString(		int x, int y, double ExRateX, double ExRateY, int SelectStringNum , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;	// 画面上に入力?の文?列を描画する( 拡大率付き )
extern	int			SetUseIMEFlag(					int UseFlag ) ;							// ＩＭＥを使用するかどうかを設定する
extern	int			GetUseIMEFlag(					void ) ;								// ＩＭＥを使用するかどうかの設定を取得する
extern	int			SetInputStringMaxLengthIMESync(	int Flag ) ;							// ＩＭＥで入力できる最大文??を MakeKeyInput の設定に?わせるかどうかをセットする( TRUE:?わせる  FALSE:?わせない(デフォ?ト) )
extern	int			SetIMEInputStringMaxLength(		int Length ) ;							// ＩＭＥで一度に入力できる最大文??を設定する( 0:制限なし  1以上:指定の文??で制限 )

#endif // DX_NON_KEYEX

extern	int			GetStringPoint(				const TCHAR *String,                      int Point ) ;		// 全角文?、半角文?入り?れる?から指定の文??での半角文??を得る
extern	int			GetStringPointWithStrLen(	const TCHAR *String, size_t StringLength, int Point ) ;		// 全角文?、半角文?入り?れる?から指定の文??での半角文??を得る
extern	int			GetStringPoint2(			const TCHAR *String,                      int Point ) ;		// 全角文?、半角文?入り?れる?から指定の半角文??での文??を得る
extern	int			GetStringPoint2WithStrLen(	const TCHAR *String, size_t StringLength, int Point ) ;		// 全角文?、半角文?入り?れる?から指定の半角文??での文??を得る
extern	int			GetStringLength(			const TCHAR *String ) ;										// 全角文?、半角文?入り?れる?から文??を取得する

#ifndef DX_NON_FONT
extern	int			DrawObtainsString(						int x, int y, int AddY, const TCHAR *String,                      unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画
extern	int			DrawObtainsNString(						int x, int y, int AddY, const TCHAR *String, size_t StringLength, unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画
extern	int			DrawObtainsString_CharClip(				int x, int y, int AddY, const TCHAR *String,                      unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画( ク?ップが文?単位 )
extern	int			DrawObtainsNString_CharClip(			int x, int y, int AddY, const TCHAR *String, size_t StringLength, unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画( ク?ップが文?単位 )
extern	int			DrawObtainsString_WordClip(				int x, int y, int AddY, const TCHAR *String,                      unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画( ク?ップが単語単位 )
extern	int			DrawObtainsNString_WordClip(			int x, int y, int AddY, const TCHAR *String, size_t StringLength, unsigned int StrColor, unsigned int StrEdgeColor DEFAULTPARAM( = 0 ) , int FontHandle DEFAULTPARAM( = -1 ) , unsigned int SelectBackColor DEFAULTPARAM( = 0xffffffff ) , unsigned int SelectStrColor DEFAULTPARAM( = 0 ) , unsigned int SelectStrEdgeColor DEFAULTPARAM( = 0xffffffff ) , int SelectStart DEFAULTPARAM( = -1 ) , int SelectEnd DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画( ク?ップが単語単位 )
extern	int			GetObtainsStringCharPosition(			int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画した場?の文?列の?端の座標を取得する
extern	int			GetObtainsStringCharPosition_CharClip(	int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画した場?の文?列の?端の座標を取得する( ク?ップが文?単位 )
extern	int			GetObtainsStringCharPosition_WordClip(	int x, int y, int AddY, const TCHAR *String, int StrLen, int *PosX, int *PosY, int FontHandle DEFAULTPARAM( = -1 ) , int *LineCount DEFAULTPARAM( = NULL ) ) ;		// 描画可能領域に収まるように改行しながら文?列を描画した場?の文?列の?端の座標を取得する( ク?ップが単語単位 )
#endif // DX_NON_FONT
extern	int			DrawObtainsBox(					int x1, int y1, int x2, int y2, int AddY, unsigned int Color, int FillFlag ) ;																																										// 描画可能領域に収まるように補正を加えながら矩形を描画

#ifndef DX_NON_KEYEX

extern	int			InputStringToCustom(			int x, int y, size_t BufLength, TCHAR *StrBuffer, int CancelValidFlag, int SingleCharOnlyFlag, int NumCharOnlyFlag, int DoubleCharOnlyFlag DEFAULTPARAM( = FALSE ) , int EnableNewLineFlag DEFAULTPARAM( = FALSE ) , int DisplayCandidateList DEFAULTPARAM( = TRUE ) ) ;		// 文?列の入力取得

extern	int			KeyInputString(					int x, int y, size_t CharMaxLength, TCHAR *StrBuffer, int CancelValidFlag ) ;													// 文?列の入力取得
extern	int			KeyInputSingleCharString(		int x, int y, size_t CharMaxLength, TCHAR *StrBuffer, int CancelValidFlag ) ;													// 半角文?列のみの入力取得
extern	int			KeyInputNumber(					int x, int y, int MaxNum, int MinNum, int CancelValidFlag ) ;																	// ?値の入力取得

extern	int			GetIMEInputModeStr(				TCHAR *GetBuffer ) ;																											// IMEの入力?ード文?列を取得する
extern	const IMEINPUTDATA* GetIMEInputData(		void ) ;																														// IMEで入力?の文?列の情報を取得する
extern	int			SetIMEInputString(				const TCHAR *String ) ;																											// IMEで入力?の文?列を変更する( IMEで文?列を入力?ではなかった場?は何も起こりません )
extern	int			SetIMEInputStringWithStrLen(	const TCHAR *String, size_t StringLength ) ;																					// IMEで入力?の文?列を変更する( IMEで文?列を入力?ではなかった場?は何も起こりません )
extern	int			SetKeyInputStringColor(			ULONGLONG NmlStr, ULONGLONG NmlCur, ULONGLONG IMEStrBack, ULONGLONG IMECur, ULONGLONG IMELine, ULONGLONG IMESelectStr, ULONGLONG IMEModeStr , ULONGLONG NmlStrE DEFAULTPARAM( = 0 ) , ULONGLONG IMESelectStrE DEFAULTPARAM( = 0 ) , ULONGLONG IMEModeStrE DEFAULTPARAM( = 0 ) , ULONGLONG IMESelectWinE DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) ,	ULONGLONG IMESelectWinF DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG SelectStrBackColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG SelectStrColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG SelectStrEdgeColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG IMEStr DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) , ULONGLONG IMEStrE DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) ) ;	// ( SetKeyInputStringColor2 の?関? )InputString関?使用?の文?の各色を変更する
extern	int			SetKeyInputStringColor2(		int TargetColor /* DX_KEYINPSTRCOLOR_NORMAL_STR ? */ , unsigned int Color ) ;													// InputString関?使用?の文?の各色を変更する
extern	int			ResetKeyInputStringColor2(		int TargetColor /* DX_KEYINPSTRCOLOR_NORMAL_STR ? */ ) ;																		// SetKeyInputStringColor2 で設定した色をデフォ?トに戻す
extern	int			SetKeyInputStringFont(			int FontHandle ) ;																												// キー入力文?列描画関連で使用するフォ?トのハ?ド?を変更する(-1でデフォ?トのフォ?トハ?ド?)
extern	int			SetKeyInputStringEndCharaMode(	int EndCharaMode /* DX_KEYINPSTR_ENDCHARAMODE_OVERWRITE ? */ ) ;																// キー入力文?列??の入力文??が限界に達している状態で、文?列の?端?分で入力が行われた場?の???ードを変更する
extern	int			DrawKeyInputModeString(			int x, int y ) ;																												// 入力?ード文?列を描画する

extern	int			InitKeyInput(					void ) ;																														// キー入力データ?期化
extern	int			MakeKeyInput(					size_t MaxStrLength, int CancelValidFlag, int SingleCharOnlyFlag, int NumCharOnlyFlag, int DoubleCharOnlyFlag DEFAULTPARAM( = FALSE ) , int EnableNewLineFlag DEFAULTPARAM( = FALSE ) ) ;			// 新しいキー入力ハ?ド?の作成
extern	int			DeleteKeyInput(					int InputHandle ) ;																												// キー入力ハ?ド?の削?
extern	int			SetActiveKeyInput(				int InputHandle ) ;																												// 指定のキー入力ハ?ド?をアクティブにする( -1 を指定するとアクティブなキー入力ハ?ド?が無い状態になります )
extern	int			GetActiveKeyInput(				void ) ;																														// 現在アクティブになっているキー入力ハ?ド?を取得する
extern	int			CheckKeyInput(					int InputHandle ) ;																												// キー入力ハ?ド?の入力が終了しているか取得する
extern	int			ReStartKeyInput(				int InputHandle ) ;																												// 入力が完了したキー入力ハ?ド?を再度編集状態に戻す
extern	int			ProcessActKeyInput(				void ) ;																														// キー入力ハ?ド???関?
extern	int			DrawKeyInputString(				int x, int y,                                 int InputHandle , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;				// キー入力ハ?ド?の入力?情報の描画
extern	int			DrawKeyInputExtendString(		int x, int y, double ExRateX, double ExRateY, int InputHandle , int DrawCandidateList DEFAULTPARAM( = TRUE ) ) ;				// キー入力ハ?ド?の入力?情報の描画( 拡大率指定付き )
extern	int			SetKeyInputDrawArea(			int x1, int y1, int x2, int y2, int InputHandle ) ;																				// キー入力ハ?ド?の入力?文?列を描画する際の描画範囲を設定する

extern	int			SetKeyInputSelectArea(			int  SelectStart, int  SelectEnd, int InputHandle ) ;																			// キー入力ハ?ド?の指定の領域を選択状態にする( SelectStart と SelectEnd に -1 を指定すると選択状態が解?されます )
extern	int			GetKeyInputSelectArea(			int *SelectStart, int *SelectEnd, int InputHandle ) ;																			// キー入力ハ?ド?の選択領域を取得する
extern	int			SetKeyInputDrawStartPos(		int DrawStartPos, int InputHandle ) ;																							// キー入力ハ?ド?の描画開始文?位置を設定する
extern	int			GetKeyInputDrawStartPos(		int InputHandle ) ;																												// キー入力ハ?ド?の描画開始文?位置を取得する
extern	int			SetKeyInputCursorBrinkTime(		int Time ) ;																													// キー入力ハ?ド?のキー入力?のカーソ?の点滅する?さをセットする
extern	int			SetKeyInputCursorBrinkFlag(		int Flag ) ;																													// キー入力ハ?ド?のキー入力?のカーソ?を点滅させるかどうかをセットする
extern	int			SetKeyInputString(				const TCHAR *String,                      int InputHandle ) ;																	// キー入力ハ?ド?に指定の文?列をセットする
extern	int			SetKeyInputStringWithStrLen(	const TCHAR *String, size_t StringLength, int InputHandle ) ;																	// キー入力ハ?ド?に指定の文?列をセットする
extern	int			SetKeyInputNumber(				int   Number,                             int InputHandle ) ;																	// キー入力ハ?ド?に指定の?値を文?に置き換えてセットする
extern	int			SetKeyInputNumberToFloat(		float Number,                             int InputHandle ) ;																	// キー入力ハ?ド?に指定の?動小?点値を文?に置き換えてセットする
extern	int			GetKeyInputString(				TCHAR *StrBuffer,                         int InputHandle ) ;																	// キー入力ハ?ド?の入力?の文?列を取得する
extern	int			GetKeyInputNumber(				int InputHandle ) ;																												// キー入力ハ?ド?の入力?の文?列を整?値として取得する
extern	float		GetKeyInputNumberToFloat(		int InputHandle ) ;																												// キー入力ハ?ド?の入力?の文?列を?動小?点値として取得する
extern	int			SetKeyInputCursorPosition(		int Position,        int InputHandle ) ;																						// キー入力ハ?ド?の現在のカーソ?位置を設定する
extern	int			GetKeyInputCursorPosition(		int InputHandle ) ;																												// キー入力ハ?ド?の現在のカーソ?位置を取得する

#endif // DX_NON_KEYEX











// DxFile.cpp関?プ?トタイプ宣言

// ファイ?アクセス関?
extern	int			FileRead_open(						const TCHAR *FilePath,                        int ASync DEFAULTPARAM( = FALSE ) ) ;	// ファイ?を開く
extern	int			FileRead_open_WithStrLen(			const TCHAR *FilePath, size_t FilePathLength, int ASync DEFAULTPARAM( = FALSE ) ) ;	// ファイ?を開く
extern	int			FileRead_open_mem(					const void *FileImage, size_t FileImageSize ) ;					// ???に展開されたファイ?を開く
extern	LONGLONG	FileRead_size(						const TCHAR *FilePath ) ;										// ファイ?のサイズを取得する
extern	LONGLONG	FileRead_size_WithStrLen(			const TCHAR *FilePath, size_t FilePathLength ) ;				// ファイ?のサイズを取得する
extern	LONGLONG	FileRead_size_handle(				int FileHandle ) ;												// ファイ?のサイズを取得する( ファイ?ハ?ド?使用版 )
extern	int			FileRead_close(						int FileHandle ) ;												// ファイ?を閉じる
extern	LONGLONG	FileRead_tell(						int FileHandle ) ;												// ファイ?ポイ?タの読み?み位置を取得する
extern	int			FileRead_seek(						int FileHandle , LONGLONG Offset , int Origin ) ;				// ファイ?ポイ?タの読み?み位置を変更する
extern	int			FileRead_read(						void *Buffer , int ReadSize , int FileHandle ) ;				// ファイ?からデータを読み?む
extern	int			FileRead_idle_chk(					int FileHandle ) ;												// ファイ?読み?みが完了しているかどうかを取得する
extern	int			FileRead_eof(						int FileHandle ) ;												// ファイ?の読み?み位置が終端に達しているかどうかを取得する
extern	int			FileRead_set_format(				int FileHandle, int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ ) ;	// ファイ?の文?コード形式を設定する( テキストファイ?用 )
extern	int			FileRead_gets(						TCHAR *Buffer , int BufferSize , int FileHandle ) ;				// ファイ?から文?列を読み出す
extern	TCHAR		FileRead_getc(						int FileHandle ) ;												// ファイ?から一文?読み出す
extern	int			FileRead_scanf(						int FileHandle , const TCHAR *Format , ... ) ;					// ファイ?から?式化されたデータを読み出す

extern	DWORD_PTR	FileRead_createInfo(				const TCHAR *ObjectPath ) ;										// ファイ?情報ハ?ド?を作成する( 戻り値  -1:エ?ー  -1以外:ファイ?情報ハ?ド? )
extern	DWORD_PTR	FileRead_createInfo_WithStrLen(		const TCHAR *ObjectPath, size_t ObjectPathLength ) ;			// ファイ?情報ハ?ド?を作成する( 戻り値  -1:エ?ー  -1以外:ファイ?情報ハ?ド? )
extern	int			FileRead_getInfoNum(				DWORD_PTR FileInfoHandle ) ;									// ファイ?情報ハ?ド??のファイ?の?を取得する
extern	int			FileRead_getInfo(					int Index , FILEINFO *Buffer , DWORD_PTR FileInfoHandle ) ;		// ファイ?情報ハ?ド??のファイ?の情報を取得する
extern	int			FileRead_deleteInfo(				DWORD_PTR FileInfoHandle ) ;									// ファイ?情報ハ?ド?を削?する

extern	DWORD_PTR	FileRead_findFirst(					const TCHAR *FilePath,                        FILEINFO *Buffer ) ; // 指定のファイ??はフォ?ダの情報を取得し、ファイ??索ハ?ド?も作成する( 戻り値: -1=エ?ー  -1以外=ファイ??索ハ?ド? )
extern	DWORD_PTR	FileRead_findFirst_WithStrLen(		const TCHAR *FilePath, size_t FilePathLength, FILEINFO *Buffer ) ; // 指定のファイ??はフォ?ダの情報を取得し、ファイ??索ハ?ド?も作成する( 戻り値: -1=エ?ー  -1以外=ファイ??索ハ?ド? )
extern	int			FileRead_findNext(					DWORD_PTR FindHandle, FILEINFO *Buffer ) ;						// 条?の?致する?のファイ?の情報を取得する( 戻り値: -1=エ?ー  0=成功 )
extern	int			FileRead_findClose(					DWORD_PTR FindHandle ) ;										// ファイ??索ハ?ド?を閉じる( 戻り値: -1=エ?ー  0=成功 )

extern	int			FileRead_fullyLoad(					const TCHAR *FilePath ) ;										// 指定のファイ?の内容を全て???に読み?み、その情報のアクセスに必要なハ?ド?を返す( 戻り値  -1:エ?ー  -1以外:ハ?ド? )、使い終わったらハ?ド?は FileRead_fullyLoad_delete で削?する必要が?ります
extern	int			FileRead_fullyLoad_WithStrLen(		const TCHAR *FilePath, size_t FilePathLength ) ;				// 指定のファイ?の内容を全て???に読み?み、その情報のアクセスに必要なハ?ド?を返す( 戻り値  -1:エ?ー  -1以外:ハ?ド? )、使い終わったらハ?ド?は FileRead_fullyLoad_delete で削?する必要が?ります
extern	int			FileRead_fullyLoad_delete(			int FLoadHandle ) ;												// FileRead_fullyLoad で読み?んだファイ?のハ?ド?を削?する
extern	const void*	FileRead_fullyLoad_getImage(		int FLoadHandle ) ;												// FileRead_fullyLoad で読み?んだファイ?の内容を格納した???アド?スを取得する
extern	LONGLONG	FileRead_fullyLoad_getSize(			int FLoadHandle ) ;												// FileRead_fullyLoad で読み?んだファイ?のサイズを取得する

// 設定関係関?
extern	int			GetStreamFunctionDefault(			void ) ;														// ＤＸ?イブ??でスト?ー?データアクセスに使用する関?がデフォ?トのものか調べる( TRUE:デフォ?トのもの  FALSE:デフォ?トではない )
extern	int			ChangeStreamFunction(				const STREAMDATASHREDTYPE2  *StreamThread  ) ;					// ＤＸ?イブ??でスト?ー?データアクセスに使用する関?を変更する
extern	int			ChangeStreamFunctionW(				const STREAMDATASHREDTYPE2W *StreamThreadW ) ;					// ＤＸ?イブ??でスト?ー?データアクセスに使用する関?を変更する( wchar_t 使用版 )

// 補?関係関?
extern int			ConvertFullPath(					const TCHAR *Src,                   TCHAR *Dest, const TCHAR *CurrentDir DEFAULTPARAM( = NULL )                                              ) ;	// フ?パスではないパス文?列をフ?パスに変換する( CurrentDir はフ?パスで?る必要が?る(語尾に『\』が?っても無くても良い) )( CurrentDir が NULL の場?は現在のカ??トディ?クト?を使用する )
extern int			ConvertFullPathWithStrLen(			const TCHAR *Src, size_t SrcLength, TCHAR *Dest, const TCHAR *CurrentDir DEFAULTPARAM( = NULL ), size_t CurrentDirLength DEFAULTPARAM( = 0 ) ) ;












// DxInput.cpp関?プ?トタイプ宣言

#ifndef DX_NON_INPUT

// 入力状態取得関?
extern	int			CheckHitKey(							int KeyCode ) ;															// キーボードの?下状態を取得する
extern	int			CheckHitKeyAll(							int CheckType DEFAULTPARAM( = DX_CHECKINPUT_ALL ) ) ;					// どれか一つでもキーが?されているかどうかを取得( ?されていたら戻り値が 0 以外になる )
extern	int			GetHitKeyStateAll(						DX_CHAR *KeyStateArray ) ;												// すべてのキーの?下状態を取得する( KeyStateBuf:char型256個分の配列の先頭アド?ス )
extern	int			GetHitKeyStateAllEx(					int *KeyStateArray ) ;													// すべてのキーの?下状態を取得する( KeyStateBuf:int型256個分の配列の先頭アド?ス、?回は配列の全要素に 0 が代入されている必要が?ります、配列の各要素の状態　0:?されていない　1：?された１回め　2以上：?され続けている回?　-1：?されて離された１回め　-2以下：?されて離されてからの回? )
extern	int			GetJoypadNum(							void ) ;																// ジ?イパッドが接続されている?を取得する
extern	int			GetJoypadButtonNum(						int InputType ) ;														// ジ?イパッドのボタ?の?を取得する
extern	int			GetJoypadInputState(					int InputType ) ;														// ジ?イパッドの入力状態を取得する
extern	int			GetJoypadAnalogInput(					int *XBuf, int *YBuf, int InputType ) ;									// ジ?イパッドのアナ?グ的なスティック入力情報を得る
extern	int			GetJoypadAnalogInputRight(				int *XBuf, int *YBuf, int InputType ) ;									// ( 使用非?奨 )ジ?イパッドのアナ?グ的なスティック入力情報を得る(右スティック用)
extern	int			GetJoypadDirectInputState(				int InputType, DINPUT_JOYSTATE *DInputState ) ;							// DirectInput から得られるジ?イパッドの生のデータを取得する( DX_INPUT_KEY や DX_INPUT_KEY_PAD1 など、キーボードが?むタイプを InputType に渡すとエ?ーとなり -1 を返す )
extern	int			CheckJoypadXInput(						int InputType ) ;														// 指定の入力デバイスが XInput に対?しているかどうかを取得する( 戻り値  TRUE:XInput対?の入力デバイス  FALSE:XInput非対?の入力デバイス   -1:エ?ー )( DX_INPUT_KEY や DX_INPUT_KEY_PAD1 など、キーボードが?むタイプを InputType に渡すとエ?ーとなり -1 を返す )
extern	int			GetJoypadType(							int InputType ) ;														// ジ?イパッドのタイプを取得する( 戻り値  -1:エ?ー  0以上:ジ?イパッドタイプ( DX_PADTYPE_XBOX_360 など ) )
extern	int			GetJoypadXInputState(					int InputType, XINPUT_STATE *XInputState ) ;							// XInput から得られる入力デバイス( Xbox360コ?ト?ー?? )の生のデータを取得する( XInput非対?のパッドの場?はエ?ーとなり -1 を返す、DX_INPUT_KEY や DX_INPUT_KEY_PAD1 など、キーボードが?むタイプを InputType に渡すとエ?ーとなり -1 を返す )
extern	int			SetJoypadInputToKeyInput(				int InputType, int PadInput, int KeyInput1, int KeyInput2 DEFAULTPARAM( = -1 ) , int KeyInput3 DEFAULTPARAM( = -1 ) , int KeyInput4 DEFAULTPARAM( = -1 )  ) ; // ジ?イパッドの入力に対?したキーボードの入力を設定する( InputType:設定を変更するパッドの識別子( DX_INPUT_PAD1? )　　PadInput:設定を変更するパッドボタ?の識別子( PAD_INPUT_1 ? )　　KeyInput1:PadInput を?下したことにするキーコード( KEY_INPUT_A など )その１　　KeyInput2:その２、-1で設定なし　　KeyInput3:その３、-1で設定なし　　KeyInput4:その４、-1で設定なし )
extern	int			SetJoypadDeadZone(						int InputType, double Zone ) ;											// ジ?イパッドの無効ゾー?の設定を行う( InputType:設定を変更するパッドの識別子( DX_INPUT_PAD1? )   Zone:新しい無効ゾー?( 0.0 ～ 1.0 )、デフォ?ト値は 0.35 )
extern	double		GetJoypadDeadZone(						int InputType ) ;														// ジ?イパッドの無効ゾー?の設定を取得する( InputType:設定を変更するパッドの識別子( DX_INPUT_PAD1? )   戻り値:無効ゾー?( 0.0 ～ 1.0 ) )
extern	int			SetJoypadDefaultDeadZoneAll(			double Zone ) ;															// ジ?イパッドのデフォ?トの無効ゾー?を設定する( Zone:新しい無効ゾー?( 0.0 ～ 1.0 )、デフォ?ト値は 0.35 )
extern	double		GetJoypadDefaultDeadZoneAll(			void ) ;																// ジ?イパッドのデフォ?トの無効ゾー?を取得する( 戻り値:無効ゾー?( 0.0 ～ 1.0 ) )
extern	int			StartJoypadVibration(					int InputType, int Power, int Time, int EffectIndex DEFAULTPARAM( = -1 ) ) ;	// ジ?イパッドの振動を開始する
extern	int			StopJoypadVibration(					int InputType, int EffectIndex DEFAULTPARAM( = -1 ) ) ;					// ジ?イパッドの振動を停止する
extern	int			GetJoypadPOVState(						int InputType, int POVNumber ) ;										// ジ?イパッドのＰＯＶ入力の状態を得る( 戻り値　指定のPOVデータの角度、単位は角度の１００倍( 90度なら 9000 ) ?心位置に?る場?は -1 が返る )
extern	int			ReSetupJoypad(							void ) ;																// ジ?イパッドの再セットアップを行う( 新たに接続されたジ?イパッドが?ったら?出される )
extern	int			ReSetupInputSystem(						void ) ;																// 入力システ?の再セットアップを行う( 戻り値  0:正常終了  -1:エ?ー発生 )

extern	int			SetUseJoypadVibrationFlag(				int Flag ) ;															// ジ?イパッドの振動機能を使用するかどうかを設定する( TRUE:使用する　　FALSE:使用しない )

#endif // DX_NON_INPUT







#ifndef DX_NOTUSE_DRAWFUNCTION

// 画???系関?プ?トタイプ宣言

// グ?フィックハ?ド?作成関係関?
extern	int			MakeGraph(							int SizeX, int SizeY, int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;			// 指定サイズのグ?フィックハ?ド?を作成する
extern	int			MakeScreen(							int SizeX, int SizeY, int UseAlphaChannel DEFAULTPARAM( = FALSE ) ) ;		// SetDrawScreen で描画対象にできるグ?フィックハ?ド?を作成する
extern	int			DerivationGraph(					int   SrcX, int   SrcY, int   Width, int   Height, int SrcGraphHandle ) ;	// 指定のグ?フィックハ?ド?の指定?分だけを抜き出して新たなグ?フィックハ?ド?を作成する
extern	int			DerivationGraphF(					float SrcX, float SrcY, float Width, float Height, int SrcGraphHandle ) ;	// 指定のグ?フィックハ?ド?の指定?分だけを抜き出して新たなグ?フィックハ?ド?を作成する( float版 )
extern	int			DeleteGraph(						int GrHandle ) ;															// グ?フィックハ?ド?を削?する
extern	int			DeleteSharingGraph(					int GrHandle ) ;															// 指定のグ?フィックハ?ド?と、同じグ?フィックハ?ド?から派生しているグ?フィックハ?ド?( DerivationGraph で派生したハ?ド?、LoadDivGraph 読み?んで作成された複?のハ?ド? )を一度に削?する
extern	int			GetGraphNum(						void ) ;																	// 有効なグ?フィックハ?ド?の?を取得する
extern	int			FillGraph(							int GrHandle, int Red, int Green, int Blue, int Alpha DEFAULTPARAM( = 255 ) ) ;											// グ?フィックハ?ド?を指定の色で塗りつぶす
extern	int			FillRectGraph(						int GrHandle, int x, int y, int Width, int Height, int Red, int Green, int Blue, int Alpha DEFAULTPARAM( = 255 ) ) ;	// グ?フィックハ?ド?の指定の範囲を指定の色で塗りつぶす
extern	int			SetGraphLostFlag(					int GrHandle, int *LostFlag ) ;												// 指定のグ?フィックハ?ド?が削?された際に 1 にする変?のアド?スを設定する
extern	int			InitGraph(							void ) ;																	// すべてのグ?フィックハ?ド?を削?する
extern	int			ReloadFileGraphAll(					void ) ;																	// ファイ?から画?を読み?んだ全てのグ?フィックハ?ド?について、再度ファイ?から画?を読み?む

// シ?ドウマップハ?ド?関係関?
extern	int			MakeShadowMap(						int SizeX, int SizeY ) ;													// シ?ドウマップハ?ド?を作成する
extern	int			DeleteShadowMap(					int SmHandle ) ;															// シ?ドウマップハ?ド?を削?する
extern	int			SetShadowMapLightDirection(			int SmHandle, VECTOR Direction ) ;											// シ?ドウマップが想定する?イトの方向を設定する
extern	int			ShadowMap_DrawSetup(				int SmHandle ) ;															// シ?ドウマップへの描画の?備を行う
extern	int			ShadowMap_DrawEnd(					void ) ;																	// シ?ドウマップへの描画を終了する
extern	int			SetUseShadowMap(					int SmSlotIndex, int SmHandle ) ;											// 描画で使用するシ?ドウマップを指定する、有効なス?ットは０～２、SmHandle に -1 を渡すと指定のス?ットのシ?ドウマップを解?
extern	int			SetShadowMapDrawArea(				int SmHandle, VECTOR MinPosition, VECTOR MaxPosition ) ;					// シ?ドウマップに描画する際の範囲を設定する( この関?で描画範囲を設定しない場?は??台を拡大した範囲が描画範囲となる )
extern	int			ResetShadowMapDrawArea(				int SmHandle ) ;															// SetShadowMapDrawArea の設定を解?する
extern	int			SetShadowMapAdjustDepth(			int SmHandle, float Depth ) ;												// シ?ドウマップを使用した描画?の補正深度を設定する
extern	int			GetShadowMapViewProjectionMatrix(	int SmHandle, MATRIX *MatrixBuffer ) ;										// シ?ドウマップ作成?や適用?に使用するビ?ー行列と射影行列を乗算した行列を取得する
extern	int			TestDrawShadowMap(					int SmHandle, int x1, int y1, int x2, int y2 ) ;							// シ?ドウマップを画面にテスト描画する

// グ?フィックハ?ド?への画?転?関?
extern	int			BltBmpToGraph(						const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp,                                                                      int CopyPointX, int CopyPointY,                              int  GrHandle ) ;					// ＢＭＰの内容をグ?フィックハ?ド?に転?
extern	int			BltBmpToDivGraph(					const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp,                                                                      int AllNum, int XNum, int YNum, int Width, int Height, const int *GrHandle, int ReverseFlag ) ;	// ＢＭＰの内容を分?作成したグ?フィックハ?ド?たちに転?
extern	int			BltBmpOrGraphImageToGraph(			const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int CopyPointX, int CopyPointY,                              int  GrHandle ) ;					// ＢＭＰ か BASEIMAGE をグ?フィックハ?ド?に転?
extern	int			BltBmpOrGraphImageToGraph2(			const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, const RECT *SrcRect, int DestX, int DestY,                   int  GrHandle ) ;					// ＢＭＰ か BASEIMAGE の指定の領域をグ?フィックハ?ド?に転?
extern	int			BltBmpOrGraphImageToDivGraph(		const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   Width, int   Height, const int *GrHandle, int ReverseFlag ) ;	// ＢＭＰ か BASEIMAGE を分?作成したグ?フィックハ?ド?たちに転?
extern	int			BltBmpOrGraphImageToDivGraphF(		const COLORDATA *BmpColorData, HBITMAP RgbBmp, HBITMAP AlphaBmp, int BmpFlag, const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float Width, float Height, const int *GrHandle, int ReverseFlag ) ;	// ＢＭＰ か BASEIMAGE を分?作成したグ?フィックハ?ド?たちに転?( float型 )

// 画?からグ?フィックハ?ド?を作成する関?
extern	int			LoadBmpToGraph(						const TCHAR *FileName,                        int TextureFlag, int ReverseFlag, int SurfaceMode DEFAULTPARAM( = DX_MOVIESURFACE_NORMAL ) ) ;											// 画?ファイ?からグ?フィックハ?ド?を作成する
extern	int			LoadBmpToGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int TextureFlag, int ReverseFlag, int SurfaceMode DEFAULTPARAM( = DX_MOVIESURFACE_NORMAL ) ) ;											// 画?ファイ?からグ?フィックハ?ド?を作成する
extern	int			LoadGraph(							const TCHAR *FileName,                        int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// 画?ファイ?からグ?フィックハ?ド?を作成する
extern	int			LoadGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// 画?ファイ?からグ?フィックハ?ド?を作成する
extern	int			LoadReverseGraph(					const TCHAR *FileName,                        int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// 画?ファイ?を反転したものでグ?フィックハ?ド?を作成する
extern	int			LoadReverseGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int NotUse3DFlag DEFAULTPARAM( = FALSE ) ) ;																				// 画?ファイ?を反転したものでグ?フィックハ?ド?を作成する
extern	int			LoadDivGraph(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivGraphF(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivGraphFWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivBmpToGraph(					const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;			// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivBmpToGraphWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;			// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivBmpToGraphF(					const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;			// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadDivBmpToGraphFWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, int TextureFlag, int ReverseFlag , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;			// 画?ファイ?を分?してグ?フィックハ?ド?を作成する
extern	int			LoadReverseDivGraph(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を反転したものを分?してグ?フィックハ?ド?を作成する
extern	int			LoadReverseDivGraphWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , int   XStride DEFAULTPARAM( = 0 ) , int   YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を反転したものを分?してグ?フィックハ?ド?を作成する
extern	int			LoadReverseDivGraphF(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を反転したものを分?してグ?フィックハ?ド?を作成する
extern	int			LoadReverseDivGraphFWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, int *HandleArray, int NotUse3DFlag DEFAULTPARAM( = FALSE ) , float XStride DEFAULTPARAM( = 0 ) , float YStride DEFAULTPARAM( = 0 ) ) ;	// 画?ファイ?を反転したものを分?してグ?フィックハ?ド?を作成する
extern	int			LoadBlendGraph(						const TCHAR *FileName ) ;																																				// 画?ファイ?からブ??ド用グ?フィックハ?ド?を作成する
extern	int			LoadBlendGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength ) ;																														// 画?ファイ?からブ??ド用グ?フィックハ?ド?を作成する

extern	int			CreateGraphFromMem(					const void *RGBFileImage, int RGBFileImageSize,               const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ,                  int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// ???上の画?イ?ージからグ?フィックハ?ド?を作成する
extern	int			ReCreateGraphFromMem(				const void *RGBFileImage, int RGBFileImageSize, int GrHandle, const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ,                  int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// ???上の画?イ?ージから既存のグ?フィックハ?ド?にデータを転?する
extern	int			CreateDivGraphFromMem(				const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ???上の画?イ?ージから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromMem(				const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ???上の画?イ?ージから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromMem(			const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ???上の画?イ?ージから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromMem(			const void *RGBFileImage, int RGBFileImageSize, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray,               int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const void *AlphaFileImage DEFAULTPARAM( = NULL ) , int AlphaFileImageSize DEFAULTPARAM( = 0 ) ) ;			// ???上の画?イ?ージから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
extern	int			CreateGraphFromBmp(					const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage,               const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) , int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// ビットマップデータからグ?フィックハ?ド?を作成する
extern	int			ReCreateGraphFromBmp(				const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int GrHandle, const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) , int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																			// ビットマップデータから既存のグ?フィックハ?ド?にデータを転?する
extern	int			CreateDivGraphFromBmp(				const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// ビットマップデータから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromBmp(				const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// ビットマップデータから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromBmp(			const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// ビットマップデータから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromBmp(			const BITMAPINFO *RGBBmpInfo, const void *RGBBmpImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray,        int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) , const BITMAPINFO *AlphaBmpInfo DEFAULTPARAM( = NULL ) , const void *AlphaBmpImage DEFAULTPARAM( = NULL ) ) ;	// ビットマップデータから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
extern	int			CreateDXGraph(						const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag ) ;																									// 基本イ?ージデータからサイズを?り出し、それに?ったグ?フィックハ?ド?を作成する
extern	int			CreateGraphFromGraphImage(			const BASEIMAGE *RgbBaseImage,                                                                                                                  int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータからグ?フィックハ?ド?を作成する
extern	int			ReCreateGraphFromGraphImage(		const BASEIMAGE *RgbBaseImage,                                  int GrHandle,                                                                   int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存のグ?フィックハ?ド?にデータを転?する
extern	int			CreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromGraphImage(		      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromGraphImage(	      BASEIMAGE *RgbBaseImage,                                  int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			CreateGraphFromGraphImage(			const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータからグ?フィックハ?ド?を作成する
extern	int			ReCreateGraphFromGraphImage(		const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int GrHandle,                                                                   int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存のグ?フィックハ?ド?にデータを転?する
extern	int			CreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromGraphImage(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromGraphImage(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromGraphImage(	      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			CreateGraphFromGraphImage2(			const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage,                                                                                 int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータからグ?フィックハ?ド?を作成する
extern	int			ReCreateGraphFromGraphImage2(		const BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int GrHandle,                                                                   int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存のグ?フィックハ?ド?にデータを転?する
extern	int			CreateDivGraphFromGraphImage2(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromGraphImage2(		      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY,       int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromGraphImage2(	      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromGraphImage2(	      BASEIMAGE *RgbBaseImage, const BASEIMAGE *AlphaBaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray, int TextureFlag DEFAULTPARAM( = TRUE ) , int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
extern	int			CreateGraph(						int Width, int Height, int Pitch, const void *RGBImage, const void *AlphaImage DEFAULTPARAM( = NULL ) , int GrHandle DEFAULTPARAM( = -1 ) ) ;																																		// ???上のビットマップイ?ージからグ?フィックハ?ド?を作成する
extern	int			CreateDivGraph(						int Width, int Height, int Pitch, const void *RGBImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray, const void *AlphaImage DEFAULTPARAM( = NULL ) ) ;																								// ???上のビットマップイ?ージから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphF(					int Width, int Height, int Pitch, const void *RGBImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray, const void *AlphaImage DEFAULTPARAM( = NULL ) ) ;																								// ???上のビットマップイ?ージから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateGraph(						int Width, int Height, int Pitch, const void *RGBImage, int GrHandle, const void *AlphaImage DEFAULTPARAM( = NULL ) ) ;																																								// ???上のビットマップイ?ージからグ?フィックハ?ド?を再作成する
#ifndef DX_NON_SOFTIMAGE
extern	int			CreateBlendGraphFromSoftImage(		int SIHandle ) ;																														// ソフトウエアで扱うイ?ージからブ??ド用画?グ?フィックハ?ド?を作成する( -1:エ?ー  -1以外:ブ??ド用グ?フィックハ?ド? )
extern	int			CreateGraphFromSoftImage(			int SIHandle ) ;																														// ソフトウエアで扱うイ?ージからグ?フィックハ?ド?を作成する( -1:エ?ー  -1以外:グ?フィックハ?ド? )
extern	int			CreateGraphFromRectSoftImage(		int SIHandle, int x, int y, int SizeX, int SizeY ) ;																					// ソフトウエアで扱うイ?ージの指定の領域を使ってグ?フィックハ?ド?を作成する( -1:エ?ー  -1以外:グ?フィックハ?ド? )
extern	int			ReCreateGraphFromSoftImage(			int SIHandle, int GrHandle ) ;																											// ソフトウエアで扱うイ?ージから既存のグ?フィックハ?ド?に画?データを転?する
extern	int			ReCreateGraphFromRectSoftImage(		int SIHandle, int x, int y, int SizeX, int SizeY, int GrHandle ) ;																		// ソフトウエアで扱うイ?ージから既存のグ?フィックハ?ド?に画?データを転?する
extern	int			CreateDivGraphFromSoftImage(		int SIHandle, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray ) ;											// ソフトウエアで扱うイ?ージから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromSoftImage(		int SIHandle, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray ) ;											// ソフトウエアで扱うイ?ージから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromSoftImage(		int SIHandle, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray ) ;										// ソフトウエアで扱うイ?ージから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromSoftImage(	    int SIHandle, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray ) ;										// ソフトウエアで扱うイ?ージから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
#endif // DX_NON_SOFTIMAGE
extern	int			CreateGraphFromBaseImage(			const BASEIMAGE *BaseImage ) ;																											// 基本イ?ージデータからグ?フィックハ?ド?を作成する
extern	int			CreateGraphFromRectBaseImage(		const BASEIMAGE *BaseImage, int x, int y, int SizeX, int SizeY ) ;																		// 基本イ?ージデータの指定の領域を使ってグ?フィックハ?ド?を作成する
extern	int			ReCreateGraphFromBaseImage(			const BASEIMAGE *BaseImage,                                     int GrHandle ) ;														// 基本イ?ージデータから既存のグ?フィックハ?ド?に画?データを転?する
extern	int			ReCreateGraphFromRectBaseImage(		const BASEIMAGE *BaseImage, int x, int y, int SizeX, int SizeY, int GrHandle ) ;														// 基本イ?ージデータの指定の領域を使って既存のグ?フィックハ?ド?に画?データを転?する
extern	int			CreateDivGraphFromBaseImage(		      BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, int *HandleArray ) ;								// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する
extern	int			CreateDivGraphFFromBaseImage(		      BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, int *HandleArray ) ;								// 基本イ?ージデータから分?グ?フィックハ?ド?を作成する( float版 )
extern	int			ReCreateDivGraphFromBaseImage(		      BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, int   SizeX, int   SizeY, const int *HandleArray ) ;						// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する
extern	int			ReCreateDivGraphFFromBaseImage(	          BASEIMAGE *BaseImage, int AllNum, int XNum, int YNum, float SizeX, float SizeY, const int *HandleArray ) ;						// 基本イ?ージデータから既存の分?グ?フィックハ?ド?にデータを転?する( float版 )
extern	int			ReloadGraph(						const TCHAR *FileName,                        int GrHandle, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																		// 画?ファイ?からグ?フィックハ?ド?へ画?データを転?する
extern	int			ReloadGraphWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int GrHandle, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;																		// 画?ファイ?からグ?フィックハ?ド?へ画?データを転?する
extern	int			ReloadDivGraph(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?ファイ?からグ?フィックハ?ド?たちへ画?データを分?転?する
extern	int			ReloadDivGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?ファイ?からグ?フィックハ?ド?たちへ画?データを分?転?する
extern	int			ReloadDivGraphF(					const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?ファイ?からグ?フィックハ?ド?たちへ画?データを分?転?する( float版 )
extern	int			ReloadDivGraphFWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray, int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?ファイ?からグ?フィックハ?ド?たちへ画?データを分?転?する( float版 )
extern	int			ReloadReverseGraph(					const TCHAR *FileName,                        int GrHandle ) ;																			// ReloadGraph の画?反転??追加版
extern	int			ReloadReverseGraphWithStrLen(		const TCHAR *FileName, size_t FileNameLength, int GrHandle ) ;																			// ReloadGraph の画?反転??追加版
extern	int			ReloadReverseDivGraph(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray ) ;		// ReloadDivGraph の画?反転??追加版
extern	int			ReloadReverseDivGraphWithStrLen(	const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int   XSize, int   YSize, const int *HandleArray ) ;		// ReloadDivGraph の画?反転??追加版
extern	int			ReloadReverseDivGraphF(				const TCHAR *FileName,                        int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray ) ;		// ReloadDivGraph の画?反転??追加版( float版 )
extern	int			ReloadReverseDivGraphFWithStrLen(	const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, float XSize, float YSize, const int *HandleArray ) ;		// ReloadDivGraph の画?反転??追加版( float版 )

// グ?フィックハ?ド?作成?設定係関?
extern	int			SetGraphColorBitDepth(						int ColorBitDepth ) ;							// SetCreateGraphColorBitDepth の?名称
extern 	int			GetGraphColorBitDepth(						void ) ;										// GetCreateGraphColorBitDepth の?名称
extern	int			SetCreateGraphColorBitDepth(				int BitDepth ) ;								// 作成するグ?フィックハ?ド?の色深度を設定する
extern	int			GetCreateGraphColorBitDepth(				void ) ;										// 作成するグ?フィックハ?ド?の色深度を取得する
extern	int			SetCreateGraphChannelBitDepth(				int BitDepth ) ;								// 作成するグ?フィックハ?ド?の１チ??ネ?辺りのビット深度を設定する
extern	int			GetCreateGraphChannelBitDepth(				void ) ;										// 作成するグ?フィックハ?ド?の１チ??ネ?辺りのビット深度を取得する
extern	int			SetCreateGraphInitGraphDelete(				int Flag ) ;									// 作成するグ?フィックハ?ド?を InitGraph() で削?されるかを設定する( Flag  TRUE:InitGraphで削?される(デフォ?ト)  FALSE:InitGraphで削?されない )
extern	int			GetCreateGraphInitGraphDelete(				void ) ;										// 作成するグ?フィックハ?ド?を InitGraph() で削?されるかを取得する( Flag  TRUE:InitGraphで削?される(デフォ?ト)  FALSE:InitGraphで削?されない )
extern	int			SetCreateGraphHandle(						int GrHandle ) ;								// 作成するグ?フィックハ?ド?のハ?ド?値を設定する、０以下の値を渡すと設定解?( 存在しないグ?フィックハ?ド?の値の場?のみ有効 )
extern	int			GetCreateGraphHandle(						void ) ;										// 作成するグ?フィックハ?ド?のハ?ド?値を取得する
extern	int			SetCreateDivGraphHandle(					const int *HandleArray, int HandleNum ) ;		// 作成するグ?フィックハ?ド?のハ?ド?値を設定する、LoadDivGraph ?の分?画?読み?み用、HandleArray に NULL を渡すと設定解?( 存在しないグ?フィックハ?ド?の値の場?のみ有効 )
extern	int			GetCreateDivGraphHandle(					int *HandleArray ) ;							// 作成するグ?フィックハ?ド?のハ?ド?値を取得する、LoadDivGraph ?の分?画?読み?み用、戻り値は SetCreateDivGraphHandle の引? HandleNum に渡した値、HandleArray を NULL にすることが可能
extern	int			SetDrawValidGraphCreateFlag(				int Flag ) ;									// SetDrawScreen に引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?を作成するかどうかを設定する( TRUE:描画可能グ?フィックハ?ド?を作成する  FLASE:通常のグ?フィックハ?ド?を作成する( デフォ?ト ) )
extern	int			GetDrawValidGraphCreateFlag(				void ) ;										// SetDrawScreen に引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?を作成するかどうかを設定を取得する
extern	int			SetDrawValidFlagOf3DGraph(					int Flag ) ;									// SetDrawValidGraphCreateFlag の?名称
extern	int			SetLeftUpColorIsTransColorFlag(				int Flag ) ;									// 画?ファイ?からグ?フィックハ?ド?を作成する際に画?左上の色を透過色として扱うかどうかを設定する( TRUE:透過色として扱う 　FALSE:透過色として扱わない( デフォ?ト ) )
extern	int			SetUsePaletteGraphFlag(						int Flag ) ;									// 読み?む画?がパ?ット画?の場?、パ?ット画?として使用できる場?はパ?ット画?として使用するかどうかを設定する( TRUE:パ?ット画?として使用できる場?はパ?ット画?として使用する( デフォ?ト )  FALSE:パ?ット画?として使用できる場?もパ?ット画?としては使用しない( 通常タイプの画?に変換して使用する ) )
extern	int			SetUseBlendGraphCreateFlag(					int Flag ) ;									// ブ??ド??用画?を作成するかどうか( 要は画?の赤成分をα成分として扱うかどうか )の設定を行う( TRUE:ブ??ド画?として読み?む  FALSE:通常画?として読み?む( デフォ?ト ) )
extern	int			GetUseBlendGraphCreateFlag(					void ) ;										// ブ??ド??用画?を作成するかどうか( 要は画?の赤成分をα成分として扱うかどうか )の設定を取得する
extern	int			SetUseAlphaTestGraphCreateFlag(				int Flag ) ;									// ア?ファテストを使用するグ?フィックハ?ド?を作成するかどうかを設定する( TRUE:ア?ファテストを使用する( デフォ?ト )  FALSE:ア?ファテストを使用しない )
extern	int			GetUseAlphaTestGraphCreateFlag(				void ) ;										// ア?ファテストを使用するグ?フィックハ?ド?を作成するかどうかを取得する
extern	int			SetUseAlphaTestFlag(						int Flag ) ;									// SetUseAlphaTestGraphCreateFlag の?名称
extern	int			GetUseAlphaTestFlag(						void ) ;										// GetUseAlphaTestGraphCreateFlag の?名称
extern	int			SetCubeMapTextureCreateFlag(				int Flag ) ;									// キ?ーブマップテクスチ?を作成するかどうかのフ?グを設定する
extern	int			GetCubeMapTextureCreateFlag(				void ) ;										// キ?ーブマップテクスチ?を作成するかどうかのフ?グを取得する
extern	int			SetUseNoBlendModeParam(						int Flag ) ;									// SetDrawBlendMode 関?の第一引?に DX_BLENDMODE_NOBLEND を代入した際に、デフォ?トでは第二引?は内?で２５５を指定したことになるが、その自動２５５化をしないかどうかを設定する( TRUE:しない(第二引?の値が使用される)   FALSE:する(第二引?の値は無?されて 255 が常に使用される)(デフォ?ト) )αチ??ネ?付き画?に対して描画を行う場?のみ意味が?る関?
extern	int			SetDrawValidAlphaChannelGraphCreateFlag(	int Flag ) ;									// SetDrawScreen の引?として渡せる( 描画対象として使用できる )αチ??ネ?付きグ?フィックハ?ド?を作成するかどうかを設定する( SetDrawValidGraphCreateFlag 関?で描画対象として使用できるグ?フィックハ?ド?を作成するように設定されていないと効果?りません )( TRUE:αチ??ネ?付き   FALSE:αチ??ネ?なし( デフォ?ト ) )
extern	int			GetDrawValidAlphaChannelGraphCreateFlag(	void ) ;										// SetDrawScreen の引?として渡せる( 描画対象として使用できる )αチ??ネ?付きグ?フィックハ?ド?を作成するかどうかを取得する
extern	int			SetDrawValidFloatTypeGraphCreateFlag(		int Flag ) ;									// SetDrawScreen の引?として渡せる( 描画対象として使用できる )ピクセ?フォーマットが?動小?点型のグ?フィックハ?ド?を作成するかどうかを設定する( SetDrawValidGraphCreateFlag 関?で描画対象として使用できるグ?フィックハ?ド?を作成するように設定されていないと効果?りません )、グ?フィックスデバイスが?動小?点型のピクセ?フォーマットに対?していない場?はグ?フィックハ?ド?の作成に失敗する( TRUE:?動小?点型　　FALSE:整?型( デフォ?ト ) )
extern	int			GetDrawValidFloatTypeGraphCreateFlag(		void ) ;										// SetDrawScreen の引?として渡せる( 描画対象として使用できる )ピクセ?フォーマットが?動小?点型のグ?フィックハ?ド?を作成するかどうかを取得する
extern	int			SetDrawValidGraphCreateZBufferFlag(			int Flag ) ;									// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?を作成する際に専用のＺバッファも作成するかどうかを設定する( TRUE:専用のＺバッファを作成する( デフォ?ト )  FALSE:専用のＺバッファは作成しない )
extern	int			GetDrawValidGraphCreateZBufferFlag(			void ) ;										// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?を作成する際に専用のＺバッファも作成するかどうかを取得する
extern	int			SetCreateDrawValidGraphZBufferBitDepth(		int BitDepth ) ;								// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用するＺバッファのビット深度を設定する( BitDepth:ビット深度( 指定可能な値は 16, 24, 32 の何れか( SetDrawValidGraphCreateFlag 関?で描画対象として使用できるグ?フィックハ?ド?を作成するように設定されていないと効果?りません )
extern	int			GetCreateDrawValidGraphZBufferBitDepth(		void ) ;										// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用するＺバッファのビット深度を取得する
extern	int			SetCreateDrawValidGraphMipLevels(			int MipLevels ) ;								// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用するMipMapの?ベ?を設定する
extern	int			GetCreateDrawValidGraphMipLevels(			void ) ;										// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用するMipMapの?ベ?を取得する
extern	int			SetCreateDrawValidGraphChannelNum(			int ChannelNum ) ;								// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用する色のチ??ネ??を設定する( ChannelNum:チ??ネ??( 指定可能な値は 1, 2, 4 の何れか( SetDrawValidGraphCreateFlag 関?で描画対象として使用できるグ?フィックハ?ド?を作成するように設定されていないと効果?りません )
extern	int			GetCreateDrawValidGraphChannelNum(			void ) ;										// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用する色のチ??ネ??を取得する
extern	int			SetCreateDrawValidGraphMultiSample(			int Samples, int Quality ) ;					// SetDrawScreen の引?として渡せる( 描画対象として使用できる )グ?フィックハ?ド?に適用するマ?チサ?プ??グ( ア?チエイ?アシ?グ )設定を行う( Samples:マ?チサ?プ???に使用するドット?( 多いほど重くなります )  Quality:マ?チサ?プ???の品質 )
extern	int			SetDrawValidMultiSample(					int Samples, int Quality ) ;					// SetCreateDrawValidGraphMultiSample の?名称
extern	int			GetMultiSampleQuality(						int Samples ) ;									// 指定のマ?チサ?プ??で使用できる最大クオ?ティ値を取得する( 戻り値がマイナスの場?は引?のサ?プ??が使用できないことを示します )
extern	int			SetUseTransColor(							int Flag ) ;									// 透過色機能を使用するかどうかを設定する( TRUE:使用する( デフォ?ト )  FALSE:使用しない )
extern	int			SetUseTransColorGraphCreateFlag(			int Flag ) ;									// 透過色機能を使用することを前提とした画?データの読み?み??を行うかどうかを設定する( TRUE にすると SetDrawMode( DX_DRAWMODE_BILINEAR ); をした状態で DrawGraphF ?の?動小?点型座標を受け取る関?で小?点以下の値を指定した場?に発生する描画?果の不自然を緩和する効果が?ります ( デフォ?トは FALSE ) )
extern 	int			SetUseGraphAlphaChannel(					int Flag ) ;									// SetUseAlphaChannelGraphCreateFlag の?名称
extern 	int			GetUseGraphAlphaChannel(					void ) ;										// GetUseAlphaChannelGraphCreateFlag の?名称
extern 	int			SetUseAlphaChannelGraphCreateFlag(			int Flag ) ;									// αチ??ネ?付きグ?フィックハ?ド?を作成するかどうかを設定する( TRUE:αチ??ネ?付き   FALSE:αチ??ネ?無し )
extern 	int			GetUseAlphaChannelGraphCreateFlag(			void ) ;										// αチ??ネ?付きグ?フィックハ?ド?を作成するかどうかを取得する( TRUE:αチ??ネ?付き   FALSE:αチ??ネ?無し )
extern	int			SetUseNotManageTextureFlag(					int Flag ) ;									// Direct3D の管?テクスチ?機能を使用するグ?フィックハ?ド?を作成するかどうかを設定する( TRUE:管?機能を使用する( デフォ?ト )  FALSE:管?機能を使用しない )、管?機能を使用するとグ?フィックスデバイスのＶＲＡＭ容量以上の画?を扱うことができる代わりにシステ????の使用量が?えます
extern	int			GetUseNotManageTextureFlag(					void ) ;										// Direct3D の管?テクスチ?機能を使用するグ?フィックハ?ド?を作成するかどうかを取得する
extern	int			SetUsePlatformTextureFormat(				int PlatformTextureFormat ) ;					// 作成するグ?フィックハ?ド?で使用する環境依存のテクスチ?フォーマットを指定する( Direct3D9環境なら DX_TEXTUREFORMAT_DIRECT3D9_R8G8B8 など、0 を渡すと解? )
extern	int			GetUsePlatformTextureFormat(				void ) ;										// 作成するグ?フィックハ?ド?で使用する環境依存のテクスチ?フォーマットを取得する
extern	int			SetTransColor(								int Red, int Green, int Blue ) ;				// 作成するグ?フィックハ?ド?に適用する透過色を設定する( Red,Green,Blue:透過色を光の３原色で表したもの( 各色０～２５５ ) )
extern	int			GetTransColor(								int *Red, int *Green, int *Blue ) ;				// 作成するグ?フィックハ?ド?に適用する透過色を取得する
extern	int			SetUseDivGraphFlag(							int Flag ) ;									// ２の?乗ではないサイズの画?を複?のテクスチ?を使用してＶＲＡＭの無駄を省くかどうかを設定する( TRUE:複?のテクスチ?を使用する   FALSE:なるべく一?のテクスチ?で済ます( デフォ?ト ) )、複?のテクスチ?を使用する場?はＶＲＡＭ容量の節約ができる代わりに速度の低下やバイ?ニアフィ?タ??グ描画?にテクスチ?とテクスチ?の境目が良く見るとわかる?の弊害が?ります
extern	int			SetUseAlphaImageLoadFlag(					int Flag ) ;									// LoadGraph などの際にファイ?名の?尾に _a が付いたア?ファチ??ネ?用の画?ファイ?を追加で読み?む??を行うかどうかを設定する( TRUE:行う( デフォ?ト )  FALSE:行わない )
extern	int			SetUseMaxTextureSize(						int Size ) ;									// 使用するテクスチ?ーの最大サイズを設定する( デフォ?トではグ?フィックスデバイスが対?している最大テクスチ?ーサイズ、引?に 0 を渡すとデフォ?ト設定になります )
extern	int			SetUseGraphBaseDataBackup(					int Flag ) ;									// グ?フィックハ?ド?を作成する際に使用した画?データのバックアップをして Direct3DDevice のデバイス?スト?に使用するかどうかを設定する( TRUE:バックアップをする( デフォ?ト )  FALSE:バックアップをしない )、バックアップをしないと???の節約になりますが、?帰に掛かる?間が長くなり、???上のファイ?イ?ージからグ?フィックハ?ド?を作成した場?は自動?帰ができないなどの弊害が?ります
extern	int			GetUseGraphBaseDataBackup(					void ) ;										// グ?フィックハ?ド?を作成する際に使用した画?データのバックアップをして Direct3DDevice のデバイス?スト?に使用するかどうかを取得する
extern	int			SetUseSystemMemGraphCreateFlag(				int Flag ) ;									// ( 現在効果なし )グ?フィックハ?ド?が?つ画?データをシステ????上に作成するかどうかを設定する( TRUE:システ????上に作成  FALSE:ＶＲＡＭ上に作成( デフォ?ト ) )
extern	int			GetUseSystemMemGraphCreateFlag(				void ) ;										// ( 現在効果なし )グ?フィックハ?ド?が?つ画?データをシステ????上に作成するかどうかを取得する
extern	int			SetUseLoadDivGraphSizeCheckFlag(			int Flag ) ;									// LoadDivGraph 系の分?画?読み?み関?でサイズのチェックを行うかどうかを設定する( Flag:TRUE( チェックを行う(デフォ?ト) )  FALSE:チェックを行わない )
extern	int			GetUseLoadDivGraphSizeCheckFlag(			void ) ;										// LoadDivGraph 系の分?画?読み?み関?でサイズのチェックを行うかどうかの設定を取得する

// 画?情報関係関?
extern	const unsigned int* GetFullColorImage(				int GrHandle ) ;																// 指定のグ?フィックハ?ド?のＡＲＧＢ８イ?ージを取得する( 現在動画ファイ?をグ?フィックハ?ド?で読み?んだ場?のみ使用可能 )

extern	int			GraphLock(						int GrHandle, int *PitchBuf, void **DataPointBuf, COLORDATA **ColorDataPP DEFAULTPARAM( = NULL ), int WriteOnly DEFAULTPARAM( = FALSE ) ) ;	// グ?フィック???領域の?ック
extern	int			GraphUnLock(					int GrHandle ) ;																							// グ?フィック???領域の?ック解?

extern	int			SetUseGraphZBuffer(				int GrHandle, int UseFlag, int BitDepth DEFAULTPARAM( = -1 ) ) ;						// グ?フィックハ?ド?専用のＺバッファを?つかどうかを設定する( GrHandle:対象となるグ?フィックハ?ド?( 描画対象として使用可能なグ?フィックハ?ド?のみ有効 )  UseFlag:専用のＺバッファを?つかどうか( TRUE:?つ( デフォ?ト )  FALSE:?たない )  BitDepth:ビット深度( 16 or 24 or 32 ) )
extern	int			CopyGraphZBufferImage(			int DestGrHandle, int SrcGrHandle ) ;													// グ?フィックハ?ド?のＺバッファの状態を別のグ?フィックハ?ド?のＺバッファにコピーする( DestGrHandle も SrcGrHandle もＺバッファを?っている描画対象にできるグ?フィックハ?ド?で、サイズが同じで?り、?つマ?チサ?プ??グ( ア?チエイ?アス )設定が無いことが条? )

extern	int			SetDeviceLostDeleteGraphFlag(	int GrHandle, int DeleteFlag ) ;														// グ?フィックスデバイスのデバイス?スト発生?に指定のグ?フィックハ?ド?を削?するかどうかを設定する( TRUE:デバイス?スト?に削?する  FALSE:デバイス?ストが発生しても削?しない )

extern	int			GetGraphSize(					int GrHandle, int   *SizeXBuf, int   *SizeYBuf ) ;										// グ?フィックハ?ド?が?つ画?のサイズを得る
extern	int			GetGraphSizeF(					int GrHandle, float *SizeXBuf, float *SizeYBuf ) ;										// グ?フィックハ?ド?が?つ画?のサイズを得る( float型 )
extern	int			GetGraphTextureSize(			int GrHandle, int   *SizeXBuf, int   *SizeYBuf ) ;										// グ?フィックハ?ド?が?つ一つ目のテクスチ?のサイズを得る
extern	int			GetGraphUseBaseGraphArea(		int GrHandle, int   *UseX,     int   *UseY,    int *UseSizeX, int *UseSizeY ) ;			// LoadDivGraph や DerivationGraph で元画?の一?分を使用している場?に、指定のグ?フィックハ?ド?が使用している元画?の範囲を取得する
extern	int			GetGraphMipmapCount(			int GrHandle ) ;																		// グ?フィックハ?ド?が?つテクスチ?のミップマップ?ベ??を取得する
extern	int			GetGraphFilePath(				int GrHandle, TCHAR *FilePathBuffer ) ;													// グ?フィックハ?ド?が画?ファイ?から読み?まれていた場?、その画?のファイ?パスを取得する
extern	int			CheckDrawValidGraph(			int GrHandle ) ;																		// 指定のグ?フィックハ?ド?が描画対象にできる( SetDrawScreen の引?に渡せる )グ?フィックハ?ド?かどうかを取得する( 戻り値　TRUE:描画対象にできるグ?フィックハ?ド?　FALSE:描画対象にできないグ?フィックハ?ド? )

extern	const COLORDATA* GetTexColorData(			int AlphaCh, int AlphaTest, int ColorBitDepth, int DrawValid DEFAULTPARAM( = FALSE ) ) ;	// カ?ーデータを得る
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	const COLORDATA* GetTexColorData(			const IMAGEFORMATDESC *Format ) ;														// フォーマットに基づいたカ?ーデータを得る
extern	const COLORDATA* GetTexColorData(			int FormatIndex /* DX_GRAPHICSIMAGE_FORMAT_3D_RGB32 ? */ ) ;							// 指定のフォーマットイ?デックスのカ?ーデータを得る
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	const COLORDATA* GetTexColorData2(			const IMAGEFORMATDESC *Format ) ;														// フォーマットに基づいたカ?ーデータを得る
extern	const COLORDATA* GetTexColorData3(			int FormatIndex /* DX_GRAPHICSIMAGE_FORMAT_3D_RGB32 ? */ ) ;							// 指定のフォーマットイ?デックスのカ?ーデータを得る
extern	int			GetMaxGraphTextureSize(			int *SizeX, int *SizeY ) ;																// グ?フィックスデバイスが対?している最大テクスチ?サイズを取得する
extern	int			GetValidRestoreShredPoint(		void ) ;																				// グ?フィックハ?ド?の画?を?元する関?が登録されているかどうかを取得する( TRUE:登録されている  FALSE:登録されていない )
extern	int			GetCreateGraphColorData(		COLORDATA *ColorData, IMAGEFORMATDESC *Format ) ;										// ( 現在効果なし )これから新たにグ?フィックを作成する場?に使用するカ?ー情報を取得する

// 画?パ?ット?作関係関?( ソフトウエア画?のみ使用可能 )
extern	int			GetGraphPalette(				int GrHandle, int ColorIndex, int *Red, int *Green, int *Blue ) ;						// グ?フィックハ?ド?のパ?ットを取得する( ソフトウエア??ダ??グ?ードで、?つパ?ット画?の場?のみ使用可能 )
extern  int			GetGraphOriginalPalette(		int GrHandle, int ColorIndex, int *Red, int *Green, int *Blue ) ;						// グ?フィックハ?ド?の SetGraphPalette で変更する前のパ?ットを取得する( ソフトウエア??ダ??グ?ードで、?つパ?ット画?の場?のみ使用可能 )
extern	int			SetGraphPalette(				int GrHandle, int ColorIndex, unsigned int Color ) ;									// グ?フィックハ?ド?のパ?ットを変更する( ソフトウエア??ダ??グ?ードで、?つパ?ット画?の場?のみ使用可能 )
extern	int			ResetGraphPalette(				int GrHandle ) ;																		// SetGraphPalette で変更したパ?ットを全て元に戻す( ソフトウエア??ダ??グ?ードで、?つパ?ット画?の場?のみ使用可能 )

// 図形描画関?
extern	int			DrawLine(         int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int   Thickness DEFAULTPARAM( = 1 )    ) ;							// 線を描画する
extern	int			DrawLineAA(       float x1, float y1, float x2, float y2,                                         unsigned int Color, float Thickness DEFAULTPARAM( = 1.0f ) ) ;							// 線を描画する( ア?チエイ?アス付き )
extern	int			DrawBox(          int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int FillFlag ) ;														// 四角形を描画する
extern	int			DrawBoxAA(        float x1, float y1, float x2, float y2,                                         unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// 四角形を描画する( ア?チエイ?アス付き )
extern	int			DrawFillBox(      int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color ) ;																	// ?身を塗りつぶす四角形を描画する
extern	int			DrawLineBox(      int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color ) ;																	// 枠だけの四角形の描画 する
extern	int			DrawCircle(       int   x,  int   y,  int   r,                                                    unsigned int Color, int FillFlag DEFAULTPARAM( = TRUE ), int   LineThickness DEFAULTPARAM( = 1 )    ) ;	// 円を描画する
extern	int			DrawCircleAA(     float x,  float y,  float r,            int posnum,                             unsigned int Color, int FillFlag DEFAULTPARAM( = TRUE ), float LineThickness DEFAULTPARAM( = 1.0f ), double Angle DEFAULTPARAM( = 0.0 ) ) ;	// 円を描画する( ア?チエイ?アス付き )
extern	int			DrawOval(         int   x,  int   y,  int   rx, int   ry,                                         unsigned int Color, int FillFlag,        int   LineThickness DEFAULTPARAM( = 1 )    ) ;	// 楕円を描画する
extern	int			DrawOvalAA(       float x,  float y,  float rx, float ry, int posnum,                             unsigned int Color, int FillFlag,        float LineThickness DEFAULTPARAM( = 1.0f ) ) ;	// 楕円を描画する( ア?チエイ?アス付き )
extern	int			DrawOval_Rect(    int   x1, int   y1, int   x2, int   y2,                                         unsigned int Color, int FillFlag ) ;														// 指定の矩形に収まる円( 楕円 )を描画する
extern	int			DrawTriangle(     int   x1, int   y1, int   x2, int   y2, int   x3, int   y3,                     unsigned int Color, int FillFlag ) ;														// 三角形を描画する
extern	int			DrawTriangleAA(   float x1, float y1, float x2, float y2, float x3, float y3,                     unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// 三角形を描画する( ア?チエイ?アス付き )
extern	int			DrawQuadrangle(   int   x1, int   y1, int   x2, int   y2, int   x3, int   y3, int   x4, int   y4, unsigned int Color, int FillFlag ) ;														// 四角形を描画する
extern	int			DrawQuadrangleAA( float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// 四角形を描画する( ア?チエイ?アス付き )
extern	int			DrawRoundRect(    int   x1, int   y1, int   x2, int   y2, int   rx, int   ry,                     unsigned int Color, int FillFlag ) ;														// 角の丸い四角形を描画する
extern	int			DrawRoundRectAA(  float x1, float y1, float x2, float y2, float rx, float ry, int posnum,         unsigned int Color, int FillFlag, float LineThickness DEFAULTPARAM( = 1.0f ) ) ;			// 角の丸い四角形を描画する( ア?チエイ?アス付き )
extern	int			BeginAADraw(      void ) ;																																									// DrawTriangleAA などのア?チエイ?アス付き図形描画の?備を行う
extern	int			EndAADraw(        void ) ;																																									// DrawTriangleAA などのア?チエイ?アス付き図形描画の後始?を行う
extern 	int			DrawPixel(        int   x,  int   y,                                                              unsigned int Color ) ;																	// 点を描画する

extern	int			Paint(			int x, int y, unsigned int FillColor, ULONGLONG BoundaryColor DEFAULTPARAM( = ULL_PARAM( 0xffffffffffffffff ) ) ) ;				// 指定点から境界色が?るところまで塗りつぶす(境界色を -1 にすると指定点の色の領域を塗りつぶす)

extern 	int			DrawPixelSet(   const POINTDATA *PointDataArray, int Num ) ;																					// 点の集?を描画する
extern	int			DrawLineSet(    const LINEDATA *LineDataArray,   int Num ) ;																					// 線の集?を描画する
extern	int			DrawBoxSet(     const RECTDATA *RectDataArray,   int Num ) ;																					// 矩形の集?を描画する

extern	int			DrawPixel3D(     VECTOR   Pos,                                                                 unsigned int Color ) ;							// ３Ｄの点を描画する
extern	int			DrawPixel3DD(    VECTOR_D Pos,                                                                 unsigned int Color ) ;							// ３Ｄの点を描画する
extern	int			DrawLine3D(      VECTOR   Pos1,   VECTOR   Pos2,                                               unsigned int Color ) ;							// ３Ｄの線分を描画する
extern	int			DrawLine3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,                                               unsigned int Color ) ;							// ３Ｄの線分を描画する
extern	int			DrawTriangle3D(  VECTOR   Pos1,   VECTOR   Pos2, VECTOR   Pos3,                                unsigned int Color, int FillFlag ) ;				// ３Ｄの三角形を描画する
extern	int			DrawTriangle3DD( VECTOR_D Pos1,   VECTOR_D Pos2, VECTOR_D Pos3,                                unsigned int Color, int FillFlag ) ;				// ３Ｄの三角形を描画する
extern	int			DrawCube3D(      VECTOR   Pos1,   VECTOR   Pos2,                            unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄの立方体を描画する
extern	int			DrawCube3DD(     VECTOR_D Pos1,   VECTOR_D Pos2,                            unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄの立方体を描画する
extern	int			DrawCubeSet3D(   CUBEDATA *CubeDataArray, int Num, int FillFlag ) ;																				// ３Ｄの立方体の集?を描画する
extern	int			DrawSphere3D(    VECTOR   CenterPos,                  float  r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄの?体を描画する
extern	int			DrawSphere3DD(   VECTOR_D CenterPos,                  double r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄの?体を描画する
extern	int			DrawCapsule3D(   VECTOR   Pos1,   VECTOR   Pos2,      float  r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄのカプセ?を描画する
extern	int			DrawCapsule3DD(  VECTOR_D Pos1,   VECTOR_D Pos2,      double r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄのカプセ?を描画する
extern	int			DrawCone3D(      VECTOR   TopPos, VECTOR   BottomPos, float  r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄの円?を描画する
extern	int			DrawCone3DD(     VECTOR_D TopPos, VECTOR_D BottomPos, double r, int DivNum, unsigned int DifColor, unsigned int SpcColor, int FillFlag ) ;		// ３Ｄの円?を描画する

// 画?描画関?
extern	int			LoadGraphScreen(           int x, int y, const TCHAR *GraphName,                         int TransFlag ) ;										// 画?ファイ?を読みこんで画面に描画する
extern	int			LoadGraphScreenWithStrLen( int x, int y, const TCHAR *GraphName, size_t GraphNameLength, int TransFlag ) ;										// 画?ファイ?を読みこんで画面に描画する

extern	int			DrawGraph(                int x, int y,                                                                 int GrHandle, int TransFlag ) ;																							// 画?の?倍描画
extern	int			DrawExtendGraph(          int x1, int y1, int x2, int y2,                                               int GrHandle, int TransFlag ) ;																							// 画?の拡大描画
extern	int			DrawRotaGraph(            int x, int y,                 double ExRate,                    double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画
extern	int			DrawRotaGraph2(           int x, int y, int cx, int cy, double ExtRate,                   double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画２( 回転?心指定付き )
extern	int			DrawRotaGraph3(           int x, int y, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// 画?の回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )
extern	int			DrawRotaGraphFast(        int x, int y,                 float  ExRate,                    float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRotaGraphFast2(       int x, int y, int cx, int cy, float  ExtRate,                   float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画２( 回転?心指定付き )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRotaGraphFast3(       int x, int y, int cx, int cy, float  ExtRateX, float  ExtRateY, float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// 画?の回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawModiGraph(            int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int GrHandle, int TransFlag ) ;																							// 画?の自由変形描画
extern	int			DrawTurnGraph(            int x, int y,                                                                 int GrHandle, int TransFlag ) ;																							// 画?の左右反転描画
extern	int			DrawReverseGraph(         int x, int y,                                                                 int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の反転描画

extern	int			DrawGraphF(               float xf, float yf,                                                                       int GrHandle, int TransFlag ) ;															// 画?の描画( 座標指定が float 版 )
extern	int			DrawExtendGraphF(         float x1f, float y1f, float x2f, float y2,                                                int GrHandle, int TransFlag ) ;															// 画?の拡大描画( 座標指定が float 版 )
extern	int			DrawRotaGraphF(           float xf, float yf,                       double ExRate,                    double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画( 座標指定が float 版 )
extern	int			DrawRotaGraph2F(          float xf, float yf, float cxf, float cyf, double ExtRate,                   double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画２( 回転?心指定付き )( 座標指定が float 版 )
extern	int			DrawRotaGraph3F(          float xf, float yf, float cxf, float cyf, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// 画?の回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( 座標指定が float 版 )
extern	int			DrawRotaGraphFastF(       float xf, float yf,                       float  ExRate,                    float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画( 座標指定が float 版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRotaGraphFast2F(      float xf, float yf, float cxf, float cyf, float  ExtRate,                   float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の回転描画２( 回転?心指定付き )( 座標指定が float 版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRotaGraphFast3F(      float xf, float yf, float cxf, float cyf, float  ExtRateX, float  ExtRateY, float  Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// 画?の回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( 座標指定が float 版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawModiGraphF(           float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,           int GrHandle, int TransFlag ) ;															// 画?の自由変形描画( 座標指定が float 版 )
extern	int			DrawTurnGraphF(           float xf, float yf,                                                                       int GrHandle, int TransFlag ) ;															// 画?の左右反転描画( 座標指定が float 版 )
extern	int			DrawReverseGraphF(        float xf, float yf,                                                                       int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の反転描画( 座標指定が float 版 )

extern	int			DrawChipMap(              int Sx, int Sy, int XNum, int YNum, const int *MapData, int ChipTypeNum, int MapDataPitch, const int *ChipGrHandle, int TransFlag ) ;																											// チップ画?を使った２Ｄマップ描画
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawChipMap(              int MapWidth, int MapHeight,        const int *MapData, int ChipTypeNum,                   const int *ChipGrHandle, int TransFlag, int MapDrawPointX, int MapDrawPointY, int MapDrawWidth, int MapDrawHeight, int ScreenX, int ScreenY ) ;	// チップ画?を使った２Ｄマップ描画
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawChipMap2(             int MapWidth, int MapHeight,        const int *MapData, int ChipTypeNum,                   const int *ChipGrHandle, int TransFlag, int MapDrawPointX, int MapDrawPointY, int MapDrawWidth, int MapDrawHeight, int ScreenX, int ScreenY ) ;	// チップ画?を使った２Ｄマップ描画
extern	int			DrawTile(                 int x1, int y1, int x2, int y2, int Tx, int Ty, double ExtRate, double Angle, int GrHandle, int TransFlag ) ;																																	// 画?を指定領域にタイ?状に描画する

extern	int			DrawRectGraph(            int DestX,  int DestY,                          int SrcX, int SrcY, int    Width, int    Height,                         int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを?倍描画
extern	int			DrawRectExtendGraph(      int DestX1, int DestY1, int DestX2, int DestY2, int SrcX, int SrcY, int SrcWidth, int SrcHeight,                         int GraphHandle, int TransFlag ) ;																	// 画?の指定矩形?分のみを拡大描画
extern	int			DrawRectRotaGraph(        int x, int y, int SrcX, int SrcY, int Width, int Height, double ExtRate, double Angle,                                   int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを回転描画
extern	int			DrawRectRotaGraph2(       int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, double ExtRate,  double Angle,                  int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを回転描画２( 回転?心指定付き )
extern	int			DrawRectRotaGraph3(       int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )
extern	int			DrawRectRotaGraphFast(    int x, int y, int SrcX, int SrcY, int Width, int Height, float ExtRate, float Angle,                                     int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを回転描画( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRectRotaGraphFast2(   int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, float ExtRate,  float Angle,                    int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを回転描画２( 回転?心指定付き )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRectRotaGraphFast3(   int x, int y, int SrcX, int SrcY, int Width, int Height, int cx, int cy, float ExtRateX, float ExtRateY, float Angle,    int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;				// 画?の指定矩形?分のみを回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRectModiGraph(        int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int SrcX, int SrcY, int Width, int Height,               int GraphHandle, int TransFlag ) ;																	// 画?の指定矩形?分のみを自由変形描画

extern	int			DrawRectGraphF(           float DestX,  float DestY,                              int   SrcX, int   SrcY, int    Width, int    Height,                           int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを?倍描画( 座標指定が float 版 )
extern	int			DrawRectGraphF2(          float DestX,  float DestY,                              float SrcX, float SrcY, float  Width, float  Height,                           int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを?倍描画( 座標指定が float 版( 画?内座標の指定も float 版 ) )
extern	int			DrawRectExtendGraphF(     float DestX1, float DestY1, float DestX2, float DestY2, int   SrcX, int   SrcY, int SrcWidth, int SrcHeight,                           int GraphHandle, int TransFlag ) ;														// 画?の指定矩形?分のみを拡大描画( 座標指定が float 版 )
extern	int			DrawRectExtendGraphF2(    float DestX1, float DestY1, float DestX2, float DestY2, float SrcX, float SrcY, float SrcWidth, float SrcHeight,                   int GraphHandle, int TransFlag ) ;															// 画?の指定矩形?分のみを拡大描画( 座標指定が float 版( 画?内座標の指定も float 版 ) )
extern	int			DrawRectRotaGraphF(       float x, float y, int SrcX, int SrcY, int Width, int Height,                       double ExtRate,                   double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを回転描画( 座標指定が float 版 )
extern	int			DrawRectRotaGraph2F(      float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, double ExtRate,                   double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを回転描画２( 回転?心指定付き )( 座標指定が float 版 )
extern	int			DrawRectRotaGraph3F(      float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, double ExtRateX, double ExtRateY, double Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( 座標指定が float 版 )
extern	int			DrawRectRotaGraphFastF(   float x, float y, int SrcX, int SrcY, int Width, int Height,                       float ExtRate,                    float  Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを回転描画( 座標指定が float 版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRectRotaGraphFast2F(  float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, float ExtRate,                    float  Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを回転描画２( 回転?心指定付き )( 座標指定が float 版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRectRotaGraphFast3F(  float x, float y, int SrcX, int SrcY, int Width, int Height, float cxf, float cyf, float ExtRateX,  float  ExtRateY, float  Angle, int GraphHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?の指定矩形?分のみを回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( 座標指定が float 版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRectModiGraphF(       float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int SrcX, int SrcY, int Width, int Height,         int GraphHandle, int TransFlag ) ;															// 画?の指定矩形?分のみを自由変形描画( 座標指定が float 版 )

extern	int			DrawBlendGraph(           int   x, int   y, int GrHandle, int TransFlag,                 int BlendGraph, int BorderParam, int BorderRange ) ;									// ブ??ド画?と?成して画?を?倍描画する
extern	int			DrawBlendGraphF(          float x, float y, int GrHandle, int TransFlag,                 int BlendGraph, int BorderParam, int BorderRange ) ;									// ブ??ド画?と?成して画?を?倍描画する( 座標指定が float 版 )
extern	int			DrawBlendGraphPos(        int   x, int   y, int GrHandle, int TransFlag, int bx, int by, int BlendGraph, int BorderParam, int BorderRange ) ;									// ブ??ド画?と?成して画?を?倍描画する( ブ??ド画?の起点座標を指定する引?付き )

extern	int			DrawCircleGauge(          int   CenterX, int   CenterY, double Percent, int GrHandle, double StartPercent DEFAULTPARAM( = 0.0 ) , double Scale DEFAULTPARAM( = 1.0 ) , int ReverseX DEFAULTPARAM( = FALSE ) , int ReverseY DEFAULTPARAM( = FALSE ) ) ;										// 円グ?フ的な描画を行う( GrHandle の画?の上下左右の端は透過色にしておく必要が?ります )
extern	int			DrawCircleGaugeF(         float CenterX, float CenterY, double Percent, int GrHandle, double StartPercent DEFAULTPARAM( = 0.0 ) , double Scale DEFAULTPARAM( = 1.0 ) , int ReverseX DEFAULTPARAM( = FALSE ) , int ReverseY DEFAULTPARAM( = FALSE ) ) ;										// 円グ?フ的な描画を行う( GrHandle の画?の上下左右の端は透過色にしておく必要が?ります )( 座標指定が float 版 )

extern	int			DrawGraphToZBuffer(       int X, int Y,                                                                 int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して画?の?倍描画
extern	int			DrawTurnGraphToZBuffer(   int x, int y,                                                                 int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して画?の左右反転描画
extern	int			DrawReverseGraphToZBuffer( int x, int y,                                                                int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// Ｚバッファに対して画?の反転描画
extern	int			DrawExtendGraphToZBuffer( int x1, int y1, int x2, int y2,                                               int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して画?の拡大描画
extern	int			DrawRotaGraphToZBuffer(   int x, int y, double ExRate, double Angle,                                    int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// Ｚバッファに対して画?の回転描画
extern	int			DrawRotaGraph2ToZBuffer(  int x, int y, int cx, int cy, double ExtRate,                   double Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// Ｚバッファに対して画?の回転描画２( 回転?心指定付き )
extern	int			DrawRotaGraph3ToZBuffer(  int x, int y, int cx, int cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// Ｚバッファに対して画?の回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )
extern	int			DrawRotaGraphFastToZBuffer(  int x, int y, float ExRate, float Angle,                                   int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// Ｚバッファに対して画?の回転描画( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRotaGraphFast2ToZBuffer( int x, int y, int cx, int cy, float ExtRate,                  float Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;	// Ｚバッファに対して画?の回転描画２( 回転?心指定付き )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawRotaGraphFast3ToZBuffer( int x, int y, int cx, int cy, float ExtRateX, float ExtRateY, float Angle, int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ; 	// Ｚバッファに対して画?の回転描画３( 回転?心指定付き＋縦横拡大率別指定版 )( ?速版、座標計算のア?ゴ?ズ?が簡略化されています、描画?果に不都?が無ければこちらの方が?速です )
extern	int			DrawModiGraphToZBuffer(   int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int GrHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して画?の自由変形描画
extern	int			DrawBoxToZBuffer(         int x1, int y1, int x2, int y2,                                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して矩形の描画
extern	int			DrawCircleToZBuffer(      int x, int y, int r,                                                          int FillFlag, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して円の描画
extern	int			DrawTriangleToZBuffer(    int x1, int y1, int x2, int y2, int x3, int y3,                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して三角形を描画する 
extern	int			DrawQuadrangleToZBuffer(  int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して四角形を描画する
extern	int			DrawRoundRectToZBuffer(   int x1, int y1, int x2, int y2, int rx, int ry,                               int FillFlag, int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;														// Ｚバッファに対して角の丸い四角形を描画する

extern	int			DrawPolygon(                             const VERTEX    *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag, int UVScaling DEFAULTPARAM( = FALSE ) ) ;		// ２Ｄポ?ゴ?を描画する( Vertex:三角形を形成する頂点配列の先頭アド?ス( 頂点の?はポ?ゴ?の?×３ )  PolygonNum:描画するポ?ゴ?の?  GrHandle:使用するグ?フィックハ?ド?  TransFlag:透過色??を行うかどうか( TRUE:行う  FALSE:行わない )  UVScaling:基本FALSEでOK )
extern	int			DrawPolygon2D(                           const VERTEX2D  *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ２Ｄポ?ゴ?を描画する
extern	int			DrawPolygon3D(                           const VERTEX3D  *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する
extern	int			DrawPolygonIndexed2D(                    const VERTEX2D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// ２Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用 )
extern	int			DrawPolygon32bitIndexed2D(               const VERTEX2D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// ２Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用 )
extern	int			DrawPolygonIndexed3D(                    const VERTEX3D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用 )
extern	int			DrawPolygon32bitIndexed3D(               const VERTEX3D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum,                                                      int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用 )
extern	int			DrawPolygonIndexed3DBase(                const VERTEX_3D *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用 )( ?バージ??用 )
extern	int			DrawPolygon32bitIndexed3DBase(           const VERTEX_3D *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用 )( ?バージ??用 )
extern	int			DrawPolygon3DBase(                       const VERTEX_3D *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( ?バージ??用 )
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawPolygon3D(                           const VERTEX_3D *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( ?バージ??用 )
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			DrawPolygon3D2(                          const VERTEX_3D *VertexArray, int PolygonNum,                                                                                                       int GrHandle, int TransFlag ) ;							// ３Ｄポ?ゴ?を描画する( ?バージ??用 )

extern	int			DrawPolygonBase(                         const VERTEX    *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag, int UVScaling DEFAULTPARAM( = FALSE ) ) ;		// ２Ｄプ?ミティブを描画する
extern	int			DrawPrimitive2D(                         const VERTEX2D  *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ２Ｄプ?ミティブを描画する
extern	int			DrawPrimitive3D(                         const VERTEX3D  *VertexArray, int VertexNum,                                                   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ３Ｄプ?ミティブを描画する
extern	int			DrawPrimitiveIndexed2D(                  const VERTEX2D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ２Ｄプ?ミティブを描画する(頂点イ?デックス使用)
extern	int			DrawPrimitive32bitIndexed2D(             const VERTEX2D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ２Ｄプ?ミティブを描画する(頂点イ?デックス使用)
extern	int			DrawPrimitiveIndexed3D(                  const VERTEX3D  *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ３Ｄプ?ミティブを描画する(頂点イ?デックス使用)
extern	int			DrawPrimitive32bitIndexed3D(             const VERTEX3D  *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum,   int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int GrHandle, int TransFlag ) ;							// ３Ｄプ?ミティブを描画する(頂点イ?デックス使用)

extern	int			DrawPolygon3D_UseVertexBuffer(           int VertexBufHandle,                                                                                                                                                               int GrHandle, int TransFlag ) ;		// 頂点バッファを使用して３Ｄポ?ゴ?を描画する
extern	int			DrawPrimitive3D_UseVertexBuffer(         int VertexBufHandle,                     int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST ? */,                                                                                     int GrHandle, int TransFlag ) ;		// 頂点バッファを使用して３Ｄプ?ミティブを描画する
extern	int			DrawPrimitive3D_UseVertexBuffer2(        int VertexBufHandle,                     int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST ? */,                 int StartVertex, int UseVertexNum,                                  int GrHandle, int TransFlag ) ;		// 頂点バッファを使用して３Ｄプ?ミティブを描画する
extern	int			DrawPolygonIndexed3D_UseVertexBuffer(    int VertexBufHandle, int IndexBufHandle,                                                                                                                                           int GrHandle, int TransFlag ) ;		// 頂点バッファとイ?デックスバッファを使用して３Ｄポ?ゴ?を描画する
extern	int			DrawPrimitiveIndexed3D_UseVertexBuffer(  int VertexBufHandle, int IndexBufHandle, int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST ? */,                                                                                     int GrHandle, int TransFlag ) ;		// 頂点バッファとイ?デックスバッファを使用して３Ｄプ?ミティブを描画する
extern	int			DrawPrimitiveIndexed3D_UseVertexBuffer2( int VertexBufHandle, int IndexBufHandle, int PrimitiveType  /* DX_PRIMTYPE_TRIANGLELIST ? */, int BaseVertex, int StartVertex, int UseVertexNum, int StartIndex, int UseIndexNum, int GrHandle, int TransFlag ) ;		// 頂点バッファとイ?デックスバッファを使用して３Ｄプ?ミティブを描画する

extern	int			DrawGraph3D(                             float x, float y, float z,                                                                     int GrHandle, int TransFlag ) ;																// 画?の３Ｄ描画
extern	int			DrawExtendGraph3D(                       float x, float y, float z, double ExRateX, double ExRateY,                                     int GrHandle, int TransFlag ) ;																// 画?の拡大３Ｄ描画
extern	int			DrawRotaGraph3D(                         float x, float y, float z, double ExRate, double Angle,                                        int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;		// 画?の回転３Ｄ描画
extern	int			DrawRota2Graph3D(                        float x, float y, float z, float cx, float cy, double ExtRateX, double ExtRateY, double Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;		// 画?の回転３Ｄ描画(回転?心指定型)
extern	int			DrawModiBillboard3D(                     VECTOR Pos, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,    int GrHandle, int TransFlag ) ;																// 画?の自由変形３Ｄ描画
extern	int			DrawBillboard3D(                         VECTOR Pos, float cx, float cy, float Size, float Angle,                                       int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;		// ３Ｄ空間上に画?を描画


// 描画設定関係関?
extern	int			SetDrawMode(						int DrawMode ) ;												// 描画?ードを設定する
extern	int			GetDrawMode(						void ) ;														// 描画?ードを取得する
extern	int			SetDrawBlendMode(					int BlendMode, int BlendParam ) ;								// 描画ブ??ド?ードを設定する
extern	int			GetDrawBlendMode(					int *BlendMode, int *BlendParam ) ;								// 描画ブ??ド?ードを取得する
extern	int			SetDrawCustomBlendMode(				int BlendEnable, int SrcBlendRGB /* DX_BLEND_SRC_COLOR ? */, int DestBlendRGB /* DX_BLEND_SRC_COLOR ? */, int BlendOpRGB /* DX_BLENDOP_ADD ? */, int SrcBlendA /* DX_BLEND_SRC_COLOR ? */, int DestBlendA /* DX_BLEND_SRC_COLOR ? */, int BlendOpA /* DX_BLENDOP_ADD ? */, int BlendParam ) ;		// カスタ?ブ??ド?ードを設定する
extern	int			GetDrawCustomBlendMode(				int *BlendEnable, int *SrcBlendRGB, int *DestBlendRGB, int *BlendOpRGB, int *SrcBlendA, int *DestBlendA, int *BlendOpA, int *BlendParam ) ;																																								// カスタ?ブ??ド?ードを取得する
extern	int			SetDrawAlphaTest(					int TestMode, int TestParam ) ;									// 描画?のア?ファテストの設定を行う( TestMode:テスト?ード( DX_CMP_GREATER? -1でデフォ?ト動作に戻す )  TestParam:描画ア?ファ値との比較に使用する値( 0～255 ) )
extern	int			GetDrawAlphaTest(					int *TestMode, int *TestParam ) ;								// 描画?のア?ファテストの設定を取得する( TestMode:テスト?ード( DX_CMP_GREATER? -1でデフォ?ト動作に戻す )  TestParam:描画ア?ファ値との比較に使用する値( 0～255 ) )
extern	int			SetBlendGraph(						int BlendGraph, int BorderParam, int BorderRange ) ;			// ( SetBlendGraphParam の BlendType = DX_BLENDGRAPHTYPE_WIPE の??を行う?関? )描画???に描画する画?とブ??ドするαチ??ネ?付き画?をセットする( BlendGraph を -1 でブ??ド機能を無効 )
extern	int			SetBlendGraphParam(					int BlendGraph, int BlendType, ... ) ;							// 描画???に描画する画?とブ??ドする画?のブ??ド設定を行う、BlendGraph を -1 にすれば設定を解?、その場? BlendType とその後ろのパ??ータは無?される
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_NORMAL, int Ratio = ( 0( ブ??ド率０? )～255( ブ??ド率１００? ) ) ) ;
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_WIPE, int BorderParam = 境界位置(０～２５５), int BorderRange = 境界?(指定できる値は１、６４、１２８、２５５の４つ) ) ;
//		int			SetBlendGraphParam(					int BlendGraph, int BlendType = DX_BLENDGRAPHTYPE_ALPHA ) ;
extern	int			SetBlendGraphPosition(				int x, int y ) ;												// ブ??ド画?の起点座標をセットする
extern	int			SetBlendGraphPositionMode(			int BlendGraphPositionMode /* DX_BLENDGRAPH_POSMODE_DRAWGRAPH など */ ) ;	// ブ??ド画?の適?座標?ードを設定する
extern	int			SetDrawBright(						int RedBright, int GreenBright, int BlueBright ) ;				// 描画輝度を設定する
extern	int			GetDrawBright(						int *Red, int *Green, int *Blue ) ;								// 描画輝度を取得する
extern	int			SetDrawAddColor(					int Red, int Green, int Blue ) ;								// 描画カ?ーに加算する色を設定する( Red, Green, Blue : 加算する色( 0 = 0%  255 = 100%  -255 = -100% ) ( マイナスの値で減算もできます ) )
extern	int			GetDrawAddColor(					int *Red, int *Green, int *Blue ) ;								// 描画カ?ーに加算する色を取得する
extern	int			SetWriteAlphaChannelFlag(			int Flag ) ;													// 描画先のア?ファチ??ネ?の内容を?き換えるかを設定する( FALSE:?き換えない  TRUE:?き換える( デフォ?ト ) )
extern	int			GetWriteAlphaChannelFlag(			void ) ;														// 描画先のア?ファチ??ネ?の内容を?き換えるかを取得する( FALSE:?き換えない  TRUE:?き換える( デフォ?ト ) )
extern	int			CheckSeparateAlphaBlendEnable(		void ) ;														// 描画先のア?ファチ??ネ?の内容を?き換えないことができるかどうかを取得する( TRUE:?き換えないことができる  FALSE:?き換えないことができない )
extern	int			SetIgnoreDrawGraphColor(			int EnableFlag ) ;												// 描画する画?のＲＧＢ成分を無?するかどうかを指定する( EnableFlag:この機能を使うかどうか( TRUE:使う  FALSE:使わない( デフォ?ト ) )
extern	int			GetIgnoreDrawGraphColor(			void ) ;														// 描画する画?のＲＧＢ成分を無?するかどうかを取得する( 戻り値  この機能を使うかどうか( TRUE:使う  FALSE:使わない )
extern	int			SetMaxAnisotropy(					int MaxAnisotropy ) ;											// 最大異方性値を設定する
extern	int			GetMaxAnisotropy(					void ) ;														// 最大異方性値を取得する
extern	int			SetUseLarge3DPositionSupport(		int UseFlag ) ;													// ３Ｄ??で使用する座標値が 10000000.0f などの大きな値になっても描画の崩れを小さく抑える??を使用するかどうかを設定する、DxLib_Init の呼び出し前でのみ使用可能( TRUE:描画の崩れを抑える??を使用する( CPU?荷が上がります )　　FALSE:描画の崩れを抑える??は使用しない( デフォ?ト ) )

extern	int			SetUseZBufferFlag(					int Flag ) ;													// Ｚバッファを使用するかどうかを設定する( ２Ｄと３Ｄ描画に影響 )( TRUE:Ｚバッファを使用する  FALSE:Ｚバッファを使用しない( デフォ?ト ) )
extern	int			SetWriteZBufferFlag(				int Flag ) ;													// Ｚバッファに?き?みを行うかどうかを設定する( ２Ｄと３Ｄ描画に影響 )( TRUE:?き?みを行う  FALSE:?き?みを行わない( デフォ?ト ) )
extern	int			SetZBufferCmpType(					int CmpType /* DX_CMP_NEVER ? */ ) ;							// ＺバッファのＺ値と?き?むＺ値との比較?ードを設定する( ２Ｄと３Ｄ描画に影響 )( CmpType:DX_CMP_NEVER?( デフォ?ト:DX_CMP_LESSEQUAL ) )
extern	int			SetZBias(							int Bias ) ;													// ?き?むＺ値のバイアスを設定する( ２Ｄと３Ｄ描画に影響 )( Bias:バイアス値( デフォ?ト:0 ) )
extern	int			SetUseZBuffer3D(					int Flag ) ;													// Ｚバッファを使用するかどうかを設定する( ３Ｄ描画のみに影響 )( TRUE:Ｚバッファを使用する  FALSE:Ｚバッファを使用しない( デフォ?ト ) )
extern	int			SetWriteZBuffer3D(					int Flag ) ;													// Ｚバッファに?き?みを行うかどうかを設定する( ３Ｄ描画のみに影響 )( TRUE:?き?みを行う  FALSE:?き?みを行わない( デフォ?ト ) )
extern	int			SetZBufferCmpType3D(				int CmpType /* DX_CMP_NEVER ? */ ) ;							// ＺバッファのＺ値と?き?むＺ値との比較?ードを設定する( ３Ｄ描画のみに影響 )( CmpType:DX_CMP_NEVER?( デフォ?ト:DX_CMP_LESSEQUAL ) )
extern	int			SetZBias3D(							int Bias ) ;													// ?き?むＺ値のバイアスを設定する( ３Ｄ描画のみに影響 )( Bias:バイアス値( デフォ?ト:0 ) )
extern	int			SetDrawZ(							float Z ) ;														// ２Ｄ描画でＺバッファに?き?むＺ値を設定する( Z:?き?むＺ値( デフォ?ト:0.2f ) )

extern	int			SetDrawArea(						int x1, int y1, int x2, int y2 ) ;								// 描画可能領域の設定する
extern	int			GetDrawArea(						RECT *Rect ) ;													// 描画可能領域を取得する
extern	int			SetDrawAreaFull(					void ) ;														// 描画可能領域を描画対象画面全体にする
extern	int			SetDraw3DScale(						float Scale ) ;													// ３Ｄ描画の拡大率を設定する

extern	int			SetRestoreShredPoint(				void (* ShredPoint )( void ) ) ;								// SetRestoreGraphCallback の?名
extern	int			SetRestoreGraphCallback(			void (* Callback )( void ) ) ;									// グ?フィックハ?ド??元関?を登録する
extern	int			RunRestoreShred(					void ) ;														// グ?フィック?元関?を実行する
extern	int			SetGraphicsDeviceRestoreCallbackFunction( void (* Callback )( void *Data ), void *CallbackData ) ;	// グ?フィックスデバイスが?ストから?帰した際に呼ばれるコー?バック関?を設定する
extern	int			SetGraphicsDeviceLostCallbackFunction(    void (* Callback )( void *Data ), void *CallbackData ) ;	// グ?フィックスデバイスが?ストから?帰する前に呼ばれるコー?バック関?を設定する

extern	int			SetTransformTo2D(					const MATRIX   *Matrix ) ;										// ２Ｄ描画に使用される変換行列を設定する
extern	int			SetTransformTo2DD(					const MATRIX_D *Matrix ) ;										// ２Ｄ描画に使用される変換行列を設定する
extern	int			ResetTransformTo2D(					void ) ;														// ２Ｄ描画用に使用する変換行列の設定を?期状態に戻す
extern	int			SetTransformToWorld(				const MATRIX   *Matrix ) ;										// ?ーカ?座標から?ー?ド座標に変換するための行列を設定する
extern	int			SetTransformToWorldD(				const MATRIX_D *Matrix ) ;										// ?ーカ?座標から?ー?ド座標に変換するための行列を設定する
extern	int			GetTransformToWorldMatrix(			      MATRIX   *MatBuf ) ;										// ?ーカ?座標から?ー?ド座標に変換するための行列を取得する
extern	int			GetTransformToWorldMatrixD(			      MATRIX_D *MatBuf ) ;										// ?ーカ?座標から?ー?ド座標に変換するための行列を取得する
extern	int			SetTransformToView(					const MATRIX   *Matrix ) ;										// ?ー?ド座標からビ?ー座標に変換するための行列を設定する
extern	int			SetTransformToViewD(				const MATRIX_D *Matrix ) ;										// ?ー?ド座標からビ?ー座標に変換するための行列を設定する
extern	int			GetTransformToViewMatrix(			      MATRIX   *MatBuf ) ;										// ?ー?ド座標からビ?ー座標に変換するための行列を取得する
extern	int			GetTransformToViewMatrixD(			      MATRIX_D *MatBuf ) ;										// ?ー?ド座標からビ?ー座標に変換するための行列を取得する
extern	int			SetTransformToProjection(			const MATRIX   *Matrix ) ;										// ビ?ー座標からプ?ジェクシ??座標に変換するための行列を設定する
extern	int			SetTransformToProjectionD(			const MATRIX_D *Matrix ) ;										// ビ?ー座標からプ?ジェクシ??座標に変換するための行列を設定する
extern	int			GetTransformToProjectionMatrix(		      MATRIX   *MatBuf ) ;										// ビ?ー座標からプ?ジェクシ??座標に変換するための行列を取得する
extern	int			GetTransformToProjectionMatrixD(	      MATRIX_D *MatBuf ) ;										// ビ?ー座標からプ?ジェクシ??座標に変換するための行列を取得する
extern	int			SetTransformToViewport(				const MATRIX   *Matrix ) ;										// ビ?ーポート行列を設定する
extern	int			SetTransformToViewportD(			const MATRIX_D *Matrix ) ;										// ビ?ーポート行列を設定する
extern	int			GetTransformToViewportMatrix(	    MATRIX   *MatBuf ) ;											// ビ?ーポート行列を取得する
extern	int			GetTransformToViewportMatrixD(	    MATRIX_D *MatBuf ) ;											// ビ?ーポート行列を取得する
extern	int			GetTransformToAPIViewportMatrix(    MATRIX   *MatBuf ) ;											// Direct3Dで自動適用されるビ?ーポート行列を取得する
extern	int			GetTransformToAPIViewportMatrixD(   MATRIX_D *MatBuf ) ;											// Direct3Dで自動適用されるビ?ーポート行列を取得する
extern	int			SetDefTransformMatrix(				void ) ;														// デフォ?トの変換行列を設定する
extern	int			GetTransformPosition(				VECTOR   *LocalPos, float  *x, float  *y ) ;					// ?ーカ?座標からスク?ー?座標を取得する
extern	int			GetTransformPositionD(				VECTOR_D *LocalPos, double *x, double *y ) ;					// ?ーカ?座標からスク?ー?座標を取得する
extern	float		GetBillboardPixelSize(				VECTOR   WorldPos, float  WorldSize ) ;							// ?ー?ド空間上のビ?ボードのサイズからスク?ー?に?影した場?のピクセ?単位のサイズを取得する
extern	double		GetBillboardPixelSizeD(				VECTOR_D WorldPos, double WorldSize ) ;							// ?ー?ド空間上のビ?ボードのサイズからスク?ー?に?影した場?のピクセ?単位のサイズを取得する
extern	VECTOR		ConvWorldPosToViewPos(				VECTOR   WorldPos ) ;											// ?ー?ド座標をビ?ー座標に変換する
extern	VECTOR_D	ConvWorldPosToViewPosD(				VECTOR_D WorldPos ) ;											// ?ー?ド座標をビ?ー座標に変換する
extern	VECTOR		ConvWorldPosToScreenPos(			VECTOR   WorldPos ) ;											// ?ー?ド座標をスク?ー?座標に変換する
extern	VECTOR_D	ConvWorldPosToScreenPosD(			VECTOR_D WorldPos ) ;											// ?ー?ド座標をスク?ー?座標に変換する
extern	FLOAT4		ConvWorldPosToScreenPosPlusW(		VECTOR   WorldPos ) ;											// ?ー?ド座標をスク?ー?座標に変換する、最後のＸＹＺ座標をＷで?る前の値を得る
extern	DOUBLE4		ConvWorldPosToScreenPosPlusWD(		VECTOR_D WorldPos ) ;											// ?ー?ド座標をスク?ー?座標に変換する、最後のＸＹＺ座標をＷで?る前の値を得る
extern	VECTOR		ConvScreenPosToWorldPos(			VECTOR   ScreenPos ) ;											// スク?ー?座標を?ー?ド座標に変換する
extern	VECTOR_D	ConvScreenPosToWorldPosD(			VECTOR_D ScreenPos ) ;											// スク?ー?座標を?ー?ド座標に変換する
extern	VECTOR		ConvScreenPosToWorldPos_ZLinear(	VECTOR   ScreenPos ) ;											// スク?ー?座標を?ー?ド座標に変換する( Z座標が線形 )
extern	VECTOR_D	ConvScreenPosToWorldPos_ZLinearD(	VECTOR_D ScreenPos ) ;											// スク?ー?座標を?ー?ド座標に変換する( Z座標が線形 )

extern	int			SetUseCullingFlag(					int Flag ) ;													// SetUseBackCulling の?名称
extern	int			SetUseBackCulling(					int Flag /* DX_CULLING_LEFT ? */ ) ;							// ポ?ゴ?カ??グ?ードを設定する
extern	int			GetUseBackCulling(					void ) ;														// ポ?ゴ?カ??グ?ードを取得する
extern	int			SetUseRightHandClippingProcess(		int Flag ) ;													// 右手座標系のク?ッピ?グ??を行うかを設定する( TRUE:右手座標系のク?ッピ?グ??を行う  FALSE:左手座標系のク?ッピ?グ??を行う( デフォ?ト ) )
extern	int			GetUseRightHandClippingProcess(		void ) ;														// 右手座標系のク?ッピ?グ??を行うかを取得する( TRUE:右手座標系のク?ッピ?グ??を行う  FALSE:左手座標系のク?ッピ?グ??を行う( デフォ?ト ) )

extern	int			SetTextureAddressMode(				int Mode /* DX_TEXADDRESS_WRAP ? */ , int Stage DEFAULTPARAM( = -1 ) ) ;	// テクスチ?アド?ス?ードを設定する
extern	int			SetTextureAddressModeUV(			int ModeU, int ModeV, int Stage DEFAULTPARAM( = -1 ) ) ;					// テクスチ?アド?ス?ードを設定する( U と V を別々に設定する )
extern	int			SetTextureAddressTransform(			float TransU, float TransV, float ScaleU, float ScaleV, float RotCenterU, float RotCenterV, float Rotate ) ;	// テクスチ?座標変換パ??ータを設定する
extern	int			SetTextureAddressTransformMatrix(	MATRIX Matrix ) ;												// テクスチ?座標変換行列を設定する
extern	int			ResetTextureAddressTransform(		void ) ;														// テクスチ?座標変換設定を?セットする

extern	int			SetFogEnable(						int Flag ) ;													// フォグを有効にするかどうかを設定する( TRUE:有効  FALSE:無効 )
extern	int			GetFogEnable(						void ) ;														// フォグが有効かどうかを取得する( TRUE:有効  FALSE:無効 )
extern	int			SetFogMode(							int Mode /* DX_FOGMODE_NONE ? */ ) ;							// フォグ?ードを設定する
extern	int			GetFogMode(							void ) ;														// フォグ?ードを取得する
extern	int			SetFogColor(						int  r, int  g, int  b ) ;										// フォグカ?ーを設定する
extern	int			GetFogColor(						int *r, int *g, int *b ) ;										// フォグカ?ーを取得する
extern	int			SetFogStartEnd(						float  start, float  end ) ;									// フォグが始まる?離と終了する?離を設定する( 0.0f ～ 1.0f )
extern	int			GetFogStartEnd(						float *start, float *end ) ;									// フォグが始まる?離と終了する?離を取得する( 0.0f ～ 1.0f )
extern	int			SetFogDensity(						float density ) ;												// フォグの密度を設定する( 0.0f ～ 1.0f )
extern	float		GetFogDensity(						void ) ;														// フォグの密度を取得する( 0.0f ～ 1.0f )


// 画面関係関?
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	unsigned int	GetPixel(									int x, int y ) ;																// 指定座標の色を取得する
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	unsigned int	GetPixelDX(									int x, int y ) ;																// 指定座標の色を取得する
extern	COLOR_F			GetPixelF(									int x, int y ) ;																// 指定座標の色を取得する( float型 )
extern	int				SetBackgroundColor(							int Red,  int  Green, int  Blue, int  Alpha DEFAULTPARAM( = 0 )    ) ;			// ?イ?ウイ?ドウの背景色を設定する( Red,Green,Blue,Alpha:それぞれ ０～２５５ )
extern	int				GetBackgroundColor(							int *Red, int *Green, int *Blue, int *Alpha DEFAULTPARAM( = NULL ) ) ;			// ?イ?ウイ?ドウの背景色を取得する( Red,Green,Blue,Alpha:それぞれ ０～２５５ )
extern	int				GetDrawScreenGraph(							                             int x1, int y1, int x2, int y2,                       int GrHandle, int UseClientFlag DEFAULTPARAM( = TRUE ) ) ;	// 描画先の画面から指定領域の画?情報をグ?フィックハ?ド?に転?する
extern	int				BltDrawValidGraph(							int TargetDrawValidGrHandle, int x1, int y1, int x2, int y2, int DestX, int DestY, int DestGrHandle ) ;							// SetDrawScreen で描画対象にできるグ?フィックハ?ド?から指定領域の画?情報を別のグ?フィックハ?ド?に転?する
extern	int				ScreenFlip(									void ) ;																		// ?画面と表画面の内容を交換する
extern 	int				ScreenCopy(									void ) ;																		// ?画面の内容を表画面に転?する
extern	int				WaitVSync(									int SyncNum ) ;																	// ?直同期信?を待つ
extern	int				ClearDrawScreen(					        const RECT *ClearRect DEFAULTPARAM( = NULL ) ) ;												// 画面をク?アする
extern	int				ClearDrawScreenZBuffer(						const RECT *ClearRect DEFAULTPARAM( = NULL ) ) ;												// 画面のＺバッファをク?アする
extern	int				ClsDrawScreen(								void ) ;																		// ClearDrawScreenの?名称
extern	int				SetDrawScreen(								int DrawScreen ) ;																// 描画先画面を設定する( MakeScreen で作成したグ?フィックハ?ド?も渡すことができます )
extern	int				GetDrawScreen(								void ) ;																		// 描画先画面を取得する
extern	int				GetActiveGraph(								void ) ;																		// GetDrawScreen の?名称
extern	int				SetUseSetDrawScreenSettingReset(			int UseFlag ) ;																	// SetDrawScreen を実行した際にカ??や描画範囲の設定を?セットするかを設定する( UseFlag  TRUE:?セットする( デフォ?ト )  FALSE:?セットしない )
extern	int				GetUseSetDrawScreenSettingReset(			void ) ;																		// SetDrawScreen を実行した際にカ??や描画範囲の設定を?セットするかを取得する
extern	int				SetDrawZBuffer(								int DrawScreen ) ;																// 描画先Ｚバッファのセット( DrawScreen 付属のＺバッファを描画先Ｚバッファにする、DrawScreen を -1 にするとデフォ?トの描画先Ｚバッファに戻る )
extern	int				SetGraphMode(								int ScreenSizeX, int ScreenSizeY, int ColorBitDepth, int RefreshRate DEFAULTPARAM( = 60 ) ) ;	// 画面?ードを設定する
extern	int				SetUserScreenImage(							void *Image, int PixelFormat /* DX_USER_SCREEN_PIXEL_FORMAT_R5G6B5 ? */ ) ;	// 画面の???イ?ージをセットする( DxLib_Init の前で呼ぶ必要が?る( DxLib_Init の前に一度でも呼んでいれば、DxLib_Init 後は Image のアド?スのみの変更目的で呼ぶことは可能 )、PixelFormat に DX_USER_SCREEN_PIXEL_FORMAT_R5G6B5 ?は DX_USER_SCREEN_PIXEL_FORMAT_X8R8G8B8 の二つ以外を指定した場?はＤＸ?イブ??の描画関?は一切使用できなくなります )
extern	int				SetFullScreenResolutionMode(				int ResolutionMode /* DX_FSRESOLUTIONMODE_NATIVE ? */ ) ;						// フ?スク?ー?解?度?ードを設定する
extern	int				GetFullScreenResolutionMode(				int *ResolutionMode, int *UseResolutionMode ) ;									// フ?スク?ー?解?度?ードを取得する( UseResolutionMode は実際に使用されている解?度?ード( 例えば DX_FSRESOLUTIONMODE_NATIVE を指定していても?ニタが指定の解?度に対?していない場?は UseResolutionMode が DX_FSRESOLUTIONMODE_DESKTOP や DX_FSRESOLUTIONMODE_MAXIMUM になります ) )
extern	int				GetUseFullScreenResolutionMode(				void ) ;																		// フ?スク?ー?解?度?ードを取得する( GetFullScreenResolutionMode の UseResolutionMode で取得できる値を返す関? )
extern	int				SetFullScreenScalingMode(					int ScalingMode /* DX_FSSCALINGMODE_NEAREST ? */ , int FitScaling DEFAULTPARAM( = FALSE ) ) ;	// フ?スク?ー??ード?の画面拡大?ードを設定する
extern	int				SetEmulation320x240(						int Flag ) ;																	// ６４０?４８０の画面で３２０?２４０の画面解?度にするかどうかを設定する、６４０?４８０以外の解?度では無効( TRUE:有効  FALSE:無効 )
extern	int				SetZBufferSize(								int ZBufferSizeX, int ZBufferSizeY ) ;											// 画面用のＺバッファのサイズを設定する
extern	int				SetZBufferBitDepth(							int BitDepth ) ;																// 画面用のＺバッファのビット深度を設定する( 16 or 24 or 32 )
extern	int				SetWaitVSyncFlag(							int Flag ) ;																	// ScreenFlip 実行?にＶＳＹＮＣ待ちをするかどうかを設定する
extern	int				GetWaitVSyncFlag(							void ) ;																		// ScreenFlip 実行?にＶＳＹＮＣ待ちをするかどうかを取得する
extern	int				SetFullSceneAntiAliasingMode(				int Samples, int Quality ) ;													// 画面のフ?スク?ー?ア?チエイ?アス?ードの設定を行う( DxLib_Init の前でのみ使用可能 )
extern	int				SetGraphDisplayArea(						int x1, int y1, int x2, int y2 ) ;												// ScreenFlip ?に表画面全体に転?する?画面の領域を設定する( DxLib_Init の前でのみ使用可能 )
extern	int				SetChangeScreenModeGraphicsSystemResetFlag(	int Flag ) ;																	// 画面?ード変更?( とウイ?ドウ?ード変更? )にグ?フィックスシステ?の設定やグ?フィックハ?ド?を?セットするかどうかを設定する( TRUE:?セットする( デフォ?ト )  FALSE:?セットしない )
extern	int				GetScreenState(								int *SizeX, int *SizeY, int *ColorBitDepth ) ;									// 現在の画面の解?度とカ?ービット?を得る 
extern	int				GetDrawScreenSize(							int *XBuf, int *YBuf ) ;														// 描画先のサイズを取得する
extern	int				GetScreenBitDepth(							void ) ;																		// 画面のカ?ービット?を取得する
extern	int				GetColorBitDepth(							void ) ;																		// GetScreenBitDepth の?名称
extern	int				GetChangeDisplayFlag(						void ) ;																		// 画面?ードが変更されているかどうかを取得する
extern	int				GetVideoMemorySize(							int *AllSize, int *FreeSize ) ;													// ビデオ???の容量を得る
extern	int				GetVideoMemorySizeEx(						ULONGLONG *TotalSize, ULONGLONG *UseSize ) ;									// ビデオ???の容量を得る( 64bit版 )
extern	int				GetRefreshRate(								void ) ;																		// 現在の画面の?フ?ッシ??ートを取得する
extern	int				GetDisplayNum(								void ) ;																		// ディスプ?イの?を取得
extern	int				GetDisplayInfo(								int DisplayIndex, int *DesktopRectX, int *DesktopRectY, int *DesktopSizeX, int *DesktopSizeY, int *IsPrimary, int *DesktopRefreshRate DEFAULTPARAM( = NULL ) ) ;	// ディスプ?イのデスクトップ上での矩形位置を取得する
extern	int				GetDisplayModeNum(							int DisplayIndex DEFAULTPARAM( = 0 ) ) ;										// 変更可能なディスプ?イ?ードの?を取得する
extern	DISPLAYMODEDATA	GetDisplayMode(								int ModeIndex, int DisplayIndex DEFAULTPARAM( = 0 ) ) ;							// 変更可能なディスプ?イ?ードの情報を取得する( ModeIndex は 0 ～ GetDisplayModeNum の戻り値-1 )
extern	DISPLAYMODEDATA	GetFullScreenUseDisplayMode(				void ) ;																		// フ?スク?ー??ードで起動している場?の使用しているディスプ?イ?ードの情報を取得する( 仮想フ?スク?ー??ードの場?は取得できない )
extern	int				GetDisplayMaxResolution(					int *SizeX, int *SizeY, int DisplayIndex DEFAULTPARAM( = 0 ) ) ;				// ディスプ?イの最大解?度を取得する
extern	const COLORDATA* GetDispColorData(							void ) ;																		// ディスプ?イのカ?ーデータアド?スを取得する
extern	int				GetMultiDrawScreenNum(						void ) ;																		// 同?に描画を行うことができる画面の?を取得する
extern	int				GetDrawFloatCoordType(						void ) ;																		// DrawGraphF ?の?動小?点値で座標を指定する関?における座標タイプを取得する( 戻り値 : DX_DRAWFLOATCOORDTYPE_DIRECT3D9 など )

// その他設定関係関?
extern	int			SetUseNormalDrawShader(						int Flag ) ;									// 通常描画にプ?グ?マブ?シェーダーを使用するかどうかを設定する( TRUE:使用する( デフォ?ト )  FALSE:使用しない )
extern	int			SetUseSoftwareRenderModeFlag(				int Flag ) ;									// ソフトウエア??ダ??グ?ードを使用するかどうかを設定する( TRUE:使用する  FALSE:使用しない( デフォ?ト ) )( DxLib_Init の前に呼ぶ必要が?ります )
extern	int			SetNotUse3DFlag(							int Flag ) ;									// ( 同効果のSetUseSoftwareRenderModeFlag を使用して下さい )３Ｄ機能を使わないかどうかを設定する
extern	int			SetUse3DFlag(								int Flag ) ;									// ( 同効果のSetUseSoftwareRenderModeFlag を使用して下さい )３Ｄ機能を使うかどうかを設定する
extern	int			GetUse3DFlag(								void ) ;										// 描画に３Ｄ機能を使うかどうかを取得する
extern	int			SetScreenMemToVramFlag(						int Flag ) ;									// ( 同効果のSetUseSoftwareRenderModeFlag を使用して下さい )画面のピクセ?データをＶＲＡＭに置くかどうかを設定する
extern	int			GetScreenMemToSystemMemFlag(				void ) ;										// 画面のピクセ?データがシステ????上に存在するかを取得する

extern	int			SetWindowDrawRect(							const RECT *DrawRect ) ;						// 通常使用しない
extern	int			RestoreGraphSystem(							void ) ;										// ＤＸ?イブ??のグ?フィックス??関連の?帰??を行う
extern	int			SetUseHardwareVertexProcessing(				int Flag ) ;									// ハードウエアの頂点?算??機能を使用するかどうかを設定する( TRUE:使用する( デフォ?ト )  FALSE:使用しない )( DxLib_Init の前に呼ぶ必要が?ります )
extern	int			SetUsePixelLighting(						int Flag ) ;									// ピクセ?単位で?イティ?グを行うかどうかを設定する、要 ShaderModel 3.0( TRUE:ピクセ?単位の?イティ?グを行う  FALSE:頂点単位の?イティ?グを行う( デフォ?ト ) )
extern	int			SetUseOldDrawModiGraphCodeFlag(				int Flag ) ;									// 古いバージ??の DrawModiGraph 関?のコードを使用するかどうかを設定する
extern	int			SetUseVramFlag(								int Flag ) ;									// ( 現在効果なし )ＶＲＡＭを使用するかのフ?グをセットする
extern	int			GetUseVramFlag(								void ) ;										// ( 現在効果なし )２Ｄグ?フィックサーフェス作成?にシステ????ーを使用するかのフ?グ取得
extern	int			SetBasicBlendFlag(							int Flag ) ;									// ( 現在効果なし )簡略化ブ??ド??を行うか否かのフ?グをセットする
extern	int			SetUseBasicGraphDraw3DDeviceMethodFlag(		int Flag ) ;									// ( 現在効果なし )単?図形の描画に３Ｄデバイスの機能を使用するかどうかを設定する
extern	int			SetUseDisplayIndex(							int Index ) ;									// ＤＸ?イブ??のウイ?ドウを表示するディスプ?イデバイスを設定する( -1 を指定するとマウスカーソ?が?るディスプ?イデバイスにＤＸ?イブ??のウイ?ドウを表示する )
extern	int			RenderVertex(								void ) ;										// 頂点バッファに溜まった頂点データを描画する( 特殊用途 )

// 描画パフォーマ?ス関係関?
extern	int			GetDrawCallCount(							void ) ;										// 前々回の ScreenFlip 呼び出しから、前回の ScreenFlip 呼び出しまでの間に行われた描画コー?の回?を取得する
extern	float		GetFPS(										void ) ;										// フ?ー??ート( １秒間に呼ばれる ScreenFlip の回? )を取得する

#ifndef DX_NON_SAVEFUNCTION

// 描画先画面保存関?
// Jpeg_Quality         = 0:低画質～100:?画質
// Png_CompressionLevel = 0:無圧縮～  9:最?圧縮
extern	int			SaveDrawScreen(                 int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;	// 現在描画対象になっている画面をファイ?で保存する
extern	int			SaveDrawScreenWithStrLen(       int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;	// 現在描画対象になっている画面をファイ?で保存する
extern	int			SaveDrawScreenToBMP(            int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// 現在描画対象になっている画面をＢＭＰ形式で保存する
extern	int			SaveDrawScreenToBMPWithStrLen(  int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// 現在描画対象になっている画面をＢＭＰ形式で保存する
extern	int			SaveDrawScreenToDDS(            int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// 現在描画対象になっている画面をＤＤＳ形式で保存する
extern	int			SaveDrawScreenToDDSWithStrLen(  int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// 現在描画対象になっている画面をＤＤＳ形式で保存する
extern	int			SaveDrawScreenToJPEG(           int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// 現在描画対象になっている画面をＪＰＥＧ形式で保存する Quality = 画質、値が大きいほど低圧縮?画質,0～100 
extern	int			SaveDrawScreenToJPEGWithStrLen( int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// 現在描画対象になっている画面をＪＰＥＧ形式で保存する Quality = 画質、値が大きいほど低圧縮?画質,0～100 
extern	int			SaveDrawScreenToPNG(            int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																						// 現在描画対象になっている画面をＰＮＧ形式で保存する CompressionLevel = 圧縮率、値が大きいほど?圧縮率??荷、０は無圧縮,0～9
extern	int			SaveDrawScreenToPNGWithStrLen(  int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																						// 現在描画対象になっている画面をＰＮＧ形式で保存する CompressionLevel = 圧縮率、値が大きいほど?圧縮率??荷、０は無圧縮,0～9

// 描画対象にできるグ?フィックハ?ド?保存関?
// Jpeg_Quality         = 0:低画質～100:?画質
// Png_CompressionLevel = 0:無圧縮～  9:最?圧縮
extern	int			SaveDrawValidGraph(                 int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;		// 描画対象にできるグ?フィックハ?ド?をファイ?で保存する
extern	int			SaveDrawValidGraphWithStrLen(       int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = DX_IMAGESAVETYPE_BMP ) , int Jpeg_Quality DEFAULTPARAM( = 80 ) , int Jpeg_Sample2x1 DEFAULTPARAM( = TRUE ) , int Png_CompressionLevel DEFAULTPARAM( = -1 ) ) ;		// 描画対象にできるグ?フィックハ?ド?をファイ?で保存する
extern	int			SaveDrawValidGraphToBMP(            int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// 描画対象にできるグ?フィックハ?ド?をＢＭＰ形式で保存する
extern	int			SaveDrawValidGraphToBMPWithStrLen(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// 描画対象にできるグ?フィックハ?ド?をＢＭＰ形式で保存する
extern	int			SaveDrawValidGraphToDDS(            int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName                        ) ;																																// 描画対象にできるグ?フィックハ?ド?をＤＤＳ形式で保存する
extern	int			SaveDrawValidGraphToDDSWithStrLen(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength ) ;																																// 描画対象にできるグ?フィックハ?ド?をＤＤＳ形式で保存する
extern	int			SaveDrawValidGraphToJPEG(           int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// 描画対象にできるグ?フィックハ?ド?をＪＰＥＧ形式で保存する Quality = 画質、値が大きいほど低圧縮?画質,0～100 
extern	int			SaveDrawValidGraphToJPEGWithStrLen( int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int Quality DEFAULTPARAM( = 80 ) , int Sample2x1 DEFAULTPARAM( = TRUE ) ) ;																						// 描画対象にできるグ?フィックハ?ド?をＪＰＥＧ形式で保存する Quality = 画質、値が大きいほど低圧縮?画質,0～100 
extern	int			SaveDrawValidGraphToPNG(            int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName,                        int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																					// 描画対象にできるグ?フィックハ?ド?をＰＮＧ形式で保存する CompressionLevel = 圧縮率、値が大きいほど?圧縮率??荷、０は無圧縮,0～9
extern	int			SaveDrawValidGraphToPNGWithStrLen(  int GrHandle, int x1, int y1, int x2, int y2, const TCHAR *FileName, size_t FileNameLength, int CompressionLevel DEFAULTPARAM( = -1 ) ) ;																					// 描画対象にできるグ?フィックハ?ド?をＰＮＧ形式で保存する CompressionLevel = 圧縮率、値が大きいほど?圧縮率??荷、０は無圧縮,0～9

#endif // DX_NON_SAVEFUNCTION

// 頂点バッファ関係関?
extern	int			CreateVertexBuffer(		int VertexNum, int VertexType /* DX_VERTEX_TYPE_NORMAL_3D ? */ ) ;						// 頂点バッファを作成する( -1:エ?ー  0以上:頂点バッファハ?ド? )
extern	int			DeleteVertexBuffer(		int VertexBufHandle ) ;																	// 頂点バッファを削?する
extern	int			InitVertexBuffer(		void ) ;																				// すべての頂点バッファを削?する
extern	int			SetVertexBufferData(	int SetIndex, const void *VertexArray, int VertexNum, int VertexBufHandle ) ;			// 頂点バッファに頂点データを転?する
extern	void *		GetBufferVertexBuffer(	int VertexBufHandle ) ;																	// 頂点バッファハ?ド?の頂点バッファのアド?スを取得する
extern	int			UpdateVertexBuffer(		int VertexBufHandle, int UpdateStartIndex, int UpdateVertexNum ) ;						// 頂点バッファハ?ド?の頂点バッファへの変更を適用する( GetBufferVertexBuffer で取得したバッファへの変更を反映する )
extern	int			CreateIndexBuffer(		int IndexNum, int IndexType /* DX_INDEX_TYPE_16BIT ? */  ) ;							// イ?デックスバッファを作成する( -1:エ?ー　0以上：イ?デックスバッファハ?ド? )
extern	int			DeleteIndexBuffer(		int IndexBufHandle ) ;																	// イ?デックスバッファを削?する
extern	int			InitIndexBuffer(		void ) ;																				// すべてのイ?デックスバッファを削?する
extern	int			SetIndexBufferData(		int SetIndex, const void *IndexArray, int IndexNum, int IndexBufHandle ) ;				// イ?デックスバッファにイ?デックスデータを転?する
extern	void *		GetBufferIndexBuffer(	int IndexBufHandle ) ;																	// イ?デックスバッファハ?ド?のイ?デックスバッファのアド?スを取得する
extern	int			UpdateIndexBuffer(		int IndexBufHandle, int UpdateStartIndex, int UpdateIndexNum ) ;						// イ?デックスバッファハ?ド?のイ?デックスバッファへの変更を適用する( GetBufferIndexBuffer で取得したバッファへの変更を反映する )
extern	int			GetMaxPrimitiveCount(	void ) ;																				// グ?フィックスデバイスが対?している一度に描画できるプ?ミティブの最大?を取得する
extern	int			GetMaxVertexIndex(		void ) ;																				// グ?フィックスデバイスが対?している一度に使用することのできる最大頂点?を取得する

// シェーダー関係関?
extern	int			GetValidShaderVersion(			void ) ;												// 使用できるシェーダーのバージ??を取得する( 0=使えない  200=シェーダー?デ?２．０が使用可能  300=シェーダー?デ?３．０が使用可能 )

extern	int			LoadVertexShader(				const TCHAR *FileName                        ) ;		// 頂点シェーダーバイナ?をファイ?から読み?み頂点シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadVertexShaderWithStrLen(		const TCHAR *FileName, size_t FileNameLength ) ;		// 頂点シェーダーバイナ?をファイ?から読み?み頂点シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadGeometryShader(				const TCHAR *FileName                        ) ;		// ジオ?ト?シェーダーバイナ?をファイ?から読み?みジオ?ト?シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadGeometryShaderWithStrLen(	const TCHAR *FileName, size_t FileNameLength ) ;		// ジオ?ト?シェーダーバイナ?をファイ?から読み?みジオ?ト?シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadPixelShader(				const TCHAR *FileName                        ) ;		// ピクセ?シェーダーバイナ?をファイ?から読み?みピクセ?シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadPixelShaderWithStrLen(		const TCHAR *FileName, size_t FileNameLength ) ;		// ピクセ?シェーダーバイナ?をファイ?から読み?みピクセ?シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadVertexShaderFromMem(		const void *ImageAddress, int ImageSize ) ;				// ???に読み?まれた頂点シェーダーバイナ?から頂点シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadGeometryShaderFromMem(		const void *ImageAddress, int ImageSize ) ;				// ???に読み?まれたジオ?ト?シェーダーバイナ?からジオ?ト?シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			LoadPixelShaderFromMem(			const void *ImageAddress, int ImageSize ) ;				// ???に読み?まれたピクセ?シェーダーバイナ?からピクセ?シェーダーハ?ド?を作成する( 戻り値 -1:エ?ー  -1以外:シェーダーハ?ド? )
extern	int			DeleteShader(					int ShaderHandle ) ;									// シェーダーハ?ド?の削?( 頂点シェーダー・ピクセ?シェーダー共通 )
extern	int			InitShader(						void ) ;												// シェーダーハ?ド?を全て削?する( 頂点シェーダーハ?ド?・ピクセ?シェーダーハ?ド?どちらもすべて削? )

extern	int			GetConstIndexToShader(                     const TCHAR *ConstantName,                            int ShaderHandle ) ;	// 指定の名前を?つ定?が使用するシェーダー定?の番?を取得する
extern	int			GetConstIndexToShaderWithStrLen(           const TCHAR *ConstantName, size_t ConstantNameLength, int ShaderHandle ) ;	// 指定の名前を?つ定?が使用するシェーダー定?の番?を取得する
extern	int			GetConstCountToShader(                     const TCHAR *ConstantName,                            int ShaderHandle ) ;	// 指定の名前を?つ定?が使用するシェーダー定?の?を取得する
extern	int			GetConstCountToShaderWithStrLen(           const TCHAR *ConstantName, size_t ConstantNameLength, int ShaderHandle ) ;	// 指定の名前を?つ定?が使用するシェーダー定?の?を取得する
extern	const FLOAT4 *GetConstDefaultParamFToShader(           const TCHAR *ConstantName,                            int ShaderHandle ) ;	// 指定の名前を?つ?動小?点?定?のデフォ?トパ??ータが格納されている???アド?スを取得する
extern	const FLOAT4 *GetConstDefaultParamFToShaderWithStrLen( const TCHAR *ConstantName, size_t ConstantNameLength, int ShaderHandle ) ;	// 指定の名前を?つ?動小?点?定?のデフォ?トパ??ータが格納されている???アド?スを取得する
extern	int			SetVSConstSF(         int ConstantIndex,       float  Param ) ;						// 頂点シェーダーの float 型定?を設定する
extern	int			SetVSConstF(          int ConstantIndex,       FLOAT4 Param ) ;						// 頂点シェーダーの float 型定?を設定する
extern	int			SetVSConstFMtx(       int ConstantIndex,       MATRIX Param ) ;						// 頂点シェーダーの float 型定?に行列を設定する
extern	int			SetVSConstFMtxT(      int ConstantIndex,       MATRIX Param ) ;						// 頂点シェーダーの float 型定?に転置した行列を設定する
extern	int			SetVSConstSI(         int ConstantIndex,       int    Param ) ;						// 頂点シェーダーの int   型定?を設定する
extern	int			SetVSConstI(          int ConstantIndex,       INT4   Param ) ;						// 頂点シェーダーの int   型定?を設定する
extern	int			SetVSConstB(          int ConstantIndex,       BOOL   Param ) ;						// 頂点シェーダーの BOOL  型定?を設定する
extern	int			SetVSConstSFArray(    int ConstantIndex, const float  *ParamArray, int ParamNum ) ;	// 頂点シェーダーの float 型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetVSConstFArray(     int ConstantIndex, const FLOAT4 *ParamArray, int ParamNum ) ;	// 頂点シェーダーの float 型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetVSConstFMtxArray(  int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// 頂点シェーダーの float 型定?に行列を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetVSConstFMtxTArray( int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// 頂点シェーダーの float 型定?に転置した行列を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetVSConstSIArray(    int ConstantIndex, const int    *ParamArray, int ParamNum ) ;	// 頂点シェーダーの int   型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetVSConstIArray(     int ConstantIndex, const INT4   *ParamArray, int ParamNum ) ;	// 頂点シェーダーの int   型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetVSConstBArray(     int ConstantIndex, const BOOL   *ParamArray, int ParamNum ) ;	// 頂点シェーダーの BOOL  型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			ResetVSConstF(        int ConstantIndex, int ParamNum ) ;							// 頂点シェーダーの float 型定?の設定を?セットする
extern	int			ResetVSConstI(        int ConstantIndex, int ParamNum ) ;							// 頂点シェーダーの int   型定?の設定を?セットする
extern	int			ResetVSConstB(        int ConstantIndex, int ParamNum ) ;							// 頂点シェーダーの BOOL  型定?の設定を?セットする

extern	int			SetPSConstSF(         int ConstantIndex,       float  Param ) ;						// ピクセ?シェーダーの float 型定?を設定する
extern	int			SetPSConstF(          int ConstantIndex,       FLOAT4 Param ) ;						// ピクセ?シェーダーの float 型定?を設定する
extern	int			SetPSConstFMtx(       int ConstantIndex,       MATRIX Param ) ;						// ピクセ?シェーダーの float 型定?に行列を設定する
extern	int			SetPSConstFMtxT(      int ConstantIndex,       MATRIX Param ) ;						// ピクセ?シェーダーの float 型定?に転置した行列を設定する
extern	int			SetPSConstSI(         int ConstantIndex,       int    Param ) ;						// ピクセ?シェーダーの int   型定?を設定する
extern	int			SetPSConstI(          int ConstantIndex,       INT4   Param ) ;						// ピクセ?シェーダーの int   型定?を設定する
extern	int			SetPSConstB(          int ConstantIndex,       BOOL   Param ) ;						// ピクセ?シェーダーの BOOL  型定?を設定する
extern	int			SetPSConstSFArray(    int ConstantIndex, const float  *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの float 型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetPSConstFArray(     int ConstantIndex, const FLOAT4 *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの float 型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetPSConstFMtxArray(  int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの float 型定?に行列を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetPSConstFMtxTArray( int ConstantIndex, const MATRIX *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの float 型定?に転置した行列を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetPSConstSIArray(    int ConstantIndex, const int    *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの int   型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetPSConstIArray(     int ConstantIndex, const INT4   *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの int   型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			SetPSConstBArray(     int ConstantIndex, const BOOL   *ParamArray, int ParamNum ) ;	// ピクセ?シェーダーの BOOL  型定?を設定する( 配列を使って連番イ?デックスに一度に設定 )
extern	int			ResetPSConstF(        int ConstantIndex, int ParamNum ) ;							// ピクセ?シェーダーの float 型定?の設定を?セットする
extern	int			ResetPSConstI(        int ConstantIndex, int ParamNum ) ;							// ピクセ?シェーダーの int   型定?の設定を?セットする
extern	int			ResetPSConstB(        int ConstantIndex, int ParamNum ) ;							// ピクセ?シェーダーの BOOL  型定?の設定を?セットする

extern	int			SetRenderTargetToShader( int TargetIndex, int DrawScreen, int SurfaceIndex DEFAULTPARAM( = 0 ) , int MipLevel DEFAULTPARAM( = 0 ) ) ;	// シェーダーを使用した描画での描画先を設定する( DrawScreen に -1 を渡すと無効化 )
extern	int			SetUseTextureToShader(   int StageIndex, int GraphHandle ) ;						// シェーダーを使用した描画で使用するグ?フィックハ?ド?を設定する
extern	int			SetUseVertexShader(      int ShaderHandle ) ;										// シェーダーを使用した描画に使用する頂点シェーダーを設定する( -1を渡すと解? )
extern	int			SetUseGeometryShader(    int ShaderHandle ) ;										// シェーダーを使用した描画に使用するジオ?ト?シェーダーを設定する( -1を渡すと解? )
extern	int			SetUsePixelShader(       int ShaderHandle ) ;										// シェーダーを使用した描画に使用するピクセ?シェーダーを設定する( -1を渡すと解? )

extern	int			CalcPolygonBinormalAndTangentsToShader(             VERTEX3DSHADER *VertexArray, int PolygonNum ) ;														// ポ?ゴ?の頂点の接線と従法線をＵＶ座標から計算してセットする
extern	int			CalcPolygonIndexedBinormalAndTangentsToShader(      VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;	// ポ?ゴ?の頂点の接線と従法線をＵＶ座標から計算してセットする( 頂点イ?デックスを使用する )
extern	int			CalcPolygon32bitIndexedBinormalAndTangentsToShader( VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum ) ;	// ポ?ゴ?の頂点の接線と従法線をＵＶ座標から計算してセットする( 頂点イ?デックスを使用する )

extern	int			DrawBillboard3DToShader( VECTOR Pos, float cx, float cy, float Size, float Angle, int GrHandle, int TransFlag, int ReverseXFlag DEFAULTPARAM( = FALSE ) , int ReverseYFlag DEFAULTPARAM( = FALSE ) ) ;							// シェーダーを使ってビ?ボードを描画する
extern	int			DrawPolygon2DToShader(               const VERTEX2DSHADER *VertexArray, int PolygonNum ) ;																											// シェーダーを使って２Ｄポ?ゴ?を描画する
extern	int			DrawPolygon3DToShader(               const VERTEX3DSHADER *VertexArray, int PolygonNum ) ;																											// シェーダーを使って３Ｄポ?ゴ?を描画する
extern	int			DrawPolygonIndexed2DToShader(        const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;															// シェーダーを使って２Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用する )
extern	int			DrawPolygon32bitIndexed2DToShader(   const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum ) ;															// シェーダーを使って２Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用する )
extern	int			DrawPolygonIndexed3DToShader(        const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int PolygonNum ) ;															// シェーダーを使って３Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用する )
extern	int			DrawPolygon32bitIndexed3DToShader(   const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int PolygonNum ) ;															// シェーダーを使って３Ｄポ?ゴ?を描画する( 頂点イ?デックスを使用する )
extern	int			DrawPrimitive2DToShader(             const VERTEX2DSHADER *VertexArray, int VertexNum,                                                 int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;		// シェーダーを使って２Ｄプ?ミティブを描画する
extern	int			DrawPrimitive3DToShader(             const VERTEX3DSHADER *VertexArray, int VertexNum,                                                 int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;		// シェーダーを使って３Ｄプ?ミティブを描画する
extern	int			DrawPrimitiveIndexed2DToShader(      const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;		// シェーダーを使って２Ｄプ?ミティブを描画する( 頂点イ?デックスを使用する )
extern	int			DrawPrimitive32bitIndexed2DToShader( const VERTEX2DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;		// シェーダーを使って２Ｄプ?ミティブを描画する( 頂点イ?デックスを使用する )
extern	int			DrawPrimitiveIndexed3DToShader(      const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned short *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;		// シェーダーを使って３Ｄプ?ミティブを描画する( 頂点イ?デックスを使用する )
extern	int			DrawPrimitive32bitIndexed3DToShader( const VERTEX3DSHADER *VertexArray, int VertexNum, const unsigned int   *IndexArray, int IndexNum, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;		// シェーダーを使って３Ｄプ?ミティブを描画する( 頂点イ?デックスを使用する )
extern	int			DrawPolygon3DToShader_UseVertexBuffer(           int VertexBufHandle ) ;																															// シェーダーを使って３Ｄポ?ゴ?を描画する( 頂点バッファ使用版 )
extern	int			DrawPolygonIndexed3DToShader_UseVertexBuffer(    int VertexBufHandle, int IndexBufHandle ) ;																										// シェーダーを使って３Ｄポ?ゴ?を描画する( 頂点バッファとイ?デックスバッファ使用版 )
extern	int			DrawPrimitive3DToShader_UseVertexBuffer(         int VertexBufHandle,                     int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;													// シェーダーを使って３Ｄプ?ミティブを描画する( 頂点バッファ使用版 )
extern	int			DrawPrimitive3DToShader_UseVertexBuffer2(        int VertexBufHandle,                     int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int StartVertex, int UseVertexNum ) ;				// シェーダーを使って３Ｄプ?ミティブを描画する( 頂点バッファ使用版 )
extern	int			DrawPrimitiveIndexed3DToShader_UseVertexBuffer(  int VertexBufHandle, int IndexBufHandle, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */ ) ;													// シェーダーを使って３Ｄプ?ミティブを描画する( 頂点バッファとイ?デックスバッファ使用版 )
extern	int			DrawPrimitiveIndexed3DToShader_UseVertexBuffer2( int VertexBufHandle, int IndexBufHandle, int PrimitiveType /* DX_PRIMTYPE_TRIANGLELIST ? */, int BaseVertex, int StartVertex, int UseVertexNum, int StartIndex, int UseIndexNum ) ;		// シェーダーを使って３Ｄプ?ミティブを描画する( 頂点バッファとイ?デックスバッファ使用版 )

// シェーダー用定?バッファ関係関?
extern	int			InitShaderConstantBuffer(		void ) ;																					// 全てのシェーダー用定?バッファハ?ド?を削?する
extern	int			CreateShaderConstantBuffer(		int BufferSize ) ;																			// シェーダー用定?バッファハ?ド?を?期化する
extern	int			DeleteShaderConstantBuffer(		int SConstBufHandle ) ;																		// シェーダー用定?バッファハ?ド?を削?する
extern	void *		GetBufferShaderConstantBuffer(	int SConstBufHandle ) ;																		// シェーダー用定?バッファハ?ド?の定?バッファのアド?スを取得する
extern	int			UpdateShaderConstantBuffer(		int SConstBufHandle ) ;																		// シェーダー用定?バッファハ?ド?の定?バッファへの変更を適用する
extern	int			SetShaderConstantBuffer(		int SConstBufHandle, int TargetShader /* DX_SHADERTYPE_VERTEX など */ , int Slot ) ;		// シェーダー用定?バッファハ?ド?の定?バッファを指定のシェーダーの指定のス?ットにセットする

// フィ?ター関係関?
#ifndef DX_NON_FILTER
extern	int			SetGraphFilterBltBlendMode( int BlendMode /* DX_BLENDMODE_ALPHA など */ ) ;												// GraphFilterBlt や GraphBlendBlt の?果を転?先に転?する際のブ??ド?ードを設定する( 現状で対?しているのは DX_BLENDMODE_NOBLEND と DX_BLENDMODE_ALPHA のみ )
extern	int			SetGraphBlendScalingFilterMode( int IsBilinearFilter ) ;																// GraphBlend で GrHandle と BlendGrHandle のサイズが異なる場?に適用される拡大フィ?ター?ードを設定する( IsBilinearFilter  TRUE:バイ?ニアフィ?ター(デフォ?ト)  FALSE:ニア?ストフィ?ター )

extern	int			GraphFilter(         int    GrHandle,                                                                                                               int FilterType /* DX_GRAPH_FILTER_GAUSS ? */ , ... ) ;		// 画?にフィ?ター??を行う
extern	int			GraphFilterBlt(      int SrcGrHandle, int DestGrHandle,                                                                                             int FilterType /* DX_GRAPH_FILTER_GAUSS ? */ , ... ) ;		// 画?のフィ?ター付き転?を行う
extern	int			GraphFilterRectBlt(  int SrcGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int DestX,  int DestY,                          int FilterType /* DX_GRAPH_FILTER_GAUSS ? */ , ... ) ;		// 画?のフィ?ター付き転?を行う( 矩形指定 )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_MONO, int Cb = 青色差( -255 ～ 255 ), int Cr = 赤色差( -255 ～ 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_GAUSS, int PixelWidth = 使用ピクセ??( 8 , 16 , 32 の何れか ), int Param = ぼかしパ??ータ( 100 で約1ピクセ?分の? ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_DOWN_SCALE, int DivNum = 元のサイズの何分の１か、という値( 1 , 2 , 4 , 8 の何れか ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BRIGHT_CLIP, int CmpType = ク?ップタイプ( DX_CMP_LESS:CmpParam以下をク?ップ  ?は  DX_CMP_GREATER:CmpParam以上をク?ップ ), int CmpParam = ク?ップパ??ータ( 0 ～ 255 ), int ClipFillFlag = ク?ップしたピクセ?を塗りつぶすかどうか( TRUE:塗りつぶす  FALSE:塗りつぶさない ), unsigned int ClipFillColor = ク?ップしたピクセ?に塗る色値( GetColor で取得する )( ClipFillFlag が FALSE の場?は使用しない ), int ClipFillAlpha = ク?ップしたピクセ?に塗るα値( 0 ～ 255 )( ClipFillFlag が FALSE の場?は使用しない ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BRIGHT_SCALE, int MinBright = 変換後に真っ暗になる明るさ( 0 ～ 255 ), int MaxBright = 変換後に真っ?になる明るさ( 0 ～ 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_HSB, int HueType = Hue の意味( 0:?対値  1:絶対値 ), int Hue = 色?パ??ータ( HueType が 0 の場? = ピクセ?の色?に対する?対値( -180 ～ 180 )   HueType が 1 の場? = 色?の絶対値( 0 ～ 360 ) ), int Saturation = 彩度( -255 ～ ), int Bright = 輝度( -255 ～ 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_INVERT ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_LEVEL, int Min = 変換元の下限値( 0 ～ 255 ), int Max = 変換元の上限値( 0 ～ 255 ), int Gamma = ガ?マ値( 100 でガ?マ補正無し、0 とそれ以下の値は不可 ), int AfterMin = 変換後の最低値( 0 ～ 255 ), int AfterMax = 変換後の最大値( 0 ～ 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_TWO_COLOR, int Threshold = ?値( 0 ～ 255 ), unsigned int LowColor = ?値より値が低かったピクセ?の変換後の色値( GetColor で取得する ), int LowAlpha = ?値より値が低かったピクセ?の変換後のα値( 0 ～ 255 ), unsigned int HighColor = ?値より値が?かったピクセ?の変換後の色値( GetColor で取得する ), int HighAlpha = ?値より値が?かったピクセ?の変換後のα値( 0 ～ 255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_GRADIENT_MAP, int MapGrHandle = グ?デーシ??マップのグ?フィックハ?ド?( 元画?の輝度からグ?デーシ??マップ画?の x 座標を算出しますので縦?は1dotでもＯＫ ), int Reverse = グ?デーシ??マップ左右反転フ?グ( TRUE : グ?デーシ??マップを左右反転して使う  FALSE : 左右反転しない ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_REPLACEMENT, int TargetR, int TargetG, int TargetB, int TargetA = 置換対象の色( 0～255 ), int R, int G, int B, int A = 置換後の色( 0～255 ) ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_PREMUL_ALPHA ) ;			// 通常のア?ファチ??ネ?付き画?を乗算済みア?ファ画?に変換するフィ?タ
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_INTERP_ALPHA ) ;			// 乗算済みα画?を通常のア?ファチ??ネ?付き画?に変換するフィ?タ
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_YUV_TO_RGB ) ;				// YUVカ?ーをRGBカ?ーに変換するフィ?タ
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_Y2UV1_TO_RGB, int UVGrHandle = YUVカ?ーのUV成分のみで、?つYに対して解?度が半分( 若しくは 4 分の 1 )のグ?フィックハ?ド?( U=R, V=G ) ) ;		// YUVカ?ーをRGBカ?ーに変換するフィ?タ( UV成分が Y成分の半分・?は４分の１( 横・縦片方若しくは両方 )の解?度しかない場?用 )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_YUV_TO_RGB_RRA ) ;				// YUVカ?ーをRGBカ?ーに変換するフィ?タ( ?つ右側半分のRの値をア?ファ値として扱う )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_Y2UV1_TO_RGB_RRA, int UVGrHandle = YUVカ?ーのUV成分のみで、?つYに対して解?度が半分( 若しくは 4 分の 1 )のグ?フィックハ?ド?( U=R, V=G ) ) ;		// YUVカ?ーをRGBカ?ーに変換するフィ?タ( UV成分が Y成分の半分・?は４分の１( 横・縦片方若しくは両方 )の解?度しかない場?用 )( ?つ右側半分のRの値をア?ファ値として扱う )
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_BICUBIC_SCALE, int DestSizeX = スケー??グ後の横ピクセ??, int DestSizeY = スケー??グ後の縦ピクセ?? ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_LANCZOS3_SCALE, int DestSizeX = スケー??グ後の横ピクセ??, int DestSizeY = スケー??グ後の縦ピクセ?? ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_SSAO, int ColorWithDepthGrHandle = Zバッファが含まれるカ?ーバッファ, float KernelRadius = 遮蔽物を調べる範囲, float MinDistance = 遮蔽物判定する最小深度値, float MaxDistance = 遮蔽物判定する最大深度値, float Strength = 遮蔽物の影響の強さ, int OcclusionColor = オク??ージ??カ?ー, float OcclusionPower = オク??ージ??カ?ーの強さ ) ;
//		int			GraphFilter( int GrHandle, int FilterType = DX_GRAPH_FILTER_FLOAT_COLOR_SCALE, float ColorScaleR = 赤成分へのスケー??グ値, float ColorScaleG = 緑成分へのスケー??グ値, float ColorScaleB = 青成分へのスケー??グ値, float ColorScaleA = α成分へのスケー??グ値, float ColorPreSubR = 赤成分にスケー??グを掛ける前に減算する値, float ColorPreSubG = 緑成分にスケー??グを掛ける前に減算する値, float ColorPreSubB = 青成分にスケー??グを掛ける前に減算する値, float ColorPreSubA = α成分にスケー??グを掛ける前に減算する値 ) ;

extern	int			GraphBlend(         int    GrHandle, int BlendGrHandle,                                                                                                                                         int BlendRatio /* ブ??ド効果の影響度( 0:０?  255:１００? ) */ , int BlendType /* DX_GRAPH_BLEND_ADD ? */ , ... ) ;	// 二つの画?をブ??ドする
extern	int			GraphBlendBlt(      int SrcGrHandle, int BlendGrHandle, int DestGrHandle,                                                                                                                       int BlendRatio /* ブ??ド効果の影響度( 0:０?  255:１００? ) */ , int BlendType /* DX_GRAPH_BLEND_ADD ? */ , ... ) ;	// 二つの画?をブ??ドして?果を指定の画?に出力する
extern	int			GraphBlendRectBlt(  int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX,  int BlendY,                            int DestX, int DestY, int BlendRatio /* ブ??ド効果の影響度( 0:０?  255:１００? ) */ , int BlendType /* DX_GRAPH_BLEND_ADD ? */ , ... ) ;	// 二つの画?をブ??ドして?果を指定の画?に出力する( 矩形指定 )
extern	int			GraphBlendRectBlt2( int SrcGrHandle, int BlendGrHandle, int DestGrHandle, int SrcX1, int SrcY1, int SrcX2, int SrcY2, int BlendX1, int BlendY1, int BlendX2, int BlendY2, int DestX, int DestY, int BlendRatio /* ブ??ド効果の影響度( 0:０?  255:１００? ) */ , int BlendType /* DX_GRAPH_BLEND_ADD ? */ , ... ) ;	// 二つの画?をブ??ドして?果を指定の画?に出力する( 矩形指定、ブ??ド画?も矩形指定 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_NORMAL ) ; // 通常
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_RGBA_SELECT_MIX, int SelectR = ( 出力の赤分となる成分 DX_RGBA_SELECT_SRC_R ? ), int SelectG = ( 出力の緑成分となる成分 DX_RGBA_SELECT_SRC_R ? ), int SelectB = ( 出力の青成分となる成分 DX_RGBA_SELECT_SRC_R ? ), int SelectA = ( 出力のα成分となる成分 DX_RGBA_SELECT_SRC_R ? ) ) ;	// RGBAの要素を選択して?成
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MULTIPLE ) ;	// 乗算
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DIFFERENCE ) ;	// 減算
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_ADD ) ;		  	// 加算
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_SCREEN ) ;	// スク?ー?
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_OVERLAY ) ;	// オーバー?イ
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DODGE ) ;	// 覆い焼き
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_BURN ) ;	// 焼き?み
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_DARKEN ) ;	// 比較(暗)
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_LIGHTEN ) ;	// 比較(明)
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_SOFTLIGHT ) ;	// ソフト?イト
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_HARDLIGHT ) ;	// ハード?イト
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_EXCLUSION ) ;	// ?外
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_NORMAL_ALPHACH ) ;	// αチ??ネ?付き画?の通常?成
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_ADD_ALPHACH ) ;	// αチ??ネ?付き画?の加算?成
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MULTIPLE_A_ONLY ) ;	// ア?ファチ??ネ?のみの乗算
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_MASK ) ;	// マスク( SrcGrHandle に BlendGrHandle を通常描画した上で、SrcGrHandle の A を優先 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_NORMAL ) ; // 通常( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_RGBA_SELECT_MIX ) ; // RGBAの要素を選択して?成( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MULTIPLE ) ; // 乗算( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_DIFFERENCE ) ; // 減算( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_ADD ) ; // 加算( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_SCREEN ) ; // スク?ー?( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_OVERLAY ) ; // オーバー?イ( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_DODGE ) ; // 覆い焼き( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_BURN ) ; // 焼き?み( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_DARKEN ) ; // 比較(暗)( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_LIGHTEN ) ; // 比較(明)( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_SOFTLIGHT ) ; // ソフト?イト( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_HARDLIGHT ) ; // ハード?イト( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_EXCLUSION ) ; // ?外( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_NORMAL_ALPHACH ) ; // αチ??ネ?付き画?の通常?成( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_ADD_ALPHACH ) ; // αチ??ネ?付き画?の加算?成( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MULTIPLE_A_ONLY ) ;	// ア?ファチ??ネ?のみの乗算( 乗算済みα画?用 )
//		int			GraphBlend( int GrHandle, int BlendGrHandle, int BlendRatio, int BlendType = DX_GRAPH_BLEND_PMA_MASK ) ;	// マスク( DX_GRAPH_BLEND_MASK の 乗算済みα画?用 )
#endif // DX_NON_FILTER

#ifndef DX_NON_MOVIE
// ?ービーグ?フィック関係関?
extern	int			PlayMovie(							const TCHAR *FileName,                        int ExRate, int PlayType ) ;	// 動画ファイ?の再生
extern	int			PlayMovieWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int ExRate, int PlayType ) ;	// 動画ファイ?の再生
extern	int			GetMovieImageSize_File(             const TCHAR *FileName,                        int *SizeX, int *SizeY ) ;	// 動画ファイ?の横ピクセ??と縦ピクセ??を取得する
extern	int			GetMovieImageSize_File_WithStrLen(  const TCHAR *FileName, size_t FileNameLength, int *SizeX, int *SizeY ) ;	// 動画ファイ?の横ピクセ??と縦ピクセ??を取得する
extern	int			GetMovieImageSize_Mem(              const void *FileImage, int FileImageSize, int *SizeX, int *SizeY ) ;		// ???上に展開された動画ファイ?の横ピクセ??と縦ピクセ??を取得する
extern	int			OpenMovieToGraph(					const TCHAR *FileName,                        int FullColor DEFAULTPARAM( = TRUE ) ) ;		// 動画ファイ?を開く
extern	int			OpenMovieToGraphWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int FullColor DEFAULTPARAM( = TRUE ) ) ;		// 動画ファイ?を開く
extern 	int			PlayMovieToGraph(					int GraphHandle, int PlayType DEFAULTPARAM( = DX_PLAYTYPE_BACK ) , int SysPlay DEFAULTPARAM( = 0 ) ) ;		// 動画ファイ?を使用するグ?フィックハ?ド?の動画ファイ?の再生を開始する
extern 	int			PauseMovieToGraph(					int GraphHandle, int SysPause DEFAULTPARAM( = 0 ) ) ;										// 動画ファイ?を使用するグ?フィックハ?ド?の動画ファイ?の再生を停止する
extern	int			AddMovieFrameToGraph(				int GraphHandle, unsigned int FrameNum ) ;									// 動画ファイ?の再生フ?ー?を進める、戻すことは出?ない( 動画ファイ?が停止状態で、?つ Ogg Theora のみ有効 )
extern	int			SeekMovieToGraph(					int GraphHandle, int Time ) ;												// 動画ファイ?の再生位置を設定する(ミ?秒単位)
extern	int			SetPlaySpeedRateMovieToGraph(		int GraphHandle, double SpeedRate ) ;										// 動画ファイ?の再生速度を設定する( 1.0 = ?倍速  2.0 = ２倍速 )、一?のファイ?フォーマットのみで有効な機能です
extern 	int			GetMovieStateToGraph(				int GraphHandle ) ;															// 動画ファイ?の再生状態を得る
extern	int			SetMovieVolumeToGraph(				int Volume, int GraphHandle ) ;												// 動画ファイ?の音量を設定する(0～10000)
extern	int			GetMovieVolumeToGraph(				            int GraphHandle ) ;												// 動画ファイ?の音量を取得する(0～10000)
extern	int			ChangeMovieVolumeToGraph(			int Volume, int GraphHandle ) ;												// 動画ファイ?の音量を設定する(0～255)
extern	int			GetMovieVolumeToGraph2(				            int GraphHandle ) ;												// 動画ファイ?の音量を取得する(0～255)
extern	const BASEIMAGE* GetMovieBaseImageToGraph(		int GraphHandle, int *ImageUpdateFlag DEFAULTPARAM( = NULL ) , int ImageUpdateFlagSetOnly DEFAULTPARAM( = FALSE ) ) ;	// 動画ファイ?の基本イ?ージデータを取得する( ImageUpdateFlag に int 型変?のアド?スを渡すと、イ?ージが更新された場?は 1 が、更新されていない場?は 0 が格納されます、 ImageUpdateFlagSetOnly を TRUE にすると戻り値の BASEIMAGE は有効な画?データではなくなりますが、BASEIMAGE の更新??が行われませんので、ImageUpdateFlag を?用して画?が更新されたかどうかだけをチェックしたい場?は TRUE にしてください )
extern	int			GetMovieTotalFrameToGraph(			int GraphHandle ) ;															// 動画ファイ?の?フ?ー??を得る( Ogg Theora と mp4 でのみ有効 )
extern	int			TellMovieToGraph(					int GraphHandle ) ;															// 動画ファイ?の再生位置を取得する(ミ?秒単位)
extern	int			TellMovieToGraphToFrame(			int GraphHandle ) ;															// 動画ファイ?の再生位置を取得する(フ?ー?単位)
extern	int			SeekMovieToGraphToFrame(			int GraphHandle, int Frame ) ;												// 動画ファイ?の再生位置を設定する(フ?ー?単位)
extern	LONGLONG	GetOneFrameTimeMovieToGraph(		int GraphHandle ) ;															// 動画ファイ?の１フ?ー??たりの?間を取得する(戻り値：１フ?ー?の?間(単位:マイク?秒))
extern	int			GetLastUpdateTimeMovieToGraph(		int GraphHandle ) ;															// 動画ファイ?のイ?ージを最後に更新した?間を得る(ミ?秒単位)
extern	int			UpdateMovieToGraph(					int GraphHandle ) ;															// 動画ファイ?の更新??を行う
extern	int			SetMovieRightImageAlphaFlag(		int Flag ) ;																// 読み?む動画ファイ?映?の右半分の赤成分をα情報として扱うかどうかをセットする( TRUE:α情報として扱う  FALSE:α情報として扱わない( デフォ?ト ) )
extern	int			SetMovieColorA8R8G8B8Flag(			int Flag ) ;																// 読み?む動画ファイ?が32bitカ?ーだった場?、A8R8G8B8 形式として扱うかどうかをセットする、32bitカ?ーではない動画ファイ?に対しては無効( Flag  TRUE:A8R8G8B8として扱う  FALSE:X8R8G8B8として扱う( デフォ?ト ) )
extern	int			SetMovieUseYUVFormatSurfaceFlag(	int Flag ) ;																// ＹＵＶフォーマットのサーフェスが使用できる場?はＹＵＶフォーマットのサーフェスを使用するかどうかを設定する( TRUE:使用する( デフォ?ト ) FALSE:ＲＧＢフォーマットのサーフェスを使用する )
#endif // DX_NON_MOVIE

// カ??関係関?
extern	int			SetCameraNearFar(					float  Near, float  Far ) ;												// カ??の Nearク?ップ面と Farク?ップ面の?離を設定する
extern	int			SetCameraNearFarD(					double Near, double Far ) ;												// カ??の Nearク?ップ面と Farク?ップ面の?離を設定する
extern	int			SetCameraPositionAndTarget_UpVecY(  VECTOR    Position, VECTOR   Target ) ;									// カ??の?点、??点、アップベクト?を設定する( アップベクト?はＹ軸方向から導き出す )
extern	int			SetCameraPositionAndTarget_UpVecYD( VECTOR_D  Position, VECTOR_D Target ) ;									// カ??の?点、??点、アップベクト?を設定する( アップベクト?はＹ軸方向から導き出す )
extern	int			SetCameraPositionAndTargetAndUpVec( VECTOR    Position, VECTOR   TargetPosition, VECTOR   UpVector ) ;		// カ??の?点、??点、アップベクト?を設定する
extern	int			SetCameraPositionAndTargetAndUpVecD( VECTOR_D Position, VECTOR_D TargetPosition, VECTOR_D UpVector ) ;		// カ??の?点、??点、アップベクト?を設定する
extern	int			SetCameraPositionAndAngle(			VECTOR   Position, float  VRotate, float  HRotate, float  TRotate ) ;	// カ??の?点、??点、アップベクト?を設定する( ??点とアップベクト?は?直回転角度、?平回転角度、捻り回転角度から導き出す )
extern	int			SetCameraPositionAndAngleD(			VECTOR_D Position, double VRotate, double HRotate, double TRotate ) ;	// カ??の?点、??点、アップベクト?を設定する( ??点とアップベクト?は?直回転角度、?平回転角度、捻り回転角度から導き出す )
extern	int			SetCameraViewMatrix(				MATRIX   ViewMatrix ) ;													// ビ?ー行列を直接設定する
extern	int			SetCameraViewMatrixD(				MATRIX_D ViewMatrix ) ;													// ビ?ー行列を直接設定する
extern	int			SetCameraScreenCenter(				float x, float y ) ;													// 画面上におけるカ??が見ている映?の?心の座標を設定する
extern	int			SetCameraScreenCenterD(				double x, double y ) ;													// 画面上におけるカ??が見ている映?の?心の座標を設定する

extern	int			SetupCamera_Perspective(			float  Fov ) ;															// ?近法カ??をセットアップする
extern	int			SetupCamera_PerspectiveD(			double Fov ) ;															// ?近法カ??をセットアップする
extern	int			SetupCamera_Ortho(					float  Size ) ;															// 正射影カ??をセットアップする
extern	int			SetupCamera_OrthoD(					double Size ) ;															// 正射影カ??をセットアップする
extern	int			SetupCamera_ProjectionMatrix(		MATRIX   ProjectionMatrix ) ;											// 射影行列を直接設定する
extern	int			SetupCamera_ProjectionMatrixD(		MATRIX_D ProjectionMatrix ) ;											// 射影行列を直接設定する
extern	int			SetCameraDotAspect(					float  DotAspect ) ;													// カ??のドットアスペクト比を設定する
extern	int			SetCameraDotAspectD(				double DotAspect ) ;													// カ??のドットアスペクト比を設定する

extern	int			CheckCameraViewClip(				VECTOR   CheckPos ) ;													// 指定の座標がカ??の?界に入っているかどうかを判定する( 戻り値 TRUE:?界に入っていない  FALSE:?界に入っている )
extern	int			CheckCameraViewClipD(				VECTOR_D CheckPos ) ;													// 指定の座標がカ??の?界に入っているかどうかを判定する( 戻り値 TRUE:?界に入っていない  FALSE:?界に入っている )
extern	int			CheckCameraViewClip_Dir(			VECTOR   CheckPos ) ;													// 指定の座標がカ??の?界に入っているかどうかを判定する、戻り値で外れている方向も知ることができる( 戻り値 0:?界に入っている  0以外:?界に入っていない( DX_CAMERACLIP_LEFT や DX_CAMERACLIP_RIGHT が or ?算で混?されたもの、and ?算で方向を確認できる ) )
extern	int			CheckCameraViewClip_DirD(			VECTOR_D CheckPos ) ;													// 指定の座標がカ??の?界に入っているかどうかを判定する、戻り値で外れている方向も知ることができる( 戻り値 0:?界に入っている  0以外:?界に入っていない( DX_CAMERACLIP_LEFT や DX_CAMERACLIP_RIGHT が or ?算で混?されたもの、and ?算で方向を確認できる ) )
extern	int			CheckCameraViewClip_Box(			VECTOR   BoxPos1, VECTOR   BoxPos2 ) ;									// 二つの座標で表されるボックスがカ??の?界に入っているかどうかを判定する( 戻り値 TRUE:?界に入っていない  FALSE:?界に入っている )
extern	int			CheckCameraViewClip_BoxD(			VECTOR_D BoxPos1, VECTOR_D BoxPos2 ) ;									// 二つの座標で表されるボックスがカ??の?界に入っているかどうかを判定する( 戻り値 TRUE:?界に入っていない  FALSE:?界に入っている )

extern	float		GetCameraNear(						void ) ;																// カ??の Near ク?ップ面の?離を取得する
extern	double		GetCameraNearD(						void ) ;																// カ??の Near ク?ップ面の?離を取得する
extern	float		GetCameraFar(						void ) ;																// カ??の Far ク?ップ面の?離を取得する
extern	double		GetCameraFarD(						void ) ;																// カ??の Far ク?ップ面の?離を取得する

extern	VECTOR		GetCameraPosition(					void ) ;																// カ??の位置を取得する
extern	VECTOR_D	GetCameraPositionD(					void ) ;																// カ??の位置を取得する
extern	VECTOR		GetCameraTarget(					void ) ;																// カ??の??点を取得する
extern	VECTOR_D	GetCameraTargetD(					void ) ;																// カ??の??点を取得する
extern	VECTOR		GetCameraUpVector(					void ) ;																// カ??の正面方向に?直な上方向のベクト?を取得する
extern	VECTOR_D	GetCameraUpVectorD(					void ) ;																// カ??の正面方向に?直な上方向のベクト?を取得する
extern	VECTOR		GetCameraDownVector(				void ) ;																// カ??の正面方向に?直な下方向のベクト?を取得する
extern	VECTOR_D	GetCameraDownVectorD(				void ) ;																// カ??の正面方向に?直な下方向のベクト?を取得する
extern	VECTOR		GetCameraRightVector(				void ) ;																// カ??の正面方向に?直な右方向のベクト?を取得する
extern	VECTOR_D	GetCameraRightVectorD(				void ) ;																// カ??の正面方向に?直な右方向のベクト?を取得する
extern	VECTOR		GetCameraLeftVector(				void ) ;																// カ??の正面方向に?直な左方向のベクト?を取得する
extern	VECTOR_D	GetCameraLeftVectorD(				void ) ;																// カ??の正面方向に?直な左方向のベクト?を取得する
extern	VECTOR		GetCameraFrontVector(				void ) ;																// カ??の正面方向のベクト?を取得する
extern	VECTOR_D	GetCameraFrontVectorD(				void ) ;																// カ??の正面方向のベクト?を取得する
extern	VECTOR		GetCameraBackVector(				void ) ;																// カ??の後ろ方向のベクト?を取得する
extern	VECTOR_D	GetCameraBackVectorD(				void ) ;																// カ??の後ろ方向のベクト?を取得する
extern	float		GetCameraAngleHRotate(				void ) ;																// カ??の?平方向の向きを取得する
extern	double		GetCameraAngleHRotateD(				void ) ;																// カ??の?平方向の向きを取得する
extern	float		GetCameraAngleVRotate(				void ) ;																// カ??の?直方向の向きを取得する
extern	double		GetCameraAngleVRotateD(				void ) ;																// カ??の?直方向の向きを取得する
extern	float		GetCameraAngleTRotate(				void ) ;																// カ??の向きの捻り角度を取得する
extern	double		GetCameraAngleTRotateD(				void ) ;																// カ??の向きの捻り角度を取得する

extern	MATRIX		GetCameraViewMatrix(				void ) ;																// ビ?ー行列を取得する
extern	MATRIX_D	GetCameraViewMatrixD(				void ) ;																// ビ?ー行列を取得する
extern	MATRIX		GetCameraBillboardMatrix(			void ) ;																// ビ?ボード行列を取得する
extern	MATRIX_D	GetCameraBillboardMatrixD(			void ) ;																// ビ?ボード行列を取得する
extern	int			GetCameraScreenCenter(				float  *x, float  *y ) ;												// 画面上におけるカ??が見ている映?の?心の座標を取得する
extern	int			GetCameraScreenCenterD(				double *x, double *y ) ;												// 画面上におけるカ??が見ている映?の?心の座標を取得する
extern	float		GetCameraFov(						void ) ;																// カ??の?野角を取得する
extern	double		GetCameraFovD(						void ) ;																// カ??の?野角を取得する
extern	float		GetCameraSize(						void ) ;																// カ??の?野サイズを取得する
extern	double		GetCameraSizeD(						void ) ;																// カ??の?野サイズを取得する
extern	MATRIX		GetCameraProjectionMatrix(			void ) ;																// 射影行列を取得する
extern	MATRIX_D	GetCameraProjectionMatrixD(			void ) ;																// 射影行列を取得する
extern	float		GetCameraDotAspect(					void ) ;																// カ??のドットアスペクト比を得る
extern	double		GetCameraDotAspectD(				void ) ;																// カ??のドットアスペクト比を得る
extern	MATRIX		GetCameraViewportMatrix(			void ) ;																// ビ?ーポート行列を取得する
extern	MATRIX_D	GetCameraViewportMatrixD(			void ) ;																// ビ?ーポート行列を取得する
extern	MATRIX		GetCameraAPIViewportMatrix(			void ) ;																// Direct3Dで自動適用されるビ?ーポート行列を取得する
extern	MATRIX_D	GetCameraAPIViewportMatrixD(		void ) ;																// Direct3Dで自動適用されるビ?ーポート行列を取得する

// ?イト関係関?
extern	int			SetUseLighting(				int Flag ) ;																	// ?イティ?グを使用するかどうかを設定する
extern	int			SetMaterialUseVertDifColor( int UseFlag ) ;																	// ３Ｄ描画の?イティ?グ計算で頂点カ?ーのディフ?ーズカ?ーを使用するかどうかを設定する
extern	int			SetMaterialUseVertSpcColor( int UseFlag ) ;																	// ３Ｄ描画の?イティ?グ計算で頂点カ?ーのスペキ??カ?ーを使用するかどうかを設定する
extern	int			SetMaterialParam(			MATERIALPARAM Material ) ;														// ３Ｄ描画の?イティ?グ計算で使用するマテ?ア?パ??ータを設定する
extern	int			SetUseSpecular(				int UseFlag ) ;																	// ３Ｄ描画にスペキ??を使用するかどうかを設定する
extern	int			SetGlobalAmbientLight(		COLOR_F Color ) ;																// グ?ーバ?ア?ビエ?ト?イトカ?ーを設定する
extern	int			SetUseLightAngleAttenuation( int UseFlag ) ;																// ３Ｄ描画の?イティ?グ計算で角度減?を行うかどうかを設定する( TRUE:角度減?を行う( デフォ?ト )  FALSE:角度減?を行わない )

extern	int			ChangeLightTypeDir(			VECTOR Direction ) ;															// デフォ?ト?イトのタイプをディ?クシ?ナ??イトにする
extern	int			ChangeLightTypeSpot(		VECTOR Position, VECTOR Direction, float OutAngle, float InAngle, float Range, float Atten0, float Atten1, float Atten2 ) ;	// デフォ?ト?イトのタイプをスポット?イトにする
extern	int			ChangeLightTypePoint(		VECTOR Position, float Range, float Atten0, float Atten1, float Atten2 ) ;		// デフォ?ト?イトのタイプをポイ?ト?イトにする
extern	int			GetLightType(				void ) ;																		// デフォ?ト?イトのタイプを取得する( 戻り値は DX_LIGHTTYPE_DIRECTIONAL ? )
extern	int			SetLightEnable(				int EnableFlag ) ;																// デフォ?ト?イトを使用するかどうかを設定する
extern	int			GetLightEnable(				void ) ;																		// デフォ?ト?イトを使用するかどうかを取得する( 戻り値　TRUE:有効  FALSE:無効 )
extern	int			SetLightDifColor(			COLOR_F Color ) ;																// デフォ?ト?イトのディフ?ーズカ?ーを設定する
extern	COLOR_F		GetLightDifColor(			void ) ;																		// デフォ?ト?イトのディフ?ーズカ?ーを取得する
extern	int			SetLightSpcColor(			COLOR_F Color ) ;																// デフォ?ト?イトのスペキ??カ?ーを設定する
extern	COLOR_F		GetLightSpcColor(			void ) ;																		// デフォ?ト?イトのスペキ??カ?ーを取得する
extern	int			SetLightAmbColor(			COLOR_F Color ) ;																// デフォ?ト?イトのア?ビエ?トカ?ーを設定する
extern	COLOR_F		GetLightAmbColor(			void ) ;																		// デフォ?ト?イトのア?ビエ?トカ?ーを取得する
extern	int			SetLightDirection(			VECTOR Direction ) ;															// デフォ?ト?イトの方向を設定する
extern	VECTOR		GetLightDirection(			void ) ;																		// デフォ?ト?イトの方向を取得する
extern	int			SetLightPosition(			VECTOR Position ) ;																// デフォ?ト?イトの位置を設定する
extern	VECTOR		GetLightPosition(			void ) ;																		// デフォ?ト?イトの位置を取得する
extern	int			SetLightRangeAtten(			float Range, float Atten0, float Atten1, float Atten2 ) ;						// デフォ?ト?イトの?離減?パ??ータを設定する( 有効?離、?離減?係?０、１、２ )
extern	int			GetLightRangeAtten(			float *Range, float *Atten0, float *Atten1, float *Atten2 )	;					// デフォ?ト?イトの?離減?パ??ータを取得する( 有効?離、?離減?係?０、１、２ )
extern	int			SetLightAngle(				float OutAngle, float InAngle ) ;												// デフォ?ト?イトのスポット?イトのパ??ータを設定する( 外?コー?角度、内?コー?角度 )
extern	int			GetLightAngle(				float *OutAngle, float *InAngle ) ;												// デフォ?ト?イトのスポット?イトのパ??ータを取得する( 外?コー?角度、内?コー?角度 )
extern	int			SetLightUseShadowMap(		int SmSlotIndex, int UseFlag ) ;												// デフォ?ト?イトに SetUseShadowMap で指定したシ?ドウマップを適用するかどうかを設定する( SmSlotIndex:シ?ドウマップス?ット( SetUseShadowMap の第一引?に設定する値 ) UseFlag:適用にするかどうかのフ?グ( TRUE:適用する( デフォ?ト )  FALSE:適用しない ) )

extern	int			CreateDirLightHandle(       VECTOR Direction ) ;															// ディ?クシ?ナ??イトハ?ド?を作成する
extern	int			CreateSpotLightHandle(      VECTOR Position, VECTOR Direction, float OutAngle, float InAngle, float Range, float Atten0, float Atten1, float Atten2 ) ;	// スポット?イトハ?ド?を作成する
extern	int			CreatePointLightHandle(     VECTOR Position, float Range, float Atten0, float Atten1, float Atten2 ) ;		// ポイ?ト?イトハ?ド?を作成する
extern	int			DeleteLightHandle(          int LHandle ) ;																	// ?イトハ?ド?を削?する
extern	int			DeleteLightHandleAll(       void ) ;																		// ?イトハ?ド?を全て削?する
extern	int			SetLightTypeHandle(         int LHandle, int LightType ) ;													// ?イトハ?ド?の?イトのタイプを変更する( DX_LIGHTTYPE_DIRECTIONAL ? )
extern	int			SetLightEnableHandle(       int LHandle, int EnableFlag ) ;													// ?イトハ?ド?の?イト効果の有効、無効を設定する( TRUE:有効  FALSE:無効 )
extern	int			SetLightDifColorHandle(     int LHandle, COLOR_F Color ) ;													// ?イトハ?ド?の?イトのディフ?ーズカ?ーを設定する
extern	int			SetLightSpcColorHandle(     int LHandle, COLOR_F Color ) ;													// ?イトハ?ド?の?イトのスペキ??カ?ーを設定する
extern	int			SetLightAmbColorHandle(     int LHandle, COLOR_F Color ) ;													// ?イトハ?ド?の?イトのア?ビエ?トカ?ーを設定する
extern	int			SetLightDirectionHandle(    int LHandle, VECTOR Direction ) ;												// ?イトハ?ド?の?イトの方向を設定する
extern	int			SetLightPositionHandle(     int LHandle, VECTOR Position ) ;												// ?イトハ?ド?の?イトの位置を設定する
extern	int			SetLightRangeAttenHandle(   int LHandle, float Range, float Atten0, float Atten1, float Atten2 ) ;			// ?イトハ?ド?の?イトの?離減?パ??ータを設定する( 有効?離、?離減?係?０、１、２ )
extern	int			SetLightAngleHandle(        int LHandle, float OutAngle, float InAngle ) ;									// ?イトハ?ド?の?イトのスポット?イトのパ??ータを設定する( 外?コー?角度、内?コー?角度 )
extern	int			SetLightUseShadowMapHandle(	int LHandle, int SmSlotIndex, int UseFlag ) ;									// ?イトハ?ド?の?イトに SetUseShadowMap で指定したシ?ドウマップを適用するかどうかを設定する( SmSlotIndex:シ?ドウマップス?ット( SetUseShadowMap の第一引?に設定する値 ) UseFlag:適用にするかどうかのフ?グ( TRUE:適用する( デフォ?ト )  FALSE:適用しない ) )
extern	int			GetLightTypeHandle(         int LHandle ) ;																	// ?イトハ?ド?の?イトのタイプを取得する( 戻り値は DX_LIGHTTYPE_DIRECTIONAL ? )
extern	int			GetLightEnableHandle(       int LHandle ) ;																	// ?イトハ?ド?の?イト効果の有効、無効を取得する( TRUE:有効  FALSE:無効 )
extern	COLOR_F		GetLightDifColorHandle(     int LHandle ) ;																	// ?イトハ?ド?の?イトのディフ?ーズカ?ーを取得する
extern	COLOR_F		GetLightSpcColorHandle(     int LHandle ) ;																	// ?イトハ?ド?の?イトのスペキ??カ?ーを取得する
extern	COLOR_F		GetLightAmbColorHandle(     int LHandle ) ;																	// ?イトハ?ド?の?イトのア?ビエ?トカ?ーを取得する
extern	VECTOR		GetLightDirectionHandle(    int LHandle ) ;																	// ?イトハ?ド?の?イトの方向を取得する
extern	VECTOR		GetLightPositionHandle(     int LHandle ) ;																	// ?イトハ?ド?の?イトの位置を取得する
extern	int			GetLightRangeAttenHandle(   int LHandle, float *Range, float *Atten0, float *Atten1, float *Atten2 ) ;		// ?イトハ?ド?の?イトの?離減?パ??ータを取得する( 有効?離、?離減?係?０、１、２ )
extern	int			GetLightAngleHandle(        int LHandle, float *OutAngle, float *InAngle ) ;								// ?イトハ?ド?の?イトのスポット?イトのパ??ータを取得する( 外?コー?角度、内?コー?角度 )

extern	int			GetEnableLightHandleNum(	void ) ;																		// 有効になっている?イトハ?ド?の?を取得する
extern	int			GetEnableLightHandle(		int Index ) ;																	// 有効になっている?イトハ?ド?を取得する

// 色情報取得用関?
extern	int			GetTexFormatIndex(			const IMAGEFORMATDESC *Format ) ;												// テクスチ?フォーマットのイ?デックスを得る








// DxMask.cpp 関?プ?トタイプ宣言

#ifndef DX_NON_MASK

// マスク関係 
extern	int			CreateMaskScreen(					void ) ;																						// マスクスク?ー?を作成する
extern	int			DeleteMaskScreen(					void ) ;																						// マスクスク?ー?を削?する
extern	int			DrawMaskToDirectData(				int x, int y, int Width, int Height, const void *MaskData , int TransMode ) ;					// マスクスク?ー?に???上のビットマップデータを転?する( MaskData は 1byte で 1dot 表す１?イ??たり Width byte のデータ配列の先頭アド?ス )
extern	int			DrawFillMaskToDirectData(			int x1, int y1, int x2, int y2,  int Width, int Height, const void *MaskData ) ;				// マスクスク?ー?に???上のビットマップデータで指定矩形内を塗りつぶすように転?する

extern	int			SetUseMaskScreenFlag(				int ValidFlag ) ;																				// マスクスク?ー?を使用するかどうかを設定する( ValidFlag:使用するかどうか( TRUE:使用する  FALSE:使用しない( デフォ?ト ) )
extern	int			GetUseMaskScreenFlag(				void ) ;																						// マスクスク?ー?を使用するかどうかを取得する
extern	int			FillMaskScreen(						int Flag ) ;																					// マスクスク?ー?を指定の色で塗りつぶす
extern	int			SetMaskScreenGraph(					int GraphHandle ) ;																				// マスクスク?ー?として使用するグ?フィックのハ?ド?を設定する、-1を渡すと解?( 引?で渡すグ?フィックハ?ド?は MakeScreen で作成した「ア?ファチ??ネ?付きの描画対象にできるグ?フィックハ?ド?」で?る必要が?ります( ア?ファチ??ネ?がマスクに使用されます ) )
extern	int			SetMaskScreenGraphUseChannel(		int UseChannel /* DX_MASKGRAPH_CH_A ? */ ) ;													// マスクスク?ー?として使用するグ?フィックの、どのチ??ネ?をマスクとして使用するかを設定する( デフォ?トは DX_MASKGRAPH_CH_A、 尚、DX_MASKGRAPH_CH_A以外を使用する場?はグ?フィックスデバイスがシェーダー?デ?2.0以降に対?している必要が?ります )

extern	int			InitMask(							void ) ;																						// マスクハ?ド?をすべて削?する
extern	int			MakeMask(							int Width, int Height ) ;																		// マスクハ?ド?を作成する
extern	int			GetMaskSize(						int *WidthBuf, int *HeightBuf, int MaskHandle ) ;												// マスクハ?ド?が?つマスクイ?ージのサイズを取得する
extern	int			GetMaskBaseImageInfo(				BASEIMAGE *BaseImage, int MaskHandle ) ;														// マスクハ?ド?が?つマスクイ?ージのBASEIMAGEデータを取得する( フォーマットが変更されるような?作をすると正常に動作しなくなります、?と、ReleaseBaseImage は実行する必要は?りません )
extern	int			SetDataToMask(						int Width, int Height, const void *MaskData, int MaskHandle ) ;									// マスクハ?ド?にビットマップイ?ージを転?する
extern	int			DeleteMask(							int MaskHandle ) ;																				// マスクハ?ド?を削?する
extern	int			GraphImageBltToMask(				const BASEIMAGE *BaseImage, int ImageX, int ImageY, int MaskHandle ) ;							// マスクハ?ド?にBASEIMAGEデータを転?する
extern	int			LoadMask(							const TCHAR *FileName                        ) ;																			// 画?ファイ?を読み?みマスクハ?ド?を作成する
extern	int			LoadMaskWithStrLen(					const TCHAR *FileName, size_t FileNameLength ) ;																			// 画?ファイ?を読み?みマスクハ?ド?を作成する
extern	int			LoadDivMask(						const TCHAR *FileName,                        int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;	// 画?ファイ?を分?読み?みしてマスクハ?ド?を作成する
extern	int			LoadDivMaskWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;	// 画?ファイ?を分?読み?みしてマスクハ?ド?を作成する
extern	int			CreateMaskFromMem(					const void *FileImage, int FileImageSize ) ;																				// ???上に?る画?ファイ?イ?ージを読み?みマスクハ?ド?を作成する
extern	int			CreateDivMaskFromMem(				const void *FileImage, int FileImageSize, int AllNum, int XNum, int YNum, int XSize, int YSize, int *HandleArray ) ;		// ???上に?る画?ファイ?イ?ージを分?読み?みしてマスクハ?ド?を作成する
extern	int			DrawMask(							int x, int y, int MaskHandle, int TransMode ) ;													// マスクスク?ー?にマスクハ?ド?の?つマスクイ?ージを?き?む
#ifndef DX_NON_FONT
extern	int			DrawFormatStringMask(				int x, int y, int Flag,                 const TCHAR *FormatString, ... ) ;						// ?式指定?りの文?列をマスクスク?ー?に描画する
extern	int			DrawFormatStringMaskToHandle(		int x, int y, int Flag, int FontHandle, const TCHAR *FormatString, ... ) ;						// ?式指定?りの文?列をマスクスク?ー?に描画する( フォ?トハ?ド?指定版 )( SetFontCacheToTextureFlag( FALSE ) ; にして作成したフォ?トハ?ド?のみ使用可能 )
extern	int			DrawStringMask(						int x, int y, int Flag,                 const TCHAR *String ) ;									// 文?列をマスクスク?ー?に描画する
extern	int			DrawNStringMask(					int x, int y, int Flag,                 const TCHAR *String, size_t StringLength ) ;			// 文?列をマスクスク?ー?に描画する
extern	int			DrawStringMaskToHandle(				int x, int y, int Flag, int FontHandle, const TCHAR *String ) ;									// 文?列をマスクスク?ー?に描画する( フォ?トハ?ド?指定版 )( SetFontCacheToTextureFlag( FALSE ) ; にして作成したフォ?トハ?ド?のみ使用可能 )
extern	int			DrawNStringMaskToHandle(			int x, int y, int Flag, int FontHandle, const TCHAR *String, size_t StringLength ) ;			// 文?列をマスクスク?ー?に描画する( フォ?トハ?ド?指定版 )( SetFontCacheToTextureFlag( FALSE ) ; にして作成したフォ?トハ?ド?のみ使用可能 )
#endif // DX_NON_FONT
extern	int			DrawFillMask(						int x1, int y1, int x2, int y2, int MaskHandle ) ;												// マスクハ?ド?が?つマスクイ?ージをマスクスク?ー?いっぱいに描画する( タイ?状に並べる )
extern	int			SetMaskReverseEffectFlag(			int ReverseFlag ) ;																				// マスクイ?ージ内の?値に対する効果を逆転させる( ?バージ??との互換性の為の機能 )

extern 	int			GetMaskScreenData(					int x1, int y1, int x2, int y2, int MaskHandle ) ;												// マスクスク?ー?の指定矩形?分をマスクハ?ド?に転?する
extern	int			GetMaskUseFlag(						void ) ;																						// マスクスク?ー?を使用する設定になっているかどうかを取得する

#endif // DX_NON_MASK

#endif // DX_NOTUSE_DRAWFUNCTION















// DxFont.cpp 関?プ?トタイプ宣言

#ifndef DX_NON_FONT

// フォ?ト、文?列描画関係関?
extern	int			EnumFontName(                           TCHAR *NameBuffer, int NameBufferNum, int JapanOnlyFlag DEFAULTPARAM( = TRUE ) ) ;																				// 使用可能なフォ?トの名前を列?する( NameBuffer に 64バイト区切りで名前が格納されます )
extern	int			EnumFontNameEx(                         TCHAR *NameBuffer, int NameBufferNum,                                                       int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT ? */ ) ;	// 使用可能なフォ?トの名前を列?する( NameBuffer に 64バイト区切りで名前が格納されます )( 文?セット指定版 )
extern	int			EnumFontNameEx2(						TCHAR *NameBuffer, int NameBufferNum, const TCHAR *EnumFontName,                            int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT ? */ ) ;	// 指定のフォ?ト名のフォ?トを列?する
extern	int			EnumFontNameEx2WithStrLen(				TCHAR *NameBuffer, int NameBufferNum, const TCHAR *EnumFontName, size_t EnumFontNameLength, int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT ? */ ) ;	// 指定のフォ?ト名のフォ?トを列?する
extern	int			CheckFontName(							const TCHAR *FontName,                        int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT ? */ ) ;													// 指定のフォ?ト名のフォ?トが存在するかどうかをチェックする( 戻り値  TRUE:存在する  FALSE:存在しない )
extern	int			CheckFontNameWithStrLen(				const TCHAR *FontName, size_t FontNameLength, int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_DEFAULT ? */ ) ;													// 指定のフォ?ト名のフォ?トが存在するかどうかをチェックする( 戻り値  TRUE:存在する  FALSE:存在しない )

extern	int			InitFontToHandle(                       void ) ;																						// 全てのフォ?トハ?ド?を削?する

extern	int			CreateFontToHandle(						const TCHAR *FontName,                        int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) , int Handle DEFAULTPARAM( = -1 ) ) ;		// フォ?トハ?ド?を作成する
extern	int			CreateFontToHandleWithStrLen(			const TCHAR *FontName, size_t FontNameLength, int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) , int Handle DEFAULTPARAM( = -1 ) ) ;		// フォ?トハ?ド?を作成する
extern	int			LoadFontDataToHandle(					const TCHAR *FileName,                            int EdgeSize DEFAULTPARAM( = 0 ) ) ;			// フォ?トデータファイ?からフォ?トハ?ド?を作成する
extern	int			LoadFontDataToHandleWithStrLen(			const TCHAR *FileName, size_t FileNameLength,     int EdgeSize DEFAULTPARAM( = 0 ) ) ;			// フォ?トデータファイ?からフォ?トハ?ド?を作成する
extern	int			LoadFontDataFromMemToHandle(			const void *FontDataImage, int FontDataImageSize, int EdgeSize DEFAULTPARAM( = 0 ) ) ;			// ???上のフォ?トデータファイ?イ?ージからフォ?トハ?ド?を作成する
extern	int			SetFontSpaceToHandle(                   int Pixel, int FontHandle ) ;																	// フォ?トハ?ド?の?間を変更する
extern	int			SetFontLineSpaceToHandle(               int Pixel, int FontHandle ) ;																	// フォ?トハ?ド?の行間を変更する
extern	int			SetFontCharCodeFormatToHandle(			int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ , int FontHandle ) ;						// 指定のフォ?トハ?ド?を使用する関?の引?に渡す文?列の文?コード形式を設定する( UNICODE版では無効 )
extern	int			DeleteFontToHandle(                     int FontHandle ) ;																				// フォ?トハ?ド?を削?する
extern	int			SetFontLostFlag(                        int FontHandle, int *LostFlag ) ;																// フォ?トハ?ド?を削?した際に TRUE を代入する変?のアド?スを設定する
extern	int			AddFontImageToHandle(					int FontHandle, const TCHAR *Char,                    int GrHandle, int DrawX, int DrawY, int AddX ) ;	// 指定の文?の代わりに描画するグ?フィックハ?ド?を登録する
extern	int			AddFontImageToHandleWithStrLen(			int FontHandle, const TCHAR *Char, size_t CharLength, int GrHandle, int DrawX, int DrawY, int AddX ) ;	// 指定の文?の代わりに描画するグ?フィックハ?ド?を登録する
extern	int			SubFontImageToHandle(					int FontHandle, const TCHAR *Char                    ) ;												// 指定の文?の代わりに描画するグ?フィックハ?ド?の登録を解?する
extern	int			SubFontImageToHandleWithStrLen(			int FontHandle, const TCHAR *Char, size_t CharLength ) ;												// 指定の文?の代わりに描画するグ?フィックハ?ド?の登録を解?する
extern	int			AddSubstitutionFontToHandle(			int FontHandle, int SubstitutionFontHandle, int DrawX, int DrawY ) ;							// 代替フォ?トハ?ド?( FontHandle に無い文?を描画しようとしたときに代わりに使用されるフォ?トハ?ド? )を登録する
extern	int			SubSubstitutionFontToHandle(			int FontHandle, int SubstitutionFontHandle ) ;													// 代替フォ?トハ?ド?の登録を解?する

extern	int			ChangeFont(                             const TCHAR *FontName,                        int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_SHFTJIS ? */ ) ;	// デフォ?トフォ?トハ?ド?で使用するフォ?トを変更
extern	int			ChangeFontWithStrLen(                   const TCHAR *FontName, size_t FontNameLength, int CharSet DEFAULTPARAM( = -1 ) /* DX_CHARSET_SHFTJIS ? */ ) ;	// デフォ?トフォ?トハ?ド?で使用するフォ?トを変更
extern	int			ChangeFontFromHandle(					int FontHandle ) ;																				// デフォ?トフォ?トハ?ド?として使用するフォ?トハ?ド?を変更する
extern	int			ChangeFontType(                         int FontType ) ;																				// デフォ?トフォ?トハ?ド?のフォ?トタイプの変更
extern	const TCHAR *GetFontName(							void ) ;																						// デフォ?トフォ?トハ?ド?のフォ?ト名を取得する
extern	int			SetFontSize(                            int FontSize ) ;																				// デフォ?トフォ?トハ?ド?のサイズを設定する
extern	int			GetFontSize(                            void ) ;																						// デフォ?トフォ?トハ?ド?のサイズを取得する
extern	int			GetFontEdgeSize(                        void ) ;																						// デフォ?トフォ?トハ?ド?の?サイズを取得する
extern	int			SetFontThickness(                       int ThickPal ) ;																				// デフォ?トフォ?トハ?ド?の太さを設定する
extern	int			SetFontSpace(                           int Pixel ) ;																					// デフォ?トフォ?トハ?ド?の?間を変更する
extern	int			GetFontSpace(                           void ) ;																						// デフォ?トフォ?トハ?ド?の?間を取得する
extern	int			SetFontLineSpace(                       int Pixel ) ;																					// デフォ?トフォ?トハ?ド?の行間を変更する
extern	int			GetFontLineSpace(                       void ) ;																						// デフォ?トフォ?トハ?ド?の行間を取得する
extern	int			SetFontCharCodeFormat(					int CharCodeFormat /* DX_CHARCODEFORMAT_SHIFTJIS ? */ ) ;										// デフォ?トフォ?トハ?ド?を使用する関?の引?に渡す文?列の文?コード形式を設定する( UNICODE版では無効 )
extern	int			SetDefaultFontState(                    const TCHAR *FontName,                        int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) ) ;	// デフォ?トフォ?トハ?ド?の設定を変更する
extern	int			SetDefaultFontStateWithStrLen(          const TCHAR *FontName, size_t FontNameLength, int Size, int Thick, int FontType DEFAULTPARAM( = -1 ) , int CharSet DEFAULTPARAM( = -1 ) , int EdgeSize DEFAULTPARAM( = -1 ) , int Italic DEFAULTPARAM( = FALSE ) ) ;	// デフォ?トフォ?トハ?ド?の設定を変更する
extern	int			GetDefaultFontHandle(                   void ) ;																								// デフォ?トフォ?トハ?ド?を取得する
extern	int			GetFontMaxCacheCharNum(					void ) ;																								// デフォ?トフォ?トハ?ド?のキ?ッシ?できる文?の?を取得する
extern	int			GetFontMaxWidth(                        void ) ;																								// デフォ?トフォ?トハ?ド?の文?の最大?を取得する
extern	int			GetFontAscent(                          void ) ;																								// デフォ?トフォ?トハ?ド?の描画位置からベース?イ?までの?さを取得する
extern	int			GetDrawStringWidth(                     const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// デフォ?トフォ?トハ?ド?を使用した文?列の描画?を取得する
extern	int			GetDrawNStringWidth(                    const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// デフォ?トフォ?トハ?ド?を使用した文?列の描画?を取得する
extern	int			GetDrawFormatStringWidth(               const TCHAR *FormatString, ... ) ;																		// デフォ?トフォ?トハ?ド?を使用した?式付き文?列の描画?を取得する
extern	int			GetDrawExtendStringWidth(               double ExRateX, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;					// デフォ?トフォ?トハ?ド?を使用した文?列の描画?を取得する( 拡大率付き )
extern	int			GetDrawExtendNStringWidth(              double ExRateX, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;					// デフォ?トフォ?トハ?ド?を使用した文?列の描画?を取得する( 拡大率付き )
extern	int			GetDrawExtendFormatStringWidth(         double ExRateX, const TCHAR *FormatString, ... ) ;														// デフォ?トフォ?トハ?ド?を使用した?式付き文?列の描画?を取得する( 拡大率付き )
extern	int			GetDrawStringSize(                      int *SizeX, int *SizeY, int *LineCount, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// デフォ?トフォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する
extern	int			GetDrawNStringSize(                     int *SizeX, int *SizeY, int *LineCount, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// デフォ?トフォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する
extern	int			GetDrawFormatStringSize(                int *SizeX, int *SizeY, int *LineCount, const TCHAR *FormatString, ... ) ;																				// デフォ?トフォ?トハ?ド?を使用した?式付き文?列の描画?・?さ・行?を取得する
extern	int			GetDrawExtendStringSize(                int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// デフォ?トフォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する( 拡大率付き )
extern	int			GetDrawExtendNStringSize(               int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// デフォ?トフォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する( 拡大率付き )
extern	int			GetDrawExtendFormatStringSize(          int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *FormatString, ... ) ;												// デフォ?トフォ?トハ?ド?を使用した?式付き文?列の描画?・?さ・行?を取得する( 拡大率付き )
extern	int			GetDrawStringCharInfo(                  DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// デフォ?トフォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawNStringCharInfo(                 DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// デフォ?トフォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawFormatStringCharInfo(            DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *FormatString, ... ) ;																		// デフォ?トフォ?トハ?ド?を使用した?式付き文?列の１文??の情報を取得する
extern	int			GetDrawExtendStringCharInfo(            DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// デフォ?トフォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawExtendNStringCharInfo(           DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// デフォ?トフォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawExtendFormatStringCharInfo(      DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *FormatString, ... ) ;										// デフォ?トフォ?トハ?ド?を使用した?式付き文?列の１文??の情報を取得する
extern	int			GetDrawStringKerningPairInfo(			const TCHAR *PairChar,                        int *KernAmount ) ;								// デフォ?トフォ?トハ?ド?を使用した二つの文?のペアのカーニ?グ情報を取得する( PairChar:カーニ?グ情報を調べるペアとなる2文?の文?列( 2文?以上?っても先頭の2文?だけ使用されます )  KernAmount:2文?目の文?を基本の位置からずらすドット?を代入するint型変?のアド?ス )
extern	int			GetDrawStringKerningPairInfoWithStrLen(	const TCHAR *PairChar, size_t PairCharLength, int *KernAmount ) ;								// デフォ?トフォ?トハ?ド?を使用した二つの文?のペアのカーニ?グ情報を取得する( PairChar:カーニ?グ情報を調べるペアとなる2文?の文?列( 2文?以上?っても先頭の2文?だけ使用されます )  KernAmount:2文?目の文?を基本の位置からずらすドット?を代入するint型変?のアド?ス )

extern	const TCHAR *GetFontNameToHandle(					int FontHandle ) ;																				// フォ?トハ?ド?のフォ?ト名を取得する
extern	int			GetFontMaxCacheCharNumToHandle(			int FontHandle ) ;																				// フォ?トハ?ド?のキ?ッシ?できる文?の?を取得する
extern	int			GetFontMaxWidthToHandle(                int FontHandle ) ;																				// フォ?トハ?ド?の文?の最大?を取得する
extern	int			GetFontAscentToHandle(                  int FontHandle ) ;																				// フォ?トハ?ド?の描画位置からベース?イ?までの?さを取得する
extern	int			GetFontSizeToHandle(                    int FontHandle ) ;																				// フォ?トハ?ド?のサイズを取得する
extern	int			GetFontEdgeSizeToHandle(                int FontHandle ) ;																				// フォ?トハ?ド?の?サイズを取得する
extern	int			GetFontSpaceToHandle(                   int FontHandle ) ;																				// フォ?トハ?ド?の?間を取得する
extern	int			GetFontLineSpaceToHandle(               int FontHandle ) ;																				// フォ?トハ?ド?の行間を取得する
extern	int			GetFontCharInfo(                        int FontHandle, const TCHAR *Char,                    int *DrawX, int *DrawY, int *NextCharX, int *SizeX, int *SizeY ) ;	// フォ?トハ?ド?の指定の文?の描画情報を取得する
extern	int			GetFontCharInfoWithStrLen(              int FontHandle, const TCHAR *Char, size_t CharLength, int *DrawX, int *DrawY, int *NextCharX, int *SizeX, int *SizeY ) ;	// フォ?トハ?ド?の指定の文?の描画情報を取得する
extern	int			GetDrawStringWidthToHandle(             const TCHAR   *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;						// フォ?トハ?ド?を使用した文?列の描画?を取得する
extern	int			GetDrawNStringWidthToHandle(            const TCHAR   *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;						// フォ?トハ?ド?を使用した文?列の描画?を取得する
extern	int			GetDrawFormatStringWidthToHandle(       int FontHandle, const TCHAR *FormatString, ... ) ;																// フォ?トハ?ド?を使用した?式付き文?列の描画?を取得する
extern	int			GetDrawExtendStringWidthToHandle(       double ExRateX, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// フォ?トハ?ド?を使用した文?列の描画?を取得する
extern	int			GetDrawExtendNStringWidthToHandle(      double ExRateX, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// フォ?トハ?ド?を使用した文?列の描画?を取得する
extern	int			GetDrawExtendFormatStringWidthToHandle( double ExRateX, int FontHandle, const TCHAR *FormatString, ... ) ;												// フォ?トハ?ド?を使用した?式付き文?列の描画?を取得する
extern	int			GetDrawStringSizeToHandle(              int *SizeX, int *SizeY, int *LineCount, const TCHAR   *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// フォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する
extern	int			GetDrawNStringSizeToHandle(             int *SizeX, int *SizeY, int *LineCount, const TCHAR   *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;											// フォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する
extern	int			GetDrawFormatStringSizeToHandle(        int *SizeX, int *SizeY, int *LineCount, int FontHandle, const TCHAR *FormatString, ... ) ;																					// フォ?トハ?ド?を使用した?式付き文?列の描画?・?さ・行?を取得する
extern	int			GetDrawExtendStringSizeToHandle(        int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;				// フォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する
extern	int			GetDrawExtendNStringSizeToHandle(       int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;				// フォ?トハ?ド?を使用した文?列の描画?・?さ・行?を取得する
extern	int			GetDrawExtendFormatStringSizeToHandle(  int *SizeX, int *SizeY, int *LineCount, double ExRateX, double ExRateY, int FontHandle, const TCHAR *FormatString, ... ) ;													// フォ?トハ?ド?を使用した?式付き文?列の描画?・?さ・行?を取得する
extern	int			GetDrawStringCharInfoToHandle(              DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// フォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawNStringCharInfoToHandle(             DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// フォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawFormatStringCharInfoToHandle(        DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, int FontHandle, const TCHAR *FormatString, ... ) ;																		// フォ?トハ?ド?を使用した?式付き文?列の１文??の情報を取得する
extern	int			GetDrawExtendStringCharInfoToHandle(        DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, int StrLen,          int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// フォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawExtendNStringCharInfoToHandle(       DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// フォ?トハ?ド?を使用した文?列の１文??の情報を取得する
extern	int			GetDrawExtendFormatStringCharInfoToHandle(  DRAWCHARINFO *InfoBuffer, size_t InfoBufferSize, double ExRateX, double ExRateY, int FontHandle, const TCHAR *FormatString, ... ) ;										// フォ?トハ?ド?を使用した?式付き文?列の１文??の情報を取得する
extern	int			GetDrawStringKerningPairInfoToHandle(	        const TCHAR *PairChar,                        int *KernAmount, int FontHandle ) ;		// フォ?トハ?ド?を使用した二つの文?のペアのカーニ?グ情報を取得する( PairChar:カーニ?グ情報を調べるペアとなる2文?の文?列( 2文?以上?っても先頭の2文?だけ使用されます )  KernAmount:2文?目の文?を基本の位置からずらすドット?を代入するint型変?のアド?ス )
extern	int			GetDrawStringKerningPairInfoToHandleWithStrLen(	const TCHAR *PairChar, size_t PairCharLength, int *KernAmount, int FontHandle ) ;		// フォ?トハ?ド?を使用した二つの文?のペアのカーニ?グ情報を取得する( PairChar:カーニ?グ情報を調べるペアとなる2文?の文?列( 2文?以上?っても先頭の2文?だけ使用されます )  KernAmount:2文?目の文?を基本の位置からずらすドット?を代入するint型変?のアド?ス )
extern	int			GetFontStateToHandle(                   TCHAR   *FontName, int *Size, int *Thick, int FontHandle, int *FontType DEFAULTPARAM( = NULL ) , int *CharSet DEFAULTPARAM( = NULL ) , int *EdgeSize DEFAULTPARAM( = NULL ) , int *Italic DEFAULTPARAM( = NULL ) ) ;						// フォ?トハ?ド?の情報を取得する
extern	int			CheckFontCacheToTextureFlag(            int FontHandle ) ;																				// フォ?トハ?ド?がテクスチ?キ?ッシ?を使用しているかどうかを取得する
extern	int			CheckFontChacheToTextureFlag(           int FontHandle ) ;																				// CheckFontCacheToTextureFlag の誤?版
extern	int			CheckFontHandleValid(                   int FontHandle ) ;																				// フォ?トハ?ド?が有効かどうかを取得する
extern	int			ClearFontCacheToHandle(					int FontHandle ) ;																				// フォ?トハ?ド?のキ?ッシ?情報を?期化する

extern	int			SetFontCacheToTextureFlag(              int Flag ) ;																					// フォ?トのキ?ッシ?にテクスチ?を使用するかどうかを設定する( TRUE:テクスチ?を使用する( デフォ?ト )  FALSE:テクスチ?は使用しない )
extern	int			GetFontCacheToTextureFlag(              void ) ;																						// フォ?トのキ?ッシ?にテクスチ?を使用するかどうかを設定する
extern	int			SetFontChacheToTextureFlag(             int Flag ) ;																					// SetFontCacheToTextureFlag の誤?版
extern	int			GetFontChacheToTextureFlag(             void ) ;																						// GetFontCacheToTextureFlag の誤?版
extern	int			SetFontCacheTextureColorBitDepth(		int ColorBitDepth ) ;																			// フォ?トのキ?ッシ?として使用するテクスチ?のカ?ービット深度を設定する( 16 ?は 32 のみ指定可能  デフォ?トは 32 )
extern	int			GetFontCacheTextureColorBitDepth(		void ) ;																						// フォ?トのキ?ッシ?として使用するテクスチ?のカ?ービット深度を取得する
extern	int			SetFontCacheCharNum(                    int CharNum ) ;																					// フォ?トキ?ッシ?でキ?ッシ?できる文??を設定する
extern	int			GetFontCacheCharNum(                    void ) ;																						// フォ?トキ?ッシ?でキ?ッシ?できる文??を取得する( 戻り値  0:デフォ?ト  1以上:指定文?? )
extern	int			SetFontCacheUsePremulAlphaFlag(         int Flag ) ;																					// フォ?トキ?ッシ?として保存する画?の形式を乗算済みαチ??ネ?付き画?にするかどうかを設定する( TRUE:乗算済みαを使用する  FLASE:乗算済みαを使用しない( デフォ?ト ) )
extern	int			GetFontCacheUsePremulAlphaFlag(         void ) ;																						// フォ?トキ?ッシ?として保存する画?の形式を乗算済みαチ??ネ?付き画?にするかどうかを取得する
extern	int			SetFontUseAdjustSizeFlag(               int Flag ) ;																					// フォ?トのサイズを補正する??を行うかどうかを設定する( Flag  TRUE:行う( デフォ?ト )  FALSE:行わない )
extern	int			GetFontUseAdjustSizeFlag(               void ) ;																						// フォ?トのサイズを補正する??を行うかどうかを取得する
extern	int			SetFontOnlyDrawType(					int OnlyType ) ;																				// フォ?トの描画で?のみ、?は本体のみ描画を行うかどうかを設定する( OnlyType  0:通常描画 1:本体のみ描画 2:?のみ描画 )
extern	int			GetFontOnlyDrawType(					void ) ;																						// フォ?トの描画で?のみ、?は本体のみ描画を行うかどうかを取得する( 戻り値  0:通常描画 1:本体のみ描画 2:?のみ描画 )
extern	int			SetFontIgnoreLFFlag(					int Flag ) ;																					// DrawString などで \n を無?するかどうかを設定する( TRUE : 無?する    FALSE : 無?しない( デフォ?ト ) )
extern	int			GetFontIgnoreLFFlag(					void ) ;																						// DrawString などで \n を無?するかどうかを取得する( TRUE : 無?する    FALSE : 無?しない( デフォ?ト ) )


// FontCacheStringDraw の代わりに DrawString を使ってください
extern	int			FontCacheStringDrawToHandle(            int x, int y, const TCHAR *StrData,                       unsigned int Color, unsigned int EdgeColor, BASEIMAGE *DestImage, const RECT *ClipRect /* NULL 可 */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) , SIZE *DrawSizeP DEFAULTPARAM( = NULL ) ) ;
extern	int			FontCacheStringDrawToHandleWithStrLen(  int x, int y, const TCHAR *StrData, size_t StrDataLength, unsigned int Color, unsigned int EdgeColor, BASEIMAGE *DestImage, const RECT *ClipRect /* NULL 可 */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) , SIZE *DrawSizeP DEFAULTPARAM( = NULL ) ) ;
extern	int			FontBaseImageBlt(                       int x, int y, const TCHAR *StrData,                       BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage,                 int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// 基本イ?ージに文?列を描画する( デフォ?トフォ?トハ?ド?を使用する )
extern	int			FontBaseImageBltWithStrLen(             int x, int y, const TCHAR *StrData, size_t StrDataLength, BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage,                 int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// 基本イ?ージに文?列を描画する( デフォ?トフォ?トハ?ド?を使用する )
extern	int			FontBaseImageBltToHandle(               int x, int y, const TCHAR *StrData,                       BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// 基本イ?ージに文?列を描画する
extern	int			FontBaseImageBltToHandleWithStrLen(     int x, int y, const TCHAR *StrData, size_t StrDataLength, BASEIMAGE *DestImage, BASEIMAGE *DestEdgeImage, int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// 基本イ?ージに文?列を描画する

extern	int			MultiByteCharCheck(                     const char *Buf, int CharSet /* DX_CHARSET_SHFTJIS */ ) ;										// ２バイト文?か調べる( TRUE:２バイト文?  FALSE:１バイト文? )

// 文?列描画関?
extern	int			DrawString(                             int x, int y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列を描画する
extern	int			DrawNString(                            int x, int y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列を描画する
extern	int			DrawVString(                            int x, int y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列を描画する( 縦?き )
extern	int			DrawNVString(                           int x, int y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列を描画する( 縦?き )
extern	int			DrawFormatString(                       int x, int y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する
extern	int			DrawFormatVString(                      int x, int y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( 縦?き )
extern	int			DrawFormatString2(                      int x, int y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )
extern	int			DrawFormatVString2(                     int x, int y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )( 縦?き )
extern	int			DrawExtendString(                       int x, int y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画
extern	int			DrawExtendNString(                      int x, int y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画
extern	int			DrawExtendVString(                      int x, int y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画( 縦?き )
extern	int			DrawExtendNVString(                     int x, int y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;							// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画( 縦?き )
extern	int			DrawExtendFormatString(                 int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する
extern	int			DrawExtendFormatVString(                int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( 縦?き )
extern	int			DrawExtendFormatString2(                int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )
extern	int			DrawExtendFormatVString2(               int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																	// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )( 縦?き )
extern	int			DrawRotaString(							int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を回転描画する
extern	int			DrawRotaNString(						int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を回転描画する
extern	int			DrawRotaFormatString(					int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を回転描画する
extern	int			DrawModiString(							int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を変形描画する
extern	int			DrawModiNString(						int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を変形描画する
extern	int			DrawModiFormatString(					int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を変形描画する

extern	int			DrawStringF(                            float x, float y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列を描画する( 座標指定が float 版 )
extern	int			DrawNStringF(                           float x, float y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列を描画する( 座標指定が float 版 )
extern	int			DrawVStringF(                           float x, float y,                                              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列を描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawNVStringF(                          float x, float y,                                              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列を描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawFormatStringF(                      float x, float y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( 座標指定が float 版 )
extern	int			DrawFormatVStringF(                     float x, float y,                                 unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawFormatString2F(                     float x, float y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )( 座標指定が float 版 )
extern	int			DrawFormatVString2F(                    float x, float y,                                 unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendStringF(                      float x, float y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画( 座標指定が float 版 )
extern	int			DrawExtendNStringF(                     float x, float y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画( 座標指定が float 版 )
extern	int			DrawExtendVStringF(                     float x, float y, double ExRateX, double ExRateY,              const TCHAR *String,                      unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendNVStringF(                    float x, float y, double ExRateX, double ExRateY,              const TCHAR *String, size_t StringLength, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;						// デフォ?トフォ?トハ?ド?を使用して文?列の拡大描画( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendFormatStringF(                float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( 座標指定が float 版 )
extern	int			DrawExtendFormatVStringF(               float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendFormatString2F(               float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )( 座標指定が float 版 )
extern	int			DrawExtendFormatVString2F(              float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, const TCHAR *FormatString, ... ) ;																// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )( 縦?き )( 座標指定が float 版 )
extern	int			DrawRotaStringF(						float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を回転描画する( 座標指定が float 版 )
extern	int			DrawRotaNStringF(						float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を回転描画する( 座標指定が float 版 )
extern	int			DrawRotaFormatStringF(					float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を回転描画する( 座標指定が float 版 )
extern	int			DrawModiStringF(						float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を変形描画する( 座標指定が float 版 )
extern	int			DrawModiNStringF(						float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// デフォ?トフォ?トハ?ド?を使用して文?列を変形描画する( 座標指定が float 版 )
extern	int			DrawModiFormatStringF(					float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// デフォ?トフォ?トハ?ド?を使用して?式指定文?列を変形描画する( 座標指定が float 版 )

extern	int			DrawNumberToI(                          int x, int y,                          int    Num, int RisesNum, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// デフォ?トフォ?トハ?ド?を使用して整?型の?値を描画する
extern	int			DrawNumberToF(                          int x, int y,                          double Num, int Length,   unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// デフォ?トフォ?トハ?ド?を使用して?動小?点型の?値を描画する
extern	int			DrawNumberPlusToI(                      int x, int y, const TCHAR *NoteString, int    Num, int RisesNum, unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// デフォ?トフォ?トハ?ド?を使用して整?型の?値とその説明の文?列を一度に描画する
extern 	int			DrawNumberPlusToF(                      int x, int y, const TCHAR *NoteString, double Num, int Length,   unsigned int Color, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// デフォ?トフォ?トハ?ド?を使用して?動小?点型の?値とその説明の文?列を一度に描画する

extern	int			DrawStringToZBuffer(                    int x, int y, const TCHAR *String,                                                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を描画する
extern	int			DrawNStringToZBuffer(                   int x, int y, const TCHAR *String, size_t StringLength,                                                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を描画する
extern	int			DrawVStringToZBuffer(                   int x, int y, const TCHAR *String,                                                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を描画する( 縦?き )
extern	int			DrawNVStringToZBuffer(                  int x, int y, const TCHAR *String, size_t StringLength,                                                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を描画する( 縦?き )
extern	int			DrawFormatStringToZBuffer(              int x, int y,                                                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;									// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を描画する
extern	int			DrawFormatVStringToZBuffer(             int x, int y,                                                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;									// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を描画する( 縦?き )
extern	int			DrawExtendStringToZBuffer(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する
extern	int			DrawExtendNStringToZBuffer(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength,                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する
extern	int			DrawExtendVStringToZBuffer(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する( 縦?き )
extern	int			DrawExtendNVStringToZBuffer(            int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength,                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;												// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する( 縦?き )
extern	int			DrawExtendFormatStringToZBuffer(        int x, int y, double ExRateX, double ExRateY,                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;									// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を拡大描画する
extern	int			DrawExtendFormatVStringToZBuffer(       int x, int y, double ExRateX, double ExRateY,                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;									// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を拡大描画する( 縦?き )
extern	int			DrawRotaStringToZBuffer(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag , const TCHAR *String                            ) ;	// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を回転描画する
extern	int			DrawRotaNStringToZBuffer(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag , const TCHAR *String,       size_t StringLength ) ;	// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を回転描画する
extern	int			DrawRotaFormatStringToZBuffer(			int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag , const TCHAR *FormatString , ...                ) ;	// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を回転描画する
extern	int			DrawModiStringToZBuffer(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag , const TCHAR *String                            ) ;	// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を変形描画する
extern	int			DrawModiNStringToZBuffer(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag , const TCHAR *String,       size_t StringLength ) ;	// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して文?列を変形描画する
extern	int			DrawModiFormatStringToZBuffer(			int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4,                                      int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag , const TCHAR *FormatString , ...                ) ;	// デフォ?トフォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を変形描画する


extern	int			DrawStringToHandle(                     int x, int y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// フォ?トハ?ド?を使用して文?列を描画する
extern	int			DrawNStringToHandle(                    int x, int y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// フォ?トハ?ド?を使用して文?列を描画する
extern	int			DrawVStringToHandle(                    int x, int y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// フォ?トハ?ド?を使用して文?列を描画する( 縦?き )
extern	int			DrawNVStringToHandle(                   int x, int y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// フォ?トハ?ド?を使用して文?列を描画する( 縦?き )
extern	int			DrawFormatStringToHandle(               int x, int y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する
extern	int			DrawFormatVStringToHandle(              int x, int y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( 縦?き )
extern	int			DrawFormatString2ToHandle(              int x, int y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )
extern	int			DrawFormatVString2ToHandle(             int x, int y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )( 縦?き )
extern	int			DrawExtendStringToHandle(               int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// フォ?トハ?ド?を使用して文?列を拡大描画する
extern	int			DrawExtendNStringToHandle(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// フォ?トハ?ド?を使用して文?列を拡大描画する
extern	int			DrawExtendVStringToHandle(              int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// フォ?トハ?ド?を使用して文?列を拡大描画する( 縦?き )
extern	int			DrawExtendNVStringToHandle(             int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// フォ?トハ?ド?を使用して文?列を拡大描画する( 縦?き )
extern	int			DrawExtendFormatStringToHandle(         int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する
extern	int			DrawExtendFormatVStringToHandle(        int x, int y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( 縦?き )
extern	int			DrawExtendFormatString2ToHandle(        int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )
extern	int			DrawExtendFormatVString2ToHandle(       int x, int y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )( 縦?き )
extern	int			DrawRotaStringToHandle(					int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String                            ) ;		// フォ?トハ?ド?を使用して文?列を回転描画する
extern	int			DrawRotaNStringToHandle(				int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;		// フォ?トハ?ド?を使用して文?列を回転描画する
extern	int			DrawRotaFormatStringToHandle(			int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ...                 ) ;		// フォ?トハ?ド?を使用して?式指定文?列を回転描画する
extern	int			DrawModiStringToHandle(					int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String                            ) ;	// フォ?トハ?ド?を使用して文?列を変形描画する
extern	int			DrawModiNStringToHandle(				int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;	// フォ?トハ?ド?を使用して文?列を変形描画する
extern	int			DrawModiFormatStringToHandle(			int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ...                 ) ;	// フォ?トハ?ド?を使用して?式指定文?列を変形描画する

extern	int			DrawStringFToHandle(                    float x, float y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// フォ?トハ?ド?を使用して文?列を描画する( 座標指定が float 版 )
extern	int			DrawNStringFToHandle(                   float x, float y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;									// フォ?トハ?ド?を使用して文?列を描画する( 座標指定が float 版 )
extern	int			DrawVStringFToHandle(                   float x, float y, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// フォ?トハ?ド?を使用して文?列を描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawNVStringFToHandle(                  float x, float y, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;																				// フォ?トハ?ド?を使用して文?列を描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawFormatStringFToHandle(              float x, float y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( 座標指定が float 版 )
extern	int			DrawFormatVStringFToHandle(             float x, float y, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawFormatString2FToHandle(             float x, float y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )( 座標指定が float 版 )
extern	int			DrawFormatVString2FToHandle(            float x, float y, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																											// フォ?トハ?ド?を使用して?式指定文?列を描画する( ?の色引?付き )( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendStringFToHandle(              float x, float y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// フォ?トハ?ド?を使用して文?列を拡大描画する( 座標指定が float 版 )
extern	int			DrawExtendNStringFToHandle(             float x, float y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;	// フォ?トハ?ド?を使用して文?列を拡大描画する( 座標指定が float 版 )
extern	int			DrawExtendVStringFToHandle(             float x, float y, double ExRateX, double ExRateY, const TCHAR *String,                      unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// フォ?トハ?ド?を使用して文?列を拡大描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendNVStringFToHandle(            float x, float y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;												// フォ?トハ?ド?を使用して文?列を拡大描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendFormatStringFToHandle(        float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( 座標指定が float 版 )
extern	int			DrawExtendFormatVStringFToHandle(       float x, float y, double ExRateX, double ExRateY, unsigned int Color,                         int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( 縦?き )( 座標指定が float 版 )
extern	int			DrawExtendFormatString2FToHandle(       float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )( 座標指定が float 版 )
extern	int			DrawExtendFormatVString2FToHandle(      float x, float y, double ExRateX, double ExRateY, unsigned int Color, unsigned int EdgeColor, int FontHandle, const TCHAR *FormatString, ... ) ;																			// フォ?トハ?ド?を使用して?式指定文?列を拡大描画する( ?の色引?付き )( 縦?き )( 座標指定が float 版 )
extern	int			DrawRotaStringFToHandle(				float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL )                           ) ;		// フォ?トハ?ド?を使用して文?列を回転描画する( 座標指定が float 版 )
extern	int			DrawRotaNStringFToHandle(				float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *String       DEFAULTPARAM( = NULL ) , size_t StringLength DEFAULTPARAM( = 0 ) ) ;		// フォ?トハ?ド?を使用して文?列を回転描画する( 座標指定が float 版 )
extern	int			DrawRotaFormatStringFToHandle(			float x, float y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) , int VerticalFlag DEFAULTPARAM( = FALSE ) , const TCHAR *FormatString DEFAULTPARAM( = NULL ) , ...                     ) ;		// フォ?トハ?ド?を使用して?式指定文?列を回転描画する( 座標指定が float 版 )
extern	int			DrawModiStringFToHandle(				float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String                            ) ;		// フォ?トハ?ド?を使用して文?列を変形描画する( 座標指定が float 版 )
extern	int			DrawModiNStringFToHandle(				float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;		// フォ?トハ?ド?を使用して文?列を変形描画する( 座標指定が float 版 )
extern	int			DrawModiFormatStringFToHandle(			float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, unsigned int Color, int FontHandle, unsigned int EdgeColor, int VerticalFlag, const TCHAR *FormatString, ...                 ) ;		// フォ?トハ?ド?を使用して?式指定文?列を変形描画する( 座標指定が float 版 )

extern	int			DrawNumberToIToHandle(                  int x, int y,                          int    Num, int RisesNum, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// フォ?トハ?ド?を使用して整?型の?値を描画する
extern	int			DrawNumberToFToHandle(                  int x, int y,                          double Num, int Length,   unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// フォ?トハ?ド?を使用して?動小?点型の?値を描画する
extern	int			DrawNumberPlusToIToHandle(              int x, int y, const TCHAR *NoteString, int    Num, int RisesNum, unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// フォ?トハ?ド?を使用して整?型の?値とその説明の文?列を一度に描画する
extern	int			DrawNumberPlusToFToHandle(              int x, int y, const TCHAR *NoteString, double Num, int Length,   unsigned int Color, int FontHandle, unsigned int EdgeColor DEFAULTPARAM( = 0 ) ) ;											// フォ?トハ?ド?を使用して?動小?点型の?値とその説明の文?列を一度に描画する

extern	int			DrawStringToHandleToZBuffer(            int x, int y, const TCHAR *String,                      int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// フォ?トハ?ド?を使用してＺバッファに対して文?列を描画する
extern	int			DrawNStringToHandleToZBuffer(           int x, int y, const TCHAR *String, size_t StringLength, int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// フォ?トハ?ド?を使用してＺバッファに対して文?列を描画する
extern	int			DrawVStringToHandleToZBuffer(           int x, int y, const TCHAR *String,                      int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;													// フォ?トハ?ド?を使用してＺバッファに対して文?列を描画する( 縦?き )
extern	int			DrawNVStringToHandleToZBuffer(          int x, int y, const TCHAR *String, size_t StringLength, int FontHandle,                                                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;													// フォ?トハ?ド?を使用してＺバッファに対して文?列を描画する( 縦?き )
extern	int			DrawFormatStringToHandleToZBuffer(      int x, int y, int FontHandle,                                                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;										// フォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を描画する
extern	int			DrawFormatVStringToHandleToZBuffer(     int x, int y, int FontHandle,                                                                                        int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;										// フォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を描画する( 縦?き )
extern	int			DrawExtendStringToHandleToZBuffer(      int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// フォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する
extern	int			DrawExtendNStringToHandleToZBuffer(     int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;			// フォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する
extern	int			DrawExtendVStringToHandleToZBuffer(     int x, int y, double ExRateX, double ExRateY, const TCHAR *String,                      int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;													// フォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する( 縦?き )
extern	int			DrawExtendNVStringToHandleToZBuffer(    int x, int y, double ExRateX, double ExRateY, const TCHAR *String, size_t StringLength, int FontHandle,                                   int WriteZMode /* DX_ZWRITE_MASK ? */ ) ;													// フォ?トハ?ド?を使用してＺバッファに対して文?列を拡大描画する( 縦?き )
extern	int			DrawExtendFormatStringToHandleToZBuffer(   int x, int y, double ExRateX, double ExRateY, int FontHandle,                                                      int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;										// フォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を拡大描画する
extern	int			DrawExtendFormatVStringToHandleToZBuffer(  int x, int y, double ExRateX, double ExRateY, int FontHandle,                                                      int WriteZMode /* DX_ZWRITE_MASK ? */ , const TCHAR *FormatString, ... ) ;										// フォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を拡大描画する( 縦?き )
extern	int			DrawRotaStringToHandleToZBuffer(		int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag, const TCHAR *String                            ) ;		// フォ?トハ?ド?を使用してＺバッファに対して文?列を回転描画する
extern	int			DrawRotaNStringToHandleToZBuffer(		int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;		// フォ?トハ?ド?を使用してＺバッファに対して文?列を回転描画する
extern	int			DrawRotaFormatStringToHandleToZBuffer(	int x, int y, double ExRateX, double ExRateY, double RotCenterX, double RotCenterY, double RotAngle, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag, const TCHAR *FormatString, ...                 ) ;		// フォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を回転描画する
extern	int			DrawModiStringToHandleToZBuffer(		int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag, const TCHAR *String                            ) ;											// フォ?トハ?ド?を使用してＺバッファに対して文?列を変形描画する
extern	int			DrawModiNStringToHandleToZBuffer(		int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag, const TCHAR *String,       size_t StringLength ) ;											// フォ?トハ?ド?を使用してＺバッファに対して文?列を変形描画する
extern	int			DrawModiFormatStringToHandleToZBuffer(	int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int FontHandle, int WriteZMode /* DX_ZWRITE_MASK ? */ , int VerticalFlag, const TCHAR *FormatString, ...                 ) ;											// フォ?トハ?ド?を使用してＺバッファに対して?式指定文?列を変形描画する

#endif // DX_NON_FONT








// DxMath.cpp 関?プ?トタイプ宣言

// ?算?イブ??
extern	int			ConvertMatrixFtoD(             MATRIX_D *Out, const MATRIX   *In ) ;															// float型要素の行列をdouble型要素の行列に変換する
extern	int			ConvertMatrixDtoF(             MATRIX   *Out, const MATRIX_D *In ) ;															// double型要素の行列をfloat型要素の行列に変換する
extern	int			CreateIdentityMatrix(          MATRIX   *Out ) ;																				// 単位行列を作成する
extern	int			CreateIdentityMatrixD(         MATRIX_D *Out ) ;																				// 単位行列を作成する
extern	int			CreateLookAtMatrix(            MATRIX   *Out, const VECTOR   *Eye, const VECTOR   *At, const VECTOR   *Up ) ;					// ビ?ー行列を作成する
extern	int			CreateLookAtMatrixD(           MATRIX_D *Out, const VECTOR_D *Eye, const VECTOR_D *At, const VECTOR_D *Up ) ;					// ビ?ー行列を作成する
extern	int			CreateLookAtMatrix2(           MATRIX   *Out, const VECTOR   *Eye, double XZAngle, double Oira ) ;								// ビ?ー行列を作成する(方向を回転値で指定)
extern	int			CreateLookAtMatrix2D(          MATRIX_D *Out, const VECTOR_D *Eye, double XZAngle, double Oira ) ;								// ビ?ー行列を作成する(方向を回転値で指定)
extern	int			CreateLookAtMatrixRH(          MATRIX   *Out, const VECTOR   *Eye, const VECTOR   *At, const VECTOR   *Up ) ;					// ビ?ー行列を作成する(右手座標系用)
extern	int			CreateLookAtMatrixRHD(         MATRIX_D *Out, const VECTOR_D *Eye, const VECTOR_D *At, const VECTOR_D *Up ) ;					// ビ?ー行列を作成する(右手座標系用)
extern	int			CreateMultiplyMatrix(          MATRIX   *Out, const MATRIX   *In1, const MATRIX   *In2 ) ;										// 行列の積を?める
extern	int			CreateMultiplyMatrixD(         MATRIX_D *Out, const MATRIX_D *In1, const MATRIX_D *In2 ) ;										// 行列の積を?める
extern	int			CreatePerspectiveFovMatrix(    MATRIX   *Out, float  fov,  float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// 射影行列を作成する
extern	int			CreatePerspectiveFovMatrixD(   MATRIX_D *Out, double fov,  double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// 射影行列を作成する
extern	int			CreatePerspectiveFovMatrixRH(  MATRIX   *Out, float  fov,  float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// 射影行列を作成する(右手座標系用)
extern	int			CreatePerspectiveFovMatrixRHD( MATRIX_D *Out, double fov,  double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// 射影行列を作成する(右手座標系用)
extern	int			CreateOrthoMatrix(             MATRIX   *Out, float  size, float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// 正射影行列を作成する
extern	int			CreateOrthoMatrixD(            MATRIX_D *Out, double size, double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// 正射影行列を作成する
extern	int			CreateOrthoMatrixRH(           MATRIX   *Out, float  size, float  zn, float  zf, float  aspect DEFAULTPARAM( = -1.0f ) ) ;		// 正射影行列を作成する(右手座標系用)
extern	int			CreateOrthoMatrixRHD(          MATRIX_D *Out, double size, double zn, double zf, double aspect DEFAULTPARAM( = -1.0f ) ) ;		// 正射影行列を作成する(右手座標系用)
extern	int			CreateScalingMatrix(           MATRIX   *Out, float  sx, float  sy, float  sz ) ;												// スケー??グ行列を作成する
extern	int			CreateScalingMatrixD(          MATRIX_D *Out, double sx, double sy, double sz ) ;												// スケー??グ行列を作成する
extern	int			CreateRotationXMatrix(         MATRIX   *Out, float  Angle ) ;																	// Ｘ軸を?心とした回転行列を作成する
extern	int			CreateRotationXMatrixD(        MATRIX_D *Out, double Angle ) ;																	// Ｘ軸を?心とした回転行列を作成する
extern	int			CreateRotationYMatrix(         MATRIX   *Out, float  Angle ) ;																	// Ｙ軸を?心とした回転行列を作成する
extern	int			CreateRotationYMatrixD(        MATRIX_D *Out, double Angle ) ;																	// Ｙ軸を?心とした回転行列を作成する
extern	int			CreateRotationZMatrix(         MATRIX   *Out, float  Angle ) ;																	// Ｚ軸を?心とした回転行列を作成する
extern	int			CreateRotationZMatrixD(        MATRIX_D *Out, double Angle ) ;																	// Ｚ軸を?心とした回転行列を作成する
extern	int			CreateTranslationMatrix(       MATRIX   *Out, float  x, float  y, float  z ) ;													// 平行移動行列を作成する
extern	int			CreateTranslationMatrixD(      MATRIX_D *Out, double x, double y, double z ) ;													// 平行移動行列を作成する
extern	int			CreateTransposeMatrix(         MATRIX   *Out, const MATRIX   *In ) ;															// 転置行列を作成する
extern	int			CreateTransposeMatrixD(        MATRIX_D *Out, const MATRIX_D *In ) ;															// 転置行列を作成する
extern	int			CreateInverseMatrix(           MATRIX   *Out, const MATRIX   *In ) ;															// 逆行列を作成する
extern	int			CreateInverseMatrixD(          MATRIX_D *Out, const MATRIX_D *In ) ;															// 逆行列を作成する
extern	int			CreateViewportMatrix(          MATRIX   *Out, float  CenterX, float  CenterY, float  Width, float  Height ) ;					// ビ?ーポート行列を作成する
extern	int			CreateViewportMatrixD(         MATRIX_D *Out, double CenterX, double CenterY, double Width, double Height ) ;					// ビ?ーポート行列を作成する
extern	int			CreateRotationXYZMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// Ｘ軸回転→Ｙ軸回転→Ｚ軸回転を?成した行列を作成する
extern	int			CreateRotationXYZMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// Ｘ軸回転→Ｙ軸回転→Ｚ軸回転を?成した行列を作成する
extern	int			CreateRotationXZYMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// Ｘ軸回転→Ｚ軸回転→Ｙ軸回転を?成した行列を作成する
extern	int			CreateRotationXZYMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// Ｘ軸回転→Ｚ軸回転→Ｙ軸回転を?成した行列を作成する
extern	int			CreateRotationYXZMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// Ｙ軸回転→Ｘ軸回転→Ｚ軸回転を?成した行列を作成する
extern	int			CreateRotationYXZMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// Ｙ軸回転→Ｘ軸回転→Ｚ軸回転を?成した行列を作成する
extern	int			CreateRotationYZXMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// Ｙ軸回転→Ｚ軸回転→Ｘ軸回転を?成した行列を作成する
extern	int			CreateRotationYZXMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// Ｙ軸回転→Ｚ軸回転→Ｘ軸回転を?成した行列を作成する
extern	int			CreateRotationZXYMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// Ｚ軸回転→Ｘ軸回転→Ｙ軸回転を?成した行列を作成する
extern	int			CreateRotationZXYMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// Ｚ軸回転→Ｘ軸回転→Ｙ軸回転を?成した行列を作成する
extern	int			CreateRotationZYXMatrix(       MATRIX   *Out, float  XRot, float  YRot, float  ZRot ) ;											// Ｚ軸回転→Ｙ軸回転→Ｘ軸回転を?成した行列を作成する
extern	int			CreateRotationZYXMatrixD(      MATRIX_D *Out, double XRot, double YRot, double ZRot ) ;											// Ｚ軸回転→Ｙ軸回転→Ｘ軸回転を?成した行列を作成する
extern	int			GetMatrixXYZRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// 行列からＸＹＺ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixXYZRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// 行列からＸＹＺ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixXZYRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// 行列からＸＺＹ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixXZYRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// 行列からＸＺＹ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixYXZRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// 行列からＹＸＺ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixYXZRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// 行列からＹＸＺ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixYZXRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// 行列からＹＺＸ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixYZXRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// 行列からＹＺＸ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixZXYRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// 行列からＺＸＹ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixZXYRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// 行列からＺＸＹ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixZYXRotation(          const MATRIX   *In, float  *OutXRot, float  *OutYRot, float  *OutZRot ) ;						// 行列からＺＹＸ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			GetMatrixZYXRotationD(         const MATRIX_D *In, double *OutXRot, double *OutYRot, double *OutZRot ) ;						// 行列からＺＹＸ軸回転の値を取得する( 戻り値　-1:ジ?バ??ック発生  0:成功 )
extern	int			VectorConvertFtoD(             VECTOR_D *Out, const VECTOR   *In ) ;															// float型のベクト?をdouble型のベクト?に変換する
extern	int			VectorConvertDtoF(             VECTOR   *Out, const VECTOR_D *In ) ;															// double型のベクト?をfloat型のベクト?に変換する
extern	int			VectorNormalize(               VECTOR   *Out, const VECTOR   *In ) ;															// ベクト?を正規化する
extern	int			VectorNormalizeD(              VECTOR_D *Out, const VECTOR_D *In ) ;															// ベクト?を正規化する
extern	int			VectorScale(                   VECTOR   *Out, const VECTOR   *In, float  Scale ) ;												// ベクト?をスカ?ー倍する
extern	int			VectorScaleD(                  VECTOR_D *Out, const VECTOR_D *In, double Scale ) ;												// ベクト?をスカ?ー倍する
extern	int			VectorMultiply(                VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// ベクト?の掛け算をする
extern	int			VectorMultiplyD(               VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// ベクト?の掛け算をする
extern	int			VectorSub(                     VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// Out = In1 - In2 のベクト?計算をする 
extern	int			VectorSubD(                    VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// Out = In1 - In2 のベクト?計算をする 
extern	int			VectorAdd(                     VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// Out = In1 + In2 のベクト?計算をする 
extern	int			VectorAddD(                    VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// Out = In1 + In2 のベクト?計算をする 
extern	int			VectorOuterProduct(            VECTOR   *Out, const VECTOR   *In1, const VECTOR   *In2 ) ;										// In1とIn2の外積を計算する
extern	int			VectorOuterProductD(           VECTOR_D *Out, const VECTOR_D *In1, const VECTOR_D *In2 ) ;										// In1とIn2の外積を計算する
extern	float 		VectorInnerProduct(            const VECTOR   *In1, const VECTOR   *In2 ) ;														// In1とIn2の内積を計算する
extern	double		VectorInnerProductD(           const VECTOR_D *In1, const VECTOR_D *In2 ) ;														// In1とIn2の内積を計算する
extern	int			VectorRotationX(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// ベクト?のＸ軸を軸にした回転を行う
extern	int			VectorRotationXD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// ベクト?のＸ軸を軸にした回転を行う
extern	int			VectorRotationY(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// ベクト?のＹ軸を軸にした回転を行う
extern	int			VectorRotationYD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// ベクト?のＹ軸を軸にした回転を行う
extern	int			VectorRotationZ(               VECTOR   *Out, const VECTOR   *In, double Angle ) ;												// ベクト?のＺ軸を軸にした回転を行う
extern	int			VectorRotationZD(              VECTOR_D *Out, const VECTOR_D *In, double Angle ) ;												// ベクト?のＺ軸を軸にした回転を行う
extern	int			VectorTransform(               VECTOR   *Out, const VECTOR   *InVec, const MATRIX   *InMatrix ) ;								// ベクト?行列と4x4正方行列を乗算する( w は 1 と仮定 )
extern	int			VectorTransformD(              VECTOR_D *Out, const VECTOR_D *InVec, const MATRIX_D *InMatrix ) ;								// ベクト?行列と4x4正方行列を乗算する( w は 1 と仮定 )
extern	int			VectorTransformSR(             VECTOR   *Out, const VECTOR   *InVec, const MATRIX   *InMatrix ) ;								// ベクト?行列と4x4正方行列の回転?分のみを乗算する
extern	int			VectorTransformSRD(            VECTOR_D *Out, const VECTOR_D *InVec, const MATRIX_D *InMatrix ) ;								// ベクト?行列と4x4正方行列の回転?分のみを乗算する
extern	int			VectorTransform4(              VECTOR   *Out, float  *V4Out, const VECTOR   *InVec, const float  *V4In, const MATRIX   *InMatrix ) ; // ベクト?行列と4x4正方行列を乗算する( w の要素を渡す )
extern	int			VectorTransform4D(             VECTOR_D *Out, double *V4Out, const VECTOR_D *InVec, const double *V4In, const MATRIX_D *InMatrix ) ; // ベクト?行列と4x4正方行列を乗算する( w の要素を渡す )

extern	int			Segment_Segment_Analyse(      const VECTOR   *SegmentAPos1, const VECTOR   *SegmentAPos2, const VECTOR   *SegmentBPos1, const VECTOR   *SegmentBPos2, SEGMENT_SEGMENT_RESULT   *Result ) ;								// 二つの線分の最接近点情報を解析する
extern	int			Segment_Segment_AnalyseD(     const VECTOR_D *SegmentAPos1, const VECTOR_D *SegmentAPos2, const VECTOR_D *SegmentBPos1, const VECTOR_D *SegmentBPos2, SEGMENT_SEGMENT_RESULT_D *Result ) ;								// 二つの線分の最接近点情報を解析する
extern	int			Segment_Point_Analyse(        const VECTOR   *SegmentPos1, const VECTOR   *SegmentPos2, const VECTOR   *PointPos, SEGMENT_POINT_RESULT   *Result ) ;																	// 線分と点の最接近点情報を解析する
extern	int			Segment_Point_AnalyseD(       const VECTOR_D *SegmentPos1, const VECTOR_D *SegmentPos2, const VECTOR_D *PointPos, SEGMENT_POINT_RESULT_D *Result ) ;																	// 線分と点の最接近点情報を解析する
extern	int			Segment_Triangle_Analyse(     const VECTOR   *SegmentPos1, const VECTOR   *SegmentPos2, const VECTOR   *TrianglePos1, const VECTOR   *TrianglePos2, const VECTOR   *TrianglePos3, SEGMENT_TRIANGLE_RESULT   *Result ) ;	// 線分と三角形の最接近点情報を解析する
extern	int			Segment_Triangle_AnalyseD(    const VECTOR_D *SegmentPos1, const VECTOR_D *SegmentPos2, const VECTOR_D *TrianglePos1, const VECTOR_D *TrianglePos2, const VECTOR_D *TrianglePos3, SEGMENT_TRIANGLE_RESULT_D *Result ) ;	// 線分と三角形の最接近点情報を解析する
extern	int			Triangle_Point_Analyse(       const VECTOR   *TrianglePos1, const VECTOR   *TrianglePos2, const VECTOR   *TrianglePos3, const VECTOR   *PointPos, TRIANGLE_POINT_RESULT   *Result ) ;									// 三角形と点の最接近点情報を解析する
extern	int			Triangle_Point_AnalyseD(      const VECTOR_D *TrianglePos1, const VECTOR_D *TrianglePos2, const VECTOR_D *TrianglePos3, const VECTOR_D *PointPos, TRIANGLE_POINT_RESULT_D *Result ) ;									// 三角形と点の最接近点情報を解析する
extern	int			Plane_Point_Analyse(          const VECTOR   *PlanePos, const VECTOR   *PlaneNormal, const VECTOR   *PointPos, PLANE_POINT_RESULT   *Result ) ;																			// 平面と点の最近点情報を解析する
extern	int			Plane_Point_AnalyseD(         const VECTOR_D *PlanePos, const VECTOR_D *PlaneNormal, const VECTOR_D *PointPos, PLANE_POINT_RESULT_D *Result ) ;																			// 平面と点の最近点情報を解析する

extern	void		TriangleBarycenter(           VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   Position, float  *TrianglePos1Weight, float  *TrianglePos2Weight, float  *TrianglePos3Weight ) ;	// 指定の座標から三角形の重心を?める
extern	void		TriangleBarycenterD(          VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D Position, double *TrianglePos1Weight, double *TrianglePos2Weight, double *TrianglePos3Weight ) ;	// 指定の座標から三角形の重心を?める

extern	float 		Segment_Segment_MinLength(           VECTOR   SegmentAPos1, VECTOR   SegmentAPos2, VECTOR   SegmentBPos1, VECTOR   SegmentBPos2 ) ;														// 二つの線分の最近点間の?離を得る
extern	double		Segment_Segment_MinLengthD(          VECTOR_D SegmentAPos1, VECTOR_D SegmentAPos2, VECTOR_D SegmentBPos1, VECTOR_D SegmentBPos2 ) ;														// 二つの線分の最近点間の?離を得る
extern	float 		Segment_Segment_MinLength_Square(    VECTOR   SegmentAPos1, VECTOR   SegmentAPos2, VECTOR   SegmentBPos1, VECTOR   SegmentBPos2 ) ;														// 二つの線分の最近点間の?離の二乗を得る
extern	double		Segment_Segment_MinLength_SquareD(   VECTOR_D SegmentAPos1, VECTOR_D SegmentAPos2, VECTOR_D SegmentBPos1, VECTOR_D SegmentBPos2 ) ;														// 二つの線分の最近点間の?離の二乗を得る
extern	float 		Segment_Triangle_MinLength(          VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;								// 線分と三角形の最近点間の?離を得る 
extern	double		Segment_Triangle_MinLengthD(         VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;								// 線分と三角形の最近点間の?離を得る 
extern	float 		Segment_Triangle_MinLength_Square(   VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;								// 線分と三角形の最近点間の?離の二乗を得る 
extern	double		Segment_Triangle_MinLength_SquareD(  VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;								// 線分と三角形の最近点間の?離の二乗を得る 
extern	float 		Segment_Point_MinLength(             VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   PointPos ) ;																					// 線分と点の一番近い?離を得る
extern	double		Segment_Point_MinLengthD(            VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D PointPos ) ;																					// 線分と点の一番近い?離を得る
extern	float 		Segment_Point_MinLength_Square(      VECTOR   SegmentPos1, VECTOR   SegmentPos2, VECTOR   PointPos ) ;																					// 線分と点の一番近い?離の二乗を得る
extern	double		Segment_Point_MinLength_SquareD(     VECTOR_D SegmentPos1, VECTOR_D SegmentPos2, VECTOR_D PointPos ) ;																					// 線分と点の一番近い?離の二乗を得る
extern	float 		Triangle_Point_MinLength(            VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   PointPos ) ;															// 三角形と点の一番近い?離を得る
extern	double		Triangle_Point_MinLengthD(           VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D PointPos ) ;															// 三角形と点の一番近い?離を得る
extern	float 		Triangle_Point_MinLength_Square(     VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3, VECTOR   PointPos ) ;															// 三角形と点の一番近い?離の二乗を得る
extern	double		Triangle_Point_MinLength_SquareD(    VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3, VECTOR_D PointPos ) ;															// 三角形と点の一番近い?離の二乗を得る
extern	float 		Triangle_Triangle_MinLength(         VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// 二つの三角形の最近点間の?離を得る
extern	double		Triangle_Triangle_MinLengthD(        VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// 二つの三角形の最近点間の?離を得る
extern	float 		Triangle_Triangle_MinLength_Square(  VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// 二つの三角形の最近点間の?離の二乗を得る
extern	double		Triangle_Triangle_MinLength_SquareD( VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// 二つの三角形の最近点間の?離の二乗を得る
extern	VECTOR  	Plane_Point_MinLength_Position(      VECTOR   PlanePos, VECTOR   PlaneNormal, VECTOR   PointPos ) ;																						// 点に一番近い平面上の座標を得る
extern	VECTOR_D	Plane_Point_MinLength_PositionD(     VECTOR_D PlanePos, VECTOR_D PlaneNormal, VECTOR_D PointPos ) ;																						// 点に一番近い平面上の座標を得る
extern	float 		Plane_Point_MinLength(               VECTOR   PlanePos, VECTOR   PlaneNormal, VECTOR   PointPos ) ;																						// 平面と点の一番近い?離を得る
extern	double		Plane_Point_MinLengthD(              VECTOR_D PlanePos, VECTOR_D PlaneNormal, VECTOR_D PointPos ) ;																						// 平面と点の一番近い?離を得る

extern	HITRESULT_LINE   HitCheck_Line_Triangle(         VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;										// 三角形と線の?たり判定
extern	HITRESULT_LINE_D HitCheck_Line_TriangleD(        VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;										// 三角形と線の?たり判定
extern	int			HitCheck_Triangle_Triangle(          VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// 三角形と三角形の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Triangle_TriangleD(         VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// 三角形と三角形の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Triangle_Triangle_2D(       VECTOR   Triangle1Pos1, VECTOR   Triangle1Pos2, VECTOR   Triangle1Pos3, VECTOR   Triangle2Pos1, VECTOR   Triangle2Pos2, VECTOR   Triangle2Pos3 ) ;	// 三角形と三角形の?たり判定( ２Ｄ版 )( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Triangle_TriangleD_2D(      VECTOR_D Triangle1Pos1, VECTOR_D Triangle1Pos2, VECTOR_D Triangle1Pos3, VECTOR_D Triangle2Pos1, VECTOR_D Triangle2Pos2, VECTOR_D Triangle2Pos3 ) ;	// 三角形と三角形の?たり判定( ２Ｄ版 )( TRUE:?たっている  FALSE:?たっていない )
extern	HITRESULT_LINE   HitCheck_Line_Cube(             VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   CubePos1, VECTOR   CubePos2 );																		// 線と?の?たり判定
extern	HITRESULT_LINE_D HitCheck_Line_CubeD(            VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D CubePos1, VECTOR_D CubePos2 );																		// 線と?の?たり判定
extern	int			HitCheck_Point_Cone(                 VECTOR   PointPos, VECTOR   ConeTopPos, VECTOR   ConeBottomPos, float  ConeR ) ;																	// 点と円?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Point_ConeD(                VECTOR_D PointPos, VECTOR_D ConeTopPos, VECTOR_D ConeBottomPos, double ConeR ) ;																	// 点と円?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Line_Sphere(                VECTOR   LinePos1, VECTOR   LinePos2, VECTOR   SphereCenterPos, float  SphereR ) ;																	// 線と?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Line_SphereD(               VECTOR_D LinePos1, VECTOR_D LinePos2, VECTOR_D SphereCenterPos, double SphereR ) ;																	// 線と?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Sphere_Sphere(              VECTOR   Sphere1CenterPos, float  Sphere1R, VECTOR   Sphere2CenterPos, float  Sphere2R ) ;															// ?と?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Sphere_SphereD(             VECTOR_D Sphere1CenterPos, double Sphere1R, VECTOR_D Sphere2CenterPos, double Sphere2R ) ;															// ?と?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Sphere_Capsule(             VECTOR   SphereCenterPos, float  SphereR, VECTOR   CapPos1, VECTOR   CapPos2, float  CapR ) ;														// ?とカプセ?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Sphere_CapsuleD(            VECTOR_D SphereCenterPos, double SphereR, VECTOR_D CapPos1, VECTOR_D CapPos2, double CapR ) ;														// ?とカプセ?の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Sphere_Triangle(            VECTOR   SphereCenterPos, float  SphereR, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;									// ?と三角形の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Sphere_TriangleD(           VECTOR_D SphereCenterPos, double SphereR, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;									// ?と三角形の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Capsule_Capsule(            VECTOR   Cap1Pos1, VECTOR   Cap1Pos2, float  Cap1R, VECTOR   Cap2Pos1, VECTOR   Cap2Pos2, float  Cap2R ) ;											// カプセ?同士の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Capsule_CapsuleD(           VECTOR_D Cap1Pos1, VECTOR_D Cap1Pos2, double Cap1R, VECTOR_D Cap2Pos1, VECTOR_D Cap2Pos2, double Cap2R ) ;											// カプセ?同士の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Capsule_Triangle(           VECTOR   CapPos1, VECTOR   CapPos2, float  CapR, VECTOR   TrianglePos1, VECTOR   TrianglePos2, VECTOR   TrianglePos3 ) ;							// カプセ?と三角形の?たり判定( TRUE:?たっている  FALSE:?たっていない )
extern	int			HitCheck_Capsule_TriangleD(          VECTOR_D CapPos1, VECTOR_D CapPos2, double CapR, VECTOR_D TrianglePos1, VECTOR_D TrianglePos2, VECTOR_D TrianglePos3 ) ;							// カプセ?と三角形の?たり判定( TRUE:?たっている  FALSE:?たっていない )

// その他
extern	int			RectClipping( RECT *Rect, const RECT *ClippuRect ) ;									// 矩形のク?ッピ?グ
extern	int			RectAdjust(   RECT *Rect ) ;															// 矩形の left が right より値が大きい場?などの誤りを補正する
extern	int			GetRectSize(  const RECT *Rect, int *Width, int *Height ) ;								// 矩形の?と?さを?める

// 表記簡略版
extern	MATRIX		MGetIdent(          void ) ;															// 単位行列を取得する
extern	MATRIX_D	MGetIdentD(         void ) ;															// 単位行列を取得する
extern	MATRIX		MMult(              MATRIX   In1, MATRIX   In2 ) ;										// 行列の乗算を行う
extern	MATRIX_D	MMultD(             MATRIX_D In1, MATRIX_D In2 ) ;										// 行列の乗算を行う
extern	MATRIX		MScale(             MATRIX   InM, float  Scale ) ;										// 行列のスケー??グを行う
extern	MATRIX_D	MScaleD(            MATRIX_D InM, double Scale ) ;										// 行列のスケー??グを行う
extern	MATRIX		MAdd(               MATRIX   In1, MATRIX   In2 ) ;										// 行列の足し算を行う
extern	MATRIX_D	MAddD(              MATRIX_D In1, MATRIX_D In2 ) ;										// 行列の足し算を行う
extern	MATRIX		MGetScale(          VECTOR   Scale ) ;													// 拡大行列を取得する
extern	MATRIX_D	MGetScaleD(         VECTOR_D Scale ) ;													// 拡大行列を取得する
extern	MATRIX		MGetRotX(           float  XAxisRotate ) ;												// Ｘ軸回転行列を取得する
extern	MATRIX_D	MGetRotXD(          double XAxisRotate ) ;												// Ｘ軸回転行列を取得する
extern	MATRIX		MGetRotY(           float  YAxisRotate ) ;												// Ｙ軸回転行列を取得する
extern	MATRIX_D	MGetRotYD(          double YAxisRotate ) ;												// Ｙ軸回転行列を取得する
extern	MATRIX		MGetRotZ(           float  ZAxisRotate ) ;												// Ｚ軸回転行列を取得する
extern	MATRIX_D	MGetRotZD(          double ZAxisRotate ) ;												// Ｚ軸回転行列を取得する
extern	MATRIX		MGetRotAxis(        VECTOR   RotateAxis, float  Rotate ) ;								// 指定軸で指定角度回転する行列を取得する
extern	MATRIX_D	MGetRotAxisD(       VECTOR_D RotateAxis, double Rotate ) ;								// 指定軸で指定角度回転する行列を取得する
extern	MATRIX		MGetRotVec2(        VECTOR   In1, VECTOR   In2 ) ;										// In1 の向きから In2 の向きへ変換する回転行列を取得する( In2 と In1 が真逆のベクト?の場?は回転軸は不定 )
extern	MATRIX_D	MGetRotVec2D(       VECTOR_D In1, VECTOR_D In2 ) ;										// In1 の向きから In2 の向きへ変換する回転行列を取得する( In2 と In1 が真逆のベクト?の場?は回転軸は不定 )
extern	MATRIX		MGetTranslate(      VECTOR   Trans ) ;													// 平行移動行列を取得する
extern	MATRIX_D	MGetTranslateD(     VECTOR_D Trans ) ;													// 平行移動行列を取得する
extern	MATRIX		MGetAxis1(          VECTOR   XAxis, VECTOR   YAxis, VECTOR   ZAxis, VECTOR   Pos ) ;	// 指定の３軸?ーカ?のベクト?を基本軸上のベクト?に変換する行列を取得する( x' = XAxis.x * x + YAixs.x * y + ZAxis.z * z + Pos.x   y' = XAxis.y * x + YAixs.y * y + ZAxis.y * z + Pos.y      z' = XAxis.z * x + YAixs.z * y + ZAxis.z * z + Pos.z )
extern	MATRIX_D	MGetAxis1D(         VECTOR_D XAxis, VECTOR_D YAxis, VECTOR_D ZAxis, VECTOR_D Pos ) ;	// 指定の３軸?ーカ?のベクト?を基本軸上のベクト?に変換する行列を取得する( x' = XAxis.x * x + YAixs.x * y + ZAxis.z * z + Pos.x   y' = XAxis.y * x + YAixs.y * y + ZAxis.y * z + Pos.y      z' = XAxis.z * x + YAixs.z * y + ZAxis.z * z + Pos.z )
extern	MATRIX		MGetAxis2(          VECTOR   XAxis, VECTOR   YAxis, VECTOR   ZAxis, VECTOR   Pos ) ;	// 基本軸上のベクト?を指定の３軸上に?影したベクト?に変換する行列を取得する( x' = XAxis.x * ( x - Pos.x ) + XAxis.y * ( x - Pos.x ) + XAxis.z * ( x - Pos.x )    y' = YAxis.x * ( x - Pos.x ) + YAxis.y * ( x - Pos.x ) + YAxis.z * ( x - Pos.x )    z' = ZAxis.x * ( x - Pos.x ) + ZAxis.y * ( x - Pos.x ) + ZAxis.z * ( x - Pos.x ) )
extern	MATRIX_D	MGetAxis2D(         VECTOR_D XAxis, VECTOR_D YAxis, VECTOR_D ZAxis, VECTOR_D Pos ) ;	// 基本軸上のベクト?を指定の３軸上に?影したベクト?に変換する行列を取得する( x' = XAxis.x * ( x - Pos.x ) + XAxis.y * ( x - Pos.x ) + XAxis.z * ( x - Pos.x )    y' = YAxis.x * ( x - Pos.x ) + YAxis.y * ( x - Pos.x ) + YAxis.z * ( x - Pos.x )    z' = ZAxis.x * ( x - Pos.x ) + ZAxis.y * ( x - Pos.x ) + ZAxis.z * ( x - Pos.x ) )
extern	MATRIX		MTranspose(         MATRIX   InM ) ;													// 転置行列を取得する
extern	MATRIX_D	MTransposeD(        MATRIX_D InM ) ;													// 転置行列を取得する
extern	MATRIX		MInverse(           MATRIX   InM ) ;													// 逆行列を取得する
extern	MATRIX_D	MInverseD(          MATRIX_D InM ) ;													// 逆行列を取得する
extern  VECTOR		MGetSize(           MATRIX   InM ) ;													// 拡大行列のＸ軸、Ｙ軸、Ｚ軸の拡大率を取得する
extern  VECTOR_D	MGetSizeD(          MATRIX_D InM ) ;													// 拡大行列のＸ軸、Ｙ軸、Ｚ軸の拡大率を取得する
extern	MATRIX		MGetRotElem(        MATRIX   InM ) ;													// 行列の回転成分を取得する
extern	MATRIX_D	MGetRotElemD(       MATRIX_D InM ) ;													// 行列の回転成分を取得する

#ifdef __cplusplus

// 行列の平行移動成分を取得する
__inline VECTOR MGetTranslateElem( MATRIX &InM )
{
	VECTOR Result ;

	Result.x = InM.m[ 3 ][ 0 ] ;
	Result.y = InM.m[ 3 ][ 1 ] ;
	Result.z = InM.m[ 3 ][ 2 ] ;

	return Result ;
}

// 行列の平行移動成分を取得する
__inline VECTOR_D MGetTranslateElemD( MATRIX_D &InM )
{
	VECTOR_D Result ;

	Result.x = InM.m[ 3 ][ 0 ] ;
	Result.y = InM.m[ 3 ][ 1 ] ;
	Result.z = InM.m[ 3 ][ 2 ] ;

	return Result ;
}

// ベクト?値の変換
__inline VECTOR_D VConvFtoD( const VECTOR &In )
{
	VECTOR_D Result ;

	Result.x = In.x ;
	Result.y = In.y ;
	Result.z = In.z ;

	return Result ;
}

__inline VECTOR VConvDtoF( const VECTOR_D &In )
{
	VECTOR Result ;

	Result.x = ( float )In.x ;
	Result.y = ( float )In.y ;
	Result.z = ( float )In.z ;

	return Result ;
}

#endif // __cplusplus

// ベクト?値の生成
__inline VECTOR VGet( float x, float y, float z )
{
	VECTOR Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

__inline VECTOR_D VGetD( double x, double y, double z )
{
	VECTOR_D Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	return Result ;
}

__inline FLOAT2 F2Get( float u, float v )
{
	FLOAT2 Result;
	Result.u = u ;
	Result.v = v ;
	return Result ;
}

// ４要素ベクト?値の生成
__inline FLOAT4 F4Get( float x, float y, float z, float w )
{
	FLOAT4 Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	Result.w = w ;
	return Result ;
}

__inline DOUBLE4 D4Get( double x, double y, double z, double w )
{
	DOUBLE4 Result;
	Result.x = x ;
	Result.y = y ;
	Result.z = z ;
	Result.w = w ;
	return Result ;
}

#ifdef __cplusplus

// ベクト?の加算
__inline VECTOR		VAdd( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

__inline VECTOR_D	VAddD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	return Result ;
}

// ベクト?の減算
__inline VECTOR		VSub( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

__inline VECTOR_D	VSubD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	return Result ;
}

__inline FLOAT2		F2Add( const FLOAT2 &In1, const FLOAT2 &In2 )
{
	FLOAT2 Result ;
	Result.u = In1.u + In2.u ;
	Result.v = In1.v + In2.v ;
	return Result ;
}

// ４要素ベクト?の加算
__inline FLOAT4		F4Add( const FLOAT4 &In1, const FLOAT4 &In2 )
{
	FLOAT4 Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	Result.w = In1.w + In2.w ;
	return Result ;
}

__inline DOUBLE4	D4Add( const DOUBLE4 &In1, const DOUBLE4 &In2 )
{
	DOUBLE4 Result ;
	Result.x = In1.x + In2.x ;
	Result.y = In1.y + In2.y ;
	Result.z = In1.z + In2.z ;
	Result.w = In1.w + In2.w ;
	return Result ;
}

__inline FLOAT2		F2Sub( const FLOAT2 &In1, const FLOAT2 &In2 )
{
	FLOAT2 Result ;
	Result.u = In1.u - In2.u ;
	Result.v = In1.v - In2.v ;
	return Result ;
}

// ４要素ベクト?の減算
__inline FLOAT4		F4Sub( const FLOAT4 &In1, const FLOAT4 &In2 )
{
	FLOAT4 Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	Result.w = In1.w - In2.w ;
	return Result ;
}

__inline DOUBLE4	D4Sub( const DOUBLE4 &In1, const DOUBLE4 &In2 )
{
	DOUBLE4 Result ;
	Result.x = In1.x - In2.x ;
	Result.y = In1.y - In2.y ;
	Result.z = In1.z - In2.z ;
	Result.w = In1.w - In2.w ;
	return Result ;
}

// ベクト?の内積
__inline float		VDot( const VECTOR &In1, const VECTOR &In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

__inline double		VDotD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	return In1.x * In2.x + In1.y * In2.y + In1.z * In2.z ;
}

// ベクト?の外積
__inline VECTOR		VCross( const VECTOR &In1, const VECTOR &In2 )
{
	VECTOR Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

__inline VECTOR_D	VCrossD( const VECTOR_D &In1, const VECTOR_D &In2 )
{
	VECTOR_D Result ;
	Result.x = In1.y * In2.z - In1.z * In2.y ;
	Result.y = In1.z * In2.x - In1.x * In2.z ;
	Result.z = In1.x * In2.y - In1.y * In2.x ;
	return Result ;
}

// ベクト?のスケー??グ
__inline VECTOR		VScale( const VECTOR &In, float Scale )
{
	VECTOR Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

__inline VECTOR_D	VScaleD( const VECTOR_D &In, double Scale )
{
	VECTOR_D Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	return Result ;
}

__inline FLOAT2		F2Scale( const FLOAT2 &In, float Scale )
{
	FLOAT2 Result ;
	Result.u = In.u * Scale ;
	Result.v = In.v * Scale ;
	return Result ;
}

// ４要素ベクト?のスケー??グ
__inline FLOAT4		F4Scale( const FLOAT4 &In, float Scale )
{
	FLOAT4 Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	Result.w = In.w * Scale ;
	return Result ;
}

__inline DOUBLE4	D4Scale( const DOUBLE4 &In, double Scale )
{
	DOUBLE4 Result ;
	Result.x = In.x * Scale ;
	Result.y = In.y * Scale ;
	Result.z = In.z * Scale ;
	Result.w = In.w * Scale ;
	return Result ;
}

#endif // __cplusplus

// ベクト?の正規化
extern VECTOR		VNorm(  VECTOR   In ) ;
extern VECTOR_D		VNormD( VECTOR_D In ) ;

// ベクト?のサイズ
extern float		VSize(  VECTOR   In ) ;
extern double		VSizeD( VECTOR_D In ) ;

#ifdef __cplusplus

// ベクト?のサイズの２乗
__inline float		VSquareSize(  const VECTOR   &In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

__inline double		VSquareSizeD( const VECTOR_D &In )
{
	return In.x * In.x + In.y * In.y + In.z * In.z ;
}

// 行列を使った座標変換
__inline VECTOR		VTransform( const VECTOR &InV, const MATRIX &InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

__inline VECTOR_D	VTransformD( const VECTOR_D &InV, const MATRIX_D &InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] + InM.m[3][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] + InM.m[3][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] + InM.m[3][2] ;
	return Result ;
}

// 行列を使った座標変換( スケー??グ＋回転成分のみ )
__inline VECTOR		VTransformSR( const VECTOR &InV, const MATRIX &InM )
{
	VECTOR Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

__inline VECTOR_D	VTransformSRD( const VECTOR_D &InV, const MATRIX_D &InM )
{
	VECTOR_D Result ;
	Result.x = InV.x * InM.m[0][0] + InV.y * InM.m[1][0] + InV.z * InM.m[2][0] ;
	Result.y = InV.x * InM.m[0][1] + InV.y * InM.m[1][1] + InV.z * InM.m[2][1] ;
	Result.z = InV.x * InM.m[0][2] + InV.y * InM.m[1][2] + InV.z * InM.m[2][2] ;
	return Result ;
}

#endif // __cplusplus

// 二つのベクト?が成す角のコサイ?値を得る
extern	float		VCos(  VECTOR   In1, VECTOR   In2 ) ;
extern	double		VCosD( VECTOR_D In1, VECTOR_D In2 ) ;

// 二つのベクト?が成す角の角度を得る( 単位：?ジア? )
extern	float		VRad(  VECTOR   In1, VECTOR   In2 ) ;
extern	double		VRadD( VECTOR_D In1, VECTOR_D In2 ) ;


#ifdef __cplusplus

// 2つのクォータニオ?の乗算の?果を返す
__inline FLOAT4 QTCross( const FLOAT4 &A, const FLOAT4 &B )
{
    FLOAT4 Result ;
    Result.w = A.w * B.w - ( A.x * B.x + A.y * B.y + A.z * B.z ) ;
	Result.x = B.x * A.w + A.x * B.w + ( A.y * B.z - A.z * B.y ) ;
	Result.y = B.y * A.w + A.y * B.w + ( A.z * B.x - A.x * B.z ) ;
	Result.z = B.z * A.w + A.z * B.w + ( A.x * B.y - A.y * B.x ) ;
    return Result ;
}
__inline DOUBLE4 QTCrossD( const DOUBLE4 &A, const DOUBLE4 &B )
{
    DOUBLE4 Result ;
    Result.w = A.w * B.w - ( A.x * B.x + A.y * B.y + A.z * B.z ) ;
	Result.x = B.x * A.w + A.x * B.w + ( A.y * B.z - A.z * B.y ) ;
	Result.y = B.y * A.w + A.y * B.w + ( A.z * B.x - A.x * B.z ) ;
	Result.z = B.z * A.w + A.z * B.w + ( A.x * B.y - A.y * B.x ) ;
    return Result ;
}

// 共役クォータニオ?を返す
__inline FLOAT4 QTConj( const FLOAT4 &A )
{
	FLOAT4 Result ;
	Result.w =  A.w ;
	Result.x = -A.x ;
	Result.y = -A.y ;
	Result.z = -A.z ;
	return Result ;
}
__inline DOUBLE4 QTConjD( const DOUBLE4 &A )
{
	DOUBLE4 Result ;
	Result.w =  A.w ;
	Result.x = -A.x ;
	Result.y = -A.y ;
	Result.z = -A.z ;
	return Result ;
}

#endif // __cplusplus

// 回転を表すクォータニオ?を返す
extern FLOAT4  QTRot(  VECTOR   Axis, float  Angle ) ;
extern DOUBLE4 QTRotD( VECTOR_D Axis, double Angle ) ;

// 3?元空間上の点を任意の軸の周りに任意の角度だけ回転させる関?
extern VECTOR   VRotQ(  VECTOR   P, VECTOR   Axis, float  Angle ) ;
extern VECTOR_D VRotQD( VECTOR_D P, VECTOR_D Axis, double Angle ) ;










// DxBaseImage.cpp 関?プ?トタイプ宣言

// 基本イ?ージデータの?ード＋ＤＩＢ関係
extern	int			CreateGraphImageOrDIBGraph(            const TCHAR *FileName,                        const void *DataImage, int DataImageSize, int DataImageType /* LOADIMAGE_TYPE_FILE ? */ , int BmpFlag, int ReverseFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ;					// 画?ファイ?若しくは???上に展開された画?ファイ?イ?ージを読み?み、基本イ?ージデータ若しくはＢＭＰデータを構築する
extern	int			CreateGraphImageOrDIBGraphWithStrLen(  const TCHAR *FileName, size_t FileNameLength, const void *DataImage, int DataImageSize, int DataImageType /* LOADIMAGE_TYPE_FILE ? */ , int BmpFlag, int ReverseFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ;					// 画?ファイ?若しくは???上に展開された画?ファイ?イ?ージを読み?み、基本イ?ージデータ若しくはＢＭＰデータを構築する
extern	int			CreateGraphImageType2(                 STREAMDATA *Src, BASEIMAGE *Dest ) ;																																																						// 画?データから構築したスト?ー?読み?み用データを使用して基本イ?ージデータを構築する
extern	int			CreateBmpInfo(                         BITMAPINFO *BmpInfo, int Width, int Height, int Pitch, const void *SrcGrData, void **DestGrData ) ;																																						// 24bitカ?ー形式のビットマップデータからＢＭＰデータを構築する
extern	int			GetImageSize_File(                     const TCHAR *FileName,                        int *SizeX, int *SizeY ) ;																																													// 画?ファイ?の横ピクセ??と縦ピクセ??を取得する
extern	int			GetImageSize_FileWithStrLen(           const TCHAR *FileName, size_t FileNameLength, int *SizeX, int *SizeY ) ;																																													// 画?ファイ?の横ピクセ??と縦ピクセ??を取得する
extern	int			GetImageSize_Mem(                      const void *FileImage, int FileImageSize, int *SizeX, int *SizeY ) ;																																														// ???上に展開された画?ファイ?の横ピクセ??と縦ピクセ??を取得する
extern	unsigned int GetGraphImageFullColorCode(           const BASEIMAGE *GraphImage, int x, int y ) ;																																																			// 基本イ?ージデータの指定座標のフ?カ?ーコードを取得する
extern	int			CreateGraphImage_plus_Alpha(           const TCHAR *FileName,                        const void *RgbImage, int RgbImageSize, int RgbImageType, const void *AlphaImage, int AlphaImageSize, int AlphaImageType, BASEIMAGE *RgbGraphImage, BASEIMAGE *AlphaGraphImage, int ReverseFlag ) ;		// 画?ファイ?若しくは???上に展開された画?ファイ?イ?ージを読み?み、基本イ?ージデータを構築する
extern	int			CreateGraphImage_plus_AlphaWithStrLen( const TCHAR *FileName, size_t FileNameLength, const void *RgbImage, int RgbImageSize, int RgbImageType, const void *AlphaImage, int AlphaImageSize, int AlphaImageType, BASEIMAGE *RgbGraphImage, BASEIMAGE *AlphaGraphImage, int ReverseFlag ) ;		// 画?ファイ?若しくは???上に展開された画?ファイ?イ?ージを読み?み、基本イ?ージデータを構築する
extern	int			ReverseGraphImage(                     BASEIMAGE *GraphImage ) ;																																																								// 基本イ?ージデータを左右反転する

//extern int		AddUserGraphLoadFunction( int ( *UserLoadFunc )( FILE *fp, BITMAPINFO **BmpInfo, void **GraphData ) ) ;																						// ?ーザー定義の画?データ読み?み関?を登録する
//extern int		AddUserGraphLoadFunction2( int ( *UserLoadFunc )( void *Image, int ImageSize, int ImageType, BITMAPINFO **BmpInfo, void **GraphData ) ) ;													// ?ーザー定義の画?データ読み?み関?を登録する
//extern int		AddUserGraphLoadFunction3( int ( *UserLoadFunc )( void *DataImage, int DataImageSize, int DataImageType, int BmpFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ) ;	// ?ーザー定義の画?データ読み?み関?Ver3を登録する
extern	int			AddUserGraphLoadFunction4( int (* UserLoadFunc )( STREAMDATA *Src, BASEIMAGE *BaseImage ) ) ; 																								// ?ーザー定義の画?データ読み?み関?Ver4を登録する
//extern int		SubUserGraphLoadFunction( int ( *UserLoadFunc )( FILE *fp, BITMAPINFO **BmpInfo, void **GraphData ) ) ;																						// ?ーザー定義の画?データ読み?み関?を登録から?消する
//extern int		SubUserGraphLoadFunction2( int ( *UserLoadFunc )( void *Image, int ImageSize, int ImageType, BITMAPINFO **BmpInfo, void **GraphData ) ) ;													// ?ーザー定義の画?データ読み?み関?を登録から?消する
//extern int		SubUserGraphLoadFunction3( int ( *UserLoadFunc )( void *DataImage, int DataImageSize, int DataImageType, int BmpFlag, BASEIMAGE *BaseImage, BITMAPINFO **BmpInfo, void **GraphData ) ) ;	// ?ーザー定義の画?データ読み?み関?Ver3を登録から?消する
extern	int			SubUserGraphLoadFunction4( int (* UserLoadFunc )( STREAMDATA *Src, BASEIMAGE *BaseImage ) ) ; 																								// ?ーザー定義の画?データ読み?み関?Ver4を登録から?消する

extern	int			SetUseFastLoadFlag(              int Flag ) ;														// ?速読み?み?ーチ?を使用するかどうかを設定する( TRUE:使用する( デフォ?ト )  FALSE:使用しない )
extern	int			SetGraphDataShavedMode(          int ShavedMode /* DX_SHAVEDMODE_NONE ? */ ) ;						// 画?減色?の画?劣化緩和???ードを設定する( デフォ?トでは緩和??無しの DX_SHAVEDMODE_NONE )
extern	int			GetGraphDataShavedMode(          void ) ;															// 画?減色?の画?劣化緩和???ードを取得する
extern	int			SetUsePremulAlphaConvertLoad(    int UseFlag ) ;													// 画?ファイ?読み?み?に乗算済みア?ファ画?に変換するかどうかを設定する( TRUE:変換??を行う  FALSE:変換??を行わない( デフォ?ト ) )
extern	int			GetUsePremulAlphaConvertLoad(    void ) ;															// 画?ファイ?読み?み?に乗算済みア?ファ画?に変換するかどうかを取得する( TRUE:変換??を行う  FALSE:変換??を行わない( デフォ?ト ) )
extern	int			SetUseConvertNormalFormatLoad(   int UseFlag ) ;													// 画?ファイ?読み?み?に DX_BASEIMAGE_FORMAT_NORMAL 以外の形式のイ?ージを DX_BASEIMAGE_FORMAT_NORMAL 形式のイ?ージに変換するかどうかを設定する( TRUE:変換??を行う  FALSE:変換??を行なわない( デフォ?ト ) )
extern	int			GetUseConvertNormalFormatLoad(   void ) ;															// 画?ファイ?読み?み?に DX_BASEIMAGE_FORMAT_NORMAL 以外の形式のイ?ージを DX_BASEIMAGE_FORMAT_NORMAL 形式のイ?ージに変換するかどうかを取得する( TRUE:変換??を行う  FALSE:変換??を行なわない( デフォ?ト ) )

// 基本イ?ージデータ構造体関係
extern	int			CreateBaseImage(                 const TCHAR *FileName,                        const void *FileImage, int FileImageSize, int DataType /*=LOADIMAGE_TYPE_FILE*/ , BASEIMAGE *BaseImage,  int ReverseFlag ) ;			// 画?ファイ?若しくは???上に展開された画?ファイ?イ?ージから基本イ?ージデータを構築する
extern	int			CreateBaseImageWithStrLen(       const TCHAR *FileName, size_t FileNameLength, const void *FileImage, int FileImageSize, int DataType /*=LOADIMAGE_TYPE_FILE*/ , BASEIMAGE *BaseImage,  int ReverseFlag ) ;			// 画?ファイ?若しくは???上に展開された画?ファイ?イ?ージから基本イ?ージデータを構築する
extern	int			CreateGraphImage(                const TCHAR *FileName,                        const void *DataImage, int DataImageSize, int DataImageType,                      BASEIMAGE *GraphImage, int ReverseFlag ) ;			// CreateBaseImage の?名称
extern	int			CreateBaseImageToFile(           const TCHAR *FileName,                                                                                                          BASEIMAGE *BaseImage,  int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?ファイ?から基本イ?ージデータを構築する
extern	int			CreateBaseImageToFileWithStrLen( const TCHAR *FileName, size_t FileNameLength,                                                                                   BASEIMAGE *BaseImage,  int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// 画?ファイ?から基本イ?ージデータを構築する
extern	int			CreateBaseImageToMem(                                                          const void *FileImage, int FileImageSize,                                         BASEIMAGE *BaseImage,  int ReverseFlag DEFAULTPARAM( = FALSE ) ) ;	// ???上に展開された画?ファイ?イ?ージから基本イ?ージデータを構築する
extern	int			CreateARGBF32ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＡＲＧＢ各チ??ネ? 32bit ?動小?点型 カ?ーの基本イ?ージデータを作成する
extern	int			CreateARGBF16ColorBaseImage(     int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＡＲＧＢ各チ??ネ? 16bit ?動小?点型 カ?ーの基本イ?ージデータを作成する
extern	int			CreateXRGB8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＸＲＧＢ８カ?ーの基本イ?ージデータを作成する
extern	int			CreateARGB8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＡＲＧＢ８カ?ーの基本イ?ージデータを作成する
extern	int			CreateRGBA8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＲＧＢＡ８カ?ーの基本イ?ージデータを作成する
extern	int			CreateABGR8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＡＢＧＲ８カ?ーの基本イ?ージデータを作成する
extern	int			CreateBGRA8ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＢＧＲＡ８カ?ーの基本イ?ージデータを作成する
extern	int			CreateARGB4ColorBaseImage(       int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＡＲＧＢ４カ?ーの基本イ?ージデータを作成する
extern	int			CreateA1R5G5B5ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// Ａ１Ｒ５Ｇ５Ｂ５カ?ーの基本イ?ージデータを作成する
extern	int			CreateX1R5G5B5ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// Ｘ１Ｒ５Ｇ５Ｂ５カ?ーの基本イ?ージデータを作成する
extern	int			CreateR5G5B5A1ColorBaseImage(    int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// Ｒ５Ｇ５Ｂ５Ａ１カ?ーの基本イ?ージデータを作成する
extern	int			CreateR5G6B5ColorBaseImage(      int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// Ｒ５Ｇ６Ｂ５カ?ーの基本イ?ージデータを作成する
extern	int			CreateRGB8ColorBaseImage(        int SizeX, int SizeY,                             BASEIMAGE *BaseImage ) ;																							// ＲＧＢ８カ?ーの基本イ?ージデータを作成する
extern	int			CreatePAL8ColorBaseImage(        int SizeX, int SizeY,                             BASEIMAGE *BaseImage, int UseAlpha DEFAULTPARAM( = FALSE ) ) ;													// パ?ット８ビットカ?ーの基本イ?ージデータを作成する
extern	int			CreateColorDataBaseImage(        int SizeX, int SizeY, const COLORDATA *ColorData, BASEIMAGE *BaseImage ) ;																							// 指定のカ?ーフォーマットの基本イ?ージデータを作成する
extern	int			GetBaseImageGraphDataSize(       const BASEIMAGE *BaseImage ) ;																																		// 基本イ?ージデータのイ?ージサイズを取得する( 単位：byte )
extern	int			DerivationBaseImage(             const BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2, BASEIMAGE *NewBaseImage ) ;																			// 基本イ?ージデータの指定の?分だけを使う基本イ?ージデータの情報を作成する( BaseImage にはフォーマットが DX_BASEIMAGE_FORMAT_NORMAL でミップマップを使用していない画?のみ使用可能 )

extern	int			ReleaseBaseImage(                BASEIMAGE *BaseImage ) ;																																			// 基本イ?ージデータの後始?を行う
extern	int			ReleaseGraphImage(               BASEIMAGE *GraphImage ) ;																																			// ReleaseBaseImage の?名称

extern	int			ConvertNormalFormatBaseImage(    BASEIMAGE *BaseImage, int ReleaseOrigGraphData DEFAULTPARAM( = TRUE ) ) ;																							// DX_BASEIMAGE_FORMAT_NORMAL 以外の形式のイ?ージを DX_BASEIMAGE_FORMAT_NORMAL 形式のイ?ージに変換する
extern	int			ConvertPremulAlphaBaseImage(     BASEIMAGE *BaseImage ) ;																																			// 通常のαチ??ネ?付き画?を乗算済みαチ??ネ?付き画?に変換する( ピクセ?フォーマットが ARGB8 以外の場?は ARGB8 に変換されます )
extern	int			ConvertInterpAlphaBaseImage(     BASEIMAGE *BaseImage ) ;																																			// 乗算済みαチ??ネ?付き画?を通常のαチ??ネ?付き画?に変換する( ピクセ?フォーマットが ARGB8 以外の場?は ARGB8 に変換されます )

extern	int			GetDrawScreenBaseImage(          int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage ) ;																											// 描画対象の画面から指定領域を基本イ?ージデータに転?する
extern	int			GetDrawScreenBaseImageDestPos(   int x1, int y1, int x2, int y2, BASEIMAGE *BaseImage, int DestX, int DestY ) ;																						// 描画対象の画面から指定領域を基本イ?ージデータに転?する( 転?先座標指定版 )
extern	int			FillBaseImage(                         BASEIMAGE *BaseImage, int r, int g, int b, int a ) ;																											// 基本イ?ージデータを指定の色で塗りつぶす
extern	int			FillRectBaseImage(                     BASEIMAGE *BaseImage, int x, int y, int w, int h, int r, int g, int b, int a ) ;																				// 基本イ?ージデータの指定の領域を指定の色で塗りつぶす
extern	int			ClearRectBaseImage(                    BASEIMAGE *BaseImage, int x, int y, int w, int h ) ;																											// 基本イ?ージデータの指定の領域を０ク?アする
extern	int			GetPaletteBaseImage(             const BASEIMAGE *BaseImage, int PaletteNo, int *r, int *g, int *b, int *a ) ;																						// 基本イ?ージデータのパ?ットを取得する
extern	int			SetPaletteBaseImage(                   BASEIMAGE *BaseImage, int PaletteNo, int  r, int  g, int  b, int  a ) ;																						// 基本イ?ージデータのパ?ットをセットする
extern	int			SetPixelPalCodeBaseImage(              BASEIMAGE *BaseImage, int x, int y, int palNo ) ;																											// 基本イ?ージデータの指定の座標の色コードを変更する(パ?ット画?用)
extern	int			GetPixelPalCodeBaseImage(        const BASEIMAGE *BaseImage, int x, int y ) ;																														// 基本イ?ージデータの指定の座標の色コードを取得する(パ?ット画?用)
extern	int			SetPixelBaseImage(                     BASEIMAGE *BaseImage, int x, int y, int    r, int    g, int    b, int    a ) ;																				// 基本イ?ージデータの指定の座標の色を変更する(各色要素は０～２５５)
extern	int			SetPixelBaseImageF(                    BASEIMAGE *BaseImage, int x, int y, float  r, float  g, float  b, float  a ) ;																				// 基本イ?ージデータの指定の座標の色を変更する(各色要素は?動小?点?)
extern	int			GetPixelBaseImage(               const BASEIMAGE *BaseImage, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;																				// 基本イ?ージデータの指定の座標の色を取得する(各色要素は０～２５５)
extern	int			GetPixelBaseImageF(              const BASEIMAGE *BaseImage, int x, int y, float *r, float *g, float *b, float *a ) ;																				// 基本イ?ージデータの指定の座標の色を取得する(各色要素は?動小?点?)
extern	int			DrawLineBaseImage(                     BASEIMAGE *BaseImage, int x1, int y1, int x2, int y2, int r, int g, int b, int a ) ;																			// 基本イ?ージデータの指定の座標に線を描画する(各色要素は０～２５５)
extern	int			DrawCircleBaseImage(                   BASEIMAGE *BaseImage, int x, int y, int radius, int r, int g, int b, int a, int FillFlag DEFAULTPARAM( = TRUE ) ) ;											// 基本イ?ージデータの指定の座標に円を描画する(各色要素は０～２５５)
extern	int			BltBaseImage(                          int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// 基本イ?ージデータを別の基本イ?ージデータに転?する
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			BltBaseImage(                                                                          int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// 基本イ?ージデータを別の基本イ?ージデータに転?する
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			BltBaseImage2(                                                                         int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage ) ;									// 基本イ?ージデータを別の基本イ?ージデータに転?する
extern	int			BltBaseImageWithTransColor(            int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage, int Tr, int Tg, int Tb, int Ta ) ;	// 基本イ?ージデータを別の基本イ?ージデータに透過色??付きで転?する
extern	int			BltBaseImageWithAlphaBlend(            int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int DestX, int DestY, BASEIMAGE *SrcBaseImage, BASEIMAGE *DestBaseImage, int Opacity DEFAULTPARAM( = 255 ) ) ;	// 基本イ?ージデータを別の基本イ?ージデータにア?ファ値のブ??ドを考慮した上で転?する( Opacity は透明度 : 0( 完全透明 ) ～ 255( 完全不透明 ) )( 出力先が ARGB8 形式以外の場?はエ?ーになります )
extern	int			ReverseBaseImageH(                     BASEIMAGE *BaseImage ) ;																																		// 基本イ?ージデータを左右反転する
extern	int			ReverseBaseImageV(                     BASEIMAGE *BaseImage ) ;																																		// 基本イ?ージデータを上下反転する
extern	int			ReverseBaseImage(                      BASEIMAGE *BaseImage ) ;																																		// 基本イ?ージデータを上下左右反転する
extern	int			CheckPixelAlphaBaseImage(        const BASEIMAGE *BaseImage ) ;																																		// 基本イ?ージデータに含まれるピクセ?のア?ファ値をチェックする( 戻り値   -1:エ?ー  0:画?にア?ファ成分が無い  1:画?にア?ファ成分が?り、すべて最大(255)値  2:画?にア?ファ成分が?り、存在するア?ファ値は最小(0)と最大(255)もしくは最小(0)のみ　3:画?にア?ファ成分が?り、最小と最大以外の?間の値が?る )  
extern	int			GetBaseImageUseMaxPaletteNo(     const BASEIMAGE *BaseImage ) ;																																		// 基本イ?ージデータで使用されているパ?ット番?の最大値を取得する( パ?ット画?では無い場?は -1 が返る )

#ifndef DX_NON_JPEGREAD
extern	int			ReadJpegExif(                    const TCHAR *JpegFilePath,                            BYTE *ExifBuffer_Array, size_t ExifBufferSize ) ;															// JPEGファイ?の Exif情報を取得する、ExifBuffer を NULL に渡すと、戻り値の情報のサイズのみ取得できます( 戻り値  -1:エ?ー  -1以外：Exif情報のサイズ )
extern	int			ReadJpegExifWithStrLen(          const TCHAR *JpegFilePath, size_t JpegFilePathLength, BYTE *ExifBuffer_Array, size_t ExifBufferSize ) ;															// JPEGファイ?の Exif情報を取得する、ExifBuffer を NULL に渡すと、戻り値の情報のサイズのみ取得できます( 戻り値  -1:エ?ー  -1以外：Exif情報のサイズ )
#endif // DX_NON_JPEGREAD

#ifndef DX_NON_SAVEFUNCTION

extern	int			SaveBaseImageToBmp(              const TCHAR *FilePath,                        const BASEIMAGE *BaseImage ) ;																						// 基本イ?ージデータをＢＭＰ画?として保存する
extern	int			SaveBaseImageToBmpWithStrLen(    const TCHAR *FilePath, size_t FilePathLength, const BASEIMAGE *BaseImage ) ;																						// 基本イ?ージデータをＢＭＰ画?として保存する
extern	int			SaveBaseImageToDds(              const TCHAR *FilePath,                        const BASEIMAGE *BaseImage ) ;																						// 基本イ?ージデータをＤＤＳ画?として保存する
extern	int			SaveBaseImageToDdsWithStrLen(    const TCHAR *FilePath, size_t FilePathLength, const BASEIMAGE *BaseImage ) ;																						// 基本イ?ージデータをＤＤＳ画?として保存する
#ifndef DX_NON_PNGREAD
extern	int			SaveBaseImageToPng(              const TCHAR *FilePath,                        BASEIMAGE *BaseImage, int CompressionLevel ) ;																		// 基本イ?ージデータをＰＮＧ画?として保存する
extern	int			SaveBaseImageToPngWithStrLen(    const TCHAR *FilePath, size_t FilePathLength, BASEIMAGE *BaseImage, int CompressionLevel ) ;																		// 基本イ?ージデータをＰＮＧ画?として保存する
#endif // DX_NON_PNGREAD
#ifndef DX_NON_JPEGREAD
extern	int			SaveBaseImageToJpeg(             const TCHAR *FilePath,                        BASEIMAGE *BaseImage, int Quality, int Sample2x1 ) ;																	// 基本イ?ージデータをＪＰＥＧ画?として保存する
extern	int			SaveBaseImageToJpegWithStrLen(   const TCHAR *FilePath, size_t FilePathLength, BASEIMAGE *BaseImage, int Quality, int Sample2x1 ) ;																	// 基本イ?ージデータをＪＰＥＧ画?として保存する
#endif // DX_NON_JPEGREAD

#endif // DX_NON_SAVEFUNCTION

// 基本イ?ージ描画
extern	int			DrawBaseImage(					int x, int y, BASEIMAGE *BaseImage ) ;																																// 基本イ?ージデータを描画する

// カ?ーマッチ?グしながらイ?ージデータ間転?を行う Ver2
extern int			GraphColorMatchBltVer2(       void *DestGraphData, int DestPitch,  const COLORDATA *DestColorData,
											const void *SrcGraphData,  int SrcPitch,   const COLORDATA *SrcColorData,
											const void *AlphaMask,     int AlphaPitch, const COLORDATA *AlphaColorData,
											POINT DestPoint, const RECT *SrcRect, int ReverseFlag,
											int TransColorAlphaTestFlag, unsigned int TransColor,
											int ImageShavedMode, int AlphaOnlyFlag DEFAULTPARAM( = FALSE ) ,
											int RedIsAlphaFlag DEFAULTPARAM( = FALSE ) , int TransColorNoMoveFlag DEFAULTPARAM( = FALSE ) ,
											int Pal8ColorMatch DEFAULTPARAM( = FALSE ) ) ;


// 色情報取得関係
extern	COLOR_F			GetColorF(               float Red, float Green, float Blue, float Alpha ) ;													// ?動小?点型のカ?ー値を作成する
extern	COLOR_U8		GetColorU8(              int Red, int Green, int Blue, int Alpha ) ;															// ??なし整?８ビットのカ?ー値を作成する
extern	unsigned int	GetColor(                int Red, int Green, int Blue ) ;																		// DrawPixel ?の描画関?で使用するカ?ー値を取得する
extern	int				GetColor2(               unsigned int Color, int *Red, int *Green, int *Blue ) ;												// カ?ー値から赤、緑、青の値を取得する
extern	unsigned int	GetColor3(               const COLORDATA *ColorData, int Red, int Green, int Blue, int Alpha DEFAULTPARAM( = 255 ) ) ;			// 指定のピクセ?フォーマットに対?したカ?ー値を得る
extern	unsigned int	GetColor4(               const COLORDATA *DestColorData, const COLORDATA* SrcColorData, unsigned int SrcColor ) ;				// 指定のカ?ーフォーマットのカ?ー値を別のカ?ーフォーマットのカ?ー値に変換する
extern	int				GetColor5(               const COLORDATA *ColorData, unsigned int Color, int *Red, int *Green, int *Blue, int *Alpha DEFAULTPARAM( = NULL ) ) ;	// 指定のカ?ーフォーマットのカ?ー値を赤、緑、青、ア?ファの値を取得する
extern	int				CreatePaletteColorData(  COLORDATA *ColorDataBuf ) ;																			// パ?ットカ?ーのカ?ーフォーマットを構築する
extern	int				CreateARGBF32ColorData(  COLORDATA *ColorDataBuf ) ;																			// ＡＲＧＢ各チ??ネ? 32bit ?動小?点型カ?ーのカ?ーフォーマットを構築する
extern	int				CreateARGBF16ColorData(  COLORDATA *ColorDataBuf ) ;																			// ＡＲＧＢ各チ??ネ? 16bit ?動小?点型カ?ーのカ?ーフォーマットを構築する
extern	int				CreateXRGB8ColorData(    COLORDATA *ColorDataBuf ) ;																			// ＸＲＧＢ８カ?ーのカ?ーフォーマットを構築する
extern	int				CreateARGB8ColorData(    COLORDATA *ColorDataBuf ) ;																			// ＡＲＧＢ８カ?ーのカ?ーフォーマットを構築する
extern	int				CreateRGBA8ColorData(    COLORDATA *ColorDataBuf ) ;																			// ＲＧＢＡ８カ?ーのカ?ーフォーマットを構築する
extern	int				CreateABGR8ColorData(    COLORDATA *ColorDataBuf ) ;																			// ＡＢＧＲ８カ?ーのカ?ーフォーマットを構築する
extern	int				CreateBGRA8ColorData(    COLORDATA *ColorDataBuf ) ;																			// ＢＧＲＡ８カ?ーのカ?ーフォーマットを構築する
extern	int				CreateBGR8ColorData(     COLORDATA *ColorDataBuf ) ;																			// ＢＧＲ８カ?ーのカ?ーフォーマットを構築する
extern	int				CreateARGB4ColorData(    COLORDATA *ColorDataBuf ) ;																			// ＡＲＧＢ４カ?ーのカ?ーフォーマットを構築する
extern	int				CreateA1R5G5B5ColorData( COLORDATA *ColorDataBuf ) ;																			// Ａ１Ｒ５Ｇ５Ｂ５カ?ーのカ?ーフォーマットを構築する
extern	int				CreateX1R5G5B5ColorData( COLORDATA *ColorDataBuf ) ;																			// Ｘ１Ｒ５Ｇ５Ｂ５カ?ーのカ?ーフォーマットを構築する
extern	int				CreateR5G5B5A1ColorData( COLORDATA *ColorDataBuf ) ;																			// Ｒ５Ｇ５Ｂ５Ａ１カ?ーのカ?ーフォーマットを構築する
extern	int				CreateR5G6B5ColorData(   COLORDATA *ColorDataBuf ) ;																			// Ｒ５Ｇ６Ｂ５カ?ーのカ?ーフォーマットを構築する
extern	int				CreateFullColorData(     COLORDATA *ColorDataBuf ) ;																			// ２４ビットカ?ーのカ?ーフォーマットを構築する
extern	int				CreateGrayColorData(     COLORDATA *ColorDataBuf ) ;																			// グ?ースケー?のカ?ーフォーマットを構築する
extern	int				CreatePal8ColorData(     COLORDATA *ColorDataBuf, int UseAlpha DEFAULTPARAM( = FALSE ) ) ;										// パ?ット２５６色のカ?ーフォーマットを構築する
extern	int				CreateColorData(         COLORDATA *ColorDataBuf, int ColorBitDepth,
										         DWORD RedMask, DWORD GreenMask, DWORD BlueMask, DWORD AlphaMask,
												 int ChannelNum DEFAULTPARAM( = 0 ), int ChannelBitDepth DEFAULTPARAM( = 0 ), int FloatTypeFlag DEFAULTPARAM( = FALSE ) ) ;				// カ?ーフォーマットを作成する
extern	void			SetColorDataNoneMask(    COLORDATA *ColorData ) ;																				// NoneMask 以外の要素を?めた COLORDATA 構造体の情報を元に NoneMask をセットする
extern	int				CmpColorData(            const COLORDATA *ColorData1, const COLORDATA *ColorData2 ) ;											// 二つのカ?ーフォーマットが?しいかどうか調べる( 戻り値　TRUE:?しい  FALSE:?しくない )













// DxSoftImage.cpp関?プ?トタイプ宣言
#ifndef DX_NON_SOFTIMAGE
extern	int			InitSoftImage(                        void ) ;																			// ソフトウエアイ?ージハ?ド?を全て削?する
extern	int			LoadSoftImage(                        const TCHAR *FileName                        ) ;									// 画?ファイ?を読み?みソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )
extern	int			LoadSoftImageWithStrLen(              const TCHAR *FileName, size_t FileNameLength ) ;									// 画?ファイ?を読み?みソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )
extern	int			LoadARGB8ColorSoftImage(              const TCHAR *FileName                        ) ;									// 画?ファイ?を読み?みソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )( 読み?んだ画?が RGBA8 以外のフォーマットだった場?は RGBA8 カ?ーに変換 )
extern	int			LoadARGB8ColorSoftImageWithStrLen(    const TCHAR *FileName, size_t FileNameLength ) ;									// 画?ファイ?を読み?みソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )( 読み?んだ画?が RGBA8 以外のフォーマットだった場?は RGBA8 カ?ーに変換 )
extern	int			LoadXRGB8ColorSoftImage(              const TCHAR *FileName                        ) ;									// 画?ファイ?を読み?みソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )( 読み?んだ画?が XGBA8 以外のフォーマットだった場?は XGBA8 カ?ーに変換 )
extern	int			LoadXRGB8ColorSoftImageWithStrLen(    const TCHAR *FileName, size_t FileNameLength ) ;									// 画?ファイ?を読み?みソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )( 読み?んだ画?が XGBA8 以外のフォーマットだった場?は XGBA8 カ?ーに変換 )
extern	int			LoadSoftImageToMem(                   const void *FileImage, int FileImageSize ) ;										// ???上に展開された画?ファイ?イ?ージからソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )
extern	int			LoadARGB8ColorSoftImageToMem(         const void *FileImage, int FileImageSize ) ;										// ???上に展開された画?ファイ?イ?ージからソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )( 読み?んだ画?が RGBA8 以外のフォーマットだった場?は RGBA8 カ?ーに変換 )
extern	int			LoadXRGB8ColorSoftImageToMem(         const void *FileImage, int FileImageSize ) ;										// ???上に展開された画?ファイ?イ?ージからソフトウエアイ?ージハ?ド?を作成する( -1:エ?ー  -1以外:イ?ージハ?ド? )( 読み?んだ画?が XGBA8 以外のフォーマットだった場?は XGBA8 カ?ーに変換 )
extern	int			MakeSoftImage(                        int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( -1:エ?ー  -1以外:イ?ージハ?ド? )
extern	int			MakeARGBF32ColorSoftImage(            int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( RGBA 各チ??ネ? 32bit ?動小?点型 カ?ー )
extern	int			MakeARGBF16ColorSoftImage(            int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( RGBA 各チ??ネ? 16bit ?動小?点型 カ?ー )
extern	int			MakeXRGB8ColorSoftImage(              int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( XRGB8 カ?ー )
extern	int			MakeARGB8ColorSoftImage(              int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( RGBA8 カ?ー )
extern	int			MakeRGBA8ColorSoftImage(              int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( RGBA8 カ?ー )
extern	int			MakeABGR8ColorSoftImage(              int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( ABGR8 カ?ー )
extern	int			MakeBGRA8ColorSoftImage(              int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( BGRA8 カ?ー )
extern	int			MakeARGB4ColorSoftImage(              int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( ARGB4 カ?ー )
extern	int			MakeA1R5G5B5ColorSoftImage(           int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( A1R5G5B5 カ?ー )
extern	int			MakeX1R5G5B5ColorSoftImage(           int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( X1R5G5B5 カ?ー )
extern	int			MakeR5G5B5A1ColorSoftImage(           int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( R5G5B5A1 カ?ー )
extern	int			MakeR5G6B5ColorSoftImage(             int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( R5G6B5 カ?ー )
extern	int			MakeRGB8ColorSoftImage(               int SizeX, int SizeY ) ;															// ソフトウエアイ?ージハ?ド?の作成( RGB8 カ?ー )
extern	int			MakePAL8ColorSoftImage(               int SizeX, int SizeY, int UseAlpha DEFAULTPARAM( = FALSE ) ) ;					// ソフトウエアイ?ージハ?ド?の作成( パ?ット２５６色 カ?ー )
extern	int			MakeColorDataSoftImage(               int SizeX, int SizeY, const COLORDATA *ColorData ) ;								// ソフトウエアイ?ージハ?ド?の作成( COLORDATA でフォーマット指定 )

extern	int			DeleteSoftImage(                      int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?の削?する

extern	int			GetSoftImageSize(                     int SIHandle, int *Width, int *Height ) ;											// ソフトウエアイ?ージハ?ド?のサイズを取得する
extern	int			CheckPaletteSoftImage(                int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?がパ?ット画?かどうかを取得する( TRUE:パ?ット画?  FALSE:パ?ット画?じゃない )
extern	int			CheckAlphaSoftImage(                  int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?のフォーマットにα要素が?るかどうかを取得する( TRUE:?る  FALSE:ない )
extern	int			CheckPixelAlphaSoftImage(             int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?に含まれるピクセ?のα値をチェックする( 戻り値   -1:エ?ー  0:画?にα成分が無い  1:画?にα成分が?り、すべて最大(255)値  2:画?にα成分が?り、存在するα値は最小(0)と最大(255)もしくは最小(0)のみ　3:画?にα成分が?り、最小と最大以外の?間の値が?る )  

extern	int			GetDrawScreenSoftImage(               int x1, int y1, int x2, int y2, int SIHandle ) ;									// 描画対象の画面から指定領域をソフトウエアイ?ージハ?ド?に転?する
extern	int			GetDrawScreenSoftImageDestPos(        int x1, int y1, int x2, int y2, int SIHandle, int DestX, int DestY ) ;			// 描画対象の画面から指定領域をソフトウエアイ?ージハ?ド?に転?する( 転?先座標指定版 )
extern	int			FillSoftImage(                        int SIHandle, int r, int g, int b, int a ) ;										// ソフトウエアイ?ージハ?ド?を指定色で塗りつぶす(各色要素は０～２５５)
extern	int			ClearRectSoftImage(                   int SIHandle, int x, int y, int w, int h ) ;										// ソフトウエアイ?ージハ?ド?の指定の領域を０ク?アする
extern	int			GetPaletteSoftImage(                  int SIHandle, int PaletteNo, int *r, int *g, int *b, int *a ) ;					// ソフトウエアイ?ージハ?ド?のパ?ットを取得する(各色要素は０～２５５)
extern	int			SetPaletteSoftImage(                  int SIHandle, int PaletteNo, int  r, int  g, int  b, int  a ) ;					// ソフトウエアイ?ージハ?ド?のパ?ットを設定する(各色要素は０～２５５)
extern	int			DrawPixelPalCodeSoftImage(            int SIHandle, int x, int y, int palNo ) ;											// ソフトウエアイ?ージハ?ド?の指定座標にドットを描画する(パ?ット画?用、有効値は０～２５５)
extern	int			GetPixelPalCodeSoftImage(             int SIHandle, int x, int y ) ;													// ソフトウエアイ?ージハ?ド?の指定座標の色コードを取得する(パ?ット画?用、戻り値は０～２５５)
extern	void		*GetImageAddressSoftImage(            int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?の画?が格納されている???領域の先頭アド?スを取得する
extern	int			GetPitchSoftImage(                    int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?の???に格納されている画?データの1?イ?辺りのバイト?を取得する
extern	int			DrawPixelSoftImage(                   int SIHandle, int x, int y, int    r, int    g, int    b, int    a ) ;			// ソフトウエアイ?ージハ?ド?の指定座標にドットを描画する(各色要素は０～２５５)
extern	int			DrawPixelSoftImageF(                  int SIHandle, int x, int y, float  r, float  g, float  b, float  a ) ;			// ソフトウエアイ?ージハ?ド?の指定座標にドットを描画する(各色要素は?動小?点?)
extern	void		DrawPixelSoftImage_Unsafe_XRGB8(      int SIHandle, int x, int y, int    r, int    g, int    b ) ;						// ソフトウエアイ?ージハ?ド?の指定座標にドットを描画する(各色要素は０～２５５)、エ?ーチェックをしない代わりに?速ですが、範囲外の座標や ARGB8 以外のフォーマットのソフトハ?ド?を渡すと不正な???アクセスで強制終了します
extern	void		DrawPixelSoftImage_Unsafe_ARGB8(      int SIHandle, int x, int y, int    r, int    g, int    b, int    a ) ;			// ソフトウエアイ?ージハ?ド?の指定座標にドットを描画する(各色要素は０～２５５)、エ?ーチェックをしない代わりに?速ですが、範囲外の座標や XRGB8 以外のフォーマットのソフトハ?ド?を渡すと不正な???アクセスで強制終了します
extern	int			GetPixelSoftImage(                    int SIHandle, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;			// ソフトウエアイ?ージハ?ド?の指定座標の色を取得する(各色要素は０～２５５)
extern	int			GetPixelSoftImageF(                   int SIHandle, int x, int y, float *r, float *g, float *b, float *a ) ;			// ソフトウエアイ?ージハ?ド?の指定座標の色を取得する(各色要素は?動小?点?)
extern	void		GetPixelSoftImage_Unsafe_XRGB8(       int SIHandle, int x, int y, int   *r, int   *g, int   *b ) ;						// ソフトウエアイ?ージハ?ド?の指定座標の色を取得する(各色要素は０～２５５)、エ?ーチェックをしない代わりに?速ですが、範囲外の座標や XRGB8 以外のフォーマットのソフトハ?ド?を渡すと不正な???アクセスで強制終了します
extern	void		GetPixelSoftImage_Unsafe_ARGB8(       int SIHandle, int x, int y, int   *r, int   *g, int   *b, int   *a ) ;			// ソフトウエアイ?ージハ?ド?の指定座標の色を取得する(各色要素は０～２５５)、エ?ーチェックをしない代わりに?速ですが、範囲外の座標や ARGB8 以外のフォーマットのソフトハ?ド?を渡すと不正な???アクセスで強制終了します
extern	int			DrawLineSoftImage(                    int SIHandle, int x1, int y1, int x2, int y2, int r, int g, int b, int a ) ;		// ソフトウエアイ?ージハ?ド?の指定座標に線を描画する(各色要素は０～２５５)
extern	int			DrawCircleSoftImage(                  int SIHandle, int x, int y, int radius, int r, int g, int b, int a, int FillFlag DEFAULTPARAM( = TRUE ) ) ;	// ソフトウエアイ?ージハ?ド?の指定座標に円を描画する(各色要素は０～２５５)
extern	int			BltSoftImage(                         int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle ) ;										// ソフトウエアイ?ージハ?ド?を別のソフトウエアイ?ージハ?ド?に転?する
extern	int			BltSoftImageWithTransColor(           int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle, int Tr, int Tg, int Tb, int Ta ) ;		// ソフトウエアイ?ージハ?ド?を別のソフトウエアイ?ージハ?ド?に透過色??付きで転?する
extern	int			BltSoftImageWithAlphaBlend(           int SrcX, int SrcY, int SrcSizeX, int SrcSizeY, int SrcSIHandle, int DestX, int DestY, int DestSIHandle, int Opacity DEFAULTPARAM( = 255 ) ) ;	// ソフトウエアイ?ージハ?ド?を別のソフトウエアイ?ージハ?ド?にア?ファ値のブ??ドを考慮した上で転?する( Opacity は透明度 : 0( 完全透明 ) ～ 255( 完全不透明 ) )( 出力先が ARGB8 形式以外の場?はエ?ーになります )
extern	int			ReverseSoftImageH(                    int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?を左右反転する
extern	int			ReverseSoftImageV(                    int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?を上下反転する
extern	int			ReverseSoftImage(                     int SIHandle ) ;																	// ソフトウエアイ?ージハ?ド?を上下左右反転する
extern	int			ConvertPremulAlphaSoftImage(          int SIHandle ) ;																	// 通常のαチ??ネ?付き画?を乗算済みαチ??ネ?付き画?に変換する( ピクセ?フォーマットが ARGB8 以外の場?は ARGB8 に変換されます )
extern	int			ConvertInterpAlphaSoftImage(          int SIHandle ) ;																	// 乗算済みαチ??ネ?付き画?を通常のαチ??ネ?付き画?に変換する( ピクセ?フォーマットが ARGB8 以外の場?は ARGB8 に変換されます )

#ifndef DX_NON_FONT
extern	int			BltStringSoftImage(                   int x, int y, const TCHAR *StrData,                       int DestSIHandle, int DestEdgeSIHandle DEFAULTPARAM( = -1 ) ,                        int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// ソフトウエアイ?ージハ?ド?に文?列を描画する( デフォ?トフォ?トハ?ド?を使用する )
extern	int			BltStringSoftImageWithStrLen(         int x, int y, const TCHAR *StrData, size_t StrDataLength, int DestSIHandle, int DestEdgeSIHandle DEFAULTPARAM( = -1 ) ,                        int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// ソフトウエアイ?ージハ?ド?に文?列を描画する( デフォ?トフォ?トハ?ド?を使用する )
extern	int			BltStringSoftImageToHandle(           int x, int y, const TCHAR *StrData,                       int DestSIHandle, int DestEdgeSIHandle /* ?が必要ない場?は -1 */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// ソフトウエアイ?ージハ?ド?に文?列を描画する( フォ?トハ?ド?使用版 )
extern	int			BltStringSoftImageToHandleWithStrLen( int x, int y, const TCHAR *StrData, size_t StrDataLength, int DestSIHandle, int DestEdgeSIHandle /* ?が必要ない場?は -1 */ , int FontHandle, int VerticalFlag DEFAULTPARAM( = FALSE ) ) ;		// ソフトウエアイ?ージハ?ド?に文?列を描画する( フォ?トハ?ド?使用版 )
#endif // DX_NON_FONT

extern	int			DrawSoftImage(                        int x, int y, int SIHandle ) ;														// ソフトウエアイ?ージハ?ド?を画面に描画する

#ifndef DX_NON_SAVEFUNCTION

extern	int			SaveSoftImageToBmp(                   const TCHAR *FilePath,                        int SIHandle ) ;											// ソフトウエアイ?ージハ?ド?をＢＭＰ画?ファイ?として保存する
extern	int			SaveSoftImageToBmpWithStrLen(         const TCHAR *FilePath, size_t FilePathLength, int SIHandle ) ;											// ソフトウエアイ?ージハ?ド?をＢＭＰ画?ファイ?として保存する
extern	int			SaveSoftImageToDds(                   const TCHAR *FilePath,                        int SIHandle ) ;											// ソフトウエアイ?ージハ?ド?をＤＤＳ画?ファイ?として保存する
extern	int			SaveSoftImageToDdsWithStrLen(         const TCHAR *FilePath, size_t FilePathLength, int SIHandle ) ;											// ソフトウエアイ?ージハ?ド?をＤＤＳ画?ファイ?として保存する
#ifndef DX_NON_PNGREAD
extern	int			SaveSoftImageToPng(                   const TCHAR *FilePath,                        int SIHandle, int CompressionLevel ) ;						// ソフトウエアイ?ージハ?ド?をＰＮＧ画?ファイ?として保存する CompressionLevel = 圧縮率、値が大きいほど?圧縮率??荷、０は無圧縮,0～9
extern	int			SaveSoftImageToPngWithStrLen(         const TCHAR *FilePath, size_t FilePathLength, int SIHandle, int CompressionLevel ) ;						// ソフトウエアイ?ージハ?ド?をＰＮＧ画?ファイ?として保存する CompressionLevel = 圧縮率、値が大きいほど?圧縮率??荷、０は無圧縮,0～9
#endif // DX_NON_PNGREAD
#ifndef DX_NON_JPEGREAD
extern	int			SaveSoftImageToJpeg(                  const TCHAR *FilePath,                        int SIHandle, int Quality, int Sample2x1 ) ;				// ソフトウエアイ?ージハ?ド?をＪＰＥＧ画?ファイ?として保存する Quality = 画質、値が大きいほど低圧縮?画質,0～100 
extern	int			SaveSoftImageToJpegWithStrLen(        const TCHAR *FilePath, size_t FilePathLength, int SIHandle, int Quality, int Sample2x1 ) ;				// ソフトウエアイ?ージハ?ド?をＪＰＥＧ画?ファイ?として保存する Quality = 画質、値が大きいほど低圧縮?画質,0～100 
#endif // DX_NON_JPEGREAD

#endif // DX_NON_SAVEFUNCTION

#endif // DX_NON_SOFTIMAGE


















#ifndef DX_NON_SOUND

// DxSound.cpp関?プ?トタイプ宣言

// サウ?ドデータ管?系関?
extern	int			InitSoundMem(                        void ) ;																					// 全てのサウ?ドハ?ド?を削?する

extern	int			AddSoundData(                        int Handle DEFAULTPARAM( = -1 ) ) ;																											// サウ?ドハ?ド?を作成する
extern	int			AddStreamSoundMem(                   STREAMDATA *Stream, int LoopNum,  int SoundHandle, int StreamDataType, int *CanStreamCloseFlag, int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// スト?ー?再生タイプのサウ?ドハ?ド?にスト?ー?データを再生対象に追加する
extern	int			AddStreamSoundMemToMem(              const void *FileImage, size_t FileImageSize, int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// スト?ー?再生タイプのサウ?ドハ?ド?に???上に展開したサウ?ドファイ?イ?ージを再生対象に追加する
extern	int			AddStreamSoundMemToFile(             const TCHAR *WaveFile,                            int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle DEFAULTPARAM( = -1 ) ) ;	// スト?ー?再生タイプのサウ?ドハ?ド?にサウ?ドファイ?を再生対象に追加する
extern	int			AddStreamSoundMemToFileWithStrLen(   const TCHAR *WaveFile, size_t WaveFilePathLength, int LoopNum,  int SoundHandle, int StreamDataType, int UnionHandle DEFAULTPARAM( = -1 ) ) ;	// スト?ー?再生タイプのサウ?ドハ?ド?にサウ?ドファイ?を再生対象に追加する
extern	int			SetupStreamSoundMem(                 int SoundHandle ) ;																		// スト?ー?再生タイプのサウ?ドハ?ド?の再生?備をする
extern	int			PlayStreamSoundMem(                  int SoundHandle, int PlayType DEFAULTPARAM( = DX_PLAYTYPE_LOOP ) , int TopPositionFlag DEFAULTPARAM( = TRUE ) ) ;	// スト?ー?再生タイプのサウ?ドハ?ド?の再生を開始する
extern	int			CheckStreamSoundMem(                 int SoundHandle ) ;																		// スト?ー?再生タイプのサウ?ドハ?ド?の再生状態を取得する
extern	int			StopStreamSoundMem(                  int SoundHandle, int IsNextLoopEnd DEFAULTPARAM( = FALSE ) ) ;								// スト?ー?再生タイプのサウ?ドハ?ド?の再生を停止する
extern	int			SetStreamSoundCurrentPosition(       LONGLONG Byte, int SoundHandle ) ;															// サウ?ドハ?ド?の再生位置をバイト単位で変更する(再生が止まっている?のみ有効)
extern	LONGLONG	GetStreamSoundCurrentPosition(       int SoundHandle ) ;																		// サウ?ドハ?ド?の再生位置をバイト単位で取得する
extern	int			SetStreamSoundCurrentTime(           LONGLONG Time, int SoundHandle ) ;															// サウ?ドハ?ド?の再生位置をミ?秒単位で設定する(圧縮形式の場?は正しく設定されない場?が?る)
extern	LONGLONG	GetStreamSoundCurrentTime(           int SoundHandle ) ;																		// サウ?ドハ?ド?の再生位置をミ?秒単位で取得する(圧縮形式の場?は正しい値が返ってこない場?が?る)
extern	int			ProcessStreamSoundMem(               int SoundHandle ) ;																		// スト?ー?再生タイプのサウ?ドハ?ド?の周期的な??を行う関?( 内?で自動的に呼ばれます )
extern	int			ProcessStreamSoundMemAll(            void ) ;																					// 有効なスト?ー?再生タイプのサウ?ドハ?ド?に対して ProcessStreamSoundMem を実行する( 内?で自動的に呼ばれます )


extern	int			LoadSoundMem2(                       const TCHAR *FileName1,                         const TCHAR *FileName2                         ) ;	// 前奏?と?ープ?に分かれたサウ?ドファイ?を読み?みサウ?ドハ?ド?を作成する
extern	int			LoadSoundMem2WithStrLen(             const TCHAR *FileName1, size_t FileName1Length, const TCHAR *FileName2, size_t FileName2Length ) ;	// 前奏?と?ープ?に分かれたサウ?ドファイ?を読み?みサウ?ドハ?ド?を作成する
extern	int			LoadBGM(                             const TCHAR *FileName                        ) ;													// 主にＢＧＭを読み?みサウ?ドハ?ド?を作成するのに適した関?
extern	int			LoadBGMWithStrLen(                   const TCHAR *FileName, size_t FileNameLength ) ;													// 主にＢＧＭを読み?みサウ?ドハ?ド?を作成するのに適した関?

extern	int			LoadSoundMemBase(                    const TCHAR *FileName,                        int BufferNum,                      int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// サウ?ドファイ?からサウ?ドハ?ド?を作成する
extern	int			LoadSoundMemBaseWithStrLen(          const TCHAR *FileName, size_t FileNameLength, int BufferNum,                      int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// サウ?ドファイ?からサウ?ドハ?ド?を作成する
extern	int			LoadSoundMem(                        const TCHAR *FileName,                        int BufferNum DEFAULTPARAM( = 3 ) , int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// LoadSoundMemBase の別名関?
extern	int			LoadSoundMemWithStrLen(              const TCHAR *FileName, size_t FileNameLength, int BufferNum DEFAULTPARAM( = 3 ) , int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// LoadSoundMemBase の別名関?
extern	int			LoadSoundMemToBufNumSitei(           const TCHAR *FileName,                        int BufferNum ) ;									// LoadSoundMem を使用して下さい
extern	int			LoadSoundMemToBufNumSiteiWithStrLen( const TCHAR *FileName, size_t FileNameLength, int BufferNum ) ;									// LoadSoundMem を使用して下さい
extern	int			DuplicateSoundMem(                   int SrcSoundHandle, int BufferNum DEFAULTPARAM( = 3 ) ) ;											// 同じサウ?ドデータを使用するサウ?ドハ?ド?を作成する( DX_SOUNDDATATYPE_MEMNOPRESS タイプのサウ?ドハ?ド?のみ可能 )

extern	int			LoadSoundMemByMemImageBase(          const void *FileImage, size_t FileImageSize, int BufferNum,                      int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// ???上に展開されたサウ?ドファイ?イ?ージからサウ?ドハ?ド?を作成する
extern	int			LoadSoundMemByMemImage(              const void *FileImage, size_t FileImageSize, int BufferNum DEFAULTPARAM( = 3 ) , int UnionHandle DEFAULTPARAM( = -1 ) ) ;		// LoadSoundMemByMemImageBase の別名関?
extern	int			LoadSoundMemByMemImage2(             const void *WaveImage, size_t WaveImageSize, const WAVEFORMATEX *WaveFormat, size_t WaveHeaderSize ) ;	// ???上に展開されたＰＣＭデータからサウ?ドハ?ド?を作成する
extern	int			LoadSoundMemByMemImageToBufNumSitei( const void *FileImage, size_t FileImageSize, int BufferNum ) ;										// LoadSoundMemByMemImageBase を使用して下さい
extern	int			LoadSoundMem2ByMemImage(             const void *FileImage1, size_t FileImageSize1, const void *FileImage2, size_t FileImageSize2 ) ;	// 前奏?と?ープ?に分かれた二つの???上に展開されたサウ?ドファイ?イ?ージからサウ?ドハ?ド?を作成する
extern	int			LoadSoundMemFromSoftSound(           int SoftSoundHandle, int BufferNum DEFAULTPARAM( = 3 ) ) ;											// ソフトウエアサウ?ドハ?ド?が?つサウ?ドデータからサウ?ドハ?ド?を作成する

extern	int			DeleteSoundMem(                      int SoundHandle ) ;																		// サウ?ドハ?ド?を削?する

extern	int			PlaySoundMem(                        int SoundHandle, int PlayType, int TopPositionFlag DEFAULTPARAM( = TRUE ) ) ;				// サウ?ドハ?ド?を再生する
extern	int			StopSoundMem(                                                                        int SoundHandle, int IsNextLoopEnd DEFAULTPARAM( = FALSE ) ) ;	// サウ?ドハ?ド?の再生を停止する( IsNextLoopEnd を TRUE にすると?回の?ープ終了のタイミ?グで音を止める )
extern	int			CheckSoundMem(                                                                       int SoundHandle ) ;						// サウ?ドハ?ド?が再生?かどうかを取得する
extern	int			SetPanSoundMem(                      int PanPal,                                     int SoundHandle ) ;						// サウ?ドハ?ド?のパ?を設定する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			ChangePanSoundMem(                   int PanPal,                                     int SoundHandle ) ;						// サウ?ドハ?ド?のパ?を設定する( -255 ～ 255 )
extern	int			GetPanSoundMem(                                                                      int SoundHandle ) ;						// サウ?ドハ?ド?のパ?を取得する
extern	int			SetVolumeSoundMem(                   int VolumePal,                                  int SoundHandle ) ;						// サウ?ドハ?ド?のボ??ー?を設定する( 100分の1デシベ?単位 0 ～ 10000 ) 
extern	int			ChangeVolumeSoundMem(                int VolumePal,                                  int SoundHandle ) ;						// サウ?ドハ?ド?のボ??ー?を設定する( 0 ～ 255 )
extern	int			GetVolumeSoundMem(                                                                   int SoundHandle ) ;						// サウ?ドハ?ド?のボ??ー?を取得する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			GetVolumeSoundMem2(                                                                  int SoundHandle ) ;						// サウ?ドハ?ド?のボ??ー?を取得する( 0 ～ 255 )
extern	int			SetChannelVolumeSoundMem(            int Channel, int VolumePal,                     int SoundHandle ) ;						// サウ?ドハ?ド?の指定のチ??ネ?のボ??ー?を設定する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			ChangeChannelVolumeSoundMem(         int Channel, int VolumePal,                     int SoundHandle ) ;						// サウ?ドハ?ド?の指定のチ??ネ?のボ??ー?を設定する( 0 ～ 255 )
extern	int			GetChannelVolumeSoundMem(            int Channel,                                    int SoundHandle ) ;						// サウ?ドハ?ド?の指定のチ??ネ?のボ??ー?を取得する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			GetChannelVolumeSoundMem2(           int Channel,                                    int SoundHandle ) ;						// サウ?ドハ?ド?の指定のチ??ネ?のボ??ー?を取得する( 0 ～ 255 )
extern	int			SetFrequencySoundMem(                int FrequencyPal,                               int SoundHandle ) ;						// サウ?ドハ?ド?の再生周波?を設定する
extern	int			GetFrequencySoundMem(                                                                int SoundHandle ) ;						// サウ?ドハ?ド?の再生周波?を取得する
extern	int			ResetFrequencySoundMem(                                                              int SoundHandle ) ;						// サウ?ドハ?ド?の再生周波?を読み?み直後の状態に戻す

extern	int			SetNextPlayPanSoundMem(              int PanPal,                                     int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用するパ?を設定する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			ChangeNextPlayPanSoundMem(           int PanPal,                                     int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用するパ?を設定する( -255 ～ 255 )
extern	int			SetNextPlayVolumeSoundMem(           int VolumePal,                                  int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用するボ??ー?を設定する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			ChangeNextPlayVolumeSoundMem(        int VolumePal,                                  int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用するボ??ー?を設定する( 0 ～ 255 )
extern	int			SetNextPlayChannelVolumeSoundMem(    int Channel, int VolumePal,                     int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用するチ??ネ?のボ??ー?を設定する( 100分の1デシベ?単位 0 ～ 10000 )
extern	int			ChangeNextPlayChannelVolumeSoundMem( int Channel, int VolumePal,                     int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用するチ??ネ?のボ??ー?を設定する( 0 ～ 255 )
extern	int			SetNextPlayFrequencySoundMem(        int FrequencyPal,                               int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生にのみ使用する再生周波?を設定する

extern	int			SetCurrentPositionSoundMem(          LONGLONG SamplePosition,                        int SoundHandle ) ;						// サウ?ドハ?ド?の再生位置をサ?プ?単位で設定する(再生が止まっている?のみ有効)
extern	LONGLONG	GetCurrentPositionSoundMem(                                                          int SoundHandle ) ;						// サウ?ドハ?ド?の再生位置をサ?プ?単位で取得する
extern	int			SetSoundCurrentPosition(             LONGLONG Byte,                                  int SoundHandle ) ;						// サウ?ドハ?ド?の再生位置をバイト単位で設定する(再生が止まっている?のみ有効)
extern	LONGLONG	GetSoundCurrentPosition(                                                             int SoundHandle ) ;						// サウ?ドハ?ド?の再生位置をバイト単位で取得する
extern	int			SetSoundCurrentTime(                 LONGLONG Time,                                  int SoundHandle ) ;						// サウ?ドハ?ド?の再生位置をミ?秒単位で設定する(圧縮形式の場?は正しく設定されない場?が?る)
extern	LONGLONG	GetSoundCurrentTime(                                                                 int SoundHandle ) ;						// サウ?ドハ?ド?の再生位置をミ?秒単位で取得する(圧縮形式の場?は正しい値が返ってこない場?が?る)
extern	LONGLONG	GetSoundTotalSample(                                                                 int SoundHandle ) ;						// サウ?ドハ?ド?の音の??間をサ?プ?単位で取得する
extern	LONGLONG	GetSoundTotalTime(                                                                   int SoundHandle ) ;						// サウ?ドハ?ド?の音の??間をミ?秒単位で取得する

extern	int			SetLoopPosSoundMem(                  LONGLONG LoopTime,                              int SoundHandle ) ;						// SetLoopTimePosSoundMem の別名関?
extern	int			SetLoopTimePosSoundMem(              LONGLONG LoopTime,                              int SoundHandle ) ;						// サウ?ドハ?ド?に?ープ位置を設定する(ミ?秒単位)
extern	int			SetLoopSamplePosSoundMem(            LONGLONG LoopSamplePosition,                    int SoundHandle ) ;						// サウ?ドハ?ド?に?ープ位置を設定する(サ?プ?単位)

extern	int			SetLoopStartTimePosSoundMem(         LONGLONG LoopStartTime,                         int SoundHandle ) ;						// サウ?ドハ?ド?に?ープ開始位置を設定する(ミ?秒単位)
extern	int			SetLoopStartSamplePosSoundMem(       LONGLONG LoopStartSamplePosition,               int SoundHandle ) ;						// サウ?ドハ?ド?に?ープ開始位置を設定する(サ?プ?単位)

extern	int			SetLoopAreaTimePosSoundMem(          LONGLONG  LoopStartTime, LONGLONG  LoopEndTime,                     int SoundHandle ) ;	// サウ?ドハ?ド?に?ープ範囲を設定する(ミ?秒単位)
extern	int			GetLoopAreaTimePosSoundMem(          LONGLONG *LoopStartTime, LONGLONG *LoopEndTime,                     int SoundHandle ) ;	// サウ?ドハ?ド?に?ープ範囲を取得する(ミ?秒単位)
extern	int			SetLoopAreaSamplePosSoundMem(        LONGLONG  LoopStartSamplePosition, LONGLONG  LoopEndSamplePosition, int SoundHandle ) ;	// サウ?ドハ?ド?に?ープ範囲を設定する(サ?プ?単位)
extern	int			GetLoopAreaSamplePosSoundMem(        LONGLONG *LoopStartSamplePosition, LONGLONG *LoopEndSamplePosition, int SoundHandle ) ;	// サウ?ドハ?ド?に?ープ範囲を取得する(サ?プ?単位)

extern	int			SetPlayFinishDeleteSoundMem(         int DeleteFlag,                                 int SoundHandle ) ;						// サウ?ドハ?ド?の再生が終了したら自動的にハ?ド?を削?するかどうかを設定する

extern	int			Set3DReverbParamSoundMem(            const SOUND3D_REVERB_PARAM *Param,              int SoundHandle ) ;						// サウ?ドハ?ド?の３Ｄサウ?ド用の?バーブパ??ータを設定する
extern	int			Set3DPresetReverbParamSoundMem(      int PresetNo /* DX_REVERB_PRESET_DEFAULT ? */ , int SoundHandle ) ;						// サウ?ドハ?ド?の３Ｄサウ?ド用の?バーブパ??ータをプ?セットを使用して設定する
extern	int			Set3DReverbParamSoundMemAll(         const SOUND3D_REVERB_PARAM *Param, int PlaySoundOnly DEFAULTPARAM( = FALSE ) ) ;					// 全ての３Ｄサウ?ドのサウ?ドハ?ド?に?バーブパ??ータを設定する( PlaySoundOnly TRUE:再生?のサウ?ドにのみ設定する  FALSE:再生していないサウ?ドにも設定する )
extern	int			Set3DPresetReverbParamSoundMemAll(   int PresetNo /* DX_REVERB_PRESET_DEFAULT ? */ , int PlaySoundOnly DEFAULTPARAM( = FALSE )  ) ;	// 全ての３Ｄサウ?ドのサウ?ドハ?ド?に?バーブパ??ータをプ?セットを使用して設定する( PlaySoundOnly TRUE:再生?のサウ?ドにのみ設定する  FALSE:再生していないサウ?ドにも設定する )
extern	int			Get3DReverbParamSoundMem(            SOUND3D_REVERB_PARAM *ParamBuffer,              int SoundHandle ) ;						// サウ?ドハ?ド?に設定されている３Ｄサウ?ド用の?バーブパ??ータを取得する
extern	int			Get3DPresetReverbParamSoundMem(      SOUND3D_REVERB_PARAM *ParamBuffer, int PresetNo /* DX_REVERB_PRESET_DEFAULT ? */ ) ;		// プ?セットの３Ｄサウ?ド用の?バーブパ??ータを取得する

extern	int			Set3DPositionSoundMem(               VECTOR Position,                                int SoundHandle ) ;						// サウ?ドハ?ド?の３Ｄサウ?ド用の再生位置を設定する
extern	int			Set3DRadiusSoundMem(                 float Radius,                                   int SoundHandle ) ;						// サウ?ドハ?ド?の３Ｄサウ?ド用の音が聞こえる?離を設定する
extern	int			Set3DVelocitySoundMem(               VECTOR Velocity,                                int SoundHandle ) ;						// サウ?ドハ?ド?の３Ｄサウ?ド用の移動速度を設定する

extern	int			SetNextPlay3DPositionSoundMem(       VECTOR Position,                                int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生のみに使用する３Ｄサウ?ド用の再生位置を設定する
extern	int			SetNextPlay3DRadiusSoundMem(         float Radius,                                   int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生のみに使用する３Ｄサウ?ド用の音が聞こえる?離を設定する
extern	int			SetNextPlay3DVelocitySoundMem(       VECTOR Velocity,                                int SoundHandle ) ;						// サウ?ドハ?ド?の?の再生のみに使用する３Ｄサウ?ド用の移動速度を設定する


// 特殊関?
extern	int			GetMP3TagInfo(           const TCHAR *FileName,                        TCHAR *TitleBuffer, size_t TitleBufferBytes, TCHAR *ArtistBuffer, size_t ArtistBufferBytes, TCHAR *AlbumBuffer, size_t AlbumBufferBytes, TCHAR *YearBuffer, size_t YearBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes, TCHAR *TrackBuffer, size_t TrackBufferBytes, TCHAR *GenreBuffer, size_t GenreBufferBytes, int *PictureGrHandle ) ;		// MP3ファイ?のタグ情報を取得する
extern	int			GetMP3TagInfoWithStrLen( const TCHAR *FileName, size_t FileNameLength, TCHAR *TitleBuffer, size_t TitleBufferBytes, TCHAR *ArtistBuffer, size_t ArtistBufferBytes, TCHAR *AlbumBuffer, size_t AlbumBufferBytes, TCHAR *YearBuffer, size_t YearBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes, TCHAR *TrackBuffer, size_t TrackBufferBytes, TCHAR *GenreBuffer, size_t GenreBufferBytes, int *PictureGrHandle ) ;		// MP3ファイ?のタグ情報を取得する
#ifndef DX_NON_OGGVORBIS
extern	int			GetOggCommentNum(           const TCHAR *FileName                        ) ;																																	// Oggファイ?のコ??ト情報の?を取得する
extern	int			GetOggCommentNumWithStrLen( const TCHAR *FileName, size_t FileNameLength ) ;																																	// Oggファイ?のコ??ト情報の?を取得する
extern	int			GetOggComment(              const TCHAR *FileName,                        int CommentIndex, TCHAR *CommentNameBuffer, size_t CommentNameBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes ) ;		// Oggファイ?のコ??ト情報を取得する
extern	int			GetOggCommentWithStrLen(    const TCHAR *FileName, size_t FileNameLength, int CommentIndex, TCHAR *CommentNameBuffer, size_t CommentNameBufferBytes, TCHAR *CommentBuffer, size_t CommentBufferBytes ) ;		// Oggファイ?のコ??ト情報を取得する
#endif // DX_NON_OGGVORBIS
						

// 設定関係関?
extern	int			SetCreateSoundDataType(              int SoundDataType ) ;																		// 作成するサウ?ドハ?ド?の再生タイプを設定する( DX_SOUNDDATATYPE_MEMNOPRESS ? )
extern	int			GetCreateSoundDataType(              void ) ;																					// 作成するサウ?ドハ?ド?の再生タイプを取得する( DX_SOUNDDATATYPE_MEMNOPRESS ? )
extern	int			SetCreateSoundPitchRate(             float Cents ) ;																			// 作成するサウ?ドハ?ド?のピッチ( 音の長さを変えずに音程を変更する )?ートを設定する( 単位はセ?ト( 100.0fで半音、1200.0fで１オクター? )、プ?スの値で音程が?く、マイナスの値で音程が低くなります )
extern	float		GetCreateSoundPitchRate(             void ) ;																					// 作成するサウ?ドハ?ド?のピッチ( 音の長さを変えずに音程を変更する )?ートを取得する( 単位はセ?ト( 100.0fで半音、1200.0fで１オクター? )、プ?スの値で音程が?く、マイナスの値で音程が低くなります )
extern	int			SetCreateSoundTimeStretchRate(       float Rate ) ;																				// 作成するサウ?ドハ?ド?のタイ?スト?ッチ( 音程を変えずに音の長さを変更する )?ートを設定する( 単位は倍率、2.0f で音の長さが２倍に、0.5f で音の長さが半分になります )
extern	float		GetCreateSoundTimeStretchRate(       void ) ;																					// 作成するサウ?ドハ?ド?のタイ?スト?ッチ( 音程を変えずに音の長さを変更する )?ートを取得する( 単位は倍率、2.0f で音の長さが２倍に、0.5f で音の長さが半分になります )
extern	int			SetCreateSoundLoopAreaTimePos(       LONGLONG  LoopStartTime,           LONGLONG  LoopEndTime ) ;								// 作成するサウ?ドハ?ド?の?ープ範囲を設定する( ミ?秒単位 )
extern	int			GetCreateSoundLoopAreaTimePos(       LONGLONG *LoopStartTime,           LONGLONG *LoopEndTime ) ;								// 作成するサウ?ドハ?ド?の?ープ範囲を取得する( ミ?秒単位 )
extern	int			SetCreateSoundLoopAreaSamplePos(     LONGLONG  LoopStartSamplePosition, LONGLONG  LoopEndSamplePosition ) ;						// 作成するサウ?ドハ?ド?の?ープ範囲を設定する( サ?プ?単位 )
extern	int			GetCreateSoundLoopAreaSamplePos(     LONGLONG *LoopStartSamplePosition, LONGLONG *LoopEndSamplePosition ) ;						// 作成するサウ?ドハ?ド?の?ープ範囲を取得する( サ?プ?単位 )
extern	int			SetCreateSoundIgnoreLoopAreaInfo(    int IgnoreFlag ) ;																			// LoadSoundMem などで読み?むサウ?ドデータに?ープ範囲情報が?っても無?するかどうかを設定する( TRUE:無?する  FALSE:無?しない( デフォ?ト ) )
extern	int			GetCreateSoundIgnoreLoopAreaInfo(    void ) ;																					// LoadSoundMem などで読み?むサウ?ドデータに?ープ範囲情報が?っても無?するかどうかを取得する( TRUE:無?する  FALSE:無?しない( デフォ?ト ) )
extern	int			SetDisableReadSoundFunctionMask(     int Mask ) ;																				// 使用しないサウ?ドデータ読み?み??のマスクを設定する( DX_READSOUNDFUNCTION_PCM ? )
extern	int			GetDisableReadSoundFunctionMask(     void ) ;																					// 使用しないサウ?ドデータ読み?み??のマスクを取得する( DX_READSOUNDFUNCTION_PCM ? )
extern	int			SetEnableSoundCaptureFlag(           int Flag ) ;																				// サウ?ドキ?プチ?を前提とした動作をするかどうかを設定する
extern	int			SetUseOldVolumeCalcFlag(             int Flag ) ;																				// ChangeVolumeSoundMem, ChangeNextPlayVolumeSoundMem, ChangeMovieVolumeToGraph の音量計算式を Ver3.10c以前のものを使用するかどうかを設定する( TRUE:Ver3.10c以前の計算式を使用  FALSE:3.10d以降の計算式を使用( デフォ?ト ) )
extern	int			SetSoundCurrentTimeType(             int Type /* DX_SOUNDCURRENTTIME_TYPE_LOW_LEVEL など */ ) ;									// GetSoundCurrentTime などを使用した場?に取得できる再生?間のタイプを設定する
extern	int			GetSoundCurrentTimeType(             void ) ;																					// GetSoundCurrentTime などを使用した場?に取得できる再生?間のタイプを取得する

extern	int			SetCreate3DSoundFlag(                     int Flag ) ;																			// ?に作成するサウ?ドハ?ド?を３Ｄサウ?ド用にするかどうかを設定する( TRUE:３Ｄサウ?ド用にする  FALSE:３Ｄサウ?ド用にしない( デフォ?ト ) )
extern	int			Set3DSoundOneMetre(                       float Distance ) ;																	// ３Ｄ空間の１?ート?に??する?離を設定する、DxLib_Init を呼び出す前でのみ呼び出し可能( デフォ?ト:1.0f )
extern	int			Set3DSoundListenerPosAndFrontPos_UpVecY(  VECTOR Position, VECTOR FrontPosition ) ;												// ３Ｄサウ?ドの?スナーの位置と?スナーの前方位置を設定する( ?スナーの上方向はＹ軸固定 )
extern	int			Set3DSoundListenerPosAndFrontPosAndUpVec( VECTOR Position, VECTOR FrontPosition, VECTOR UpVector ) ;							// ３Ｄサウ?ドの?スナーの位置と?スナーの前方位置と?スナーの上方向を設定する
extern	int			Set3DSoundListenerVelocity(               VECTOR Velocity ) ;																	// ３Ｄサウ?ドの?スナーの移動速度を設定する
extern	int			Set3DSoundListenerConeAngle(              float InnerAngle, float OuterAngle ) ;												// ３Ｄサウ?ドの?スナーの可聴角度範囲を設定する
extern	int			Set3DSoundListenerConeVolume(             float InnerAngleVolume, float OuterAngleVolume ) ;									// ３Ｄサウ?ドの?スナーの可聴角度範囲の音量倍率を設定する

#ifndef DX_NON_BEEP
// BEEP音再生用命令
extern	int			SetBeepFrequency(					int Freq ) ;																				// ビープ音周波?設定関?
extern	int			PlayBeep(							void ) ;																					// ビープ音を再生する
extern	int			StopBeep(							void ) ;																					// ビープ音を止める
#endif // DX_NON_BEEP

// ?ッパー関?
extern	int			PlaySoundFile(						const TCHAR *FileName,                        int PlayType ) ;								// サウ?ドファイ?を再生する
extern	int			PlaySoundFileWithStrLen(			const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// サウ?ドファイ?を再生する
#ifndef DX_COMPILE_TYPE_C_LANGUAGE
extern	int			PlaySound(							const TCHAR *FileName,                        int PlayType ) ;								// PlaySoundFile の?名称
extern	int			PlaySoundWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// PlaySoundFile の?名称
#endif // DX_COMPILE_TYPE_C_LANGUAGE
extern	int			PlaySoundDX(						const TCHAR *FileName,                        int PlayType ) ;								// PlaySoundFile の?名称
extern	int			PlaySoundDXWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// PlaySoundFile の?名称
extern	int			CheckSoundFile(						void ) ;																					// サウ?ドファイ?の再生?かどうかを取得する
extern	int			CheckSound(							void ) ;																					// CheckSoundFile の?名称
extern	int			StopSoundFile(						void ) ;																					// サウ?ドファイ?の再生を停止する
extern	int			StopSound(							void ) ;																					// StopSoundFile の?名称
extern	int			SetVolumeSoundFile(					int VolumePal ) ;																			// サウ?ドファイ?の音量を設定する
extern	int			SetVolumeSound(						int VolumePal ) ;																			// SetVolumeSound の?名称

// ソフトウエア制御サウ?ド系関?
extern	int			InitSoftSound(						void ) ;																					// ソフトウエアで扱う波形データハ?ド?をすべて削?する
extern	int			LoadSoftSound(						const TCHAR *FileName                        ) ;											// ソフトウエアで扱う波形データハ?ド?をサウ?ドファイ?から作成する
extern	int			LoadSoftSoundWithStrLen(			const TCHAR *FileName, size_t FileNameLength ) ;											// ソフトウエアで扱う波形データハ?ド?をサウ?ドファイ?から作成する
extern	int			LoadSoftSoundFromMemImage(			const void *FileImage, size_t FileImageSize ) ;												// ソフトウエアで扱う波形データハ?ド?を???上に展開されたサウ?ドファイ?イ?ージから作成する
extern	int			MakeSoftSound(						int UseFormat_SoftSoundHandle, LONGLONG SampleNum ) ;										// ソフトウエアで扱う空の波形データハ?ド?を作成する( フォーマットは引?のソフトウエアサウ?ドハ?ド?と同じものにする )
extern	int			MakeSoftSound2Ch16Bit44KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:2 量子化ビット?:16bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSound2Ch16Bit22KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:2 量子化ビット?:16bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSound2Ch8Bit44KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:2 量子化ビット?: 8bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSound2Ch8Bit22KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:2 量子化ビット?: 8bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSound1Ch16Bit44KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:1 量子化ビット?:16bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSound1Ch16Bit22KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:1 量子化ビット?:16bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSound1Ch8Bit44KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:1 量子化ビット?: 8bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSound1Ch8Bit22KHz(			LONGLONG SampleNum ) ;																		// ソフトウエアで扱う空の波形データハ?ド?を作成する( チ??ネ??:1 量子化ビット?: 8bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSoundCustom(				int ChannelNum, int BitsPerSample, int SamplesPerSec, LONGLONG SampleNum, int IsFloatType DEFAULTPARAM( = 0 ) ) ;	// ソフトウエアで扱う空の波形データハ?ド?を作成する
extern	int			DeleteSoftSound(					int SoftSoundHandle ) ;																		// ソフトウエアで扱う波形データハ?ド?を削?する
#ifndef DX_NON_SAVEFUNCTION
extern	int			SaveSoftSound(						int SoftSoundHandle, const TCHAR *FileName                        ) ;						// ソフトウエアで扱う波形データハ?ド?をWAVEファイ?(PCM)形式で保存する
extern	int			SaveSoftSoundWithStrLen(			int SoftSoundHandle, const TCHAR *FileName, size_t FileNameLength ) ;						// ソフトウエアで扱う波形データハ?ド?をWAVEファイ?(PCM)形式で保存する
#endif // DX_NON_SAVEFUNCTION
extern	LONGLONG	GetSoftSoundSampleNum(				int SoftSoundHandle ) ;																		// ソフトウエアで扱う波形データハ?ド?のサ?プ??を取得する
extern	int			GetSoftSoundFormat(					int SoftSoundHandle, int *Channels, int *BitsPerSample, int *SamplesPerSec, int *IsFloatType DEFAULTPARAM( = NULL ) ) ;				// ソフトウエアで扱う波形データハ?ド?のフォーマットを取得する
extern	int			ReadSoftSoundData(					int SoftSoundHandle, LONGLONG SamplePosition, int   *Channel1, int   *Channel2 ) ;			// ソフトウエアで扱う波形データハ?ド?のサ?プ?を読み取る
extern	int			ReadSoftSoundDataF(					int SoftSoundHandle, LONGLONG SamplePosition, float *Channel1, float *Channel2 ) ;			// ソフトウエアで扱う波形データハ?ド?のサ?プ?を読み取る( float型版 )
extern	int			WriteSoftSoundData(					int SoftSoundHandle, LONGLONG SamplePosition, int    Channel1, int    Channel2 ) ;			// ソフトウエアで扱う波形データハ?ド?のサ?プ?を?き?む
extern	int			WriteSoftSoundDataF(				int SoftSoundHandle, LONGLONG SamplePosition, float  Channel1, float  Channel2 ) ;			// ソフトウエアで扱う波形データハ?ド?のサ?プ?を?き?む( float型版 )
extern	int			WriteTimeStretchSoftSoundData(		int SrcSoftSoundHandle, int DestSoftSoundHandle ) ;											// ソフトウエアで扱う波形データハ?ド?の波形データを音程を変えずにデータの長さを変更する
extern	int			WritePitchShiftSoftSoundData(		int SrcSoftSoundHandle, int DestSoftSoundHandle ) ;											// ソフトウエアで扱う波形データハ?ド?の波形データの長さを変更する
extern	void*		GetSoftSoundDataImage(				int SoftSoundHandle ) ;																		// ソフトウエアで扱う波形データハ?ド?の波形イ?ージが格納されている???アド?スを取得する
extern	int			GetFFTVibrationSoftSound(			int SoftSoundHandle, int Channel, LONGLONG SamplePosition, int SampleNum, float *Buffer_Array, int BufferLength ) ;									// ソフトウエアで扱う波形データハ?ド?の指定の範囲を?速フー?エ変換を行い、各周波?域の振?を取得する( SampleNum は 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536 の何れかで?る必要が?ります、Channel を -1 にすると二つのチ??ネ?を?成した?果になります )
extern	int			GetFFTVibrationSoftSoundBase(		int SoftSoundHandle, int Channel, LONGLONG SamplePosition, int SampleNum, float *RealBuffer_Array, float *ImagBuffer_Array, int BufferLength ) ;	// ソフトウエアで扱う波形データハ?ド?の指定の範囲を?速フー?エ変換を行い、各周波?域の振?を取得する、?果の実?と??を別々に取得することができるバージ??( SampleNum は 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536 の何れかで?る必要が?ります、Channel を -1 にすると二つのチ??ネ?を?成した?果になります )

extern	int			InitSoftSoundPlayer(				void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?をすべて解放する
extern	int			MakeSoftSoundPlayer(				int UseFormat_SoftSoundHandle ) ;															// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( フォーマットは引?のソフトウエアサウ?ドハ?ド?と同じものにする )
extern	int			MakeSoftSoundPlayer2Ch16Bit44KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:2 量子化ビット?:16bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSoundPlayer2Ch16Bit22KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:2 量子化ビット?:16bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSoundPlayer2Ch8Bit44KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:2 量子化ビット?: 8bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSoundPlayer2Ch8Bit22KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:2 量子化ビット?: 8bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSoundPlayer1Ch16Bit44KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:1 量子化ビット?:16bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSoundPlayer1Ch16Bit22KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:1 量子化ビット?:16bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSoundPlayer1Ch8Bit44KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:1 量子化ビット?: 8bit サ?プ??グ周波?:44.1KHz )
extern	int			MakeSoftSoundPlayer1Ch8Bit22KHz(	void ) ;																					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する( チ??ネ??:1 量子化ビット?: 8bit サ?プ??グ周波?:22KHz )
extern	int			MakeSoftSoundPlayerCustom(			int ChannelNum, int BitsPerSample, int SamplesPerSec ) ;									// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を作成する
extern	int			DeleteSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?を削?する
extern	int			AddDataSoftSoundPlayer(				int SSoundPlayerHandle, int SoftSoundHandle, LONGLONG AddSamplePosition, int AddSampleNum ) ;	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?に波形データを追加する( フォーマットが同じではない場?はエ?ー )
extern	int			AddDirectDataSoftSoundPlayer(		int SSoundPlayerHandle, const void *SoundData, int AddSampleNum ) ;							// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?にプ?イ?ーが対?したフォーマットの生波形データを追加する
extern	int			AddOneDataSoftSoundPlayer(			int SSoundPlayerHandle, int Channel1, int Channel2 ) ;										// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?に波形データを一つ追加する
extern	int			GetSoftSoundPlayerFormat(			int SSoundPlayerHandle, int *Channels, int *BitsPerSample, int *SamplesPerSec ) ;			// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?が扱うデータフォーマットを取得する
extern	int			StartSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?の再生??を開始する
extern	int			CheckStartSoftSoundPlayer(			int SSoundPlayerHandle ) ;																	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?の再生??が開始されているか取得する( TRUE:開始している  FALSE:停止している )
extern	int			StopSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?の再生??を停止する
extern	int			ResetSoftSoundPlayer(				int SSoundPlayerHandle ) ;																	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?の状態を?期状態に戻す( 追加された波形データは削?され、再生状態だった場?は停止する )
extern	int			GetStockDataLengthSoftSoundPlayer(	int SSoundPlayerHandle, int *SoundBufferStockSamples DEFAULTPARAM( = NULL ) ) ;					// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?に追加した波形データでまだ再生用サウ?ドバッファに転?されていない波形データのサ?プ??を取得する、SoundBufferStockSamples を指定すると再生用サウ?ドバッファで未再生のサウ?ドデータのサ?プ??が代入されます
extern	int			CheckSoftSoundPlayerNoneData(		int SSoundPlayerHandle ) ;																	// ソフトウエアで扱う波形データのプ?イ?ーハ?ド?に再生用サウ?ドバッファに転?していない波形データが無く、再生用サウ?ドバッファにも無音データ以外無いかどうかを取得する( TRUE:無音データ以外無い  FALSE:有効データが?る )




// ＭＩＤＩ制御関?
extern	int			DeleteMusicMem(						int MusicHandle ) ;																			// ＭＩＤＩハ?ド?を削?する
extern	int			LoadMusicMem(						const TCHAR *FileName                        ) ;											// ＭＩＤＩファイ?を読み?みＭＩＤＩハ?ド?を作成する
extern	int			LoadMusicMemWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;											// ＭＩＤＩファイ?を読み?みＭＩＤＩハ?ド?を作成する
extern	int			LoadMusicMemByMemImage(				const void *FileImage, size_t FileImageSize ) ;												// ???上に展開されたＭＩＤＩファイ?イ?ージからＭＩＤＩハ?ド?を作成する
extern	int			PlayMusicMem(						int MusicHandle, int PlayType ) ;															// ＭＩＤＩハ?ド?の?奏を開始する
extern	int			StopMusicMem(						int MusicHandle ) ;																			// ＭＩＤＩハ?ド?の?奏を停止する
extern	int			CheckMusicMem(						int MusicHandle ) ;																			// ＭＩＤＩハ?ド?が?奏?かどうかを取得する( TRUE:?奏?  FALSE:停止? )
extern	int			SetVolumeMusicMem(					int Volume, int MusicHandle ) ;																// ＭＩＤＩハ?ド?の再生音量をセットする
extern	int			GetMusicMemPosition(				int MusicHandle ) ;																			// ＭＩＤＩハ?ド?の現在の再生位置を取得する
extern	int			InitMusicMem(						void ) ;																					// ＭＩＤＩハ?ド?をすべて削?する
extern	int			ProcessMusicMem(					void ) ;																					// ＭＩＤＩハ?ド?の周期的??( 内?で呼ばれます )

extern	int			PlayMusic(							const TCHAR *FileName,                        int PlayType ) ;								// ＭＩＤＩファイ?を?奏する
extern	int			PlayMusicWithStrLen(				const TCHAR *FileName, size_t FileNameLength, int PlayType ) ;								// ＭＩＤＩファイ?を?奏する
extern	int			PlayMusicByMemImage(				const void *FileImage, size_t FileImageSize,  int PlayType ) ;								// ???上に展開されているＭＩＤＩファイ?を?奏する
extern	int			SetVolumeMusic(						int Volume ) ;																				// ＭＩＤＩの再生音量をセットする
extern	int			StopMusic(							void ) ;																					// ＭＩＤＩファイ?の?奏停止
extern	int			CheckMusic(							void ) ;																					// ＭＩＤＩファイ?が?奏?か否か情報を取得する
extern	int			GetMusicPosition(					void ) ;																					// ＭＩＤＩの現在の再生位置を取得する

extern	int			SelectMidiMode(						int Mode ) ;																				// ＭＩＤＩの再生形式を設定する

#endif // DX_NON_SOUND










// DxArchive_.cpp 関? プ?トタイプ宣言
extern	int			SetUseDXArchiveFlag(				int Flag ) ;															// ＤＸアーカイブファイ?の読み?み機能を使うかどうかを設定する( FALSE:使用しない  TRUE:使用する )
extern	int			SetDXArchivePriority(				int Priority DEFAULTPARAM( = 0 ) ) ;													// 同名のＤＸアーカイブファイ?とフォ?ダが存在した場?、どちらを優先させるかを設定する( 1:フォ?ダを優先　 0:ＤＸアーカイブファイ?を優先( デフォ?ト ) )
extern	int			SetDXArchiveExtension(				const TCHAR *Extension DEFAULTPARAM( = NULL ) ) ;										// ?索するＤＸアーカイブファイ?の拡張子を設定する( Extension:拡張子名文?列 )
extern	int			SetDXArchiveExtensionWithStrLen(	const TCHAR *Extension DEFAULTPARAM( = NULL ) , size_t ExtensionLength DEFAULTPARAM( = 0 ) ) ;			// ?索するＤＸアーカイブファイ?の拡張子を設定する( Extension:拡張子名文?列 )
extern	int			SetDXArchiveKeyString(				const TCHAR *KeyString DEFAULTPARAM( = NULL ) ) ;										// ＤＸアーカイブファイ?の鍵文?列を設定する( KeyString:鍵文?列 )
extern	int			SetDXArchiveKeyStringWithStrLen(	const TCHAR *KeyString DEFAULTPARAM( = NULL ) , size_t KeyStringLength DEFAULTPARAM( = 0 ) ) ;			// ＤＸアーカイブファイ?の鍵文?列を設定する( KeyString:鍵文?列 )

extern	int			DXArchivePreLoad(					const TCHAR *FilePath,                        int ASync DEFAULTPARAM( = FALSE ) ) ;		// 指定のＤＸＡファイ?を丸ごと???に読み?む( 戻り値  -1:エ?ー  0:成功 )
extern	int			DXArchivePreLoadWithStrLen(			const TCHAR *FilePath, size_t FilePathLength, int ASync DEFAULTPARAM( = FALSE ) ) ;		// 指定のＤＸＡファイ?を丸ごと???に読み?む( 戻り値  -1:エ?ー  0:成功 )
extern	int			DXArchiveCheckIdle(					const TCHAR *FilePath                        ) ;						// 指定のＤＸＡファイ?の?前読み?みが完了したかどうかを取得する( 戻り値  TRUE:完了した FALSE:まだ )
extern	int			DXArchiveCheckIdleWithStrLen(		const TCHAR *FilePath, size_t FilePathLength ) ;						// 指定のＤＸＡファイ?の?前読み?みが完了したかどうかを取得する( 戻り値  TRUE:完了した FALSE:まだ )
extern	int			DXArchiveRelease(					const TCHAR *FilePath                        ) ;						// 指定のＤＸＡファイ?を???から解放する
extern	int			DXArchiveReleaseWithStrLen(			const TCHAR *FilePath, size_t FilePathLength ) ;						// 指定のＤＸＡファイ?を???から解放する
extern	int			DXArchiveCheckFile(					const TCHAR *FilePath,                        const TCHAR *TargetFilePath                              ) ;	// ＤＸＡファイ?の?に指定のファイ?が存在するかどうかを調べる、TargetFilePath はＤＸＡファイ?をカ??トフォ?ダとした場?のパス( 戻り値:  -1=エ?ー  0:無い  1:?る )
extern	int			DXArchiveCheckFileWithStrLen(		const TCHAR *FilePath, size_t FilePathLength, const TCHAR *TargetFilePath, size_t TargetFilePathLength ) ;	// ＤＸＡファイ?の?に指定のファイ?が存在するかどうかを調べる、TargetFilePath はＤＸＡファイ?をカ??トフォ?ダとした場?のパス( 戻り値:  -1=エ?ー  0:無い  1:?る )
extern	int			DXArchiveSetMemImage(				void *ArchiveImage, int ArchiveImageSize, const TCHAR *EmulateFilePath,                               int ArchiveImageCopyFlag DEFAULTPARAM( = FALSE ) , int ArchiveImageReadOnly DEFAULTPARAM( = TRUE ) ) ;	// ???上に展開されたＤＸＡファイ?を指定のファイ?パスに?ることにする( EmulateFilePath は見立てる dxa ファイ?のパス、例えばＤＸＡファイ?イ?ージを Image.dxa というファイ?名で c:\Temp に?ることにしたい場?は EmulateFilePath に "c:\\Temp\\Image.dxa" を渡す、SetDXArchiveExtension で拡張子を変更している場?は EmulateFilePath に渡すファイ?パスの拡張子もそれに?わせる必要?り )
extern	int			DXArchiveSetMemImageWithStrLen(		void *ArchiveImage, int ArchiveImageSize, const TCHAR *EmulateFilePath, size_t EmulateFilePathLength, int ArchiveImageCopyFlag DEFAULTPARAM( = FALSE ) , int ArchiveImageReadOnly DEFAULTPARAM( = TRUE ) ) ;	// ???上に展開されたＤＸＡファイ?を指定のファイ?パスに?ることにする( EmulateFilePath は見立てる dxa ファイ?のパス、例えばＤＸＡファイ?イ?ージを Image.dxa というファイ?名で c:\Temp に?ることにしたい場?は EmulateFilePath に "c:\\Temp\\Image.dxa" を渡す、SetDXArchiveExtension で拡張子を変更している場?は EmulateFilePath に渡すファイ?パスの拡張子もそれに?わせる必要?り )
extern	int			DXArchiveReleaseMemImage(			void *ArchiveImage ) ;													// DXArchiveSetMemImage の設定を解?する

extern	DWORD		HashCRC32(							const void *SrcData, size_t SrcDataSize ) ;								// バイナ?データを元に CRC32 のハッシ?値を計算する





















// DxModel.cpp 関? プ?トタイプ宣言

#ifndef DX_NON_MODEL

// ?デ?の読み?み・複製関係
extern	int			MV1LoadModel(						const TCHAR *FileName ) ;											// ?デ?の読み?み( -1:エ?ー  0以上:?デ?ハ?ド? )
extern	int			MV1LoadModelWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;					// ?デ?の読み?み( -1:エ?ー  0以上:?デ?ハ?ド? )
extern	int			MV1LoadModelFromMem(				const void *FileImage, int FileSize, int (* FileReadFunc )( const TCHAR *FilePath, void **FileImageAddr, int *FileSize, void *FileReadFuncData ), int (* FileReleaseFunc )( void *MemoryAddr, void *FileReadFuncData ), void *FileReadFuncData DEFAULTPARAM( = NULL ) ) ;	// ???上の?デ?ファイ?イ?ージと独自の読み?み?ーチ?を使用して?デ?を読み?む
extern	int			MV1DuplicateModel(					int SrcMHandle ) ;													// 指定の?デ?と同じ?デ?基本データを使用して?デ?を作成する( -1:エ?ー  0以上:?デ?ハ?ド? )
extern	int			MV1CreateCloneModel(				int SrcMHandle ) ;													// 指定の?デ?を?デ?基本データも含め複製する( MV1DuplicateModel は?デ?基本データは共有しますが、こちらは複製元の?デ?とは一切共有データの無い?デ?ハ?ド?を作成します )( -1:エ?ー  0以上:?デ?ハ?ド? )

extern	int			MV1DeleteModel(						int MHandle ) ;														// ?デ?を削?する
extern	int			MV1InitModel(						void ) ;															// すべての?デ?を削?する

extern	int			MV1SetLoadModelReMakeNormal(						int Flag ) ;														// ?デ?を読み?む際に法線の再計算を行うかどうかを設定する( TRUE:行う  FALSE:行わない( デフォ?ト ) )
extern	int			MV1SetLoadModelReMakeNormalSmoothingAngle(			float SmoothingAngle DEFAULTPARAM( = 1.562069f ) ) ;				// ?デ?を読み?む際に行う法泉の再計算で使用するス?ージ?グ角度を設定する( 単位は?ジア? )
extern	int			MV1SetLoadModelIgnoreScaling(						int Flag ) ;														// ?デ?を読み?む際にスケー??グデータを無?するかどうかを設定する( TRUE:無?する  FALSE:無?しない( デフォ?ト ) )
extern	int			MV1SetLoadModelPositionOptimize(					int Flag ) ;														// ?デ?を読み?む際に座標データの最適化を行うかどうかを設定する( TRUE:行う  FALSE:行わない( デフォ?ト ) )
extern	int			MV1SetLoadModelNotEqNormalSide_AddZeroAreaPolygon(	int Flag ) ;														// ?デ?を読み?む際にポ?ゴ?の辺が接していて、?つ法線の方向が異なる辺に面積０のポ?ゴ?を?め?むかどうかを設定する( TRUE:?め?む　FALSE:?め?まない( デフォ?ト ) )、( MV1ファイ?の読み?みではこの関?の設定は無?され、ポ?ゴ?の?め?みは実行されません )
extern	int			MV1SetLoadModelUsePhysicsMode(						int PhysicsMode /* DX_LOADMODEL_PHYSICS_LOADCALC ? */ ) ;			// 読み?む?デ?の物??算?ードを設定する
extern	int			MV1SetLoadModelPhysicsWorldGravity(					float Gravity ) ;													// 読み?む?デ?の物??算に適用する重力パ??ータを設定する
extern	float		MV1GetLoadModelPhysicsWorldGravity(					void ) ;															// 読み?む?デ?の物??算に適用する重力パ??ータを取得する
extern	int			MV1SetLoadCalcPhysicsWorldGravity(					int GravityNo, VECTOR Gravity ) ;									// 読み?む?デ?の物??算?ードが?前計算( DX_LOADMODEL_PHYSICS_LOADCALC )だった場?に適用される重力の設定をする
extern	VECTOR		MV1GetLoadCalcPhysicsWorldGravity(					int GravityNo ) ;													// 読み?む?デ?の物??算?ードが?前計算( DX_LOADMODEL_PHYSICS_LOADCALC )だった場?に適用される重力を取得する
extern	int			MV1SetLoadModelPhysicsCalcPrecision(				int Precision ) ;													// 読み?む?デ?の物??算?ードが?前計算( DX_LOADMODEL_PHYSICS_LOADCALC )だった場?に適用される物??算の?間進行の精度を設定する( 0:60FPS  1:120FPS  2:240FPS  3:480FPS  4:960FPS  5:1920FPS )
extern	int			MV1SetLoadModel_PMD_PMX_AnimationFPSMode(			int FPSMode /* DX_LOADMODEL_PMD_PMX_ANIMATION_FPSMODE_30 ? */ ) ;	// PMD, PMX ファイ?を読み?んだ際のアニ?ーシ??の FPS ?ードを設定する
extern	int			MV1AddLoadModelDisablePhysicsNameWord(				const TCHAR *NameWord ) ;											// 読み?む?デ?の物??算を特定の?体のみ無効にするための名前の?ードを追加する、追加できる?ード文?列の最大長は 63 文?、追加できる?ードの?は最大 256 個
extern	int			MV1AddLoadModelDisablePhysicsNameWordWithStrLen(	const TCHAR *NameWord, size_t NameWordLength ) ;					// 読み?む?デ?の物??算を特定の?体のみ無効にするための名前の?ードを追加する、追加できる?ード文?列の最大長は 63 文?、追加できる?ードの?は最大 256 個
extern	int			MV1ResetLoadModelDisablePhysicsNameWord(			void ) ;															// MV1AddLoadModelDisablePhysicsNameWord で追加した?体の無効?ードを?セットして無効?ード無しの?期状態に戻す
extern	int			MV1SetLoadModelDisablePhysicsNameWordMode(			int DisableNameWordMode /* DX_LOADMODEL_PHYSICS_DISABLENAMEWORD_ALWAYS ? */ ) ;	// MV1AddLoadModelDisablePhysicsNameWord で追加した?体の無効?ードの適用?ー?を変更する
extern	int			MV1SetLoadModelAnimFilePath(						const TCHAR *FileName ) ;											// 読み?む?デ?に適用するアニ?ーシ??ファイ?のパスを設定する、NULLを渡すと設定?セット( 現在は PMD,PMX のみに効果?り )
extern	int			MV1SetLoadModelAnimFilePathWithStrLen(				const TCHAR *FileName, size_t FileNameLength ) ;					// 読み?む?デ?に適用するアニ?ーシ??ファイ?のパスを設定する、NULLを渡すと設定?セット( 現在は PMD,PMX のみに効果?り )
extern	int			MV1SetLoadModelUsePackDraw(							int Flag ) ;														// 読み?む?デ?を同?複?描画に対?させるかどうかを設定する( TRUE:対?させる  FALSE:対?させない( デフォ?ト ) )、( 「対?させる」にすると描画が?速になる可能性が?る代わりに消費VRAMが?えます )
extern	int			MV1SetLoadModelTriangleListUseMaxBoneNum(			int UseMaxBoneNum ) ;												// 読み?む?デ?のひとつのト?イア?グ??ストで使用できる最大ボー??を設定する( UseMaxBoneNum で指定できる値の範囲は 8 ～ 54、 0 を指定するとデフォ?ト動作に戻る )
extern	int			MV1SetLoadModelTextureLoad(							int Flag ) ;														// 読み?む?デ?で使用するテクスチ?ファイ?を読み?むかどうかを設定する( TRUE:読み?む(デフォ?ト) FALSE:読み?まない )
extern	int			MV1SetLoadModelIgnoreIK(							int IgnoreFlag ) ;													// 読み?む?デ?のIK情報を無?するかどうかを設定する( TRUE:無?する  FALSE:無?しない(デフォ?ト) )

// ?デ?保存関係
extern	int			MV1SaveModelToMV1File(				int MHandle, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) , int Normal8BitFlag DEFAULTPARAM( = 1 ) , int Position16BitFlag DEFAULTPARAM( = 1 ) , int Weight8BitFlag DEFAULTPARAM( = 0 ) , int Anim16BitFlag DEFAULTPARAM( = 1 ) ) ;		// 指定のパスに?デ?を保存する( 戻り値  0:成功  -1:???不足  -2:使われていないアニ?ーシ??が?った )
extern	int			MV1SaveModelToMV1FileWithStrLen(	int MHandle, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) , int Normal8BitFlag DEFAULTPARAM( = 1 ) , int Position16BitFlag DEFAULTPARAM( = 1 ) , int Weight8BitFlag DEFAULTPARAM( = 0 ) , int Anim16BitFlag DEFAULTPARAM( = 1 ) ) ;		// 指定のパスに?デ?を保存する( 戻り値  0:成功  -1:???不足  -2:使われていないアニ?ーシ??が?った )
#ifndef DX_NON_SAVEFUNCTION
extern	int			MV1SaveModelToXFile(				int MHandle, const TCHAR *FileName,                        int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) ) ;	// 指定のパスに?デ?をＸファイ?形式で保存する( 戻り値  0:成功  -1:???不足  -2:使われていないアニ?ーシ??が?った )
extern	int			MV1SaveModelToXFileWithStrLen(		int MHandle, const TCHAR *FileName, size_t FileNameLength, int SaveType DEFAULTPARAM( = MV1_SAVETYPE_NORMAL ) , int AnimMHandle DEFAULTPARAM( = -1 ) , int AnimNameCheck DEFAULTPARAM( = TRUE ) ) ;	// 指定のパスに?デ?をＸファイ?形式で保存する( 戻り値  0:成功  -1:???不足  -2:使われていないアニ?ーシ??が?った )
#endif // DX_NON_SAVEFUNCTION

// ?デ?描画関係
extern	int			MV1DrawModel(						int MHandle ) ;														// ?デ?を描画する
extern	int			MV1DrawFrame(						int MHandle, int FrameIndex ) ;										// ?デ?の指定のフ?ー?を描画する
extern	int			MV1DrawMesh(						int MHandle, int MeshIndex ) ;										// ?デ?の指定の?ッシ?を描画する
extern	int			MV1DrawTriangleList(				int MHandle, int TriangleListIndex ) ;								// ?デ?の指定のト?イア?グ??ストを描画する
extern	int			MV1DrawModelDebug(					int MHandle, unsigned int Color, int IsNormalLine, float NormalLineLength, int IsPolyLine, int IsCollisionBox ) ;	// ?デ?のデバッグ描画

// 描画設定関係
extern	int			MV1SetUseOrigShader(				int UseFlag ) ;														// ?デ?の描画に SetUseVertexShader, SetUsePixelShader で指定したシェーダーを使用するかどうかを設定する( TRUE:使用する  FALSE:使用しない( デフォ?ト ) )
extern	int			MV1SetDrawMode(						int DrawMode /* DX_MV1_DRAWMODE_NORMAL ? */ ) ;					// ?デ?の描画?ードの設定
extern	int			MV1SetSemiTransDrawMode(			int DrawMode /* DX_SEMITRANSDRAWMODE_ALWAYS ? */ ) ;				// ?デ?の半透明要素が?る?分についての描画?ードを設定する

// ?デ?基本制御関係
extern	MATRIX		MV1GetLocalWorldMatrix(				int MHandle ) ;														// ?デ?の?ーカ?座標から?ー?ド座標に変換する行列を得る
extern	MATRIX_D	MV1GetLocalWorldMatrixD(			int MHandle ) ;														// ?デ?の?ーカ?座標から?ー?ド座標に変換する行列を得る
extern	int			MV1SetPosition(						int MHandle, VECTOR   Position ) ;									// ?デ?の座標をセット
extern	int			MV1SetPositionD(					int MHandle, VECTOR_D Position ) ;									// ?デ?の座標をセット
extern	VECTOR		MV1GetPosition(						int MHandle ) ;														// ?デ?の座標を取得
extern	VECTOR_D	MV1GetPositionD(					int MHandle ) ;														// ?デ?の座標を取得
extern	int			MV1SetScale(						int MHandle, VECTOR Scale ) ;										// ?デ?の拡大値をセット
extern	VECTOR		MV1GetScale(						int MHandle ) ;														// ?デ?の拡大値を取得
extern	int			MV1SetRotationXYZ(					int MHandle, VECTOR Rotate ) ;										// ?デ?の回転値をセット( X軸回転→Y軸回転→Z軸回転方式 )
extern	VECTOR		MV1GetRotationXYZ(					int MHandle ) ;														// ?デ?の回転値を取得( X軸回転→Y軸回転→Z軸回転方式 )
extern	int			MV1SetRotationZYAxis(				int MHandle, VECTOR ZAxisDirection, VECTOR YAxisDirection, float ZAxisTwistRotate ) ;	// ?デ?のＺ軸とＹ軸の向きをセットする
extern	int			MV1SetRotationYUseDir(				int MHandle, VECTOR Direction, float OffsetYAngle ) ;				// ?デ?のＹ軸の回転値を指定のベクト?の向きを元に設定する、?デ?はZ軸のマイナス方向を向いていることを想定するので、そうではない場?は OffsetYAngle で補正する、Ｘ軸回転、Ｚ軸回転は０で固定
extern	int			MV1SetRotationMatrix(				int MHandle, MATRIX Matrix ) ;										// ?デ?の回転用行列をセットする
extern	MATRIX		MV1GetRotationMatrix(				int MHandle ) ;														// ?デ?の回転用行列を取得する
extern	int			MV1SetMatrix(						int MHandle, MATRIX   Matrix ) ;									// ?デ?の変形用行列をセットする
extern	int			MV1SetMatrixD(						int MHandle, MATRIX_D Matrix ) ;									// ?デ?の変形用行列をセットする
extern	MATRIX		MV1GetMatrix(						int MHandle ) ;														// ?デ?の変形用行列を取得する
extern	MATRIX_D	MV1GetMatrixD(						int MHandle ) ;														// ?デ?の変形用行列を取得する
extern	int			MV1SetVisible(						int MHandle, int VisibleFlag ) ;									// ?デ?の表示、非表示状態を変更する( TRUE:表示  FALSE:非表示 )
extern	int			MV1GetVisible(						int MHandle ) ;														// ?デ?の表示、非表示状態を取得する( TRUE:表示  FALSE:非表示 )
extern	int			MV1SetMeshCategoryVisible(			int MHandle, int MeshCategory, int VisibleFlag ) ;					// ?デ?の?ッシ?の種類( DX_MV1_MESHCATEGORY_NORMAL など )?の表示、非表示を設定する( TRUE:表示  FALSE:非表示 )
extern	int			MV1GetMeshCategoryVisible(			int MHandle, int MeshCategory ) ;									// ?デ?の?ッシ?の種類( DX_MV1_MESHCATEGORY_NORMAL など )?の表示、非表示を取得する( TRUE:表示  FALSE:非表示 )
extern	int			MV1SetDifColorScale(				int MHandle, COLOR_F Scale ) ;										// ?デ?のディフ?ーズカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetDifColorScale(				int MHandle ) ;														// ?デ?のディフ?ーズカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	int			MV1SetSpcColorScale(				int MHandle, COLOR_F Scale ) ;										// ?デ?のスペキ??カ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetSpcColorScale(				int MHandle ) ;														// ?デ?のスペキ??カ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	int			MV1SetEmiColorScale(				int MHandle, COLOR_F Scale ) ;										// ?デ?のエミッシブカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetEmiColorScale(				int MHandle ) ;														// ?デ?のエミッシブカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	int			MV1SetAmbColorScale(				int MHandle, COLOR_F Scale ) ;										// ?デ?のア?ビエ?トカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetAmbColorScale(				int MHandle ) ;														// ?デ?のア?ビエ?トカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	int			MV1GetSemiTransState(				int MHandle ) ;														// ?デ?に半透明要素が?るかどうかを取得する( 戻り値 TRUE:?る  FALSE:ない )
extern	int			MV1SetOpacityRate(					int MHandle, float Rate ) ;											// ?デ?の不透明度を設定する( 不透明 1.0f ～ 透明 0.0f )
extern	float		MV1GetOpacityRate(					int MHandle ) ;														// ?デ?の不透明度を取得する( 不透明 1.0f ～ 透明 0.0f )
extern	int			MV1SetUseDrawMulAlphaColor(			int MHandle, int Flag ) ;											// ?デ?を描画する際にRGB値に対してA値を乗算するかどうかを設定する( 描画?果が乗算済みア?ファ画?になります )( Flag   TRUE:RGB値に対してA値を乗算する  FALSE:乗算しない(デフォ?ト) )
extern	int			MV1GetUseDrawMulAlphaColor(			int MHandle ) ;														// ?デ?を描画する際にRGB値に対してA値を乗算するかどうかを取得する( 描画?果が乗算済みア?ファ画?になります )( 戻り値 TRUE:RGB値に対してA値を乗算する  FALSE:乗算しない(デフォ?ト) )
extern	int			MV1SetUseZBuffer(					int MHandle, int Flag ) ;											// ?デ?を描画する際にＺバッファを使用するかどうかを設定する
extern	int			MV1SetWriteZBuffer(					int MHandle, int Flag ) ;											// ?デ?を描画する際にＺバッファに?き?みを行うかどうかを設定する
extern	int			MV1SetZBufferCmpType(				int MHandle, int CmpType /* DX_CMP_NEVER ? */ ) ;					// ?デ?の描画?のＺ値の比較?ードを設定する
extern	int			MV1SetZBias(						int MHandle, int Bias ) ;											// ?デ?の描画?の?き?むＺ値のバイアスを設定する
extern	int			MV1SetUseVertDifColor(				int MHandle, int UseFlag ) ;										// ?デ?の含まれる?ッシ?の頂点ディフ?ーズカ?ーをマテ?ア?のディフ?ーズカ?ーの代わりに使用するかどうかを設定する( TRUE:マテ?ア?カ?ーの代わりに使用する  FALSE:マテ?ア?カ?ーを使用する )
extern	int			MV1SetUseVertSpcColor(				int MHandle, int UseFlag ) ;										// ?デ?に含まれる?ッシ?の頂点スペキ??カ?ーをマテ?ア?のスペキ??カ?ーの代わりに使用するかどうかを設定する( TRUE:マテ?ア?カ?ーの代わりに使用する  FALSE:マテ?ア?カ?ーを使用する )
extern	int			MV1SetSampleFilterMode(				int MHandle, int FilterMode ) ;										// ?デ?のテクスチ?のサ?プ?フィ?ター?ードを変更する( FilterMode は DX_DRAWMODE_NEAREST ? )
extern	int			MV1SetMaxAnisotropy(				int MHandle, int MaxAnisotropy ) ;									// ?デ?の異方性フィ?タ??グの最大??を設定する
extern	int			MV1SetWireFrameDrawFlag(			int MHandle, int Flag ) ;											// ?デ?を?イ?ーフ?ー?で描画するかどうかを設定する
extern	int			MV1RefreshVertColorFromMaterial(	int MHandle ) ;														// ?デ?の頂点カ?ーを現在設定されているマテ?ア?のカ?ーにする
extern	int			MV1SetPhysicsWorldGravity(			int MHandle, VECTOR Gravity ) ;										// ?デ?の物??算の重力を設定する
extern	int			MV1PhysicsCalculation(				int MHandle, float MillisecondTime ) ;								// ?デ?の物??算を指定?間分経過したと仮定して計算する( MillisecondTime で指定する?間の単位はミ?秒 )
extern	int			MV1PhysicsResetState(				int MHandle ) ;														// ?デ?の物??算の状態を?セットする( 位置が?ープしたとき用 )
extern	int			MV1SetPrioritizePhysicsOverAnimFlag( int MHandle, int Flag ) ;											// ?デ?の物??算をアニ?ーシ??より優先するかどうかを設定する( TRUE:物??算を優先する  FALSE:アニ?ーシ??を優先する( デフォ?ト ) )
extern	int			MV1SetUseShapeFlag(					int MHandle, int UseFlag ) ;										// ?デ?のシェイプ機能を使用するかどうかを設定する( UseFlag  TRUE:使用する( デフォ?ト )  FALSE:使用しない )
extern	int			MV1GetMaterialNumberOrderFlag(		int MHandle ) ;														// ?デ?のマテ?ア?番??に?ッシ?を描画するかどうかのフ?グを取得する( TRUE:マテ?ア?番??に描画  FALSE:不透明?ッシ?の後半透明?ッシ? )

// アニ?ーシ??関係
extern	int			MV1AttachAnim(						int MHandle, int AnimIndex, int AnimSrcMHandle DEFAULTPARAM( = -1 ) , int NameCheck DEFAULTPARAM( = TRUE ) ) ;		// アニ?ーシ??をアタッチする( 戻り値  -1:エ?ー  0以上:アタッチイ?デックス )
extern	int			MV1DetachAnim(						int MHandle, int AttachIndex ) ;													// アニ?ーシ??をデタッチする
extern	int			MV1SetAttachAnimTime(				int MHandle, int AttachIndex, float Time ) ;										// アタッチしているアニ?ーシ??の再生?間を設定する
extern	float		MV1GetAttachAnimTime(				int MHandle, int AttachIndex ) ;													// アタッチしているアニ?ーシ??の再生?間を取得する
extern	float		MV1GetAttachAnimTotalTime(			int MHandle, int AttachIndex ) ;													// アタッチしているアニ?ーシ??の??間を得る
extern	int			MV1SetAttachAnimBlendRate(			int MHandle, int AttachIndex, float Rate DEFAULTPARAM( = 1.0f ) ) ;					// アタッチしているアニ?ーシ??のブ??ド率を設定する
extern	float		MV1GetAttachAnimBlendRate(			int MHandle, int AttachIndex ) ;													// アタッチしているアニ?ーシ??のブ??ド率を取得する
extern	int			MV1SetAttachAnimBlendRateToFrame(	int MHandle, int AttachIndex, int FrameIndex, float Rate, int SetChild DEFAULTPARAM( = TRUE ) ) ;	// アタッチしているアニ?ーシ??のブ??ド率を設定する( フ?ー?単位 )
extern	float		MV1GetAttachAnimBlendRateToFrame(	int MHandle, int AttachIndex, int FrameIndex ) ;									// アタッチしているアニ?ーシ??のブ??ド率を取得する( フ?ー?単位 )
extern	int			MV1SetAttachAnimTimeToFrame(		int MHandle, int AttachIndex, int FrameIndex, float Time, int SetChild DEFAULTPARAM( = TRUE ) ) ;	// アタッチしているアニ?ーシ??の再生?間を設定する( フ?ー?単位 )( Time にマイナスの値を渡すと設定を解? )
extern	float		MV1GetAttachAnimTimeToFrame(		int MHandle, int AttachIndex, int FrameIndex ) ;									// アタッチしているアニ?ーシ??の再生?間を取得する( フ?ー?単位 )
extern	int			MV1GetAttachAnim(					int MHandle, int AttachIndex ) ;													// アタッチしているアニ?ーシ??のアニ?ーシ??イ?デックスを取得する
extern	int			MV1SetAttachAnimUseShapeFlag(		int MHandle, int AttachIndex, int UseFlag ) ;										// アタッチしているアニ?ーシ??のシェイプを使用するかどうかを設定する( UseFlag  TRUE:使用する( デフォ?ト )  FALSE:使用しない )
extern	int			MV1GetAttachAnimUseShapeFlag(		int MHandle, int AttachIndex ) ;													// アタッチしているアニ?ーシ??のシェイプを使用するかどうかを取得する
extern	VECTOR		MV1GetAttachAnimFrameLocalPosition(	int MHandle, int AttachIndex, int FrameIndex ) ;									// アタッチしているアニ?ーシ??の指定のフ?ー?の現在の?ーカ?座標を取得する
extern	MATRIX		MV1GetAttachAnimFrameLocalMatrix(	int MHandle, int AttachIndex, int FrameIndex ) ;									// アタッチしているアニ?ーシ??の指定のフ?ー?の現在の?ーカ?変換行列を取得する

extern	int			MV1GetAnimNum(						int MHandle ) ;																		// アニ?ーシ??の?を取得する
extern	const TCHAR *MV1GetAnimName(					int MHandle, int AnimIndex ) ;														// 指定番?のアニ?ーシ??名を取得する( NULL:エ?ー )
extern	int			MV1SetAnimName(						int MHandle, int AnimIndex, const TCHAR *AnimName                        ) ;		// 指定番?のアニ?ーシ??名を変更する
extern	int			MV1SetAnimNameWithStrLen(			int MHandle, int AnimIndex, const TCHAR *AnimName, size_t AnimNameLength ) ;		// 指定番?のアニ?ーシ??名を変更する
extern	int			MV1GetAnimIndex(					int MHandle, const TCHAR *AnimName                        ) ;						// 指定名のアニ?ーシ??番?を取得する( -1:エ?ー )
extern	int			MV1GetAnimIndexWithStrLen(			int MHandle, const TCHAR *AnimName, size_t AnimNameLength ) ;						// 指定名のアニ?ーシ??番?を取得する( -1:エ?ー )
extern	float		MV1GetAnimTotalTime(				int MHandle, int AnimIndex ) ;														// 指定番?のアニ?ーシ??の??間を得る
extern	int			MV1GetAnimTargetFrameNum(			int MHandle, int AnimIndex ) ;														// 指定のアニ?ーシ??がターゲットとするフ?ー?の?を取得する
extern	const TCHAR *MV1GetAnimTargetFrameName(			int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// 指定のアニ?ーシ??がターゲットとするフ?ー?の名前を取得する
extern	int			MV1GetAnimTargetFrame(				int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// 指定のアニ?ーシ??がターゲットとするフ?ー?の番?を取得する
extern	int			MV1GetAnimTargetFrameKeySetNum(		int MHandle, int AnimIndex, int AnimFrameIndex ) ;									// 指定のアニ?ーシ??がターゲットとするフ?ー?用のアニ?ーシ??キーセットの?を取得する
extern	int			MV1GetAnimTargetFrameKeySet(		int MHandle, int AnimIndex, int AnimFrameIndex, int Index ) ;						// 指定のアニ?ーシ??がターゲットとするフ?ー?用のアニ?ーシ??キーセットキーセットイ?デックスを取得する

extern	int			MV1GetAnimKeySetNum(				int MHandle ) ;																		// ?デ?に含まれるアニ?ーシ??キーセットの??を得る 
extern	int			MV1GetAnimKeySetType(				int MHandle, int AnimKeySetIndex ) ;												// 指定のアニ?ーシ??キーセットのタイプを取得する( MV1_ANIMKEY_TYPE_QUATERNION ? )
extern	int			MV1GetAnimKeySetDataType(			int MHandle, int AnimKeySetIndex ) ;												// 指定のアニ?ーシ??キーセットのデータタイプを取得する( MV1_ANIMKEY_DATATYPE_ROTATE ? )
extern	int			MV1GetAnimKeySetTimeType(			int MHandle, int AnimKeySetIndex ) ;												// 指定のアニ?ーシ??キーセットのキーの?間データタイプを取得する( MV1_ANIMKEY_TIME_TYPE_ONE ? )
extern	int			MV1GetAnimKeySetDataNum(			int MHandle, int AnimKeySetIndex ) ;												// 指定のアニ?ーシ??キーセットのキーの?を取得する
extern	float		MV1GetAnimKeyDataTime(				int MHandle, int AnimKeySetIndex, int Index ) ;										// 指定のアニ?ーシ??キーセットのキーの?間を取得する
extern	int			MV1GetAnimKeyDataIndexFromTime(		int MHandle, int AnimKeySetIndex, float Time ) ;									// 指定のアニ?ーシ??キーセットの指定の?間でのキーの番?を取得する
extern	FLOAT4		MV1GetAnimKeyDataToQuaternion(		int MHandle, int AnimKeySetIndex, int Index ) ;										// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_QUATERNION では無かった場?は失敗する
extern	FLOAT4		MV1GetAnimKeyDataToQuaternionFromTime( int MHandle, int AnimKeySetIndex, float Time ) ;									// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_QUATERNION では無かった場?は失敗する( ?間指定版 )
extern	VECTOR		MV1GetAnimKeyDataToVector(			int MHandle, int AnimKeySetIndex, int Index ) ;										// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_VECTOR では無かった場?は失敗する
extern	VECTOR		MV1GetAnimKeyDataToVectorFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_VECTOR では無かった場?は失敗する( ?間指定版 )
extern	MATRIX		MV1GetAnimKeyDataToMatrix(			int MHandle, int AnimKeySetIndex, int Index ) ;										// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_MATRIX4X4C か MV1_ANIMKEY_TYPE_MATRIX3X3 では無かった場?は失敗する
extern	MATRIX		MV1GetAnimKeyDataToMatrixFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_MATRIX4X4C か MV1_ANIMKEY_TYPE_MATRIX3X3 では無かった場?は失敗する( ?間指定版 )
extern	float		MV1GetAnimKeyDataToFlat(			int MHandle, int AnimKeySetIndex, int Index ) ;										// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_FLAT では無かった場?は失敗する
extern	float		MV1GetAnimKeyDataToFlatFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_FLAT では無かった場?は失敗する( ?間指定版 )
extern	float		MV1GetAnimKeyDataToLinear(			int MHandle, int AnimKeySetIndex, int Index ) ;										// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_LINEAR では無かった場?は失敗する
extern	float		MV1GetAnimKeyDataToLinearFromTime(	int MHandle, int AnimKeySetIndex, float Time ) ;									// 指定のアニ?ーシ??キーセットのキーを取得する、キータイプが MV1_ANIMKEY_TYPE_LINEAR では無かった場?は失敗する( ?間指定版 )

// マテ?ア?関係
extern	int			MV1GetMaterialNum(					int MHandle ) ;															// ?デ?で使用しているマテ?ア?の?を取得する
extern	const TCHAR *MV1GetMaterialName(				int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?の名前を取得する
extern	int			MV1SetMaterialTypeAll(				int MHandle,                    int Type ) ;							// 全てのマテ?ア?のタイプを変更する( Type : DX_MATERIAL_TYPE_NORMAL など )
extern	int			MV1SetMaterialType(					int MHandle, int MaterialIndex, int Type ) ;							// 指定のマテ?ア?のタイプを変更する( Type : DX_MATERIAL_TYPE_NORMAL など )
extern	int			MV1GetMaterialType(					int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のタイプを取得する( 戻り値 : DX_MATERIAL_TYPE_NORMAL など )
extern	int			MV1SetMaterialTypeParamAll(			int MHandle,                    ... ) ;									// 全てのマテ?ア?のタイプ別パ??ータを変更する( マテ?ア?タイプ DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_TWO_COLOR などで使用 )
extern	int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, ... ) ;									// 指定のマテ?ア?のタイプ別パ??ータを変更する( マテ?ア?タイプ DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_TWO_COLOR などで使用 )
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_UNORM            の場? */ float MinParam = 正規化の下限値( この値以下が 0.0f になる ), float MaxParam = 正規化の上限値( この値以上が 1.0f になる ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CLIP_UNORM       の場? */ float MinParam = 正規化の下限値( この値以下が 0.0f になる ), float MaxParam = 正規化の上限値( この値以上が 1.0f になる ), float ClipParam = ?値( この値未?が 0.0f になる ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_LUMINANCE_CMP_GREATEREQUAL の場? */ float CmpParam = 比較値( この値以上の場?は 1.0f が、未?の場?は 0.0f が?き?まれる ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_UNORM                の場? */ float MinParam = 正規化の下限値( この値以下が 0.0f になる ), float MaxParam = 正規化の上限値( この値以上が 1.0f になる ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_CLIP_UNORM           の場? */ float MinParam = 正規化の下限値( この値以下が 0.0f になる ), float MaxParam = 正規化の上限値( この値以上が 1.0f になる ), float ClipParam = ?値( この値未?が 0.0f になる ) ) ;
//		int			MV1SetMaterialTypeParam(			int MHandle, int MaterialIndex, /* DX_MATERIAL_TYPE_MAT_SPEC_POWER_CMP_GREATEREQUAL     の場? */ float CmpParam = 比較値( この値以上の場?は 1.0f が、未?の場?は 0.0f が?き?まれる ) ) ;
extern	int			MV1SetMaterialDifColor(				int MHandle, int MaterialIndex, COLOR_F Color ) ;						// 指定のマテ?ア?のディフ?ーズカ?ーを設定する
extern	COLOR_F		MV1GetMaterialDifColor( 			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のディフ?ーズカ?ーを取得する
extern	int			MV1SetMaterialSpcColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// 指定のマテ?ア?のスペキ??カ?ーを設定する
extern	COLOR_F		MV1GetMaterialSpcColor( 			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のスペキ??カ?ーを取得する
extern	int			MV1SetMaterialEmiColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// 指定のマテ?ア?のエミッシブカ?ーを設定する
extern	COLOR_F		MV1GetMaterialEmiColor( 			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のエミッシブカ?ーを取得する
extern	int			MV1SetMaterialAmbColor( 			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// 指定のマテ?ア?のア?ビエ?トカ?ーを設定する
extern	COLOR_F		MV1GetMaterialAmbColor( 			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のア?ビエ?トカ?ーを取得する
extern	int			MV1SetMaterialSpcPower( 			int MHandle, int MaterialIndex, float Power ) ;							// 指定のマテ?ア?のスペキ??の強さを設定する
extern	float		MV1GetMaterialSpcPower( 			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のスペキ??の強さを取得する
extern	int			MV1SetMaterialDifMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// 指定のマテ?ア?でディフ?ーズマップとして使用するテクスチ?を指定する
extern	int			MV1GetMaterialDifMapTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?でディフ?ーズマップとして使用されているテクスチ?のイ?デックスを取得する
extern	int			MV1SetMaterialSubDifMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// 指定のマテ?ア?でサブディフ?ーズマップとして使用するテクスチ?を指定する
extern	int			MV1GetMaterialSubDifMapTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?でサブディフ?ーズマップとして使用されているテクスチ?のイ?デックスを取得する
extern	int			MV1SetMaterialSpcMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// 指定のマテ?ア?でスペキ??マップとして使用するテクスチ?を指定する
extern	int			MV1GetMaterialSpcMapTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?でスペキ??マップとして使用されているテクスチ?のイ?デックスを取得する
extern	int			MV1GetMaterialNormalMapTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?で法線マップとして使用されているテクスチ?のイ?デックスを取得する
extern	int			MV1SetMaterialDifGradTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// 指定のマテ?ア?でトゥー???ダ??グのディフ?ーズグ?デーシ??マップとして使用するテクスチ?を設定する
extern	int			MV1GetMaterialDifGradTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?でトゥー???ダ??グのディフ?ーズグ?デーシ??マップとして使用するテクスチ?を取得する
extern	int			MV1SetMaterialSpcGradTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// 指定のマテ?ア?でトゥー???ダ??グのスペキ??グ?デーシ??マップとして使用するテクスチ?を設定する
extern	int			MV1GetMaterialSpcGradTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?でトゥー???ダ??グのスペキ??グ?デーシ??マップとして使用するテクスチ?を取得する
extern	int			MV1SetMaterialSphereMapTexture(		int MHandle, int MaterialIndex, int TexIndex ) ;						// 指定のマテ?ア?でトゥー???ダ??グのスフィアマップとして使用するテクスチ?を設定する
extern	int			MV1GetMaterialSphereMapTexture(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?でトゥー???ダ??グのスフィアマップとして使用するテクスチ?を取得する
extern	int			MV1SetMaterialDifGradBlendTypeAll(	int MHandle,                    int BlendType ) ;						// 全てのマテ?ア?のトゥー???ダ??グで使用するディフ?ーズグ?デーシ??マップとディフ?ーズカ?ーの?成方法を設定する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1SetMaterialDifGradBlendType(		int MHandle, int MaterialIndex, int BlendType ) ;						// 指定のマテ?ア?のトゥー???ダ??グで使用するディフ?ーズグ?デーシ??マップとディフ?ーズカ?ーの?成方法を設定する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1GetMaterialDifGradBlendType(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のトゥー???ダ??グで使用するディフ?ーズグ?デーシ??マップとディフ?ーズカ?ーの?成方法を取得する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1SetMaterialSpcGradBlendTypeAll(	int MHandle,                    int BlendType ) ;						// 全てのマテ?ア?のトゥー???ダ??グで使用するスペキ??グ?デーシ??マップとスペキ??カ?ーの?成方法を設定する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1SetMaterialSpcGradBlendType(		int MHandle, int MaterialIndex, int BlendType ) ;						// 指定のマテ?ア?のトゥー???ダ??グで使用するスペキ??グ?デーシ??マップとスペキ??カ?ーの?成方法を設定する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1GetMaterialSpcGradBlendType(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のトゥー???ダ??グで使用するスペキ??グ?デーシ??マップとスペキ??カ?ーの?成方法を取得する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1SetMaterialSphereMapBlendTypeAll( int MHandle,                   int BlendType ) ;						// 全てのマテ?ア?のトゥー???ダ??グで使用するスフィアマップの?成方法を設定する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1SetMaterialSphereMapBlendType(	int MHandle, int MaterialIndex, int BlendType ) ;						// 指定のマテ?ア?のトゥー???ダ??グで使用するスフィアマップの?成方法を設定する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1GetMaterialSphereMapBlendType(	int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のトゥー???ダ??グで使用するスフィアマップの?成方法を取得する( DX_MATERIAL_BLENDTYPE_ADDITIVE など )
extern	int			MV1SetMaterialOutLineWidthAll(		int MHandle,                    float Width ) ;							// 全てのマテ?ア?のトゥー???ダ??グで使用する輪郭線の太さを設定する
extern	int			MV1SetMaterialOutLineWidth(			int MHandle, int MaterialIndex, float Width ) ;							// 指定のマテ?ア?のトゥー???ダ??グで使用する輪郭線の太さを設定する
extern	float		MV1GetMaterialOutLineWidth(			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のトゥー???ダ??グで使用する輪郭線の太さを取得する
extern	int			MV1SetMaterialOutLineDotWidthAll(	int MHandle,                    float Width ) ;							// 全てのマテ?ア?のトゥー???ダ??グで使用する輪郭線のドット単位の太さを設定する
extern	int			MV1SetMaterialOutLineDotWidth(		int MHandle, int MaterialIndex, float Width ) ;							// 指定のマテ?ア?のトゥー???ダ??グで使用する輪郭線のドット単位の太さを設定する
extern	float		MV1GetMaterialOutLineDotWidth(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のトゥー???ダ??グで使用する輪郭線のドット単位の太さを取得する
extern	int			MV1SetMaterialOutLineColorAll(		int MHandle,                    COLOR_F Color ) ;						// 全てのマテ?ア?のトゥー???ダ??グで使用する輪郭線の色を設定する
extern	int			MV1SetMaterialOutLineColor(			int MHandle, int MaterialIndex, COLOR_F Color ) ;						// 指定のマテ?ア?のトゥー???ダ??グで使用する輪郭線の色を設定する
extern	COLOR_F		MV1GetMaterialOutLineColor(			int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?のトゥー???ダ??グで使用する輪郭線の色を取得する
extern	int			MV1SetMaterialDrawBlendModeAll(		int MHandle,                    int BlendMode ) ;						// 全てのマテ?ア?の描画ブ??ド?ードを設定する( DX_BLENDMODE_ALPHA ? )
extern	int			MV1SetMaterialDrawBlendMode(		int MHandle, int MaterialIndex, int BlendMode ) ;						// 指定のマテ?ア?の描画ブ??ド?ードを設定する( DX_BLENDMODE_ALPHA ? )
extern	int			MV1GetMaterialDrawBlendMode(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?の描画ブ??ド?ードを取得する( DX_BLENDMODE_ALPHA ? )
extern	int			MV1SetMaterialDrawBlendParamAll(	int MHandle,                    int BlendParam ) ;						// 全てのマテ?ア?の描画ブ??ドパ??ータを設定する
extern	int			MV1SetMaterialDrawBlendParam(		int MHandle, int MaterialIndex, int BlendParam ) ;						// 指定のマテ?ア?の描画ブ??ドパ??ータを設定する
extern	int			MV1GetMaterialDrawBlendParam(		int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?の描画ブ??ドパ??ータを設定する
extern	int			MV1SetMaterialDrawAlphaTestAll(		int MHandle,                    int Enable, int Mode, int Param ) ;		// 全てのマテ?ア?の描画?のア?ファテストの設定を行う( Enable:αテストを行うかどうか( TRUE:行う  FALSE:行わない( デフォ?ト ) ) Mode:テスト?ード( DX_CMP_GREATER? )  Param:描画ア?ファ値との比較に使用する値( 0～255 ) )
extern	int			MV1SetMaterialDrawAlphaTest(		int MHandle, int MaterialIndex,	int Enable, int Mode, int Param ) ;		// 指定のマテ?ア?の描画?のア?ファテストの設定を行う( Enable:αテストを行うかどうか( TRUE:行う  FALSE:行わない( デフォ?ト ) ) Mode:テスト?ード( DX_CMP_GREATER? )  Param:描画ア?ファ値との比較に使用する値( 0～255 ) )
extern	int			MV1GetMaterialDrawAlphaTestEnable(	int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?の描画?のア?ファテストを行うかどうかを取得する( 戻り値  TRUE:ア?ファテストを行う  FALSE:ア?ファテストを行わない )
extern	int			MV1GetMaterialDrawAlphaTestMode(	int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?の描画?のア?ファテストのテスト?ードを取得する( 戻り値  テスト?ード( DX_CMP_GREATER? ) )
extern	int			MV1GetMaterialDrawAlphaTestParam(	int MHandle, int MaterialIndex ) ;										// 指定のマテ?ア?の描画?のア?ファテストの描画ア?ファ地との比較に使用する値( 0～255 )を取得する
extern	int			MV1SetMaterialDrawAddColorAll(		int MHandle,                    int Red, int Green, int Blue ) ;		// 全てのマテ?ア?の描画?の加算カ?ーを設定する
extern	int			MV1SetMaterialDrawAddColor(			int MHandle, int MaterialIndex, int Red, int Green, int Blue ) ;		// 指定のマテ?ア?の描画?の加算カ?ーを設定する
extern	int			MV1GetMaterialDrawAddColor(			int MHandle, int MaterialIndex, int *Red, int *Green, int *Blue ) ;		// 指定のマテ?ア?の描画?の加算カ?ーを取得する

// テクスチ?関係
extern	int			MV1GetTextureNum(						int MHandle ) ;														// テクスチ?の?を取得
extern	const TCHAR *MV1GetTextureName(						int MHandle, int TexIndex ) ;										// テクスチ?の名前を取得
extern	int			MV1SetTextureColorFilePath(				int MHandle, int TexIndex, const TCHAR *FilePath                        ) ;	// カ?ーテクスチ?のファイ?パスを変更する
extern	int			MV1SetTextureColorFilePathWithStrLen(	int MHandle, int TexIndex, const TCHAR *FilePath, size_t FilePathLength ) ;	// カ?ーテクスチ?のファイ?パスを変更する
extern	const TCHAR *MV1GetTextureColorFilePath(			int MHandle, int TexIndex ) ;										// カ?ーテクスチ?のファイ?パスを取得
extern	int			MV1SetTextureAlphaFilePath(				int MHandle, int TexIndex, const TCHAR *FilePath                        ) ;	// ア?ファテクスチ?のファイ?パスを変更する
extern	int			MV1SetTextureAlphaFilePathWithStrLen(	int MHandle, int TexIndex, const TCHAR *FilePath, size_t FilePathLength ) ;	// ア?ファテクスチ?のファイ?パスを変更する
extern	const TCHAR *MV1GetTextureAlphaFilePath(			int MHandle, int TexIndex ) ;										// ア?ファテクスチ?のファイ?パスを取得
extern	int			MV1SetTextureGraphHandle(				int MHandle, int TexIndex, int GrHandle, int SemiTransFlag ) ;		// テクスチ?で使用するグ?フィックハ?ド?を変更する( GrHandle を -1 にすると解? )
extern	int			MV1GetTextureGraphHandle(				int MHandle, int TexIndex ) ;										// テクスチ?のグ?フィックハ?ド?を取得する
extern	int			MV1SetTextureAddressMode(				int MHandle, int TexIndex, int AddrUMode, int AddrVMode ) ;			// テクスチ?のアド?ス?ードを設定する( AddUMode の値は DX_TEXADDRESS_WRAP ? )
extern	int			MV1GetTextureAddressModeU(				int MHandle, int TexIndex ) ;										// テクスチ?のＵ値のアド?ス?ードを取得する( 戻り値:DX_TEXADDRESS_WRAP ? )
extern	int			MV1GetTextureAddressModeV(				int MHandle, int TexIndex ) ;										// テクスチ?のＶ値のアド?ス?ードを取得する( 戻り値:DX_TEXADDRESS_WRAP ? )
extern	int			MV1GetTextureWidth(						int MHandle, int TexIndex ) ;										// テクスチ?の?を取得する
extern	int			MV1GetTextureHeight(					int MHandle, int TexIndex ) ;										// テクスチ?の?さを取得する
extern	int			MV1GetTextureSemiTransState(			int MHandle, int TexIndex ) ;										// テクスチ?に半透明要素が?るかどうかを取得する( 戻り値  TRUE:?る  FALSE:ない )
extern	int			MV1SetTextureBumpImageFlag(				int MHandle, int TexIndex, int Flag ) ;								// テクスチ?で使用している画?がバ?プマップかどうかを設定する
extern	int			MV1GetTextureBumpImageFlag(				int MHandle, int TexIndex ) ;										// テクスチ?がバ?プマップかどうかを取得する( 戻り値  TRUE:バ?プマップ  FALSE:違う )
extern	int			MV1SetTextureBumpImageNextPixelLength(	int MHandle, int TexIndex, float Length ) ;							// バ?プマップ画?の場?の隣のピクセ?との?離を設定する
extern	float		MV1GetTextureBumpImageNextPixelLength(	int MHandle, int TexIndex ) ;										// バ?プマップ画?の場?の隣のピクセ?との?離を取得する
extern	int			MV1SetTextureSampleFilterMode(			int MHandle, int TexIndex, int FilterMode ) ;						// テクスチ?のフィ?タ??グ?ードを設定する
extern	int			MV1GetTextureSampleFilterMode(			int MHandle, int TexIndex ) ;										// テクスチ?のフィ?タ??グ?ードを取得する( 戻り値  DX_DRAWMODE_BILINEAR? )
extern	int			MV1LoadTexture(							const TCHAR *FilePath                        ) ;					// ３Ｄ?デ?に貼り付けるのに向いた画?の読み?み方式で画?を読み?む( 戻り値  -1:エ?ー  0以上:グ?フィックハ?ド? )
extern	int			MV1LoadTextureWithStrLen(				const TCHAR *FilePath, size_t FilePathLength ) ;					// ３Ｄ?デ?に貼り付けるのに向いた画?の読み?み方式で画?を読み?む( 戻り値  -1:エ?ー  0以上:グ?フィックハ?ド? )

// フ?ー?関係
extern	int			MV1GetFrameNum(						int MHandle ) ;															// フ?ー?の?を取得する
extern	int			MV1SearchFrame(						int MHandle, const TCHAR *FrameName                         ) ;			// フ?ー?の名前から?デ??のフ?ー?のフ?ー?イ?デックスを取得する( 無かった場?は戻り値が-1 )
extern	int			MV1SearchFrameWithStrLen(			int MHandle, const TCHAR *FrameName, size_t FrameNameLength ) ;			// フ?ー?の名前から?デ??のフ?ー?のフ?ー?イ?デックスを取得する( 無かった場?は戻り値が-1 )
extern	int			MV1SearchFrameChild(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , const TCHAR *ChildName DEFAULTPARAM( = NULL )                              ) ;	// フ?ー?の名前から指定のフ?ー?の子フ?ー?のフ?ー?イ?デックスを取得する( 名前指定版 )( FrameIndex を -1 にすると親を?たないフ?ー?を ChildIndex で指定する )( 無かった場?は戻り値が-1 )
extern	int			MV1SearchFrameChildWithStrLen(		int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , const TCHAR *ChildName DEFAULTPARAM( = NULL ) , size_t ChildNameLength DEFAULTPARAM( = 0 ) ) ;	// フ?ー?の名前から指定のフ?ー?の子フ?ー?のフ?ー?イ?デックスを取得する( 名前指定版 )( FrameIndex を -1 にすると親を?たないフ?ー?を ChildIndex で指定する )( 無かった場?は戻り値が-1 )
extern	const TCHAR *MV1GetFrameName(					int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の名前を取得する( エ?ーの場?は戻り値が NULL )
extern	int			MV1GetFrameName2(					int MHandle, int FrameIndex, TCHAR *StrBuffer ) ;						// 指定のフ?ー?の名前を取得する( 戻り値   -1:エ?ー  -1以外:文?列のサイズ )
extern	int			MV1GetFrameParent(					int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の親フ?ー?のイ?デックスを得る( 親がいない場?は -2 が返る )
extern	int			MV1GetFrameChildNum(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) ) ;											// 指定のフ?ー?の子フ?ー?の?を取得する( FrameIndex を -1 にすると親を?たないフ?ー?の?が返ってくる )
extern	int			MV1GetFrameChild(					int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int ChildIndex DEFAULTPARAM( = 0 ) ) ;		// 指定のフ?ー?の子フ?ー?のフ?ー?イ?デックスを取得する( 番?指定版 )( FrameIndex を -1 にすると親を?たないフ?ー?を ChildIndex で指定する )( エ?ーの場?は戻り値が-1 )
extern	VECTOR		MV1GetFramePosition(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の座標を取得する
extern	VECTOR_D	MV1GetFramePositionD(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の座標を取得する
extern	MATRIX		MV1GetFrameBaseLocalMatrix(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の?期状態での座標変換行列を取得する
extern	MATRIX_D	MV1GetFrameBaseLocalMatrixD(		int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の?期状態での座標変換行列を取得する
extern	MATRIX		MV1GetFrameLocalMatrix(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の座標変換行列を取得する
extern	MATRIX_D	MV1GetFrameLocalMatrixD(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の座標変換行列を取得する
extern	MATRIX		MV1GetFrameLocalWorldMatrix(		int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の?ーカ?座標から?ー?ド座標に変換する行列を得る
extern	MATRIX_D	MV1GetFrameLocalWorldMatrixD(		int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の?ーカ?座標から?ー?ド座標に変換する行列を得る
extern	int			MV1SetFrameUserLocalMatrix(			int MHandle, int FrameIndex, MATRIX   Matrix ) ;						// 指定のフ?ー?の座標変換行列( ?ーカ?行列 )を設定する
extern	int			MV1SetFrameUserLocalMatrixD(		int MHandle, int FrameIndex, MATRIX_D Matrix ) ;						// 指定のフ?ー?の座標変換行列( ?ーカ?行列 )を設定する
extern	int			MV1ResetFrameUserLocalMatrix(		int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の座標変換行列( ?ーカ?行列 )をデフォ?トに戻す
extern	int			MV1SetFrameUserLocalWorldMatrix(	int MHandle, int FrameIndex, MATRIX   Matrix ) ;						// 指定のフ?ー?の座標変換行列( ?ーカ?座標から?ー?ド座標に変換する行列 )を設定する
extern	int			MV1SetFrameUserLocalWorldMatrixD(	int MHandle, int FrameIndex, MATRIX_D Matrix ) ;						// 指定のフ?ー?の座標変換行列( ?ーカ?座標から?ー?ド座標に変換する行列 )を設定する
extern	int			MV1ResetFrameUserLocalWorldMatrix(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の座標変換行列( ?ーカ?座標から?ー?ド座標に変換する行列 )をデフォ?トに戻す
extern	VECTOR		MV1GetFrameMaxVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?頂点の?ーカ?座標での最大値を得る
extern	VECTOR_D	MV1GetFrameMaxVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?頂点の?ーカ?座標での最大値を得る
extern	VECTOR		MV1GetFrameMinVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?頂点の?ーカ?座標での最小値を得る
extern	VECTOR_D	MV1GetFrameMinVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?頂点の?ーカ?座標での最小値を得る
extern	VECTOR		MV1GetFrameAvgVertexLocalPosition(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?頂点の?ーカ?座標での平均値を得る
extern	VECTOR_D	MV1GetFrameAvgVertexLocalPositionD(	int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?頂点の?ーカ?座標での平均値を得る
extern	int			MV1GetFrameVertexNum(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?に含まれる頂点の?を取得する
extern	int			MV1GetFrameTriangleNum(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?に含まれるポ?ゴ?の?を取得する
extern	int			MV1GetFrameMeshNum(					int MHandle, int FrameIndex ) ;											// 指定のフ?ー?が?つ?ッシ?の?を取得する
extern	int			MV1GetFrameMesh(					int MHandle, int FrameIndex, int Index ) ;								// 指定のフ?ー?が?つ?ッシ?の?ッシ?イ?デックスを取得する
extern	int			MV1SetFrameVisible(					int MHandle, int FrameIndex, int VisibleFlag ) ;						// 指定のフ?ー?の表示、非表示状態を変更する( TRUE:表示  FALSE:非表示 )
extern	int			MV1GetFrameVisible(					int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の表示、非表示状態を取得する( TRUE:表示  FALSE:非表示 )
extern	int			MV1SetFrameDifColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// 指定のフ?ー?のディフ?ーズカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	int			MV1SetFrameSpcColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// 指定のフ?ー?のスペキ??カ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	int			MV1SetFrameEmiColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// 指定のフ?ー?のエミッシブカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	int			MV1SetFrameAmbColorScale(			int MHandle, int FrameIndex, COLOR_F Scale ) ;							// 指定のフ?ー?のア?ビエ?トカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetFrameDifColorScale(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?のディフ?ーズカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetFrameSpcColorScale(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?のスペキ??カ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetFrameEmiColorScale(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?のエミッシブカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetFrameAmbColorScale(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?のア?ビエ?トカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	int			MV1GetFrameSemiTransState(			int MHandle, int FrameIndex ) ;											// 指定のフ?ー?に半透明要素が?るかどうかを取得する( 戻り値 TRUE:?る  FALSE:ない )
extern	int			MV1SetFrameOpacityRate(				int MHandle, int FrameIndex, float Rate ) ;								// 指定のフ?ー?の不透明度を設定する( 不透明 1.0f ～ 透明 0.0f )
extern	float		MV1GetFrameOpacityRate(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の不透明度を取得する( 不透明 1.0f ～ 透明 0.0f )
extern	int			MV1SetFrameBaseVisible(				int MHandle, int FrameIndex, int VisibleFlag ) ;						// 指定のフ?ー?の?期表示状態を設定する( TRUE:表示  FALSE:非表示 )
extern	int			MV1GetFrameBaseVisible(				int MHandle, int FrameIndex ) ;											// 指定のフ?ー?の?期表示状態を取得する( TRUE:表示  FALSE:非表示 )
extern	int			MV1SetFrameTextureAddressTransform( int MHandle, int FrameIndex, float TransU, float TransV, float ScaleU, float ScaleV, float RotCenterU, float RotCenterV, float Rotate ) ;	// 指定のフ?ー?のテクスチ?座標変換パ??ータを設定する
extern	int			MV1SetFrameTextureAddressTransformMatrix( int MHandle, int FrameIndex, MATRIX Matrix ) ;					// 指定のフ?ー?のテクスチ?座標変換行列をセットする
extern	int			MV1ResetFrameTextureAddressTransform( int MHandle, int FrameIndex ) ;										// 指定のフ?ー?のテクスチ?座標変換パ??ータを?セットする

// ?ッシ?関係
extern	int			MV1GetMeshNum(						int MHandle ) ;															// ?デ?に含まれる?ッシ?の?を取得する
extern	int			MV1GetMeshMaterial(					int MHandle, int MeshIndex ) ;											// 指定?ッシ?が使用しているマテ?ア?のイ?デックスを取得する
extern	int			MV1GetMeshVertexNum(				int MHandle, int MeshIndex ) ;											// 指定?ッシ?に含まれる頂点の?を取得する
extern	int			MV1GetMeshTriangleNum(				int MHandle, int MeshIndex ) ;											// 指定?ッシ?に含まれる三角形ポ?ゴ?の?を取得する
extern	int			MV1SetMeshVisible(					int MHandle, int MeshIndex, int VisibleFlag ) ;							// 指定?ッシ?の表示、非表示状態を変更する( TRUE:表示  FALSE:非表示 )
extern	int			MV1GetMeshVisible(					int MHandle, int MeshIndex ) ;											// 指定?ッシ?の表示、非表示状態を取得する( TRUE:表示  FALSE:非表示 )
extern	int			MV1SetMeshDifColorScale(			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// 指定の?ッシ?のディフ?ーズカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	int			MV1SetMeshSpcColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// 指定の?ッシ?のスペキ??カ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	int			MV1SetMeshEmiColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// 指定の?ッシ?のエミッシブカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	int			MV1SetMeshAmbColorScale( 			int MHandle, int MeshIndex, COLOR_F Scale ) ;							// 指定の?ッシ?のア?ビエ?トカ?ーのスケー?値を設定する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetMeshDifColorScale( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?のディフ?ーズカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetMeshSpcColorScale( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?のスペキ??カ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetMeshEmiColorScale( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?のエミッシブカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	COLOR_F		MV1GetMeshAmbColorScale( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?のア?ビエ?トカ?ーのスケー?値を取得する( デフォ?ト値は 1.0f )
extern	int			MV1SetMeshOpacityRate( 				int MHandle, int MeshIndex, float Rate ) ;								// 指定の?ッシ?の不透明度を設定する( 不透明 1.0f ～ 透明 0.0f )
extern	float		MV1GetMeshOpacityRate( 				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?の不透明度を取得する( 不透明 1.0f ～ 透明 0.0f )
extern	int			MV1SetMeshDrawBlendMode( 			int MHandle, int MeshIndex, int BlendMode ) ;							// 指定の?ッシ?の描画ブ??ド?ードを設定する( DX_BLENDMODE_ALPHA ? )
extern	int			MV1SetMeshDrawBlendParam( 			int MHandle, int MeshIndex, int BlendParam ) ;							// 指定の?ッシ?の描画ブ??ドパ??ータを設定する
extern	int			MV1GetMeshDrawBlendMode( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?の描画ブ??ド?ードを取得する( DX_BLENDMODE_ALPHA ? )
extern	int			MV1GetMeshDrawBlendParam( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?の描画ブ??ドパ??ータを設定する
extern	int			MV1SetMeshBaseVisible( 				int MHandle, int MeshIndex, int VisibleFlag ) ;							// 指定の?ッシ?の?期表示状態を設定する( TRUE:表示  FALSE:非表示 )
extern	int			MV1GetMeshBaseVisible( 				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?の?期表示状態を取得する( TRUE:表示  FALSE:非表示 )
extern	int			MV1SetMeshBackCulling( 				int MHandle, int MeshIndex, int CullingFlag ) ;							// 指定の?ッシ?のバックカ??グを行うかどうかを設定する( DX_CULLING_LEFT ? )
extern	int			MV1GetMeshBackCulling( 				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?のバックカ??グを行うかどうかを取得する( DX_CULLING_LEFT ? )
extern	VECTOR		MV1GetMeshMaxPosition( 				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?に含まれるポ?ゴ?の最大?ーカ?座標を取得する
extern	VECTOR		MV1GetMeshMinPosition( 				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?に含まれるポ?ゴ?の最小?ーカ?座標を取得する
extern	int			MV1GetMeshTListNum( 				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?に含まれるト?イア?グ??ストの?を取得する
extern	int			MV1GetMeshTList( 					int MHandle, int MeshIndex, int Index ) ;								// 指定の?ッシ?に含まれるト?イア?グ??ストのイ?デックスを取得する
extern	int			MV1GetMeshSemiTransState( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?に半透明要素が?るかどうかを取得する( 戻り値 TRUE:?る  FALSE:ない )
extern	int			MV1SetMeshUseVertDifColor( 			int MHandle, int MeshIndex, int UseFlag ) ;								// 指定の?ッシ?の頂点ディフ?ーズカ?ーをマテ?ア?のディフ?ーズカ?ーの代わりに使用するかどうかを設定する( TRUE:マテ?ア?カ?ーの代わりに使用する  FALSE:マテ?ア?カ?ーを使用する )
extern	int			MV1SetMeshUseVertSpcColor( 			int MHandle, int MeshIndex, int UseFlag ) ;								// 指定の?ッシ?の頂点スペキ??カ?ーをマテ?ア?のスペキ??カ?ーの代わりに使用するかどうかを設定する( TRUE:マテ?ア?カ?ーの代わりに使用する  FALSE:マテ?ア?カ?ーを使用する )
extern	int			MV1GetMeshUseVertDifColor( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?の頂点ディフ?ーズカ?ーをマテ?ア?のディフ?ーズカ?ーの代わりに使用するかどうかの設定を取得する( 戻り値  TRUE:マテ?ア?カ?ーの代わりに使用する  FALSE:マテ?ア?カ?ーを使用する )
extern	int			MV1GetMeshUseVertSpcColor( 			int MHandle, int MeshIndex ) ;											// 指定の?ッシ?の頂点スペキ??カ?ーをマテ?ア?のスペキ??カ?ーの代わりに使用するかどうかの設定を取得する( 戻り値  TRUE:マテ?ア?カ?ーの代わりに使用する  FALSE:マテ?ア?カ?ーを使用する )
extern	int			MV1GetMeshShapeFlag(				int MHandle, int MeshIndex ) ;											// 指定の?ッシ?がシェイプ?ッシ?かどうかを取得する( 戻り値 TRUE:シェイプ?ッシ?  FALSE:通常?ッシ? )

// シェイプ関係
extern	int			MV1GetShapeNum(						int MHandle ) ;															// ?デ?に含まれるシェイプの?を取得する
extern	int			MV1SearchShape(						int MHandle, const TCHAR *ShapeName                         ) ;			// シェイプの名前から?デ??のシェイプのシェイプイ?デックスを取得する( 無かった場?は戻り値が-1 )
extern	int			MV1SearchShapeWithStrLen(			int MHandle, const TCHAR *ShapeName, size_t ShapeNameLength ) ;			// シェイプの名前から?デ??のシェイプのシェイプイ?デックスを取得する( 無かった場?は戻り値が-1 )
extern	const TCHAR *MV1GetShapeName(					int MHandle, int ShapeIndex ) ;											// 指定シェイプの名前を取得する
extern	int			MV1GetShapeTargetMeshNum(			int MHandle, int ShapeIndex ) ;											// 指定シェイプが対象としている?ッシ?の?を取得する
extern	int			MV1GetShapeTargetMesh(				int MHandle, int ShapeIndex, int Index ) ;								// 指定シェイプが対象としている?ッシ?の?ッシ?イ?デックスを取得する
extern	int			MV1SetShapeRate(					int MHandle, int ShapeIndex, float Rate, int Type DEFAULTPARAM( = DX_MV1_SHAPERATE_ADD ) ) ;	// 指定シェイプの有効率を設定する( Rate  0.0f:0% ～ 1.0f:100% )
extern	float		MV1GetShapeRate(					int MHandle, int ShapeIndex ) ;											// 指定シェイプの有効率を取得する( 戻り値  0.0f:0% ～ 1.0f:100% )
extern	float		MV1GetShapeApplyRate(				int MHandle, int ShapeIndex ) ;											// 指定シェイプの有効率を取得する( 戻り値  0.0f:0% ～ 1.0f:100% )( MV1SetShapeRate で指定した値がそのまま戻り値となる MV1GetShapeRate と異なりアニ?ーシ??のシェイプ情報なども加味した値が戻り値となります )

// ト?イア?グ??スト関係
extern	int			MV1GetTriangleListNum(						int MHandle ) ;																		// ?デ?に含まれるト?イア?グ??ストの?を取得する
extern	int			MV1GetTriangleListVertexType(				int MHandle, int TListIndex ) ;														// 指定のト?イア?グ??ストの頂点データタイプを取得する( DX_MV1_VERTEX_TYPE_1FRAME ? )
extern	int			MV1GetTriangleListPolygonNum(				int MHandle, int TListIndex ) ;														// 指定のト?イア?グ??ストに含まれるポ?ゴ?の?を取得する
extern	int			MV1GetTriangleListVertexNum(				int MHandle, int TListIndex ) ;														// 指定のト?イア?グ??ストに含まれる頂点データの?を取得する
extern	int			MV1GetTriangleListLocalWorldMatrixNum(		int MHandle, int TListIndex ) ;														// 指定のト?イア?グ??ストが使用する座標変換行列の?を取得する
extern	MATRIX		MV1GetTriangleListLocalWorldMatrix(			int MHandle, int TListIndex, int LWMatrixIndex ) ;									// 指定のト?イア?グ??ストが使用する座標変換行列( ?ーカ?→?ー?ド )を取得する
extern	int			MV1GetTriangleListPolygonVertexPosition(	int MHandle, int TListIndex, int PolygonIndex, VECTOR *VertexPositionArray DEFAULTPARAM( = NULL ) , float *MatrixWeightArray DEFAULTPARAM( = NULL ) ) ;	// 指定のト?イア?グ??ストの指定のポ?ゴ?が使用している頂点の座標を取得する( 戻り値  エ?ー：-1  0以上：ポ?ゴ?が使用している頂点の? )
extern	int			MV1GetTriangleListUseMaterial(				int MHandle, int TListIndex ) ;														// 指定のト?イア?グ??ストが使用しているマテ?ア?のイ?デックスを取得する

// コ?ジ??関係
extern	int							MV1SetupCollInfo(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int XDivNum DEFAULTPARAM( = 32 ) , int YDivNum DEFAULTPARAM( = 8 ) , int ZDivNum DEFAULTPARAM( = 32 ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;		// コ?ジ??情報を構築する
extern	int							MV1TerminateCollInfo(			int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;																// コ?ジ??情報の後始?
extern	int							MV1RefreshCollInfo(				int MHandle, int FrameIndex DEFAULTPARAM( = -1 ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;																// コ?ジ??情報を更新する
extern	MV1_COLL_RESULT_POLY		MV1CollCheck_Line(				int MHandle, int FrameIndex, VECTOR PosStart, VECTOR PosEnd , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// 線と?デ?の?たり判定
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_LineDim(			int MHandle, int FrameIndex, VECTOR PosStart, VECTOR PosEnd , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// 線と?デ?の?たり判定( 戻り値が MV1_COLL_RESULT_POLY_DIM )
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Sphere(			int MHandle, int FrameIndex, VECTOR CenterPos, float r , int MeshIndex DEFAULTPARAM( = -1 ) ) ;							// ?と?デ?の?たり判定
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Capsule(			int MHandle, int FrameIndex, VECTOR Pos1, VECTOR Pos2, float r , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// カプセ?と?デ?の?たり判定
extern	MV1_COLL_RESULT_POLY_DIM	MV1CollCheck_Triangle(			int MHandle, int FrameIndex, VECTOR Pos1, VECTOR Pos2, VECTOR Pos3 , int MeshIndex DEFAULTPARAM( = -1 ) ) ;				// 三角形と?デ?の?たり判定
extern	MV1_COLL_RESULT_POLY		MV1CollCheck_GetResultPoly(		MV1_COLL_RESULT_POLY_DIM ResultPolyDim, int PolyNo ) ;																	// コ?ジ???果ポ?ゴ?配列から指定番?のポ?ゴ?情報を取得する
extern	int							MV1CollResultPolyDimTerminate(	MV1_COLL_RESULT_POLY_DIM ResultPolyDim ) ;																				// コ?ジ???果ポ?ゴ?配列の後始?をする

// 参照用?ッシ?関係
extern	int					MV1SetupReferenceMesh(		int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// 参照用?ッシ?のセットアップ
extern	int					MV1TerminateReferenceMesh(	int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// 参照用?ッシ?の後始?
extern	int					MV1RefreshReferenceMesh(	int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// 参照用?ッシ?の更新
extern	MV1_REF_POLYGONLIST	MV1GetReferenceMesh(		int MHandle, int FrameIndex, int IsTransform, int IsPositionOnly DEFAULTPARAM( = FALSE ) , int MeshIndex DEFAULTPARAM( = -1 ) ) ;					// 参照用?ッシ?を取得する

#endif // DX_NON_MODEL
























// DxLive2DCubism4.cpp 関? プ?トタイプ宣言

#ifndef DX_NON_LIVE2D_CUBISM4

extern	int			Live2D_SetCubism4CoreDLLPath(           const TCHAR *CoreDLLFilePath ) ;								// Live2DCubismCore.dll のファイ?パスを設定する
extern	int			Live2D_SetCubism4CoreDLLPathWithStrLen( const TCHAR *CoreDLLFilePath, size_t CoreDLLFilePathLength ) ;	// Live2DCubismCore.dll のファイ?パスを設定する
extern	int			Live2D_SetCubism3CoreDLLPath(           const TCHAR *CoreDLLFilePath ) ;								// Live2DCubismCore.dll のファイ?パスを設定する
extern	int			Live2D_SetCubism3CoreDLLPathWithStrLen( const TCHAR *CoreDLLFilePath, size_t CoreDLLFilePathLength ) ;	// Live2DCubismCore.dll のファイ?パスを設定する

extern	int			Live2D_RenderBegin( void ) ;																			// Live2D の描画??を開始する
extern	int			Live2D_RenderEnd( void ) ;																				// Live2D の描画??を終了する

extern	int			Live2D_LoadModel(			const TCHAR *FilePath ) ;													// Live2D の?デ?ファイ?を読み?む( 0以上:Live2D?デ?ハ?ド?  マイナス値:エ?ー発生 )
extern	int			Live2D_LoadModelWithStrLen(	const TCHAR *FilePath, size_t FilePathLength ) ;							// Live2D の?デ?ファイ?を読み?む( 0以上:Live2D?デ?ハ?ド?  マイナス値:エ?ー発生 )
extern	int			Live2D_DeleteModel(			int Live2DModelHandle ) ;													// Live2D の?デ?を削?する
extern	int			Live2D_InitModel(			void ) ;																	// すべての Live2D の?デ?を削?する

extern	int			Live2D_SetUserShader( int TargetShader /* DX_LIVE2D_SHADER_NORMAL_PIXEL ? */ , int ShaderHandle DEFAULTPARAM( = -1 ) ) ;		// Live2D の?デ?描画で使用するシェーダーを設定する( ShaderHandle に -1 を渡すと設定を解? )
extern	int			Live2D_DrawCallback( void ( *Callback )( int Live2DModelHandle, int TextureIndex, void *UserData ), void *UserData ) ;			// Live2D の?デ?描画の前に呼ばれるコー?バック関?を設定する Callback に NULL を渡すと設定を解? )
extern	int			Live2D_SetUseAutoScaling( int UseFlag ) ;																// Live2D の?デ?描画をする際に、画面サイズに?じたスケー??グを行うかを設定する( UseFlag  TRUE:スケー??グを行う( デフォ?ト )  FALSE:スケー??グを行わない )
extern	int			Live2D_SetUseAutoCentering( int UseFlag ) ;																// Live2D の?デ?を画面の?心に描画するかを設定する( UseFlag   TRUE:画面の?心に描画する( デフォ?ト )   FALSE:画面の?心に描画しない )
extern	int			Live2D_SetUseReverseYAxis( int UseFlag ) ;																// Live2D_Model_SetTranslate で指定する平行移動値の y の向きを反転するかを設定する( UseFlag   TRUE:反転する( デフォ?ト )   FALSE:反転しない )

extern	int			Live2D_Model_Update(			int Live2DModelHandle, float DeltaTimeSeconds ) ;						// Live2D の?デ?の状態を更新する
extern	int			Live2D_Model_SetTranslate(		int Live2DModelHandle, float x, float y ) ;								// Live2D の?デ?の位置を設定する
extern	int			Live2D_Model_SetExtendRate(		int Live2DModelHandle, float ExRateX, float ExRateY ) ;					// Live2D の?デ?の拡大率を設定する
extern	int			Live2D_Model_SetRotate(			int Live2DModelHandle, float RotAngle ) ;								// Live2D の?デ?の回転を設定する
extern	int			Live2D_Model_Draw(				int Live2DModelHandle ) ;												// Live2D の?デ?を描画する

extern	int			Live2D_Model_StartMotion(				int Live2DModelHandle, const TCHAR *group,						int no, float fadeInSeconds DEFAULTPARAM( = -1.0f ) , float fadeOutSeconds DEFAULTPARAM( = -1.0f ) , int isLoopFadeIn DEFAULTPARAM( = TRUE ) ) ;	// Live2D の?デ?の指定の?ーシ??を再生する
extern	int			Live2D_Model_StartMotionWithStrLen(		int Live2DModelHandle, const TCHAR *group, size_t groupLength,	int no, float fadeInSeconds DEFAULTPARAM( = -1.0f ) , float fadeOutSeconds DEFAULTPARAM( = -1.0f ) , int isLoopFadeIn DEFAULTPARAM( = TRUE ) ) ;	// Live2D の?デ?の指定の?ーシ??を再生する
extern	int			Live2D_Model_GetLastPlayMotionNo(		int Live2DModelHandle ) ;																			// Live2D の?デ?で最後に再生した?ーシ??のグ?ープ内の番?を取得する
extern	int			Live2D_Model_IsMotionFinished(			int Live2DModelHandle ) ;																			// Live2D の?デ?の?ーシ??再生が終了しているかを取得する( 戻り値  TRUE:再生が終了している  FALSE:再生? )
extern	float		Live2D_Model_GetMotionPlayTime(			int Live2DModelHandle ) ;																			// Live2D の?デ?の?ーシ??再生?間を取得する
extern	int			Live2D_Model_SetExpression(				int Live2DModelHandle, const TCHAR *expressionID ) ;												// Live2D の?デ?の指定の表情?ーシ??を設定する
extern	int			Live2D_Model_SetExpressionWithStrLen(	int Live2DModelHandle, const TCHAR *expressionID, size_t expressionIDLength ) ;						// Live2D の?デ?の指定の表情?ーシ??を設定する
extern	int			Live2D_Model_HitTest(					int Live2DModelHandle, const TCHAR *hitAreaName,							float x, float y ) ;	// 指定の座標が Live2D の?デ?の指定の?たり判定の矩形範囲内か判定する( TRUE:矩形範囲内  FALSE:矩形範囲外 )
extern	int			Live2D_Model_HitTestWithStrLen(			int Live2DModelHandle, const TCHAR *hitAreaName, size_t hitAreaNameLength,	float x, float y ) ;	// 指定の座標が Live2D の?デ?の指定の?たり判定の矩形範囲内か判定する( TRUE:矩形範囲内  FALSE:矩形範囲外 )

extern	int			Live2D_Model_GetParameterCount(						int Live2DModelHandle ) ;																// Live2D の?デ?に設定されているパ??ータの?を取得する
extern	const TCHAR *Live2D_Model_GetParameterId(						int Live2DModelHandle, int index ) ;													// Live2D の?デ?に設定されているパ??ータのIDを取得する
extern	float		Live2D_Model_GetParameterValue(						int Live2DModelHandle, const TCHAR *parameterId ) ;										// Live2D の?デ?に設定されているパ??ータを取得する
extern	float		Live2D_Model_GetParameterValueWithStrLen(			int Live2DModelHandle, const TCHAR *parameterId, size_t parameterIdLength ) ;			// Live2D の?デ?に設定されているパ??ータを取得する
extern	int			Live2D_Model_SetParameterValue(						int Live2DModelHandle, const TCHAR *parameterId,                           float value ) ;	// Live2D の?デ?に設定されているパ??ータを設定する
extern	int			Live2D_Model_SetParameterValueWithStrLen(			int Live2DModelHandle, const TCHAR *parameterId, size_t parameterIdLength, float value ) ;	// Live2D の?デ?に設定されているパ??ータを設定する

extern	int			Live2D_Model_GetHitAreasCount(						int Live2DModelHandle ) ;																// Live2D の?デ?に設定された?たり判定の?を取得する
extern	const TCHAR *Live2D_Model_GetHitAreaName(						int Live2DModelHandle, int index ) ;													// Live2D の?デ?の?たり判定に設定された名前を取得する
extern	const TCHAR *Live2D_Model_GetPhysicsFileName(					int Live2DModelHandle ) ;																// Live2D の?デ?の物??算設定ファイ?の名前を取得する
extern	const TCHAR *Live2D_Model_GetPoseFileName(						int Live2DModelHandle ) ;																// Live2D の?デ?のパーツ切り替え設定ファイ?の名前を取得する
extern	int			Live2D_Model_GetExpressionCount(					int Live2DModelHandle ) ;																// Live2D の?デ?の表情設定ファイ?の?を取得する
extern	const TCHAR *Live2D_Model_GetExpressionName(					int Live2DModelHandle, int index ) ;													// Live2D の?デ?の表情設定ファイ?を識別するIDを取得する
extern	const TCHAR *Live2D_Model_GetExpressionFileName(				int Live2DModelHandle, int index ) ;													// Live2D の?デ?の表情設定ファイ?の名前を取得する
extern	int			Live2D_Model_GetMotionGroupCount(					int Live2DModelHandle ) ;																// Live2D の?デ?の?ーシ??グ?ープの?を取得する
extern	const TCHAR *Live2D_Model_GetMotionGroupName(					int Live2DModelHandle, int index ) ;													// Live2D の?デ?の?ーシ??グ?ープの名前を取得する
extern	int			Live2D_Model_GetMotionCount(						int Live2DModelHandle, const TCHAR *groupName ) ;										// Live2D の?デ?の?ーシ??グ?ープに含まれる?ーシ??の?を取得する
extern	int			Live2D_Model_GetMotionCountWithStrLen(				int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength ) ;				// Live2D の?デ?の?ーシ??グ?ープに含まれる?ーシ??の?を取得する
extern	const TCHAR *Live2D_Model_GetMotionFileName(					int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D の?デ?のグ?ープ名とイ?デックス値から?ーシ??ファイ?の名前を取得する
extern	const TCHAR *Live2D_Model_GetMotionFileNameWithStrLen(			int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D の?デ?のグ?ープ名とイ?デックス値から?ーシ??ファイ?の名前を取得する
extern	const TCHAR *Live2D_Model_GetMotionSoundFileName(				int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D の?デ?の?ーシ??に対?するサウ?ドファイ?の名前を取得する
extern	const TCHAR *Live2D_Model_GetMotionSoundFileNameWithStrLen(		int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D の?デ?の?ーシ??に対?するサウ?ドファイ?の名前を取得する
extern	float		Live2D_Model_GetMotionFadeInTimeValue(				int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D の?デ?の?ーシ??開始?のフェードイ????間を取得する
extern	float		Live2D_Model_GetMotionFadeInTimeValueWithStrLen(	int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D の?デ?の?ーシ??開始?のフェードイ????間を取得する
extern	float		Live2D_Model_GetMotionFadeOutTimeValue(				int Live2DModelHandle, const TCHAR *groupName,							int index ) ;	// Live2D の?デ?の?ーシ??終了?のフェードアウト???間を取得する
extern	float		Live2D_Model_GetMotionFadeOutTimeValueWithStrLen(	int Live2DModelHandle, const TCHAR *groupName, size_t groupNameLength,	int index ) ;	// Live2D の?デ?の?ーシ??終了?のフェードアウト???間を取得する
extern	const TCHAR *Live2D_Model_GetUserDataFile(						int Live2DModelHandle ) ;																// Live2D の?デ?の?ーザデータのファイ?名を取得する
extern	int			Live2D_Model_GetEyeBlinkParameterCount(				int Live2DModelHandle ) ;																// Live2D の?デ?の目パチに関連付けられたパ??ータの?を取得する
extern	const TCHAR *Live2D_Model_GetEyeBlinkParameterId(				int Live2DModelHandle, int index ) ;													// Live2D の?デ?の目パチに関連付けられたパ??ータのIDを取得する
extern	int			Live2D_Model_GetLipSyncParameterCount(				int Live2DModelHandle ) ;																// Live2D の?デ?の?ップシ?クに関連付けられたパ??ータの?を取得する
extern	const TCHAR *Live2D_Model_GetLipSyncParameterId(				int Live2DModelHandle, int index ) ;													// Live2D の?デ?の?ップシ?クに関連付けられたパ??ータのIDを取得する
extern	float		Live2D_Model_GetCanvasWidth(						int Live2DModelHandle ) ;																// Live2D の?デ?のキ??バスの横?を取得する
extern	float		Live2D_Model_GetCanvasHeight(						int Live2DModelHandle ) ;																// Live2D の?デ?のキ??バスの縦?を取得する

#endif // DX_NON_LIVE2D_CUBISM4








#undef DX_FUNCTION_START
#define DX_FUNCTION_END
#undef DX_FUNCTION_END

#if defined( __cplusplus ) && defined( DX_COMPILE_TYPE_C_LANGUAGE )
}
#endif

#ifndef DX_NON_NAMESPACE

}

#endif // DX_NON_NAMESPACE

// ネー?スペース DxLib を使用する ------------------------------------------------------
#ifndef DX_NON_NAMESPACE
#ifndef DX_NON_USING_NAMESPACE_DXLIB

using namespace DxLib ;

#endif // DX_NON_USING_NAMESPACE_DXLIB
#endif // DX_NON_NAMESPACE

// ＤＸ?イブ??内?でのみ使用するヘッダファイ?のイ?ク?ード -------------------------

#ifdef DX_MAKE
//	#include "DxStatic.h"
#endif

#endif // DX_LIB_H


