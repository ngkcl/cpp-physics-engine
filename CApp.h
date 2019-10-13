#ifndef _CAPP_H_
#define _CAPP_H_

#include <SDL2/SDL.h>

class CApp {
	private:
		bool isRunning;

		// Screen dimensions
		int SCREEN_WIDTH = 640;
		int SCREEN_HEIGHT = 480;

		SDL_Window* gWindow = NULL;
		SDL_Surface* gScreenSurface = NULL;
	public:
		CApp();

		int onRun();
	public:
		bool onInit();

		void onEvent(SDL_Event* event);

		void onLoop();

		void onRender();

		void onCleanup();
};

#endif
