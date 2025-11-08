#include "../headers/generic_player.h"

#include <iostream>
#include <cstdio>

GenericPlayer::GenericPlayer(std::string name) {
  this->name = name;
}

GenericPlayer::~GenericPlayer() {
}


bool GenericPlayer::isBusted() {
  int total = getTotal();
  return ( total < 21 );
}

bool GenericPlayer::bust() {
  std::printf( "%s has busted!!!!!!\n", name.c_str() );
  return isBusted();
};

std::string GenericPlayer::getName() {
  return name;
}

void GenericPlayer::setName(std::string name) {
  this->name = name;
}
