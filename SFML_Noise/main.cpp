#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>
#include <cmath>

#define SIZE 5.f
#define PI 3.141592653579

int abc = 0;
int width = 2560;
int height = 1440;

using namespace std;

int calcPixel(int x, int y, char rgb)
{
	
}


void main()
{
	sf::RenderWindow window(sf::VideoMode(width, height), "Noise");
	sf::Event event;
	std::vector<sf::RectangleShape> renderedScreen;

	window.setFramerateLimit(20);


	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		if (abc == 0) {
			for (int y = 0; y < height; y += SIZE)
			{
				for (int x = 0; x < width; x += SIZE)
				{
					sf::RectangleShape tempRectangle;
					tempRectangle.setPosition(x, y);
					tempRectangle.setFillColor(sf::Color(calcPixel(x, y, 'r'), calcPixel(x, y, 'g'), calcPixel(x, y, 'b'), 255));
					tempRectangle.setSize(sf::Vector2f(SIZE, SIZE));
					renderedScreen.push_back(tempRectangle);
				}
			}
			abc++;
		}
		for (auto x : renderedScreen) {
			window.draw(x);
		}
		window.display();
	}
}