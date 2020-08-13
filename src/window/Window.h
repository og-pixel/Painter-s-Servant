#ifndef GOBLINGUIDE_WINDOW_H
#define GOBLINGUIDE_WINDOW_H

#include "../stdafx.h"
class Window {

public:

  //Constructors
  Window();

  //Deconstructor
  ~Window();


  //All windows should be stored here
  //TODO rename
  static std::unordered_map<std::string, WINDOW*> mymap;

  //Functions
  char getInput();
  void close();
  bool checkSize();
  bool isMainWindow();

  //This function is made so Window Class cannot be instantiated
  virtual void virtualFunction() = 0;

  // Getters
  int getWidth() const;
  int getHeight() const;
  std::string getWindowName() const;
  std::unordered_map<std::string, WINDOW*> getMap() const;

  // Setters

private:
  //TODO this is meant to be a main window that the game will be at
  // initialised once at the start and later maintained.
  static WINDOW* mainWindow;
  std::string mainWindowName = "main";

  WINDOW* subWindow;

  //TODO maybe delete
  int width = 0;
  int height = 0;

};

#endif //GOBLINGUIDE_WINDOW_H
