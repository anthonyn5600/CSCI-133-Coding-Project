#include "Header.h"

int main()
{
	//event mean what's actually occurring
//in the window. 
	sf::Event event;

	//set the screen resolution
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Virtual Piano");

	//uses the SFML Text class and create a variable named "text"
	sf::Text text;
	sf::Text tutlett[30];

	//uses the SFML Font class and create a variable named "font"
	sf::Font font;
	sf::Font tuttext;

	//Pianokeys and Pianosounds are classes define in
	//the Header.h 
	Pianokeys see;
	Pianosounds hear;


	string changer = "sprites/keyboard.gif";

	//calls the Sprite function. You can this function in the 
	//piano_keys.cpp
	Sprite(see);

	//calls the SoundL function.
	SoundL(hear);

	//load the text font files
	font.loadFromFile("fonts/Julietta-Messie-Demo.otf");
	tuttext.loadFromFile("fonts/OpenSans-Bold.ttf");

	//Prevent spam of holding down a key
	window.setKeyRepeatEnabled(false);

	sf::Clock clocks;
	sf::Time timer;
	sf::Mouse mouse;

	int mouseposx;
	int mouseposy;
	int click = 0;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			//calls the loader function
			Loader(see);
			//calls the textloader function
			TextLoader(text, font, tutlett, tuttext);


			mouseposx = mouse.getPosition(window).x;
			mouseposy = mouse.getPosition(window).y;

			if (event.type == sf::Event::Closed)
				window.close();



			cout << mouse.getPosition(window).x << endl;

			cout << mouse.getPosition(window).y << endl;
			//calls the pianocontrols function
			Pianocontrols(see, hear, event);
		}

		window.clear(sf::Color::Black);

		//calls the pianodrawing dunction.
		PianoDrawing(window, see);

		window.draw(text);

		//calls the button function
		see.Buttons(see, mouseposx, mouseposy, window, tutlett);

		window.display();
	}

	return 0;
}


