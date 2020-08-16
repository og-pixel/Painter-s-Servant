#ifndef GOBLINGUIDE_MAINWINDOW_H
#define GOBLINGUIDE_MAINWINDOW_H

#include "Window.h"
class MainWindow: public Window {

public:
  MainWindow();
  void virtualFunction();

  void navigation() override;

private:
  std::string menuList[3] = {"Tick Tack Toe", "Tetris", "Snake"};
  int menuSelected = 0;
};


#endif //GOBLINGUIDE_MAINWINDOW_H
