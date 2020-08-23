//
// Created by og_pixel
//
#include "SnakeGame.h"

// Main Constructor, default parameters
SnakeGame::SnakeGame(): TickGame(8, 13) {
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
    // snake[0].yPos++;
  }
  return true;
}

bool SnakeGame::createSnake() {

  for(int i = 0; i < 5; i++) {
    snakeBody x = {i, 2};
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

bool SnakeGame::renderBoard() {
  return true;
}
