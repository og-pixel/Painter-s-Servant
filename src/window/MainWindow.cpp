//
// Created by og_pixel on 16/05/2020.
//

#include "MainWindow.h"

MainWindow::MainWindow() {
  std::cout << gameList[0] << std::endl;
  std::cout << gameList[2] << std::endl
;
}

int MainWindow::getInput() {
    getch();
    return 0;
}

void MainWindow::createWindow() {
  Window::createWindow();
}

void MainWindow::closeWindow() {

}
