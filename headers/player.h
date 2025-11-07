#ifndef PLAYER_H
#define PLAYER_H

#include "../headers/generic_player.h"

class Player : public GenericPlayer {

public:
  Player(std::string = " "); 
  virtual ~Player();
  bool virtual isHitting();
  bool win();
  bool lose();
  bool push();

};

#endif
