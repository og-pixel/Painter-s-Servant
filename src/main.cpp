#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickTackToeWindow.h"

void initMainScreen() {
  initscr();
  keypad(stdscr, true);
  noecho();
}

int main() {
  initMainScreen();

  //TODO This is meant to be run at least once
  MainWindow* board = new MainWindow();
  // TickTackToeWindow* board = new TickTackToeWindow();
  // board->navigation();

  // for(int i = 0; i < 5; i++)
  //   for(int j = 0; j < 5; j++){
  //     board->chooseBoardField(j, i, 1);
  //     board->render();
  //     board->getInput();
  //   }

  board->close();
  return 0;
}
