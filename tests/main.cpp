#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/Settings.h"
#include "../src/window/Window.h"
#include "../src/window/MainWindow.h"




TEST_CASE("Create two windows and see if they are stored correctly in the static") {

  //TODO I am starting to understand my project and
  // the language. I might start writing some tests

  //TODO Remember about operator overloading "=="
  // so I can make a comparison

  Window* mainWindow = new MainWindow();
  Window* tickTackToe = new MainWindow();


  // REQUIRE();
}
