#ifndef GOBLINGUIDE_WINDOW_H
#define GOBLINGUIDE_WINDOW_H

#include "../stdafx.h"
class Window {

public:
  //Constructors
  Window();

  //Deconstructor
  ~Window();

  bool checkSize();

  //All windows should be stored here
  //TODO not used atm
  // static std::vector<WINDOW*> windowList;
  static std::unordered_map<std::string, WINDOW*> mymap;

  //TODO this is meant to be a main window that the game will be at
  // initialised once at the start and later maintained.
  static WINDOW* mainWindow;

  //Functions
  char getInput();
  void close();
  bool isMainWindow();

  //This function is made so Window Class cannot be instantiated 
  virtual void virtualFunction() = 0;

  // Getters
  int getWidth() const;
  int getHeight() const;
  std::string getWindowName() const;

  // std::vector<WINDOW*> getWindowList() const;
  std::unordered_map<std::string, WINDOW*> getMap() const;

  // Setters

private:
  std::string windowName;
  int width = 0;
  int height = 0;

};

#endif //GOBLINGUIDE_WINDOW_H
