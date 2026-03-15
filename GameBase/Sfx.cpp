#include "DxLib.h"
#include "Sfx.h"

SFX sfx;

// 効果音ハンドル (初期値は無効値 -1)
// Sound effect handles (initialized as invalid: -1)
static int hnsfx_Put = -1;
static int hnsfx_Turn = -1;
static int hnsfx_Press = -1;


int SFX::SfxInit()
{
	// 効果音ファイルを読み込む
	// Load sound effect files
	hnsfx_Put = LoadSoundMem(SFX_PUTCHESS);
	hnsfx_Turn = LoadSoundMem(SFX_TURNCHESS);
	hnsfx_Press = LoadSoundMem(SFX_PRESS);

	// 全て正常に読み込めたら 1 を返す
	// Return 1 if all sounds loaded successfully
	if (hnsfx_Put != -1 && hnsfx_Turn != -1 && hnsfx_Press != -1)return 1;
	else return 0;
}

int SFX::SfxEnd()
{
	// 効果音リソースを解放
	// Release sound effect resources
	DeleteSoundMem(hnsfx_Put);
	DeleteSoundMem(hnsfx_Turn);
	DeleteSoundMem(hnsfx_Press);

	// ハンドルを無効化
	// Reset handles to invalid state
	hnsfx_Put = -1;
	hnsfx_Turn = -1;
	hnsfx_Press = -1;

	// 全て無効化できたら 1 を返す
	// Return 1 if reset successfully
	if (hnsfx_Put == -1 && hnsfx_Turn == -1 && hnsfx_Press == -1)return 1;
	else return 0;
}

void SFX::Play(string targetEffect)
{
	// 再生対象の効果音を選択
	// Select which sound effect to play
	int* target = nullptr;

	if (targetEffect == "Put") { target = &hnsfx_Put; }
	else if (targetEffect == "Turn") { target = &hnsfx_Turn; }
	else if (targetEffect == "Press") { target = &hnsfx_Press; }

	// 効果音を再生
	// Play the selected sound effect
	if (target != nullptr)PlaySoundMem(*target, DX_PLAYTYPE_BACK, TRUE);

}