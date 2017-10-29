#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include <SFML/Graphics.hpp>
#include "ApplicationSubject.h"

class GameController: public ApplicationSubject
{
    public:
        GameController();
        virtual ~GameController();

        void sendEvent(sf::Event event);
};

#endif // GAMECONTROLLER_H
