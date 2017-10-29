#include "main.h"

int main()
{
    GameController *gameController = new GameController();

    GameView gameView(gameController);

    gameView.render();

    return EXIT_SUCCESS;
}
