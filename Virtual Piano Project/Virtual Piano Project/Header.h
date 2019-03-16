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
	//hello, welcome to the sprite tutorial.
	//to make a sprite we need two variable texture and sprite
	//the sprite is our entity and the texture is how our sprite to look like
	sf::Texture texture;
	sf::Texture texturekey;
	sf::Texture btexturekey;
	sf::Texture graykey;
	sf::Texture gradientkey;

	//we going to use these two as an example
	//im going to show where you load the texture and sprite
	sf::Texture buttonlooks; // make sure to declare these two or however you want it to be like sf::Texture example or sf::Sprite Blahblah
	sf::Sprite button;

	sf::Sprite key[17];
	sf::Sprite bkey[12];
	sf::Sprite square;
};

class Pianosounds
{
public:
	sf::SoundBuffer buffer[29];
	sf::Sound sound[29];
};

void Sprite(Pianokeys& see);
void Loader(Pianokeys& see);
void SoundL(Pianosounds& hear);
void TextLoader(sf::Text& letters, sf::Font& style);
void PianoDrawing(sf::RenderWindow& window, Pianokeys& see);
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event);
void Buttons(Pianokeys& see, int& mouseposition);
#endif 
