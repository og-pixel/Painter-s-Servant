#include "Window.h"

std::vector<WINDOW*> Window::windowList;
WINDOW* Window::mainWindow = nullptr;

// Main Constructor, it should be used by all other windows
// as it does initialized ncurses screens and boxes.
Window::Window() {
  if(!mainWindow){
    mainWindow = newwin(LINES, COLS, 0, 0);
    box(mainWindow, 0, 0);
    windowName = "Main Window";
    windowList.push_back(mainWindow);
  }
};


// Window::Window(int width, int height) {
  //TODO work on this bit
  // it needs to create a main window and store it// 
// }


std::vector<WINDOW*> Window::getWindowList(){
  return windowList;
}

int Window::getHeight() const {
  return height;
}

int Window::getWidth() const {
  return width;
}

std::string Window::getWindowName() const {
  return windowName;
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

bool Window::isMainWindow() {
  if(mainWindow) return true;
  else return false;
}
