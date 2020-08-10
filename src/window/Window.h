#ifndef GOBLINGUIDE_WINDOW_H
#define GOBLINGUIDE_WINDOW_H

#include "../stdafx.h"
class Window {

public:
  //Constructors
  Window();
  Window(int width, int height);

  ~Window();

  bool checkSize();

  //All windows should be stored here
  //TODO not used atm
  static std::vector<WINDOW*> windowList;
  static std::unordered_map<std::string, WINDOW*> mymap;

  //TODO this is meant to be a main window that the game will be at
  // initialised once at the start and later maintained.
  static WINDOW* mainWindow;

  //Functions
  char getInput();
  void close();

  //This function is made so Window Class cannot be instantiated 
  virtual void virtualFunction() = 0;

  // Getters
  int getWidth();
  int getHeight();
  std::vector<WINDOW*> getWindowList();
  // Setters

private:
  int width = 0;
  int height = 0;

  //Name used by the window, used as a key
  // in the hash map (unordered list)
  std::string windowName;

  //TODO possibly a function for first time start
};

#endif //GOBLINGUIDE_WINDOW_H
