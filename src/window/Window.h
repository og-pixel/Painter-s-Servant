#ifndef GOBLINGUIDE_WINDOW_H
#define GOBLINGUIDE_WINDOW_H

#include "../stdafx.h"
class Window {

public:
  //Constructors
  Window();
  Window(int width, int height);

  //TODO Function meant to update a screen,
  // but I am not sure if I will just use
  // regular function provided
  void update();

  // Getters
  int getWidth();
  int getHeight();
  std::vector<WINDOW*> getWindowList();
  // Setters

private:
  //All windows should be stored here
  static std::vector<WINDOW*> windowList;
  int width = 0;
  int height = 0;
};

#endif //GOBLINGUIDE_WINDOW_H
