#ifndef GOBLINGUIDE_BOARDTILE_H
#define GOBLINGUIDE_BOARDTILE_H

#include "../stdafx.h"

//This is essentially an interface to
// and it is only needed to return a specific ASCII character
// to represent it on the screen
class BoardTile {

public:
  //Constructor
  BoardTile();

  //TODO this is
  virtual char getTileInASCII() = 0;



};

#endif //GOBLINGUIDE_BOARDTILE_H
