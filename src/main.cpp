#include "stdafx.h"
#include "window/Window.h"
#include "window/MainWindow.h"

int main() {
  Window* window = new MainWindow();
  window->createWindow();
  window->getInput();
  return 0;
}
