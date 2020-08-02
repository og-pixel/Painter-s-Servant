#include "Window.h"

std::vector<WINDOW*> Window::windowList;

// Main Constructor, it should be used by all other windows
// as it does initialized ncurses screens and boxes.
Window::Window(): Window(10, 10){}


Window::Window(int width, int height) {
  initscr();
  WINDOW *newWindow = newwin(LINES, COLS, 0, 0);
  Window::windowList.push_back(newWindow);

  keypad(stdscr, TRUE);
  noecho();
  std::cout << "called main constructor" << std::endl;
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

bool Window::checkSize() {
  return true;
}

char Window::getInput() {
  return getch();
}

void Window::close() {
  endwin();
}