/*TextLoader
===========================================
Purpose: Draw the text
		  Set the font style
		  Set the color
		  Write down the text
*/
void TextLoader(sf::Text& letters, sf::Font& style, sf::Text* tutlett, sf::Font& tuttext)
{
	float xposition = 592.f;
	float xadd = 55.f;
	float xmultiplier = 1;

	float xposition2 = 700.f;
	float xadd2 = 50.f;

	float byposition = 627.f;

	float yposition = 709.f;
	// select the font
	//letters.setFont(style); // fontg is a sf::Font
	//// set the string to display
	//letters.setString("Virtual Piano");
	//// set the character size
	//letters.setCharacterSize(100); // in pixels, not points!
	//// set the color
	//letters.setFillColor(sf::Color::Red);
	//// set the text style
	//letters.setStyle(sf::Text::Bold | sf::Text::Underlined);

	tutlett[0].setFont(tuttext);
	tutlett[0].setString("Tab");
	tutlett[0].setCharacterSize(15);
	tutlett[0].setFillColor(sf::Color::Red);
	tutlett[0].setPosition(535.f, yposition);

	tutlett[1].setFont(tuttext);
	tutlett[1].setString("Q");
	tutlett[1].setCharacterSize(15);
	tutlett[1].setFillColor(sf::Color::Red);
	tutlett[1].setPosition(xposition, yposition);

	tutlett[2].setFont(tuttext);
	tutlett[2].setString("A");
	tutlett[2].setCharacterSize(15);
	tutlett[2].setFillColor(sf::Color::Red);
	tutlett[2].setPosition(xposition + xadd, yposition);

	tutlett[3].setFont(tuttext);
	tutlett[3].setString("Z");
	tutlett[3].setCharacterSize(15);
	tutlett[3].setFillColor(sf::Color::Red);
	tutlett[3].setPosition(xposition2, yposition);

	tutlett[4].setFont(tuttext);
	tutlett[4].setString("D");
	tutlett[4].setCharacterSize(15);
	tutlett[4].setFillColor(sf::Color::Red);
	tutlett[4].setPosition(xposition2 + xadd2, yposition);

	tutlett[5].setFont(tuttext);
	tutlett[5].setString("F");
	tutlett[5].setCharacterSize(15);
	tutlett[5].setFillColor(sf::Color::Red);
	tutlett[5].setPosition(xposition2 + (xadd2 * 2), yposition);

	tutlett[6].setFont(tuttext);
	tutlett[6].setString("G");
	tutlett[6].setCharacterSize(15);
	tutlett[6].setFillColor(sf::Color::Red);
	tutlett[6].setPosition(xposition2 + (xadd2 * 3), yposition);

	tutlett[7].setFont(tuttext);
	tutlett[7].setString("Space");
	tutlett[7].setCharacterSize(8);
	tutlett[7].setFillColor(sf::Color::Red);
	tutlett[7].setPosition(xposition2 + (xadd2 * 4), yposition + 5);

	tutlett[8].setFont(tuttext);
	tutlett[8].setString("J");
	tutlett[8].setCharacterSize(15);
	tutlett[8].setFillColor(sf::Color::Red);
	tutlett[8].setPosition(xposition2 + (xadd2 * 5) + 10, yposition);

	tutlett[9].setFont(tuttext);
	tutlett[9].setString("K");
	tutlett[9].setCharacterSize(15);
	tutlett[9].setFillColor(sf::Color::Red);
	tutlett[9].setPosition(xposition2 + (xadd2 * 6) + 10, yposition);

	tutlett[10].setFont(tuttext);
	tutlett[10].setString("L");
	tutlett[10].setCharacterSize(15);
	tutlett[10].setFillColor(sf::Color::Red);
	tutlett[10].setPosition(xposition2 + (xadd2 * 7) + 10, yposition);

	tutlett[11].setFont(tuttext);
	tutlett[11].setString("/");
	tutlett[11].setCharacterSize(15);
	tutlett[11].setFillColor(sf::Color::Red);
	tutlett[11].setPosition(xposition2 + (xadd2 * 8) + 15, yposition);

	tutlett[12].setFont(tuttext);
	tutlett[12].setString("'");
	tutlett[12].setCharacterSize(15);
	tutlett[12].setFillColor(sf::Color::Red);
	tutlett[12].setPosition(xposition2 + (xadd2 * 9) + 15, yposition);

	tutlett[13].setFont(tuttext);
	tutlett[13].setString("]");
	tutlett[13].setCharacterSize(15);
	tutlett[13].setFillColor(sf::Color::Red);
	tutlett[13].setPosition(xposition2 + (xadd2 * 10) + 15, yposition);

	tutlett[14].setFont(tuttext);
	tutlett[14].setString("RSlash");
	tutlett[14].setCharacterSize(9);
	tutlett[14].setFillColor(sf::Color::Red);
	tutlett[14].setPosition(xposition2 + (xadd2 * 11) + 10, yposition + 5);

	tutlett[15].setFont(tuttext);
	tutlett[15].setString("Back");
	tutlett[15].setCharacterSize(9);
	tutlett[15].setFillColor(sf::Color::Red);
	tutlett[15].setPosition(xposition2 + (xadd2 * 12) + 15, yposition + 5);

	tutlett[16].setFont(tuttext);
	tutlett[16].setString("Del");
	tutlett[16].setCharacterSize(10);
	tutlett[16].setFillColor(sf::Color::Red);
	tutlett[16].setPosition(xposition2 + (xadd2 * 13) + 15, yposition + 5);

	tutlett[17].setFont(tuttext);
	tutlett[17].setString("1");
	tutlett[17].setCharacterSize(10);
	tutlett[17].setFillColor(sf::Color::Red);
	tutlett[17].setPosition(557.f, byposition);

	tutlett[18].setFont(tuttext);
	tutlett[18].setString("2");
	tutlett[18].setCharacterSize(10);
	tutlett[18].setFillColor(sf::Color::Red);
	tutlett[18].setPosition(620.f, byposition);

	tutlett[19].setFont(tuttext);
	tutlett[19].setString("3");
	tutlett[19].setCharacterSize(10);
	tutlett[19].setFillColor(sf::Color::Red);
	tutlett[19].setPosition(720.f, byposition);

	tutlett[20].setFont(tuttext);
	tutlett[20].setString("4");
	tutlett[20].setCharacterSize(10);
	tutlett[20].setFillColor(sf::Color::Red);
	tutlett[20].setPosition(775.f, byposition);

	tutlett[21].setFont(tuttext);
	tutlett[21].setString("5");
	tutlett[21].setCharacterSize(10);
	tutlett[21].setFillColor(sf::Color::Red);
	tutlett[21].setPosition(835.f, byposition);

	tutlett[22].setFont(tuttext);
	tutlett[22].setString("6");
	tutlett[22].setCharacterSize(10);
	tutlett[22].setFillColor(sf::Color::Red);
	tutlett[22].setPosition(930.f, byposition);

	tutlett[23].setFont(tuttext);
	tutlett[23].setString("7");
	tutlett[23].setCharacterSize(10);
	tutlett[23].setFillColor(sf::Color::Red);
	tutlett[23].setPosition(990.f, byposition);

	tutlett[24].setFont(tuttext);
	tutlett[24].setString("8");
	tutlett[24].setCharacterSize(10);
	tutlett[24].setFillColor(sf::Color::Red);
	tutlett[24].setPosition(1085.f, byposition);

	tutlett[25].setFont(tuttext);
	tutlett[25].setString("9");
	tutlett[25].setCharacterSize(10);
	tutlett[25].setFillColor(sf::Color::Red);
	tutlett[25].setPosition(1140.f, byposition);

	tutlett[26].setFont(tuttext);
	tutlett[26].setString("0");
	tutlett[26].setCharacterSize(10);
	tutlett[26].setFillColor(sf::Color::Red);
	tutlett[26].setPosition(1200.f, byposition);

	tutlett[27].setFont(tuttext);
	tutlett[27].setString("-");
	tutlett[27].setCharacterSize(10);
	tutlett[27].setFillColor(sf::Color::Red);
	tutlett[27].setPosition(1295.f, byposition);

	tutlett[28].setFont(tuttext);
	tutlett[28].setString("=");
	tutlett[28].setCharacterSize(10);
	tutlett[28].setFillColor(sf::Color::Red);
	tutlett[28].setPosition(1357.f, byposition);

}

