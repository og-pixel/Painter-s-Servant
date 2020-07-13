#include "Window.h"

std::vector<WINDOW*> Window::windowList;

// Main Constructor, it should be used by all other windows
// as it does initialized ncurses screens and boxes.
Window::Window(): Window(0, 0){}


Window::Window(int width, int height) {
  //TODO width and height might be wrong
  WINDOW *newWindow = newwin(LINES, COLS, width, height);
  Window::windowList.push_back(newWindow);
  box(newWindow, 0, 0);

  initscr();
  wrefresh(newWindow);
}

void Window::update() {
  refresh();
}

std::vector<WINDOW*> Window::getWindowList(){
  return windowList;
}

int Window::getHeight() {
  return height;
}

int Window::getWidth() {
  return width;
}

