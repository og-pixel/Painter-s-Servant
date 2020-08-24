#ifndef GOBLINGUIDE_TICKTACKTOEWINDOW_H
#define GOBLINGUIDE_TICKTACKTOEWINDOW_H

#include "../stdafx.h"
#include "Window.h"
#include "../tiles/BasicTile.h"

//The most basic form of the game, not even considering special
// cases or anything like that.
class TickGame: public Window {

public:

  //Constructor
  TickGame();
  TickGame(int gameWidth, int gameHeight);

  //Deconstructor
  // ~TickGame();

  //Getters
  std::vector<std::vector<int>> getBoardMatrix() const;

  //Functions
  bool chooseBoardField(int x, int y, int player);
  bool checkConditions();
  bool startGame();
  bool isRunning();
  void navigation() override;

  int gameBoardWidth;
  int gameBoardHeight;
  std::vector<std::vector<int>> boardMatrix;

private:

  //Variables
  bool playerTurn = true;
  int xPos = 1;
  int yPos = 2;
  std::string gameWindowName;

  //0 Empty
  //1 Player
  //2 AI

  //Functions
  virtual bool renderBoard();
  virtual bool computerMove();
  virtual bool playerMove(int x, int y);
  bool isTerminalSizeSufficient();
};

#endif //GOBLINGUIDE_TICKTACKTOEWINDOW_H
