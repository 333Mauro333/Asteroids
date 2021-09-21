#include "raylib.h"


namespace externalFiles
{
	// Archivos no est�ticos.

	// Fuentes.
	// Sonidos.
	// M�sicas.
	// Texturas.

	void initAllFiles()
	{
		InitAudioDevice();


	}

	void playSoundWithDifferentPitch(Sound sound, float pitch)
	{
		SetSoundPitch(sound, pitch);
		PlaySound(sound);
	}

}