#ifndef GOBLINGUIDE_TICKTACKTOEWINDOW_H
#define GOBLINGUIDE_TICKTACKTOEWINDOW_H

#include "../stdafx.h"
#include "Window.h"

//The most basic form of the game, not even considering special
// cases or anything like that.
class TickTackToeWindow: public Window {

public:
  TickTackToeWindow();
  TickTackToeWindow(int width, int height);

  //0 Empty
  //1 Player
  //2 AI
  int board[5][5] = {
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 1, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 4 }
  };

  //TODO silly name
  bool choseField(int x, int y, int player);
  bool checkConditions();

private:
  bool humanTurn = false;


};

#endif //GOBLINGUIDE_TICKTACKTOEWINDOW_H
