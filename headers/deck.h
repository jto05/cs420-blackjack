#ifndef DECK_H
#define DECK_H

#include "../headers/hand.h"
#include "../headers/generic_player.h"


class Deck : public Hand {
public:
  Deck();
  virtual ~Deck();
  void populate();
  void shuffle();
  void deal( Hand& );
  void additionalCards( GenericPlayer& );
};

#endif
