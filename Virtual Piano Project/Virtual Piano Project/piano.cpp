#include "Header.h"

int main()
{
	//set the screen resolution
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");

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


	while (window.isOpen())
	{
		//event mean what's actually occurring
		//in the window. 
		sf::Event event;
		while (window.pollEvent(event))
		{
			//calls the loader function
			Loader(see);
			//calls the textloader function
			TextLoader(text, font);

			if (event.type == sf::Event::Closed)
				window.close();

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
Purpose: Load in the .gif files from the folder.
*/
void Loader(Pianokeys &see)
{
	if (!see.texturekey.loadFromFile("sprites/key2.gif"))
		cout << "Error in loading textures \n";

	if (!see.btexturekey.loadFromFile("sprites/blackkey.gif"))
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

}

/*Pianocontrols
===========================================
Purpose: Set the color back to normal if there are no key pressed
		 Set the controls of the keyboard
		 Designate sound for each letter of the keyboard
*/
void Pianocontrols(Pianokeys& see, Pianosounds& hear, sf::Event& event)
{

	if (event.type == sf::Event::KeyReleased == true)
	{
		//If no key is pressed, all piano keys are white
		see.key[0].setColor(sf::Color(255, 255, 255));
		see.key[1].setColor(sf::Color(255, 255, 255));
		see.key[2].setColor(sf::Color(255, 255, 255));
		see.key[3].setColor(sf::Color(255, 255, 255));
		see.key[4].setColor(sf::Color(255, 255, 255));
		see.key[5].setColor(sf::Color(255, 255, 255));
		see.key[6].setColor(sf::Color(255, 255, 255));
		see.key[7].setColor(sf::Color(255, 255, 255));
		see.key[8].setColor(sf::Color(255, 255, 255));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
	{
		//a function that set the sprite color
		see.key[0].setColor(sf::Color(0, 255, 0));

		//once the key is pressed hear.sound[0] is played
		hear.sound[0].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		see.key[1].setColor(sf::Color(255, 0, 0));
		hear.sound[1].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		see.key[2].setColor(sf::Color(170, 153, 0));
		hear.sound[2].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
	{
		see.key[3].setColor(sf::Color(135, 103, 0));
		hear.sound[3].play();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		see.key[4].setColor(sf::Color(190, 153, 0));
		hear.sound[4].play(); // now we can play g4 
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
	{
		see.key[4].setColor(sf::Color(190, 153, 0));
		hear.sound[5].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
	{
		
		hear.sound[6].play(); 
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		
		hear.sound[7].play();
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
	{
		
		hear.sound[8].play();  
		
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
	{
		
		hear.sound[9].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		
		hear.sound[10].play(); 
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Slash))
	{
		
		hear.sound[11].play();
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Comma))
	{
		
		hear.sound[12].play(); 
		
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::RBracket))
	{
		
		hear.sound[13].play();
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSlash))
	{
		
		hear.sound[14].play(); 
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
	{

		hear.sound[15].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete))
	{
	
		hear.sound[16].play(); 

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
	
		hear.sound[17].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{
	
		hear.sound[18].play(); 
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
	{
	
		hear.sound[19].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
	{
	
		hear.sound[20].play(); 

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
	{
	
		hear.sound[21].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
	{
	
		hear.sound[22].play(); 

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
	{
	
		hear.sound[23].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
	{
		
		hear.sound[24].play();
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
	{
	
		hear.sound[25].play();

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
	{

		hear.sound[26].play(); 

	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Dash))
	{
	
		hear.sound[27].play();
	
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Equal))
	{
	
		hear.sound[28].play(); 
	
	}
}
