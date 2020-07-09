//
// Created by og_pixel on 16/05/2020.
//

#include "MainWindow.h"

MainWindow::MainWindow() {
  initscr();
  WINDOW* window1 = newwin(20, 20, 0, 0);
  box(window1, 0, 0);

  // addstr("Hello World\n");
  mvwaddstr(window1, 1, 2,"Hello World");
  mvwaddstr(window1, 2, 2,"Menu Bar");
  mvwaddstr(window1, 3, 2,"Menu Bar");
  refresh();
  wrefresh(window1);
  noecho();

  //Quit when pressed 'q'
  int input = getch();
  while(input!='q'){
    input = getch();
  }

  endwin();
}


// void MainWindow::createWindow() {
//   Window::createWindow();
// }

void MainWindow::closeWindow() {
  
}
