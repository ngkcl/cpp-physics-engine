#include "CApp.h"

CApp::CApp() {}

int CApp::onRun() {
    if (onInit() == false) {
        return -1;
    }

    SDL_Event event;

    while (isRunning) {
        while (SDL_PollEvent(&event)) {
            onEvent(&event);
        }

        onLoop();
        onRender();
    }

    onCleanup();

    return 0;
}

int main() {

    CApp main_app;

    return main_app.onRun();
}

