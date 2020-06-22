#include "Window.h"

std::vector<WINDOW*> Window::windowList;

Window::Window() {
    if(has_colors()){
        std::cout << "This terminal does not support colours" << std::endl;
    }
    WINDOW *newWindow = newwin(LINES, COLS, 0, 0);
    // std::cout << &newWindow << std::endl;
    Window::windowList.push_back(newWindow);
    box(newWindow, 0, 0);
    wrefresh(newWindow);
    getch();
}

void Window::createWindow(){
  std::cout << "Called Home" << std::endl;
}  

