#include "GameController.h"

GameController::GameController()
{
    //ctor
}

GameController::~GameController()
{
    //dtor
}

void GameController::sendEvent(sf::Event event){
    // Close window : exit
    if (event.type == sf::Event::Closed)
        closeApplication();

}
