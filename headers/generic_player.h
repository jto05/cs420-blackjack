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

  bool virtual isHitting() = 0;
  bool isBusted();
  bool bust();
  std::string getName();
  void setName(std::string name);

  friend std::ostream& operator<<(std::ostream& os, GenericPlayer& gp);
};

#endif
