#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	sf::Text text;
	sf::Font font;
	sf::SoundBuffer buffer;
	sf::Sound sound;
	sf::Texture texture;
	sf::Sprite sprite;

	int timer = 0;

	string changer = "sprites/keyboard.gif";


	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(10, 10, 1000, 400));
	sprite.setPosition(sf::Vector2f(730.f, 450.f));

	sound.setBuffer(buffer);



	if (!buffer.loadFromFile("Yamaha-V50-IceBell-C5.wav"))
		cout << "Error in loading sound \n";

	font.loadFromFile("fonts/OpenSans-Regular.ttf");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (!texture.loadFromFile(changer))
				cout << "Error in loading textures \n";

			// select the font
			text.setFont(font); // fontg is a sf::Font

			// set the string to display
			text.setString("Virtual Piano");

			// set the character size
			text.setCharacterSize(25); // in pixels, not points!

			// set the color
			text.setFillColor(sf::Color::Red);

			// set the text style
			text.setStyle(sf::Text::Bold | sf::Text::Underlined);

			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				changer = "sprites/keyboarda.gif";
				sound.play();
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				changer = "sprites/keyboards.gif";
				sound.play();
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				changer = "sprites/keyboardd.gif";
				sound.play();
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
			{
				changer = "sprites/keyboarde.gif";
				sound.play();
			}
		}

		window.clear();
		window.draw(sprite);
		window.draw(text);
		window.display();
	}

	return 0;
}