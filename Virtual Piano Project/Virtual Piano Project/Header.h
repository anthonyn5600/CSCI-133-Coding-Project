#ifndef MEMBERSHIP_H
#define MEMBERSHIP_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cstdlib>
using namespace std;

class Pianokeys
{
public:

	sf::Texture texture;
	sf::Texture texturekey;
	sf::Texture btexturekey;
	sf::Sprite sprite;
	sf::Sprite key[17];
	sf::Sprite bkey[17];
};

class Pianosounds
{
public:
	sf::SoundBuffer buffer[17];
	sf::Sound sound[17];
};

class Texttest
{
	public:
		sf::Text texter;
};

#endif 