/*Loader
===========================================
Purpose: Load in the image files from the folder.
*/
void Loader(Pianokeys &see)
{
	if (!see.texturekey.loadFromFile("sprites/key2.gif"))
		cout << "Error in loading textures \n";

	if (!see.btexturekey.loadFromFile("sprites/blackkey2.gif"))
		cout << "Error in loading textures \n";

	if (!see.gradientkey.loadFromFile("sprites/Eclipse_master.gif"))
		cout << "Error in loading textures \n";

	if (!see.graykey.loadFromFile("sprites/graykey.gif"))
		cout << "Error in loading textures \n";

	if (!see.buttonlooks.loadFromFile("sprites/tutorial_text.png"))
		cout << "Error in loading textures \n";

	if (!see.title.loadFromFile("sprites/title1.png"))
		cout << "Error in loading textures \n";

}

/*SoundL
===========================================
Purpose: Uses the Pianosounds class
		 Set the buffer array for each sound array
		 Load in the sound from the folder.

WARNING: SFML won't allow .mp3 format to be imported
*/
void SoundL(Pianosounds& hear)
{
	//this is to declare the sound variable
	hear.sound[0].setBuffer(hear.buffer[0]);
	hear.sound[1].setBuffer(hear.buffer[1]);
	hear.sound[2].setBuffer(hear.buffer[2]);
	hear.sound[3].setBuffer(hear.buffer[3]);
	hear.sound[4].setBuffer(hear.buffer[4]);
	hear.sound[5].setBuffer(hear.buffer[5]);
	hear.sound[6].setBuffer(hear.buffer[6]);
	hear.sound[7].setBuffer(hear.buffer[7]);
	hear.sound[8].setBuffer(hear.buffer[8]);
	hear.sound[9].setBuffer(hear.buffer[9]);
	hear.sound[10].setBuffer(hear.buffer[10]);
	hear.sound[11].setBuffer(hear.buffer[11]);
	hear.sound[12].setBuffer(hear.buffer[12]);
	hear.sound[13].setBuffer(hear.buffer[13]);
	hear.sound[14].setBuffer(hear.buffer[14]);
	hear.sound[15].setBuffer(hear.buffer[15]);
	hear.sound[16].setBuffer(hear.buffer[16]);

	//setting black keys sound variable
	hear.sound[17].setBuffer(hear.buffer[17]);
	hear.sound[18].setBuffer(hear.buffer[18]);
	hear.sound[19].setBuffer(hear.buffer[19]);
	hear.sound[20].setBuffer(hear.buffer[20]);
	hear.sound[21].setBuffer(hear.buffer[21]);
	hear.sound[22].setBuffer(hear.buffer[22]);
	hear.sound[23].setBuffer(hear.buffer[23]);
	hear.sound[24].setBuffer(hear.buffer[24]);
	hear.sound[25].setBuffer(hear.buffer[25]);
	hear.sound[26].setBuffer(hear.buffer[26]);
	hear.sound[27].setBuffer(hear.buffer[27]);
	hear.sound[28].setBuffer(hear.buffer[28]);

	//load in the sound

	if (!hear.buffer[0].loadFromFile("sounds/c3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[1].loadFromFile("sounds/d3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[2].loadFromFile("sounds/e3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[3].loadFromFile("sounds/f3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[4].loadFromFile("sounds/g3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[5].loadFromFile("sounds/a3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[6].loadFromFile("sounds/b3.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[7].loadFromFile("sounds/c4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[8].loadFromFile("sounds/d4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[9].loadFromFile("sounds/e4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[10].loadFromFile("sounds/f4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[11].loadFromFile("sounds/g4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[12].loadFromFile("sounds/a4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[13].loadFromFile("sounds/b4.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[14].loadFromFile("sounds/c5.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[15].loadFromFile("sounds/d5.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[16].loadFromFile("sounds/e5.wav"))
		cout << "Error in loading sound \n";

	//loading for black keys
	if (!hear.buffer[17].loadFromFile("sounds/c3#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[18].loadFromFile("sounds/d3#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[19].loadFromFile("sounds/f3#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[20].loadFromFile("sounds/g3#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[21].loadFromFile("sounds/a3#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[22].loadFromFile("sounds/c4#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[23].loadFromFile("sounds/d4#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[24].loadFromFile("sounds/f4#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[25].loadFromFile("sounds/g4#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[26].loadFromFile("sounds/a4#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[27].loadFromFile("sounds/c5#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.buffer[28].loadFromFile("sounds/d5#.wav"))
		cout << "Error in loading sound \n";

	if (!hear.recorder.isAvailable())
		cout << "Error in loading recorder \n";
}

/*PianoDrawing
===========================================
Purpose: Draws the key for the piano
*/
void PianoDrawing(sf::RenderWindow& window, Pianokeys &see)
{
	//This is so it actually draw in the window
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

	window.draw(see.button);
	window.draw(see.topleft);

}

/*Pianocontrols
===========================================
Purpose: Set the color back to normal if there are no key pressed
		 Set the controls of the keyboard
		 Designate sound for each letter of the keyboard
*/
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event)
{
	float count = 0.0; // decalre count for the timer method
	
	if (event.type == sf::Event::KeyReleased == true)
	{
		//If no key is pressed, all piano keys are white
		see.key[0].setTexture(see.texturekey);
		see.key[1].setTexture(see.texturekey);
		see.key[2].setTexture(see.texturekey);
		see.key[3].setTexture(see.texturekey);
		see.key[4].setTexture(see.texturekey);
		see.key[5].setTexture(see.texturekey);
		see.key[6].setTexture(see.texturekey);
		see.key[7].setTexture(see.texturekey);
		see.key[8].setTexture(see.texturekey);
		see.key[9].setTexture(see.texturekey);
		see.key[10].setTexture(see.texturekey);
		see.key[11].setTexture(see.texturekey);
		see.key[12].setTexture(see.texturekey);
		see.key[13].setTexture(see.texturekey);
		see.key[14].setTexture(see.texturekey);
		see.key[15].setTexture(see.texturekey);
		see.key[16].setTexture(see.texturekey);

		see.bkey[0].setTexture(see.btexturekey);
		see.bkey[1].setTexture(see.btexturekey);
		see.bkey[2].setTexture(see.btexturekey);
		see.bkey[3].setTexture(see.btexturekey);
		see.bkey[4].setTexture(see.btexturekey);
		see.bkey[5].setTexture(see.btexturekey);
		see.bkey[6].setTexture(see.btexturekey);
		see.bkey[7].setTexture(see.btexturekey);
		see.bkey[8].setTexture(see.btexturekey);
		see.bkey[9].setTexture(see.btexturekey);
		see.bkey[10].setTexture(see.btexturekey);
		see.bkey[11].setTexture(see.btexturekey);

	}

	switch (event.type)
	{
	case sf::Event::KeyPressed:
		switch (event.key.code)
		{
		case sf::Keyboard::Tab: // c3
			//a function changes the texture
			see.key[0].setTexture(see.gradientkey);
			//once the key is pressed hear.sound[0] is played
			hear.sound[0].play();
			break;

		case sf::Keyboard::Q: //d3
			see.key[1].setTexture(see.gradientkey);
			hear.sound[1].play();
			break;

		case sf::Keyboard::A: //e3
			see.key[2].setTexture(see.gradientkey);
			hear.sound[2].play();
			break;

		case sf::Keyboard::Z: //f3
			see.key[3].setTexture(see.gradientkey);
			hear.sound[3].play();
			break;

		case sf::Keyboard::D: //g3
			see.key[4].setTexture(see.gradientkey);
			hear.sound[4].play();
			break;

		case sf::Keyboard::F: //a3
			see.key[5].setTexture(see.gradientkey);
			hear.sound[5].play();
			break;

		case sf::Keyboard::G: //b3
			see.key[6].setTexture(see.gradientkey);
			hear.sound[6].play();
			break;

		case sf::Keyboard::Space: //c4
			see.key[7].setTexture(see.gradientkey);
			hear.sound[7].play();
			break;

		case sf::Keyboard::J: //d4
			see.key[8].setTexture(see.gradientkey);
			hear.sound[8].play();
			break;

		case sf::Keyboard::K: //e4
			see.key[9].setTexture(see.gradientkey);
			hear.sound[9].play();
			break;

		case sf::Keyboard::L: //f4
			see.key[10].setTexture(see.gradientkey);
			hear.sound[10].play();
			break;

		case sf::Keyboard::Slash: //g4
			see.key[11].setTexture(see.gradientkey);
			hear.sound[11].play();
			break;

		case sf::Keyboard::Quote: //a4
			see.key[12].setTexture(see.gradientkey);
			hear.sound[12].play();
			break;

		case sf::Keyboard::RBracket: //b4
			see.key[13].setTexture(see.gradientkey);
			hear.sound[13].play();
			break;

		case sf::Keyboard::BackSlash: //c5
			see.key[14].setTexture(see.gradientkey);
			hear.sound[14].play();
			break;

		case sf::Keyboard::BackSpace: //d5
			see.key[15].setTexture(see.gradientkey);
			hear.sound[15].play();
			break;

		case sf::Keyboard::Delete: //e5
			see.key[16].setTexture(see.gradientkey);
			hear.sound[16].play();
			break;
			//////////////////////////////////////////////////////////////////////
		case sf::Keyboard::Num1: //c3#
			see.bkey[0].setTexture(see.graykey);
			hear.sound[17].play();
			break;

		case sf::Keyboard::Num2: //d3#
			see.bkey[1].setTexture(see.graykey);
			hear.sound[18].play();
			break;


		case sf::Keyboard::Num3: //f3#
			see.bkey[2].setTexture(see.graykey);
			hear.sound[19].play();
			break;


		case sf::Keyboard::Num4: //g3#
			see.bkey[3].setTexture(see.graykey);
			hear.sound[20].play();
			break;


		case sf::Keyboard::Num5: //a3#
			see.bkey[4].setTexture(see.graykey);
			hear.sound[21].play();
			break;


		case sf::Keyboard::Num6: //c4#
			see.bkey[5].setTexture(see.graykey);
			hear.sound[22].play();
			break;


		case sf::Keyboard::Num7: //d4# 
			see.bkey[6].setTexture(see.graykey);
			hear.sound[23].play();
			break;


		case sf::Keyboard::Num8: //f4#
			see.bkey[7].setTexture(see.graykey);
			hear.sound[24].play();
			break;


		case sf::Keyboard::Num9: //g4#
			see.bkey[8].setTexture(see.graykey);
			hear.sound[25].play();
			break;


		case sf::Keyboard::Num0: //a4#
			see.bkey[9].setTexture(see.graykey);
			hear.sound[26].play();
			break;


		case sf::Keyboard::Dash: //c5#
			see.bkey[10].setTexture(see.graykey);
			hear.sound[27].play();
			break;

		case sf::Keyboard::Equal: //d5#

			see.bkey[11].setTexture(see.graykey);

			hear.sound[28].play();
			break;

		case sf::Keyboard::LShift:
		{
			hear.clocks.restart();
			while (count <= 5.0f)
			{
				hear.timer = hear.clocks.getElapsedTime();
				count = hear.timer.asSeconds();
				cout << count << endl;
			}
			hear.recorder.start();
		}
			break;

		case sf::Keyboard::LControl:
		{
			hear.recorder.stop();
			hear.recordingBuffer = hear.recorder.getBuffer();
			hear.recordingBuffer.saveToFile("recorded.wav");
		}
		break;

		case sf::Keyboard::RShift:
		{
			if (!hear.recorded.openFromFile("recorded.wav"))
				cout << "Error in loading sound \n";
			else
				hear.recorded.play();
		}
		break;
		}
	}
}

/*Buttons
===========================================
Purpose: Create the tutorial button
		 When the button is clicked on, a new window is popped up showing the tutorial

*/

void Pianokeys::Buttons(Pianokeys& see, int& mousepositionx, int& mousepositiony, sf::RenderWindow& window, sf::Text* tutlett)
{
	sf::Mouse mouse;


	see.button.setTextureRect(sf::IntRect(0, 0, 500, 100));
	see.button.setPosition(sf::Vector2f(1040.f, 400.f));

	//to detect if the mouse is over the button so it can change to a different text color
	if (mousepositionx >= 1159 && mousepositionx <= 1412 && mousepositiony >= 411 && mousepositiony <= 496)
	{
			window.draw(tutlett[0]);
			window.draw(tutlett[1]);
			window.draw(tutlett[2]);
			window.draw(tutlett[3]);
			window.draw(tutlett[4]);
			window.draw(tutlett[5]);
			window.draw(tutlett[6]);
			window.draw(tutlett[7]);
			window.draw(tutlett[8]);
			window.draw(tutlett[9]);
			window.draw(tutlett[10]);
			window.draw(tutlett[11]);
			window.draw(tutlett[12]);
			window.draw(tutlett[13]);
			window.draw(tutlett[14]);
			window.draw(tutlett[15]);
			window.draw(tutlett[16]);
			window.draw(tutlett[17]);
			window.draw(tutlett[18]);
			window.draw(tutlett[19]);
			window.draw(tutlett[20]);
			window.draw(tutlett[21]);
			window.draw(tutlett[22]);
			window.draw(tutlett[23]);
			window.draw(tutlett[24]);
			window.draw(tutlett[25]);
			window.draw(tutlett[26]);
			window.draw(tutlett[27]);
			window.draw(tutlett[28]);
			window.draw(tutlett[29]);

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && click != 1)
			{
				click = 1;
			}
	
	}
	else
		see.button.setTexture(see.buttonlooks);
	
	//clear the keyboard layout
	if (sf::Mouse::isButtonPressed(sf::Mouse::Right) && click == 1)
	{
		click = 2;
		window.clear();
		return;
	}

	//this make it so the piano key layout stays on the screen
	if (click == 1)
	{
		window.draw(tutlett[0]);
		window.draw(tutlett[1]);
		window.draw(tutlett[2]);
		window.draw(tutlett[3]);
		window.draw(tutlett[4]);
		window.draw(tutlett[5]);
		window.draw(tutlett[6]);
		window.draw(tutlett[7]);
		window.draw(tutlett[8]);
		window.draw(tutlett[9]);
		window.draw(tutlett[10]);
		window.draw(tutlett[11]);
		window.draw(tutlett[12]);
		window.draw(tutlett[13]);
		window.draw(tutlett[14]);
		window.draw(tutlett[15]);
		window.draw(tutlett[16]);
		window.draw(tutlett[17]);
		window.draw(tutlett[18]);
		window.draw(tutlett[19]);
		window.draw(tutlett[20]);
		window.draw(tutlett[21]);
		window.draw(tutlett[22]);
		window.draw(tutlett[23]);
		window.draw(tutlett[24]);
		window.draw(tutlett[25]);
		window.draw(tutlett[26]);
		window.draw(tutlett[27]);
		window.draw(tutlett[28]);
		window.draw(tutlett[29]);

	}
}
//
//int Pianokeys::Pianomovement(float& time, float &multiply)
//{
//	if (time >= multiply)
//	{
//		key[0].move(0, 0.5);
//		bkey[0].move(0, 0.5);
//		return multiply;
//	}
//	else
//		return multiply * 0;
//}