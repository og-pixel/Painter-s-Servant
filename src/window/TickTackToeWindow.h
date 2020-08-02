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
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 }
  };

  bool chooseBoardField(int x, int y, int player);
  bool checkConditions();
  void render();
  void navigation();

private:
  //Variables
  bool playerTurn = true;

  int xPos = 0;
  int yPos = 0;

  //Functions
  bool createBoard();
  bool computerMove();
  bool playerMove(int x, int y);
};

#endif //GOBLINGUIDE_TICKTACKTOEWINDOW_H
