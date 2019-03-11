#include "Header.h"
void Sprite(Pianokeys& see);
void Loader(Pianokeys& see);
void SoundL(Pianosounds& hear);
void TextLoader(sf::Text& letters, sf::Font& style);
void PianoDrawing(sf::RenderWindow& window, Pianokeys& see);
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event);

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	sf::Text text;
	sf::Font font;
	sf::Time timer;
	sf::Clock clock;

	Pianokeys see;
	Pianosounds hear;

	string changer = "sprites/keyboard.gif";

	Sprite(see);
	SoundL(hear);

	font.loadFromFile("fonts/Julietta-Messie-Demo.otf");

	window.setKeyRepeatEnabled(false);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			Loader(see);
			TextLoader(text, font);

			if (event.type == sf::Event::Closed)
				window.close();

			Pianocontrols(see, hear, event);
		}

		timer = clock.getElapsedTime();

		window.clear();

		PianoDrawing(window, see);

		window.draw(text);
		window.display();
	}

	return 0;
}

void Loader(Pianokeys &see)
{
	if (!see.texturekey.loadFromFile("sprites/key2.gif"))
		cout << "Error in loading textures \n";

	if (!see.btexturekey.loadFromFile("sprites/blackkey.gif"))
		cout << "Error in loading textures \n";

}

void SoundL(Pianosounds& hear)
{

	hear.sound[0].setBuffer(hear.buffer[0]);
	hear.sound[1].setBuffer(hear.buffer[1]);
	hear.sound[2].setBuffer(hear.buffer[2]);
	hear.sound[3].setBuffer(hear.buffer[3]);

	if (!hear.buffer[0].loadFromFile("sounds/c4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[1].loadFromFile("sounds/d4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[2].loadFromFile("sounds/e4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[3].loadFromFile("sounds/f4.wav"))
		cout << "Error in loading sound \n";
}

void TextLoader(sf::Text& letters, sf::Font& style)
{
	// select the font
	letters.setFont(style); // fontg is a sf::Font

	// set the string to display
	letters.setString("Virtual Piano");

	// set the character size
	letters.setCharacterSize(100); // in pixels, not points!

	// set the color
	letters.setFillColor(sf::Color::Red);

	// set the text style
	letters.setStyle(sf::Text::Bold | sf::Text::Underlined);

}

void PianoDrawing(sf::RenderWindow& window, Pianokeys &see)
{
	window.draw(see.key[0]);
	window.draw(see.key[1]);
	window.draw(see.key[2]);
	window.draw(see.key[3]);
	window.draw(see.key[4]);
	window.draw(see.key[5]);
	window.draw(see.key[6]);
	window.draw(see.key[7]);
	window.draw(see.key[8]);
	window.draw(see.key[9]);
	window.draw(see.key[10]);
	window.draw(see.key[11]);
	window.draw(see.key[12]);
	window.draw(see.key[13]);
	window.draw(see.key[14]);
	window.draw(see.key[15]);
	window.draw(see.key[16]);

	window.draw(see.bkey[0]);
	window.draw(see.bkey[1]);
	window.draw(see.bkey[2]);
	window.draw(see.bkey[3]);
	window.draw(see.bkey[4]);
	window.draw(see.bkey[5]);
	window.draw(see.bkey[6]);
	window.draw(see.bkey[7]);
	window.draw(see.bkey[8]);
	window.draw(see.bkey[9]);
	window.draw(see.bkey[10]);
	window.draw(see.bkey[11]);

}

void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event)
{

	if (event.type == sf::Event::KeyReleased == true)
	{
		see.key[0].setColor(sf::Color(255, 255, 255));
		see.key[1].setColor(sf::Color(255, 255, 255));
		see.key[2].setColor(sf::Color(255, 255, 255));
		see.key[3].setColor(sf::Color(255, 255, 255));
		see.key[4].setColor(sf::Color(255, 255, 255));
		see.key[5].setColor(sf::Color(255, 255, 255));
		see.key[6].setColor(sf::Color(255, 255, 255));
		see.key[7].setColor(sf::Color(255, 255, 255));
		see.key[8].setColor(sf::Color(255, 255, 255));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		see.key[0].setColor(sf::Color(0, 255, 0));

		hear.sound[0].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		see.key[1].setColor(sf::Color(255, 0, 0));
		hear.sound[1].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		see.key[2].setColor(sf::Color(170, 153, 0));
		hear.sound[2].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
	{
		see.key[3].setColor(sf::Color(135, 103, 0));
		hear.sound[3].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
	{
		see.key[4].setColor(sf::Color(190, 153, 0));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
	{
		see.key[5].setColor(sf::Color(135, 103, 100));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
	{
		see.key[6].setColor(sf::Color(200, 153, 0));
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
	{
		see.key[7].setColor(sf::Color(30, 255, 0));
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		see.key[8].setColor(sf::Color(123, 255, 0));
	}
}