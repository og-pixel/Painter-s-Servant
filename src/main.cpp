#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickTackToeWindow.h"


int main() {
  Window* window = new MainWindow();
  TickTackToeWindow* tick = new TickTackToeWindow();
  return 0;
}
