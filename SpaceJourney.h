//
// Created by theti2o on 25/03/16.
//

#ifndef SPACEJOURNEY_SPACEJOURNEY_H
#define SPACEJOURNEY_SPACEJOURNEY_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>


class SpaceJourney
{
public:
    void start();

private:
    // Events
    void checkEvents();

    // stats
    void menu();
    void game();

    // views
    void showMenu();
    void showGame();


};


#endif //SPACEJOURNEY_SPACEJOURNEY_H
