//
// Created by og_pixel
//
#include "SnakeGame.h"

// Main Constructor, default parameters
SnakeGame::SnakeGame(): TickGame(15, 30) {
  snake[0].xPos = 1;
  snake[0].yPos = 2;

  snake[1].xPos = 2;
  snake[1].yPos = 2;

  snake[2].xPos = 3;
  snake[2].yPos = 2;

  snake[3].xPos = 4;
  snake[3].yPos = 2;

  snake[4].xPos = 5;
  snake[4].yPos = 2;

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
