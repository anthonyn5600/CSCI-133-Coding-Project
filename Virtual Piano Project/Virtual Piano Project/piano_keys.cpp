#include "Header.h"

/*Sprite
===========================================
Purpose: Set the piano keys coordinate
		 It determine the amount of texture to be use for the key
		 It determine the texture to be used
*/
void Sprite(Pianokeys &see)
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
	see.key[0].setTexture(see.texturekey);

	//Set the amount of texture to be used for the key
	see.key[0].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));

	//Set the (x,y) coordinate of the piano key
	see.key[0].setPosition(sf::Vector2f(xcoord, yheight));

	see.key[1].setTexture(see.texturekey);
	see.key[1].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[1].setPosition(sf::Vector2f(xcoord + xadd, yheight));

	see.key[2].setTexture(see.texturekey);
	see.key[2].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[2].setPosition(sf::Vector2f(xcoord + (xadd * 2), yheight));

	see.key[3].setTexture(see.texturekey);
	see.key[3].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[3].setPosition(sf::Vector2f(xcoord + (xadd * 3), yheight));

	see.key[4].setTexture(see.texturekey);
	see.key[4].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[4].setPosition(sf::Vector2f(xcoord + (xadd * 4), yheight));

	see.key[5].setTexture(see.texturekey);
	see.key[5].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[5].setPosition(sf::Vector2f(xcoord + (xadd * 5), yheight));

	see.key[6].setTexture(see.texturekey);
	see.key[6].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[6].setPosition(sf::Vector2f(xcoord + (xadd * 6), yheight));

	see.key[7].setTexture(see.texturekey);
	see.key[7].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[7].setPosition(sf::Vector2f(xcoord + (xadd * 7), yheight));

	see.key[8].setTexture(see.texturekey);
	see.key[8].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[8].setPosition(sf::Vector2f(xcoord + (xadd * 8), yheight));

	see.key[9].setTexture(see.texturekey);
	see.key[9].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[9].setPosition(sf::Vector2f(xcoord + (xadd * 9), yheight));

	see.key[10].setTexture(see.texturekey);
	see.key[10].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[10].setPosition(sf::Vector2f(xcoord + (xadd * 10), yheight));

	see.key[11].setTexture(see.texturekey);
	see.key[11].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[11].setPosition(sf::Vector2f(xcoord + (xadd * 11), yheight));

	see.key[12].setTexture(see.texturekey);
	see.key[12].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[12].setPosition(sf::Vector2f(xcoord + (xadd * 12), yheight));

	see.key[13].setTexture(see.texturekey);
	see.key[13].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[13].setPosition(sf::Vector2f(xcoord + (xadd * 13), yheight));

	see.key[14].setTexture(see.texturekey);
	see.key[14].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[14].setPosition(sf::Vector2f(xcoord + (xadd * 14), yheight));

	see.key[15].setTexture(see.texturekey);
	see.key[15].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[15].setPosition(sf::Vector2f(xcoord + (xadd * 15), yheight));

	see.key[16].setTexture(see.texturekey);
	see.key[16].setTextureRect(sf::IntRect(0, 0, whiterectx, whiterecty));
	see.key[16].setPosition(sf::Vector2f(xcoord + (xadd * 16), yheight));
	//////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////
	//set the texture for the black keys
	see.bkey[0].setTexture(see.btexturekey);
	see.bkey[0].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[0].setPosition(sf::Vector2f(xcoord + 15, yheight));

	see.bkey[1].setTexture(see.btexturekey);
	see.bkey[1].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[1].setPosition(sf::Vector2f((xcoord + xadd) + 23, yheight));

	see.bkey[2].setTexture(see.btexturekey);
	see.bkey[2].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[2].setPosition(sf::Vector2f((xcoord + (xadd * 3)) + 20, yheight));

	see.bkey[3].setTexture(see.btexturekey);
	see.bkey[3].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[3].setPosition(sf::Vector2f((xcoord + (xadd * 4)) + 25, yheight));

	see.bkey[4].setTexture(see.btexturekey);
	see.bkey[4].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[4].setPosition(sf::Vector2f((xcoord + (xadd * 5)) + 30, yheight));

	see.bkey[5].setTexture(see.btexturekey);
	see.bkey[5].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[5].setPosition(sf::Vector2f((xcoord + (xadd * 7)) + 20, yheight));

	see.bkey[6].setTexture(see.btexturekey);
	see.bkey[6].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[6].setPosition(sf::Vector2f((xcoord + (xadd * 8)) + 30, yheight));

	see.bkey[7].setTexture(see.btexturekey);
	see.bkey[7].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[7].setPosition(sf::Vector2f((xcoord + (xadd * 10)) + 20, yheight));

	see.bkey[8].setTexture(see.btexturekey);
	see.bkey[8].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[8].setPosition(sf::Vector2f((xcoord + (xadd * 11)) + 25, yheight));

	see.bkey[9].setTexture(see.btexturekey);
	see.bkey[9].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[9].setPosition(sf::Vector2f((xcoord + (xadd * 12)) + 30, yheight));

	see.bkey[10].setTexture(see.btexturekey);
	see.bkey[10].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[10].setPosition(sf::Vector2f((xcoord + (xadd * 14)) + 20, yheight));

	see.bkey[11].setTexture(see.btexturekey);
	see.bkey[11].setTextureRect(sf::IntRect(0, 0, blackrectx, blackrecty));
	see.bkey[11].setPosition(sf::Vector2f((xcoord + (xadd * 15)) + 30, yheight));

	see.topleft.setTexture(see.title);
	see.topleft.setTextureRect(sf::IntRect(0, 0, 470, 120));
	see.topleft.setPosition(sf::Vector2f(730.f,0.f));

	see.middle.setTexture(see.headphone);
	see.middle.setTextureRect(sf::IntRect(0, 0, 292, 242));
	see.middle.setPosition(sf::Vector2f(823.f, 150.f));
}