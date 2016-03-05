#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

/* //////////////////////////////////////////////////////////////////////////*/
/**
 * @Description:  
 */
/* ----------------------------------------------------------------------------*/
class ball
{
	public:
		sf::CircleShape shape_;
		sf::Vector2f v2f_position_;
		sf::Vector2f v2f_move_offset_;

	ball()
	{
		shape_.setRadius(8);
		shape_.setFillColor(sf::Color::Red);
		shape_.setOrigin(WINDOW_WIDTH/2, WINDOW_HEIGHT/2); // center of screen 
	}
};

class Debug
{
	public:
		FILE *pFile;
		char err[256];
		
		Debug(char *pFileName)
			: pFile(fopen(pFileName, "w+")
		{}
};

class Game {
	public:
		ball Ball;
		Debug debug;
		sf::Event event;
		sf::RenderWindow window;

		Game(); // Constructor
	
};
Game::Game():
	window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Awesome Game")
{
	window.setFramerateLimit(60);
}

int Debug::LogEvent(char *pText);
#endif
