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

  // refresh();
  // wrefresh(windowList.at(0));

  // getch();
  endwin();
}

bool TickTackToeWindow::choseField(int x, int y, int player) {
  // if(board[y][x] == 0) board[y][x] = player;
  // else return false;
  // checkConditions();

  // refresh();
  // wrefresh(windowList.at(0));

  return true;
}

bool TickTackToeWindow::checkConditions() {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      // std::cout << board[j][i] << ",";
    }
  }
  return true;
}

void TickTackToeWindow::render(){
  createBoard();
}

bool TickTackToeWindow::createBoard() {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      mvwaddstr(windowList.at(0), i + 1, j + 1, std::to_string(board[j][i]).c_str());
    }
  }

  refresh();
  wrefresh(windowList.at(0));
  return true;
}
