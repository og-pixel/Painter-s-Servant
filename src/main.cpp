#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickGame.h"
#include "window/SnakeGame.h"

void initMainScreen() {
  initscr();
  keypad(stdscr, true);
  noecho();
}

int main() {
  initMainScreen();

  // TickGame* board = new TickGame();
  // board->startGame();
  // board->close();

  SnakeGame* board = new SnakeGame();
  board->startGame();
  board->close();

  return 0;
}
