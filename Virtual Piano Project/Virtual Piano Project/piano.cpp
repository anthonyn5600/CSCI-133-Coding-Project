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

	//uses the SFML Font class and create a variable named "font"
	sf::Font font;

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

	//Prevent spam of holding down a key
	window.setKeyRepeatEnabled(false);

	sf::Clock clocks;
	sf::Time timer;
	sf::Mouse mouse;

	int mouseposx;
	int mouseposy;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			//calls the loader function
			Loader(see);
			//calls the textloader function
			TextLoader(text, font);


			mouseposx = mouse.getPosition(window).x;
			mouseposy = mouse.getPosition(window).y;

			if (event.type == sf::Event::Closed)
				window.close();


			//calls the button function
			Buttons(see, mouseposx, mouseposy);

			//cout << mouse.getPosition(window).x << endl;

			//cout << mouse.getPosition(window).y << endl;
			//calls the pianocontrols function
			Pianocontrols(see, hear, event);
		}

		window.clear();

		//calls the pianodrawing dunction.
		PianoDrawing(window, see);

		window.draw(text);
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

/*Loader
===========================================
Purpose: Load in the image files from the folder.
*/
void Loader(Pianokeys &see)
{
	if (!see.texturekey.loadFromFile("sprites/key2.gif"))
		cout << "Error in loading textures \n";

	if (!see.btexturekey.loadFromFile("sprites/blackkey.gif"))
		cout << "Error in loading textures \n";

	if (!see.gradientkey.loadFromFile("sprites/Eclipse_master.gif"))
		cout << "Error in loading textures \n";

	if (!see.graykey.loadFromFile("sprites/graykey.gif"))
		cout << "Error in loading textures \n";

	if (!see.buttonlooks.loadFromFile("sprites/tutorialtext.png"))
		cout << "Error in loading textures \n";

	if (!see.buttonmouseover.loadFromFile("sprites/tutorialtextg.png"))
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

	//to draw our sprite
	window.draw(see.button);

	//now we going to define our sprite in our window
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

void Buttons(Pianokeys& see, int& mousepositionx, int& mousepositiony)
{
	sf::Event tutorialevent;
	sf::Mouse mouse;

	see.button.setTextureRect(sf::IntRect(8, 10, 200, 100));
	see.button.setPosition(sf::Vector2f(800.f, 100.f));


	//to detect if the mouse is over the button so it can change to a different text color
	if (mousepositionx >= 800 && mousepositionx <= 1000 && mousepositiony >= 100 && mousepositiony <= 200)
	{
		see.button.setTexture(see.buttonmouseover);

		//to detect a left click and it will open up a new window 
		if (mouse.isButtonPressed(mouse.Left))
		{
			sf::RenderWindow tutorialW(sf::VideoMode(640, 480), "Tutorial");

			while (tutorialW.isOpen())
			{
				while (tutorialW.pollEvent(tutorialevent))
				{
					if (!see.Mascot.loadFromFile("sprites/Mascot.png"))
						cout << "Error" << endl;
					see.GameM.settexture(see.Mascot);
					see.GameM.settextureRect(sf::IntRect(10, 10, 30, 200));
					see.GameM.setPosition(sf::Vector2f(0, 0));


					if (tutorialevent.type == sf::Event::Closed)
						tutorialW.close();
				}
				tutorialW.clear();
				tutorialW.draw(see.GameM);
				tutorialW.display();
			}
		}
	}
	else
	{
		see.button.setTexture(see.buttonlooks);
	}

}

