//
// Created by og_pixel on 16/05/2020.
//

#include "MainWindow.h"

//TODO this needs to me "removed" and most logic moved to the base class 
MainWindow::MainWindow() {
  initscr();
  WINDOW* window1 = newwin(LINES, COLS, 0, 0);
  box(window1, 0, 0);

  mvwaddstr(window1, 1, 2, menuList[0].c_str());
  mvwaddstr(window1, 2, 2, menuList[1].c_str());
  mvwaddstr(window1, 3, 2, menuList[2].c_str());
  wmove(window1, menuSelected, 5);

  refresh();
  wrefresh(window1);
  noecho();
  //Quit when pressed 'q'
  int input;
  do{
    input = getch();
    refresh();
    //Move Menu
    if(input == 'j' && menuSelected < 3) {
      menuSelected++;
      wmove(window1, menuSelected, 5);
    }
    if(input == 'k' && menuSelected > 0) {
      menuSelected--;
      wmove(window1, menuSelected, 5);
    }
    wrefresh(window1);
  } while(input!='q');

  endwin();
}

Window::~Window(){
  
}

void MainWindow::testFunction() {
  
}
