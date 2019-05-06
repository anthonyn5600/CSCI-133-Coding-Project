
#ifndef VIRTUAL_H
#define VIRTUAL_H
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
	sf::Texture title;
	sf::Texture headphone;
	sf::Texture redbutton;
	//sf::Texture Mascot; to be used

	sf::Sprite exit;
	sf::Sprite middle;
	sf::Sprite topleft;
	sf::Sprite button;
	sf::Sprite GameM;
	sf::Sprite key[17];
	sf::Sprite bkey[12];
	sf::Sprite square;

	int click;

	void Sprite();
	void Loader();
	void PianoDrawing(sf::RenderWindow& window);
	void Buttons(int& mouseposition, int& mousepositiony, sf::RenderWindow& window, sf::Text* tutlett);
};

class Pianosounds
{
public:
	sf::SoundBuffer 	buffer[29];
	sf::SoundBuffer 	recordingBuffer;
	sf::Sound 		sound[29];
	sf::SoundBufferRecorder recorder;
	sf::Music 		recorded;
	sf::Clock		clocks;
	sf::Time		timer;

	void SoundL();
};

class Main_Menu
{
public:
	sf::Texture background;
	sf::Texture graybutton;
	sf::Texture piano;

	sf::Sprite button;
	sf::Sprite menu;
	sf::Sprite pianomenu;

	sf::SoundBuffer clickbuffer;
	sf::SoundBuffer menumusic;

	sf::Sound music;
	sf::Sound buttonsound;

	void Mainmenu();
	void Loadformain();
	void Buttonfunction(int& mousepositionx, int& mousepositiony, sf::RenderWindow& window, bool& pianogame);
	void Sound();

};

void TextLoader(sf::Text& letters, sf::Font& style, sf::Text *tutlett, sf::Font& tuttext);
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event);

#endif