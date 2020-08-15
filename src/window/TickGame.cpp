//
// Created by og_pixel
//
#include "TickGame.h"

// Main Constructor, default parameters
TickGame::TickGame(): TickGame(5, 5) {}

// Constructor
TickGame::TickGame(int gameWidth, int gameHeight): Window() {
  if(!isTerminalSizeSufficient()) std::exit(1);

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

bool TickGame::createBoard() {
  for(int i = 0; i < gameBoardHeight; i++) {
    for(int j = 0; j < gameBoardWidth; j++) {
      mvwaddstr(mymap["main"], i + (LINES/2) - (gameBoardHeight/2), j + (COLS/2) - (gameBoardWidth/2), std::to_string(boardMatrix[i][j]).c_str());
    }
  }
  refresh();
  wrefresh(mymap["main"]);
  return true;
}

void TickGame::navigation() {
  wmove(mymap["main"], yPos, xPos);
  refresh();
  wrefresh(mymap["main"]);
  keypad(mymap["main"], true);

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
    if(!subWindow) {
    subWindow = subwin(mainWindow, 6, 24, (LINES/2) - (24/4), (COLS/2) - (6/1));
      box(subWindow, 0, 0);
      mvwaddstr(subWindow, 1, 2, "hello");
      wrefresh(subWindow);
    }
    // // topWindow = derwin(mymap["main"], 10, 20, 2, 2);
    // box(topWindow, 0, 0);
    // mvwaddstr(topWindow, 1, 1, "hello");
    // wrefresh(topWindow);
    break;
  case 'l':
    break;
  case KEY_RESIZE:
    // box(windowList.at(0), 0, 0);
    // mvwaddstr(windowList.at(0), 5, 5, std::to_string(COLS).c_str());
    wresize(mymap["main"], 20, 20);
    break;
  }
  wmove(mymap["main"], yPos - (gameBoardHeight / 2), xPos - (gameBoardWidth / 2));
  refresh();
  wrefresh(mymap["main"]);
}

bool TickGame::playerMove(int x, int y) {
  return chooseBoardField(x, y, 1);
}

bool TickGame::isTerminalSizeSufficient() {
  if((COLS >= gameBoardWidth) &&
     LINES >= gameBoardHeight) {
    return true;
  } else return false;
  // return true;
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
  // WINDOW* win = newwin(gameWidth + 1, gameHeight + 1, 2, 2);
  // box(win, 0, 0);
  // refresh();
  // wrefresh(win);

  while(isRunning()) {
    createBoard();
    navigation();
  }
  return true;
}

