//
// Created by theti2o on 25/03/16.
//

#include "SpaceJourney.h"

using namespace std;
using namespace sf;

void SpaceJourney::start()
{

    //initialisation fenetre
    m_window.create(VideoMode(800, 800), "Space Journey");
    m_window.setPosition(Vector2i(200,100));
    m_window.setVerticalSyncEnabled(true);
    m_window.clear(Color::Black);
    m_window.display();

    if(!m_mainFont.loadFromFile("/home/theti2o/ClionProjects/SpaceJourney/files/fonts/FreeMono.ttf")) {}

    //Showing the menu:

    m_atMenu = true;
    m_atGame = false;
    m_exitGame = false;

    mainLoop();


}

void SpaceJourney::mainLoop()
{
    while(!m_exitGame)
    {
        if(m_atMenu)
        {
            menu();
            m_atMenu = false;
        }
        else if(m_atGame)
        {
            launchGame();
            m_atGame = false;
        }
        else
        {
            m_exitGame = true;
        }
    }

    stop();

}

void SpaceJourney::stop()
{
    cout << "End screen !" << endl;
}


// Events

void SpaceJourney::inMenuEvents()
{
    Event event;
    while(m_window.pollEvent(event))
    {

        switch (event.type)
        {
            case Event::Closed:
                m_window.close();
                break;
            case Event::MouseButtonPressed:
                break;
            case Event::MouseButtonReleased:

                break;
            case Event::KeyPressed:
                switch (event.key.code)
                {
                    case Keyboard::Escape:
                        m_exitGame = true;
                        m_atMenu = false;
                        m_atGame = false;
                        break;
                    case Keyboard::Return:
                        m_atGame = true;
                        m_atMenu = false;
                        break;
                }

                break;
            case Event::MouseWheelMoved:
                break;

            default:
                break;
        }
    }
}

void SpaceJourney::inGameEvents()
{
    Event event;
    while(m_window.pollEvent(event))
    {

        switch (event.type)
        {
            case Event::Closed:
                m_window.close();
                break;
            case Event::MouseButtonPressed:
                break;
            case Event::MouseButtonReleased:

                break;
            case Event::KeyPressed:
                switch (event.key.code)
                {
                    case Keyboard::Escape:
                        m_atGame = false;
                        m_atMenu = true;
                        break;
                    case Keyboard::BackSpace:
                        break;
                }

                break;
            case Event::MouseWheelMoved:
                break;

            default:
                break;
        }
    }

}


// Stats
void SpaceJourney::menu()
{
    do{

        //show Menu
        drawMenu();
        m_window.display();

        //check events
        inMenuEvents();


    }while(m_atMenu);


}

void SpaceJourney::launchGame()
{
    game();
}

void SpaceJourney::game()
{
    do
    {
      //affichages:
        showGame();
        m_window.display();
        //events
        inGameEvents();
    }while (m_atGame);
}






// Views

void SpaceJourney::showGame()
{
    m_window.clear(Color::Black);

    Text inGame;
    inGame.setFont(m_mainFont);
    inGame.setColor(Color::White);
    inGame.setCharacterSize(50);
    inGame.setPosition(200, 200);
    inGame.setString("You're in game !");

    m_window.draw(inGame);
}



void SpaceJourney::drawMenu()
{
    m_window.clear(Color::Black);

    Text nomJeu;
    nomJeu.setFont(m_mainFont);
    nomJeu.setColor(Color::White);
    nomJeu.setCharacterSize(50);
    nomJeu.setPosition(200, 200);
    nomJeu.setString("Space Journey !");

    Text pressEnter;
    pressEnter.setFont(m_mainFont);
    pressEnter.setColor(Color::White);
    pressEnter.setCharacterSize(15);
    pressEnter.setPosition(300, 400);
    pressEnter.setString("Press enter...");

    m_window.draw(nomJeu);
    m_window.draw(pressEnter);

}