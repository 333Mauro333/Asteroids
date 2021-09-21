#include "raylib.h"


namespace externalFiles
{
	// Archivos no estáticos.

	// Fuentes.
	// Sonidos.
	// Músicas.
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