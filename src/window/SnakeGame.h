#ifndef GOBLINGUIDE_SNAKEGAME_H
#define GOBLINGUIDE_SNAKEGAME_H

#include "../stdafx.h"
#include "TickGame.h"

//The most basic form of the game, not even considering special
// cases or anything like that.

struct SnakeBody {
  int xPos;
  int yPos;
};

struct Point {
  int x;
  int y;
};

class SnakeGame: public TickGame {

public:

  //Constructor
  SnakeGame();
  SnakeGame(int gameWidth, int gameHeight);

  //Deconstructor
  ~SnakeGame();

  //Functions
  bool snakeMoveUp();
  bool snakeMoveDown();
  bool snakeMoveLeft();
  bool snakeMoveRight();

private:

  //Variables
  struct SnakeBody snake[200];

};

#endif //GOBLINGUIDE_SNAKEGAME_H
