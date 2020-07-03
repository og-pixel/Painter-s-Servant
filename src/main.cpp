#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"


int main() {

  //TODO it should add itself
  Window* window = new MainWindow();

  // Start Screen, make function out of it
  // initscr();
  // window->createWindow();
  // window->getInput();
  // End screen, make funciton out of it
  // endwin();
  // Settings* settings = new Settings();
  Settings::testFunc();

  return 0;
}



