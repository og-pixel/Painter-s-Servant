#ifndef GOBLINGUIDE_WINDOW_H
#define GOBLINGUIDE_WINDOW_H

#include "../stdafx.h"
class Window {

public:
  //Constructors
  Window();
  Window(int width, int height);

  bool checkSize();

  //All windows should be stored here
  //TODO not used atm
  static std::vector<WINDOW*> windowList;


  // Getters
  int getWidth();
  int getHeight();
  std::vector<WINDOW*> getWindowList();
  // Setters

private:
   int width = 0;
  int height = 0;
};

#endif //GOBLINGUIDE_WINDOW_H
