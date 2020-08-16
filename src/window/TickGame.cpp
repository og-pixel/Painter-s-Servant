//
// Created by og_pixel
//
#include "TickGame.h"

// Main Constructor, default parameters
TickGame::TickGame(): TickGame(5, 5) {}

// Constructor
TickGame::TickGame(int gameWidth, int gameHeight): Window() {
  if(!isTerminalSizeSufficient())
    closeApplication("Terminal Size not Sufficient");

  this->gameBoardWidth = gameWidth;
  this->gameBoardHeight = gameHeight;

  // Create board of appropriate game size
  boardMatrix.resize(gameHeight);
  for(int i = 0; i < gameHeight; i++)
    boardMatrix[i].resize(gameWidth);
}

bool TickGame::chooseBoardField(int x, int y, int player) {
  //TODO this is another sanity check for the time being
  // to prevent most segfaults
  if(x > gameBoardWidth || y > gameBoardHeight) return false;


  if(boardMatrix[y][x] == 0) boardMatrix[y][x] = player;
  else return false;
  // checkConditions();

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

bool TickGame::renderBoard() {
  subWindow = subwin(mainWindow, 8, 18, (LINES/2) - (8/2) + 1, (COLS/2) - (18/2));
  box(subWindow, 0, 0);
  for(int i = 0; i < gameBoardHeight; i++) {
    for(int j = 0; j < gameBoardWidth; j++) {
      mvwaddstr(subWindow, i + 2, j + 2, std::to_string(boardMatrix[i][j]).c_str());
    }
  }
  refresh();
  wrefresh(mainWindow);
  wrefresh(subWindow);
  return true;
}

void TickGame::navigation() {
  wmove(subWindow, yPos, xPos);
  refresh();
  wrefresh(subWindow);
  keypad(subWindow, true);

  int character = getch();
  switch(character) {
  case KEY_LEFT:
    if((xPos - 1) > 0) xPos--;
    break;
  case KEY_RIGHT:
    if((xPos + 1) < subWindow->_maxx) xPos++;
    break;
  case KEY_UP:
    if((yPos - 1) > 0) yPos--;
    break;
  case KEY_DOWN:
    if((yPos + 1) < subWindow->_maxy) yPos++;
    break;
  case 'j':
    std::cout << xPos << " " << yPos;
    playerMove(xPos, yPos);
    computerMove();
    break;
  case 'k':

    break;
  case 'l':
    break;
  case KEY_RESIZE:
    // box(windowList.at(0), 0, 0);
    // mvwaddstr(windowList.at(0), 5, 5, std::to_string(COLS).c_str());
    wresize(mymap["main"], 20, 20);
    break;

  wmove(mymap["main"], yPos - (gameBoardHeight / 2), xPos - (gameBoardWidth / 2));
  refresh();
  wrefresh(mymap["main"]);
  }
}

bool TickGame::playerMove(int x, int y) {
  return chooseBoardField(x, y, 1);
}

bool TickGame::isTerminalSizeSufficient() {
  if((COLS >= gameBoardWidth + 20) &&
     LINES >= gameBoardHeight + 20) {
    return true;
  } else {
    return false;
  }
}

bool TickGame::computerMove() {
  //TODO Computer decision here
  return chooseBoardField(0, 0, 2);
}


void TickGame::virtualFunction() {}

bool TickGame::isRunning() {
  return true;
}

bool TickGame::startGame(){
  while(isRunning()) {
    renderBoard();
    navigation();
  }
  return true;
}

