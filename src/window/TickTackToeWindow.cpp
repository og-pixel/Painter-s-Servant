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
  // WINDOW* window1 = newwin(LINES, COLS,0,0)
  // box(windowList.at(0), 0, 0);
}

bool TickTackToeWindow::chooseBoardField(int x, int y, int player) {
  if(board[y][x] == 0) board[y][x] = player;
  else return false;
  checkConditions();

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
      mvwaddstr(windowList.at(0), i + 1, j + 1, std::to_string(board[i][j]).c_str());
    }
  }
  refresh();
  wrefresh(windowList.at(0));
  return true;
}

void TickTackToeWindow::navigation() {
  refresh();
  wrefresh(windowList.at(0));
  keypad(windowList.at(0), true);

  char character = getch();
  do {
    switch(character) {
    case KEY_LEFT:
      xPos--;
      break;
    case KEY_RIGHT:
      xPos++;
      break;
    case KEY_UP:
      yPos--;
      break;
    case KEY_DOWN:
      yPos++;
      break;
    }
    wmove(windowList.at(0), yPos, xPos);
    character = getch();
    refresh();
    wrefresh(windowList.at(0));
  } while(character != 10);
}

bool TickTackToeWindow::playerMove(int x, int y) {
  return chooseBoardField(x, y, 1);
}

bool TickTackToeWindow::computerMove() {
  //TODO Computer decision here
  return chooseBoardField(0, 0, 2);
}


void TickTackToeWindow::testFunction() {


}


