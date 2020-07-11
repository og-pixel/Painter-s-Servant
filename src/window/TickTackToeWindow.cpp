//
// Created by og_pixel 
//

#include "TickTackToeWindow.h"

// Main Constructor
TickTackToeWindow::TickTackToeWindow(): TickTackToeWindow(0,0){
}

TickTackToeWindow::TickTackToeWindow(int width, int height):Window(width, height) {
  getch();
}
// TickTackToeWindow::TickTackToeWindow(int width, int height) {
  //TODO width and height might be wrong
  // WINDOW *newWindow = newwin(LINES, COLS, width, height);
  // Window::windowList.push_back(newWindow);
  // box(newWindow, 0, 0);

  // initscr();
  // wrefresh(newWindow);
// }
