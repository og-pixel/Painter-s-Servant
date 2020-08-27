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

  boardMatrix.resize(gameHeight);
  for(int i = 0; i < gameHeight; i++)
    boardMatrix[i].resize(gameWidth);
}

bool TickGame::chooseBoardField(int x, int y, int player) {
  if(x > gameBoardWidth || y >= gameBoardHeight) return false;

  if(boardMatrix[y][x] == 0) {
    boardMatrix[y][x] = player;
    return true;
  }
  else return false;
}

bool TickGame::renderBoard() {
  if(!subWindow) {
    subWindow = derwin(mainWindow, getSubwinHeight(), getSubwinWidth(), (LINES/2) - (getSubwinHeight()/2) + 1, (COLS/2) - (getSubwinWidth()/2));
    box(subWindow, 0, 0);
  }
  for(int i = 0; i < gameBoardHeight; i++) {
    for(int j = 0; j < gameBoardWidth; j++) {
      //TODO fix temporary fix
      std::string a = " ";
      mvwaddstr(subWindow, i + 1, j + 1, a.c_str());
    }
  }
  return true;
}

void TickGame::navigation() {
  wmove(subWindow, yPos, xPos);
  refresh();
  wrefresh(subWindow);

  int input = getch();
  switch(input) {
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
    playerMove(xPos - 2, yPos - 2);
    computerMove();
    break;
  case 'k':
    break;
  case 'l':
        break;
  case KEY_RESIZE:
    clear();
    mvwin(subWindow, (LINES/2) - (getSubwinHeight()/2) + 1,
          (COLS/2) - (getSubwinWidth()/2));

    wresize(subWindow, getSubwinHeight(), getSubwinWidth());
    // box(mainWindow, 0, 0);
    box(subWindow, 0, 0);
    break;
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

bool TickGame::isRunning() {
  return true;
}

bool TickGame::startGame(){
  while(isRunning()) {
    drawBoard();
    navigation();
  }
  return true;
}

std::vector<std::vector<char>> TickGame::getBoardMatrix() const {
  return boardMatrix;
}
