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
  static std::unordered_map<std::string, WINDOW*> windowMap;

  //Functions
  void close();
  bool checkSize();
  bool isMainWindow();
  void closeApplication(std::string message);
  virtual void navigation() = 0;

  // Getters
  std::string getWindowName() const;
  std::unordered_map<std::string, WINDOW*> getMap() const;
  int getSubwinHeight() const;
  int getSubwinWidth() const;

  // Setters

  //TODO move back to private
  static WINDOW* mainWindow;
  static WINDOW* subWindow;

private:

  std::string mainWindowName = "main";

  int subwinWidth = 62;
  int subwinHeight = 20;

  //Functions
};

#endif //GOBLINGUIDE_WINDOW_H
