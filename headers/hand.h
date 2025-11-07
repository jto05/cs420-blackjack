#ifndef HAND_H
#define HAND_H

#include <vector>
#include "../headers/card.h"

class Hand {
private:
  std::vector<Card*> cards;

public:
  Hand();
  virtual ~Hand();

  void add( Card* );
  void clearHand();
  int getTotal();

};

#endif
