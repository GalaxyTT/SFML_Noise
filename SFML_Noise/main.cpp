#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#define wWidth 500
#define wHeight 500


int main() 
{
	sf::RenderWindow window(sf::VideoMode(wWidth, wHeight), "Noise");
	sf::Event event;

	while (window.isOpen())
	{
		while (window.pollEvent(event)) 
		{
			if (event.type == sf::Event::Closed) 
			{
				window.close();
			}
		}
	}
}