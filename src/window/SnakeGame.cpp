//
// Created by og_pixel
//
#include "SnakeGame.h"
#include "../tiles/BasicTile.h"
#include "../tiles/SnakeTile.h"

// Main Constructor, default parameters
SnakeGame::SnakeGame(): TickGame(8, 13) {
  nodelay(subWindow, true);
  this->gameBoardHeight = getSubwinHeight() - 2;
  this->gameBoardWidth = getSubwinWidth() - 2;

  boardMatrix.resize(gameBoardHeight);
  for(int i = 0; i < gameBoardHeight; i++)
    boardMatrix[i].resize(gameBoardWidth);

  createSnake();
}

bool SnakeGame::snakeMoveUp() {
  if(!isUp && !isDown) {
    isLeft  = false;
    isRight = false;

    isUp    = true;
    return true;
  } else return false;
}

bool SnakeGame::snakeMoveDown() {
  if(!isUp && !isDown) {
    isLeft  = false;
    isRight = false;

    isDown  = true;
    return true;
  } else return false;
}

bool SnakeGame::snakeMoveLeft() {
  if(!isLeft && !isRight) {
    isUp   = false;
    isDown = false;

    isLeft = true;
    return true;
  } else return false;
}

bool SnakeGame::snakeMoveRight() {
  if(!isLeft && !isRight) {
    isUp    = false;
    isDown  = false;

    isRight = true;
    return true;
  } else return false;
}

//TODO work on it
bool SnakeGame::moveSnake() {
  if(isUp) {
    //TODO make snake move
    auto snakeBack = snake.back();
    auto snakeFront = snake.front();

    snakeBack.xPos = snakeFront.xPos;
    snakeBack.yPos = snakeFront.yPos - 1;

    snake.pop_back();
    snake.push_front(snakeBack);

    return true;
  } else if (isDown) {
    auto snakeBack = snake.back();
    auto snakeFront = snake.front();

    snakeBack.xPos = snakeFront.xPos;
    snakeBack.yPos = snakeFront.yPos + 1;

    snake.pop_back();
    snake.push_front(snakeBack);

    return true;
  } else if (isLeft) {
    auto snakeBack = snake.back();
    auto snakeFront = snake.front();

    snakeBack.xPos = snakeFront.xPos - 1;
    snakeBack.yPos = snakeFront.yPos;

    snake.pop_back();
    snake.push_front(snakeBack);

    return true;
  } else if (isRight) {
    auto snakeBack = snake.back();
    auto snakeFront = snake.front();

    snakeBack.xPos = snakeFront.xPos + 1;
    snakeBack.yPos = snakeFront.yPos;

    snake.pop_back();
    snake.push_front(snakeBack);

    return true;
  } else
    return false;

  return true;
}

bool SnakeGame::createSnake() {

  for(int i = 0; i < 5; i++) {
    snakeBody x = {3, i + 2};
    snake.push_back(x);
  }

  auto it = snake.begin();
  for(auto i = 0; i < snake.size(); i++) {
    std::advance(it, 1);
  }

  return true;
}

bool SnakeGame::eatFood() {
  return true;
}

bool SnakeGame::playerMove(int x, int y) {
}

//TODO over the top but it works atm
bool SnakeGame::renderBoard() {
  //Call parent's function to render basic board
  TickGame::renderBoard();

  //Add Snake on top of that
  auto it = snake.begin();
  for(auto i = 0; i < snake.size(); i++) {
    mvwaddstr(subWindow, it->yPos + 1, it->xPos + 1, "S");
    std::advance(it, 1);
  }

  // auto snek = snake.begin();
  // mvwaddstr(mainWindow, 5, 5, std::to_string(snek->xPos));
  moveSnake();

  return true;
}

void SnakeGame::navigation() {
  // wmove(subWindow, 3, 3);
  refresh();
  wrefresh(subWindow);

  int input = getch();
  switch(input) {
  case KEY_LEFT:
    snakeMoveLeft();
    break;
  case KEY_RIGHT:
    snakeMoveRight();
    break;
  case KEY_UP:
    snakeMoveUp();
    break;
  case KEY_DOWN:
    snakeMoveDown();
    break;
  case 'j':
    // playerMove(xPos - 2, yPos - 2);
    // computerMove();
    break;
  case 'k':
    break;
  case 'l':
    break;
  case ERR:
    usleep(1000000);
    break;
  case KEY_RESIZE:
    clear();
    mvwin(subWindow, (LINES/2) - (getSubwinHeight()/2) + 1,
          (COLS/2) - (getSubwinWidth()/2));

    wresize(subWindow, getSubwinHeight(), getSubwinWidth());
    box(subWindow, 0, 0);
    break;
  }

}
