//
// Created by og_pixel 
//
#include "TickTackToeWindow.h"

// Main Constructor
TickTackToeWindow::TickTackToeWindow(): TickTackToeWindow(0,0){
}

TickTackToeWindow::TickTackToeWindow(int width, int height):Window(width, height) {
  getch();
}

bool TickTackToeWindow::choseField(int x, int y, int player) {
  if(board[y][x] == 0) board[y][x] = player;
  else return false;

  checkConditions();
  return true;
}

bool TickTackToeWindow::checkConditions() {
    for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5; j++) {
        std::cout << board[j][i] << ",";
      }
      std::cout << "\n";
    }
}
