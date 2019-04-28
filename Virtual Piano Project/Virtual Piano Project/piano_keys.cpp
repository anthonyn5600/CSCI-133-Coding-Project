#include "piano.h"

/*Sprite
===========================================
Purpose: Set the piano keys coordinate
		 It determine the amount of texture to be use for the key
		 It determine the texture to be used
*/
void Pianokeys::Sprite()
{
	float xcoord = 525.f;
	float xadd = 52.f;
	float yheight = 500.f;

	int whiterectx = 45;
	int whiterecty = 250;

	int blackrectx = 43;
	int blackrecty = 150;

	//int whiterectx = 50;
	//int whiterecty = 200;
	//Set the texture
	key[0].setTexture(texturekey);

	//Set the amount of texture to be used for the key
	key[0].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));

	//Set the (x,y) coordinate of the piano key
	key[0].setPosition(sf::Vector2f(xcoord, yheight));

	key[1].setTexture(texturekey);
	key[1].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[1].setPosition(sf::Vector2f(xcoord + xadd, yheight));

	key[2].setTexture(texturekey);
	key[2].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[2].setPosition(sf::Vector2f(xcoord + (xadd * 2), yheight));

	key[3].setTexture(texturekey);
	key[3].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[3].setPosition(sf::Vector2f(xcoord + (xadd * 3), yheight));

	key[4].setTexture(texturekey);
	key[4].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[4].setPosition(sf::Vector2f(xcoord + (xadd * 4), yheight));

	key[5].setTexture(texturekey);
	key[5].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[5].setPosition(sf::Vector2f(xcoord + (xadd * 5), yheight));

	key[6].setTexture(texturekey);
	key[6].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[6].setPosition(sf::Vector2f(xcoord + (xadd * 6), yheight));

	key[7].setTexture(texturekey);
	key[7].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[7].setPosition(sf::Vector2f(xcoord + (xadd * 7), yheight));

	key[8].setTexture(texturekey);
	key[8].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[8].setPosition(sf::Vector2f(xcoord + (xadd * 8), yheight));

	key[9].setTexture(texturekey);
	key[9].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[9].setPosition(sf::Vector2f(xcoord + (xadd * 9), yheight));

	key[10].setTexture(texturekey);
	key[10].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[10].setPosition(sf::Vector2f(xcoord + (xadd * 10), yheight));

	key[11].setTexture(texturekey);
	key[11].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[11].setPosition(sf::Vector2f(xcoord + (xadd * 11), yheight));

	key[12].setTexture(texturekey);
	key[12].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[12].setPosition(sf::Vector2f(xcoord + (xadd * 12), yheight));

	key[13].setTexture(texturekey);
	key[13].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[13].setPosition(sf::Vector2f(xcoord + (xadd * 13), yheight));

	key[14].setTexture(texturekey);
	key[14].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[14].setPosition(sf::Vector2f(xcoord + (xadd * 14), yheight));

	key[15].setTexture(texturekey);
	key[15].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[15].setPosition(sf::Vector2f(xcoord + (xadd * 15), yheight));

	key[16].setTexture(texturekey);
	key[16].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	key[16].setPosition(sf::Vector2f(xcoord + (xadd * 16), yheight));
	//////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////
	//set the texture for the black keys
	bkey[0].setTexture(btexturekey);
	bkey[0].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[0].setPosition(sf::Vector2f(xcoord + 15, yheight));

	bkey[1].setTexture(btexturekey);
	bkey[1].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[1].setPosition(sf::Vector2f((xcoord + xadd) + 23, yheight));

	bkey[2].setTexture(btexturekey);
	bkey[2].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[2].setPosition(sf::Vector2f((xcoord + (xadd * 3)) + 20, yheight));

	bkey[3].setTexture(btexturekey);
	bkey[3].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[3].setPosition(sf::Vector2f((xcoord + (xadd * 4)) + 25, yheight));

	bkey[4].setTexture(btexturekey);
	bkey[4].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[4].setPosition(sf::Vector2f((xcoord + (xadd * 5)) + 30, yheight));

	bkey[5].setTexture(btexturekey);
	bkey[5].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[5].setPosition(sf::Vector2f((xcoord + (xadd * 7)) + 20, yheight));

	bkey[6].setTexture(btexturekey);
	bkey[6].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[6].setPosition(sf::Vector2f((xcoord + (xadd * 8)) + 30, yheight));

	bkey[7].setTexture(btexturekey);
	bkey[7].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[7].setPosition(sf::Vector2f((xcoord + (xadd * 10)) + 20, yheight));

	bkey[8].setTexture(btexturekey);
	bkey[8].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[8].setPosition(sf::Vector2f((xcoord + (xadd * 11)) + 25, yheight));

	bkey[9].setTexture(btexturekey);
	bkey[9].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[9].setPosition(sf::Vector2f((xcoord + (xadd * 12)) + 30, yheight));

	bkey[10].setTexture(btexturekey);
	bkey[10].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[10].setPosition(sf::Vector2f((xcoord + (xadd * 14)) + 20, yheight));

	bkey[11].setTexture(btexturekey);
	bkey[11].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	bkey[11].setPosition(sf::Vector2f((xcoord + (xadd * 15)) + 30, yheight));

	topleft.setTexture(title);
	topleft.setTextureRect(sf::IntRect(0, 0, 470, 120));
	topleft.setPosition(sf::Vector2f(730.f,0.f));

	middle.setTexture(headphone);
	middle.setTextureRect(sf::IntRect(0, 0, 292, 242));
	middle.setPosition(sf::Vector2f(823.f, 150.f));

	exit.setTexture(redbutton);
	exit.setTextureRect(sf::IntRect(0, 0, 87, 87));
	exit.setPosition(sf::Vector2f(1799.f, 49.f));
}