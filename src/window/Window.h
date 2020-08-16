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
  void closeApplication(std::string message);

  //This function is made so Window Class cannot be instantiated
  virtual void virtualFunction() = 0;

  //TODO I think I will make this function
  // virtual void navigation() = 0;

  // Getters
  // int getWidth() const;
  // int getHeight() const;
  std::string getWindowName() const;
  std::unordered_map<std::string, WINDOW*> getMap() const;

  // Setters

  //TODO move back to private
  static WINDOW* subWindow;
  static WINDOW* mainWindow;

private:

  //TODO this is meant to be a main window that the game will be at
  // initialised once at the start and later maintained.
  std::string mainWindowName = "main";

  //Functions
};

#endif //GOBLINGUIDE_WINDOW_H
