//
// Created by og_pixel 
//
#include "TickTackToeWindow.h"

// Main Constructor
TickTackToeWindow::TickTackToeWindow(): TickTackToeWindow(0,0){
}

TickTackToeWindow::TickTackToeWindow(int width, int height):Window(width, height) {

  initscr();
  // WINDOW* window1 = newwin(LINES, COLS, 0, 0);
  box(windowList.at(0), 0, 0);

  refresh();
  wrefresh(windowList.at(0));
  noecho();


  getch();
}

bool TickTackToeWindow::choseField(int x, int y, int player) {
  // if(board[y][x] == 0) board[y][x] = player;
  // else return false;

  checkConditions();
  mvwaddstr(windowList.at(0), 1, 2, "WTF");
  mvwaddstr(windowList.at(0), 2, 2, "WTF");
  mvwaddstr(windowList.at(0), 3, 2, "WTF");
  refresh();
  wrefresh(windowList.at(0));
  return true;
}

bool TickTackToeWindow::checkConditions() {
    for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5; j++) {
         // std::cout << board[j][i] << ",";
      }
    }
}
