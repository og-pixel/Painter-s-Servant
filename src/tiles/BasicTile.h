#ifndef GOBLINGUIDE_BASICTILE_H
#define GOBLINGUIDE_BASICTILE_H

#include "../stdafx.h"

//This is essentially an interface to
// and it is only needed to return a specific ASCII character
// to represent it on the screen
class BasicTile {

public:

  //Constructor
  BasicTile();

  virtual char getTileInASCII() = 0;

};

#endif //GOBLINGUIDE_BASICTILE_H
