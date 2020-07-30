//
// Created by og_pixel 
//
#include "TickTackToeWindow.h"

// Main Constructor
TickTackToeWindow::TickTackToeWindow(): TickTackToeWindow(10, 10){
}

TickTackToeWindow::TickTackToeWindow(int width, int height):Window(width, height) {
  //TODO this needs to actually know what
  // to box
  box(windowList.at(0), 0, 0);

  // mvwaddstr(windowList.at(0), 1, 2, "Line 1");
  // mvwaddstr(windowList.at(0), 2, 2, "Line 2");
  // mvwaddstr(windowList.at(0), 3, 2, "Line 3");

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      std::string xxx = std::to_string(board[j][i]);
      mvwaddstr(windowList.at(0), i, j, std::to_string(board[j][i]).c_str());
    }
  }

  refresh();
  wrefresh(windowList.at(0));

  getch();
  endwin();
}

bool TickTackToeWindow::choseField(int x, int y, int player) {
  // if(board[y][x] == 0) board[y][x] = player;
  // else return false;
  // checkConditions();

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
