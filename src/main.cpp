#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickTackToeWindow.h"


int main() {
  // Window* window = new MainWindow();
  TickTackToeWindow* tick = new TickTackToeWindow();
  tick->choseField(1, 1, 1);

  return 0;
}
