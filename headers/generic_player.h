#ifndef GENERIC_PLAYER_H
#define GENERIC_PLAYER_H

#include "../headers/hand.h"
#include <iostream>

class GenericPlayer : public Hand {
private:
  std::string name;

public:
  GenericPlayer(std::string name);
  virtual ~GenericPlayer();

  bool virtual isHitting();
  bool isBusted();
  bool bust();
  std::string getName();
  void setName(std::string name);

};

#endif
