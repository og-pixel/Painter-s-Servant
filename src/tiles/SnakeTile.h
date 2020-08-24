#ifndef GOBLINGUIDE_SNAKETILE_H
#define GOBLINGUIDE_SNAKETILE_H

#include "../stdafx.h"
#include "BasicTile.h"

//This is essentially an interface to
// and it is only needed to return a specific ASCII character
// to represent it on the screen
class SnakeTile: public BasicTile {

public:

  //Constructor
  SnakeTile();

  char getTileInASCII() override;

};

#endif //GOBLINGUIDE_SNAKETILE_H
