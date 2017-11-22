#include "main.h"

int main()
{
    GameController *gameController = new GameController();

    GameView gameView(gameController);
    //Test commit
    gameView.render();

    return EXIT_SUCCESS;
}
