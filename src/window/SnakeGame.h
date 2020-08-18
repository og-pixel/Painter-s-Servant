#ifndef GOBLINGUIDE_SNAKEGAME_H
#define GOBLINGUIDE_SNAKEGAME_H

#include "../stdafx.h"
#include "TickGame.h"

// struct SnakeBody {
//   int xPos;
//   int yPos;
// };

// struct Point {
//   int x;
//   int y;
// }
  // ;

class SnakeGame: public TickGame {

public:

  //Constructor
  SnakeGame();

  //Deconstructor
  // ~SnakeGame();

  //Functions
  bool snakeMoveUp();
  bool snakeMoveDown();
  bool snakeMoveLeft();
  bool snakeMoveRight();

  bool moveSnake();

  bool playerMove(int x, int y);

private:

  //Variables
  // struct SnakeBody snake[200];

  bool isUp    = false;
  bool isDown  = false;
  bool isLeft  = true;
  bool isRight = false;

};

#endif //GOBLINGUIDE_SNAKEGAME_H
