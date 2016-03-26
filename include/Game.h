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
class ball {
 public:
  sf::CircleShape shape_;
  sf::Vector2f v2f_position_;
  sf::Vector2f v2f_move_offset_;

  ball() {
    shape_.setRadius(8);
    shape_.setFillColor(sf::Color::Red);
    shape_.setOrigin(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);  // center of screen
  }
};

class Log {
  std::FILE* pFile;

 public:
  Log(const char* cFileName) {    // Constructor
    std::fopen(cFileName, "w+");  // Try to open file
    if (!pFile) throw - 1;        // Throw exception in case of failure
  }

  ~Log() {               // Destructor
    std::fflush(pFile);  // Flush any left over
    std::fclose(pFile);  // Close everything
  }

  auto LogToFile(char* cInputToFile) {
    if (pFile) {                        // If file is open?
      std::fputs(cInputToFile, pFile);  // Put chars into file
      return 1;                         // return success
    } else
      return -1;  // else return error
  }
};

class Game {
 public:
  ball Ball();
  Log logging();
  sf::Event event;
  sf::RenderWindow window;

  Game()
      :  // Constructor
        window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Awesome Game") {
    window.setFramerateLimit(60);
  }
};
#endif
