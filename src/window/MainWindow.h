//

Cc: Milosz Jakubanis <milosz.jakubanis@protonmail.com>

// Created by og_pixel on 16/05/2020.
//

#ifndef GOBLINGUIDE_MAINWINDOW_H
#define GOBLINGUIDE_MAINWINDOW_H

#include "Window.h"

class MainWindow: public Window {
public:
    MainWindow();
    int getInput() override;

    void createWindow() override;
    void closeWindow() override;

private:
    std::string gameList[3] = {"Tick Tack Toe", "Tetris", "Snake"};
    int gameChoice = 0;
};


#endif //GOBLINGUIDE_MAINWINDOW_H
