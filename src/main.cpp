#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickTackToeWindow.h"


int main() {
  TickTackToeWindow* board = new TickTackToeWindow();
  board->choseField(2, 2, 9);
  board->render();
  board->getInput();
  board->close();


  return 0;
}
