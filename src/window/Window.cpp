#include "Window.h"

std::unordered_map<std::string, WINDOW*> Window::mymap;
WINDOW* Window::mainWindow = nullptr;
WINDOW* Window::subWindow;

// Main Constructor, it should be used by all other windows
// as it does initialized ncurses screens and boxes.
Window::Window() {
  if(!mainWindow){
    mainWindow = newwin(LINES, COLS, 0, 0);
    box(mainWindow, 0, 0);
    mymap[mainWindowName] = mainWindow;
  }
  start_color();
}

std::string Window::getWindowName() const {
  return mainWindowName;
}

bool Window::checkSize() {
  return true;
}

// char Window::getInput() {
//   return getch();
// }

void Window::close() {
  endwin();
}

bool Window::isMainWindow() {
  if(mainWindow) return true;
  else return false;
}

void Window::closeApplication(std::string message) {
  endwin();
  std::cout << message << std::endl;
  std::exit(0);
}

int Window::getSubwinWidth() const {
  return subwinWidth;
}

int Window::getSubwinHeight() const {
  return subwinHeight;
}
