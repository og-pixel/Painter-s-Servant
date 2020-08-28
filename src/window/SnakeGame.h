#ifndef GOBLINGUIDE_SNAKEGAME_H
#define GOBLINGUIDE_SNAKEGAME_H

#include "../stdafx.h"
#include "TickGame.h"

struct snakeBody {
  int xPos;
  int yPos;
};

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

  bool createSnake();
  bool eatFood();

  bool playerMove(int x, int y);


private:

  //Variables
  std::list<snakeBody> snake;
  int gameSpeed = 100;

  bool isUp    = true;
  bool isDown  = false;
  bool isLeft  = false;
  bool isRight = false;

  bool renderBoard() override;
};

#endif //GOBLINGUIDE_SNAKEGAME_H
