#ifndef GOBLINGUIDE_TICKTACKTOEWINDOW_H
#define GOBLINGUIDE_TICKTACKTOEWINDOW_H

#include "../stdafx.h"
#include "Window.h"

//The most basic form of the game, not even considering special
// cases or anything like that.
class TickGame: public Window {

private:
  //Variables
  bool playerTurn = true;

  int xPos = 2;
  int yPos = 2;

  int gameWidth = 35;
  int gameHeight = 20;
  //0 Empty
  //1 Player
  //2 AI
  int board[20][35] = {};

  //Functions
  bool createBoard();
  bool computerMove();
  bool playerMove(int x, int y);
  bool isTerminalSizeSufficient();

public:
  //Constructor
  TickGame();
  TickGame(int width, int height);


  bool chooseBoardField(int x, int y, int player);
  bool checkConditions();
  void render();
  void navigation();

  void testFunction() override;
  bool startGame();
  bool isRunning();
};

#endif //GOBLINGUIDE_TICKTACKTOEWINDOW_H
