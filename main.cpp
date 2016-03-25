#include <iostream>

#include "SpaceJourney.h"


using namespace std;

int main()
{

    srand(time(NULL));

    cout << "Starting Space Journey, have fun !" << endl;

    SpaceJourney spaceOne;
    spaceOne.start();

    cout << "Stoping Space Journey, hope you had fun !" << endl;


    return 0;
}

