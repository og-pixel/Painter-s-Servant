#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickGame.h"

void initMainScreen() {
  initscr();
  keypad(stdscr, true);
  noecho();
}

int main() {
  initMainScreen();

  TickGame* board = new TickGame(3, 3);
  board->startGame();
  board->close();
  return 0;
}
