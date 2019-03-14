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

void Sprite(Pianokeys& see);
void Loader(Pianokeys& see);
void SoundL(Pianosounds& hear);
void TextLoader(sf::Text& letters, sf::Font& style);
void PianoDrawing(sf::RenderWindow& window, Pianokeys& see);
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event);
#endif 