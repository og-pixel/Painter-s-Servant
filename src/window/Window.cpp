#include "Window.h"

std::vector<WINDOW*> Window::windowList;

Window::Window() {
    if(has_colors()){
        std::cout << "This terminal does not support colours" << std::endl;
    }
    std::cout << "hello from main window" << std::endl;
    WINDOW *newWindow = newwin(LINES, COLS, 0, 0);
    Window::windowList.push_back(newWindow);
    box(newWindow, 0, 0);
    wrefresh(newWindow);
}

void Window::createWindow(){
  std::cout << "Called Home" << std::endl;
}

int Window::getHeight() {
  return height;
}

int Window::getWidth() {
  return width;
  
}
