#ifndef GAME_H
#define GAME_H

#include "../headers/deck.h"
#include "../headers/house.h"
#include "../headers/player.h"

#include <iostream>

class Game {
private:
  Deck deck;
  House house;
  Player player;

public:
  Game( std::string );
  ~Game();
  void play();

};

#endif
