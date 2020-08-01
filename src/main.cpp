#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickTackToeWindow.h"


int main() {
  TickTackToeWindow* board = new TickTackToeWindow();

  board->chooseBoardField(0, 0, 9);
  board->chooseBoardField(4, 4, 9);

  board->render();
  board->getInput();
  board->close();

  return 0;
}
