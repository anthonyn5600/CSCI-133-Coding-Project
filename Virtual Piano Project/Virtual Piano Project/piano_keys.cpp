#include "Header.h"

/*Sprite
===========================================
Purpose: Set the piano keys coordinate
		 It determine the amount of texture to be use for the key
		 It determine the texture to be used
*/
void Sprite(Pianokeys &see)
{
	float xcoord = 670.f;
	float xadd = 35.f;
	float yheight = 350.f;

	//Set the texture
	see.key[0].setTexture(see.texturekey);

	//Set the amount of texture to be used for the key
	see.key[0].setTextureRect(sf::IntRect(10, 100, 30, 200));

	//Set the (x,y) coordinate of the piano key
	see.key[0].setPosition(sf::Vector2f(xcoord, yheight));

	see.key[1].setTexture(see.texturekey);
	see.key[1].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[1].setPosition(sf::Vector2f(xcoord + xadd, yheight));

	see.key[2].setTexture(see.texturekey);
	see.key[2].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[2].setPosition(sf::Vector2f(xcoord + (xadd * 2), yheight));

	see.key[3].setTexture(see.texturekey);
	see.key[3].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[3].setPosition(sf::Vector2f(xcoord + (xadd * 3), yheight));

	see.key[4].setTexture(see.texturekey);
	see.key[4].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[4].setPosition(sf::Vector2f(xcoord + (xadd * 4), yheight));

	see.key[5].setTexture(see.texturekey);
	see.key[5].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[5].setPosition(sf::Vector2f(xcoord + (xadd * 5), yheight));

	see.key[6].setTexture(see.texturekey);
	see.key[6].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[6].setPosition(sf::Vector2f(xcoord + (xadd * 6), yheight));

	see.key[7].setTexture(see.texturekey);
	see.key[7].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[7].setPosition(sf::Vector2f(xcoord + (xadd * 7), yheight));

	see.key[8].setTexture(see.texturekey);
	see.key[8].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[8].setPosition(sf::Vector2f(xcoord + (xadd * 8), yheight));

	see.key[9].setTexture(see.texturekey);
	see.key[9].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[9].setPosition(sf::Vector2f(xcoord + (xadd * 9), yheight));

	see.key[10].setTexture(see.texturekey);
	see.key[10].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[10].setPosition(sf::Vector2f(xcoord + (xadd * 10), yheight));

	see.key[11].setTexture(see.texturekey);
	see.key[11].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[11].setPosition(sf::Vector2f(xcoord + (xadd * 11), yheight));

	see.key[12].setTexture(see.texturekey);
	see.key[12].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[12].setPosition(sf::Vector2f(xcoord + (xadd * 12), yheight));

	see.key[13].setTexture(see.texturekey);
	see.key[13].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[13].setPosition(sf::Vector2f(xcoord + (xadd * 13), yheight));

	see.key[14].setTexture(see.texturekey);
	see.key[14].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[14].setPosition(sf::Vector2f(xcoord + (xadd * 14), yheight));

	see.key[15].setTexture(see.texturekey);
	see.key[15].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[15].setPosition(sf::Vector2f(xcoord + (xadd * 15), yheight));

	see.key[16].setTexture(see.texturekey);
	see.key[16].setTextureRect(sf::IntRect(10, 10, 30, 200));
	see.key[16].setPosition(sf::Vector2f(xcoord + (xadd * 16), yheight));
	//////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////
	//set the texture for the black keys
	see.bkey[0].setTexture(see.btexturekey);
	see.bkey[0].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[0].setPosition(sf::Vector2f(xcoord + 15, yheight));

	see.bkey[1].setTexture(see.btexturekey);
	see.bkey[1].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[1].setPosition(sf::Vector2f((xcoord + xadd) + 23, yheight));

	see.bkey[2].setTexture(see.btexturekey);
	see.bkey[2].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[2].setPosition(sf::Vector2f((xcoord + (xadd * 3)) + 15, yheight));

	see.bkey[3].setTexture(see.btexturekey);
	see.bkey[3].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[3].setPosition(sf::Vector2f((xcoord + (xadd * 4)) + 18, yheight));

	see.bkey[4].setTexture(see.btexturekey);
	see.bkey[4].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[4].setPosition(sf::Vector2f((xcoord + (xadd * 5)) + 23, yheight));

	see.bkey[5].setTexture(see.btexturekey);
	see.bkey[5].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[5].setPosition(sf::Vector2f((xcoord + (xadd * 7)) + 15, yheight));

	see.bkey[6].setTexture(see.btexturekey);
	see.bkey[6].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[6].setPosition(sf::Vector2f((xcoord + (xadd * 8)) + 23, yheight));

	see.bkey[7].setTexture(see.btexturekey);
	see.bkey[7].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[7].setPosition(sf::Vector2f((xcoord + (xadd * 10)) + 15, yheight));

	see.bkey[8].setTexture(see.btexturekey);
	see.bkey[8].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[8].setPosition(sf::Vector2f((xcoord + (xadd * 11)) + 18, yheight));

	see.bkey[9].setTexture(see.btexturekey);
	see.bkey[9].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[9].setPosition(sf::Vector2f((xcoord + (xadd * 12)) + 23, yheight));

	see.bkey[10].setTexture(see.btexturekey);
	see.bkey[10].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[10].setPosition(sf::Vector2f((xcoord + (xadd * 14)) + 15, yheight));

	see.bkey[11].setTexture(see.btexturekey);
	see.bkey[11].setTextureRect(sf::IntRect(10, 10, 30, 120));
	see.bkey[11].setPosition(sf::Vector2f((xcoord + (xadd * 15)) + 23, yheight));
}