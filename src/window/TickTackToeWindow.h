#ifndef GOBLINGUIDE_TICKTACKTOEWINDOW_H
#define GOBLINGUIDE_TICKTACKTOEWINDOW_H

#include "../stdafx.h"
#include "Window.h"

//The most basic form of the game, not even considering special
// cases or anything like that.
class TickTackToeWindow: public Window {

public:
  //Constructor
  TickTackToeWindow();
  TickTackToeWindow(int width, int height);

  //0 Empty
  //1 Player
  //2 AI
  int board[5][5] = {
                     { 0, 0, 1, 0, 0 },
                     { 0, 0, 2, 0, 0 },
                     { 1, 2, 3, 4, 5 },
                     { 0, 0, 4, 0, 0 },
                     { 0, 0, 0, 0, 0 }
  };

  //TODO silly name
  bool choseField(int x, int y, int player);
  bool checkConditions();
  void render();

private:
  //Variables
  bool userTurn = false;

  //Functions
  bool createBoard();
};

#endif //GOBLINGUIDE_TICKTACKTOEWINDOW_H
