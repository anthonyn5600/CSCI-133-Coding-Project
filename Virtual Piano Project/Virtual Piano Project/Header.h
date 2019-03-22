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
	sf::Texture graykey;
	sf::Texture gradientkey;
	

	sf::Texture buttonlooks;
	sf::Texture buttonmouseover;
	sf::Sprite button;
	sf::Texture Mascot;
	sf::Sprite GameM;

	sf::Sprite key[17];
	sf::Sprite bkey[12];
	sf::Sprite square;
};

class Pianosounds
{
public:
	sf::SoundBuffer buffer[29];
	sf::SoundBuffer recordingBuffer;
	sf::Sound sound[29];
	sf::SoundBufferRecorder recorder;
	sf::Music recorded;
};

void Sprite(Pianokeys& see);
void Loader(Pianokeys& see);
void SoundL(Pianosounds& hear);
void TextLoader(sf::Text& letters, sf::Font& style);
void PianoDrawing(sf::RenderWindow& window, Pianokeys& see);
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event);
void Buttons(Pianokeys& see, int& mouseposition, int& mousepositiony);
#endif 
