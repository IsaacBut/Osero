#pragma once
#include "GameBase.h"

#include <string>
using namespace std;

#if DEBUG
#define	SFXDIR	"Resource/Sfx/"

#define	SFX_PUTCHESS	SFXDIR ## "Put.mp3"
#define	SFX_TURNCHESS	SFXDIR ## "Turn.mp3"
#define	SFX_PRESS		SFXDIR ## "Press.mp3"
#else
#define	SFXDIR	L"Resource/Sfx/"

#define	SFX_PUTCHESS	SFXDIR ## "Put.mp3"
#define	SFX_TURNCHESS	SFXDIR ## "Turn.mp3"
#define	SFX_PRESS		SFXDIR ## "Press.mp3"
#endif 

class SFX
{
public:
	static int SfxInit();
	static int SfxEnd();
	static void Play(string targetEffect);
};
extern SFX sfx;