#include "GameView.h"

GameView::GameView(GameController *controller){
    gameController = controller;
    gameController->attach(&this);
    app = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML window");
    texture = new sf::Texture();

    if (texture->loadFromFile("textures/cb.bmp"))
        sprite = new sf::Sprite(*texture);

}

int GameView::render(){
    if(sprite == nullptr)
        return EXIT_FAILURE;

    while (app->isOpen())
    {
        // Process events
        sf::Event event;
        while (app->pollEvent(event))
        {
            gameController->sendEvent(event);
        }

        // Clear screen
        app->clear();

        // Draw the sprite
        app->draw(*sprite);

        // Update the window
        app->display();
    }
}

void GameView::closeApplication(){
    app->close();
}
