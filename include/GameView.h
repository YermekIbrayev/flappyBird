#ifndef GAMEVIEW_INCLUDED
#define GAMEVIEW_INCLUDED
#include <SFML/Graphics.hpp>
#include "ApplicationObserver.h"
#include "GameController.h"

class GameView: public ApplicationObserver
{
private:
    sf::RenderWindow *app;
    sf::Texture *texture;
    sf::Sprite *sprite;

    GameController *gameController;
public:
    GameView(GameController *gameController);
    virtual ~GameView(){}
    int render();
    void closeApplication();
};

#endif // GAMEVIEW_INCLUDED
