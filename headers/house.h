#ifndef HOUSE_H
#define HOUSE_H

#include "../headers/generic_player.h"
#include <iostream>


class House : public GenericPlayer {
public:
  House( std::string = "Dealer" );
  virtual ~House();
  bool isHitting() override;
  void flipFirstCard();
};

#endif
