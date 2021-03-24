#include <iostream>
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include "SFML\Audio.hpp"
#include "SFML\Network.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "UwU");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        sf::Event event; //events
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        //window.draw(test);

        window.display();
    }
    return 0;
}