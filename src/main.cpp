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

  //TODO This is meant to be run at least once
  // MainWindow* board = new MainWindow();
  TickGame* board = new TickGame(10, 10);
  board->startGame();
  board->close();
  return 0;
}
