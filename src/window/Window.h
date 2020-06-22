#ifndef GOBLINGUIDE_WINDOW_H
#define GOBLINGUIDE_WINDOW_H

#include "../stdafx.h"
class Window {

public:
    //All windows should be stored here
    static std::vector<WINDOW*> windowList;

    Window();
    Window(int x);

    virtual int getInput() = 0;
    virtual void closeWindow() = 0;
    virtual void createWindow() = 0;
private:

};

#endif //GOBLINGUIDE_WINDOW_H
