/*
 *Ping Pong like game
 *Copyright © 2016 <TheGame>
 *
 *Permission is hereby granted, free of charge, to any person obtaining
 *a copy of this software and associated documentation files (the "Software"),
 *to deal in the Software without restriction, including without limitation
 *the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *and/or sell copies of the Software, and to permit persons to whom the
 *Software is furnished to do so, subject to the following conditions:
 *
 *The above copyright notice and this permission notice shall be included
 *in all copies or substantial portions of the Software.
 *
 *THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 *DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 *TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 *OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include "../include/Game.h"

int main(int argc, char const* argv[]) {
  //char buff[128];
  bool escKeyPressed;
  Game myGame;

  // this is what goes
  try {
    while (myGame.window.isOpen()) {
      // detecting close events
      while (myGame.window.pollEvent(myGame.event)) {
        escKeyPressed = ((myGame.event.type == sf::Event::KeyPressed) &
                         (myGame.event.key.code == sf::Keyboard::Escape));
        if ((myGame.event.type == sf::Event::Closed) || (escKeyPressed))
          myGame.window.close();
      }
      myGame.window.clear(sf::Color::Red);
      myGame.window.display();
    }
  } catch (...) {
    //if (myGame.pFile) {
      //sprintf(buff, "Exception main()");
      //fputs(buff, myGame.pFile);
      //fclose(myGame.pFile);
      return -100;
    }
  return 0;
}

//#include "../include/Game.h"

//int main(int argc, char const* argv[])
//{

	//char buff[128];
	//bool escKeyPressed;
	//Game myGame;

	//try 
	//{
		//while (myGame.window.isOpen()) 
		//{
			//// detecting close events
			//while(myGame.window.pollEvent(myGame.event))
			//{
				//escKeyPressed =    ((myGame.event.type == sf::Event::KeyPressed)&
										//(myGame.event.key.code == sf::Keyboard::Escape));
				//if ( (myGame.event.type == sf::Event::Closed ) || (escKeyPressed) )
					//myGame.window.close();
			//}
			//myGame.window.clear(sf::Color::Red);
			//myGame.window.display();
		//}
	//}
	//catch (...) 
	//{
		//if (myGame.pFile)
		//{
			//sprintf(buff, "Exception main()");
			//fputs(buff, myGame.pFile);
			//fclose(myGame.pFile);
		//}
		//return -100;
	//}

	//return 0;
//}
