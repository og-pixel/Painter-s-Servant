//
// Created by og_pixel 
//
#include "TickGame.h"

// Main Constructor
TickGame::TickGame(): TickGame(10, 10){
}

TickGame::TickGame(int width, int height):Window(width, height) {
  //TODO this needs to actually know what
  // to box
  // WINDOW* window1 = newwin(LINES, COLS,0,0)
  // box(windowList.at(0), 0, 0);

  //TODO gameWidth and height might stay here
  gameWidth = width;
  gameHeight = height;

  //TODO this part ensure new matrix has correct size
  board.resize(gameHeight);
  for(int i = 0; i < gameHeight; i++) {
    board[i].resize(gameWidth);
  }

  if(!isTerminalSizeSufficient()) std::exit(1);
}

bool TickGame::chooseBoardField(int x, int y, int player) {
  //TODO this is another sanity check for the time being
  if(x > gameWidth || y > gameHeight) return false;


  if(board[y][x] == 0) board[y][x] = player;
  else return false;
  checkConditions();

  return true;
}

bool TickGame::checkConditions() {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      // std::cout << board[j][i] << ",";
    }
  }
  return true;
}

bool TickGame::createBoard() {
  for(int i = 0; i < gameHeight; i++) {
    for(int j = 0; j < gameWidth; j++) {
      mvwaddstr(windowList.at(0), i + (LINES/2) - (gameHeight/2), j + (COLS/2) - (gameWidth/2), std::to_string(board[i][j]).c_str());
    }
  }
  refresh();
  wrefresh(windowList.at(0));
  return true;
}

void TickGame::render() {
  createBoard();
}

void TickGame::navigation() {
  WINDOW* topWindow;


  wmove(windowList.at(0), yPos, xPos);
  refresh();
  wrefresh(windowList.at(0));
  keypad(windowList.at(0), true);

  int character = getch();
  switch(character) {
  case KEY_LEFT:
    if((xPos - 1) > 0) xPos--;
    break;
  case KEY_RIGHT:
    if((xPos + 2) < COLS) xPos++;
    break;
  case KEY_UP:
    if((yPos - 1) > 0) yPos--;
    break;
  case KEY_DOWN:
    if((yPos + 2) < LINES) yPos++;
    break;
  case 'j':
    std::cout << xPos << " " << yPos << std::endl;
    playerMove(xPos, yPos);
    computerMove();
    break;
  case 'k':
    //TODO work in progress, this part does spawn an additional window inside a window
    topWindow = newwin(20, 20, 5, 5);
    box(topWindow, 0 , 0);
    wrefresh(topWindow);
    break;
  case KEY_RESIZE:
    // box(windowList.at(0), 0, 0);
    // mvwaddstr(windowList.at(0), 5, 5, std::to_string(COLS).c_str());
    wresize(windowList.at(0), 20, 20);
    break;
  }
  wmove(windowList.at(0), yPos - (gameHeight / 2), xPos - (gameWidth / 2));
  refresh();
  wrefresh(windowList.at(0));
}

bool TickGame::playerMove(int x, int y) {
  return chooseBoardField(x, y, 1);
}

bool TickGame::isTerminalSizeSufficient() {
  if((COLS >= gameWidth) &&
     LINES >= gameHeight) {
    return true;
  } else return false;
  // return true;
}

bool TickGame::computerMove() {
  //TODO Computer decision here
  return chooseBoardField(0, 0, 2);
}


void TickGame::testFunction() {


}

bool TickGame::isRunning() {
  return true;
}

bool TickGame::startGame(){
  WINDOW* win = newwin(gameWidth + 1, gameHeight + 1, 2, 2);
  box(win, 0, 0);
  refresh();
  wrefresh(win);

  while(isRunning()) {
    render();
    navigation();
  }
  return true;
}

