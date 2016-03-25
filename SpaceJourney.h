//
// Created by theti2o on 25/03/16.
//

#ifndef SPACEJOURNEY_SPACEJOURNEY_H
#define SPACEJOURNEY_SPACEJOURNEY_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <SFML/Graphics.hpp>


class SpaceJourney
{
public:
    void start();
    void stop();


private:
    //Main loop
    void mainLoop();

    // Events
    void inMenuEvents();
    void inGameEvents();

    // stats
    void menu();

    void launchGame();
    void game();

    //game variables
    bool m_atMenu;
    bool m_atGame;
    bool m_exitGame;



    // views
    void drawMenu();
    void showGame();

    sf::RenderWindow m_window;
    sf::Font m_mainFont;


};


#endif //SPACEJOURNEY_SPACEJOURNEY_H
