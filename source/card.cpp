#include "../headers/card.h"

#include <iostream>

Card::Card( SUIT suit, RANK rank, bool isFaceUp ) {
  this->suit = suit;
  this->rank = rank;
  this->isFaceUp = isFaceUp;
}

int Card::getValue() {

  if (!isFaceUp) return 0;

  switch ( rank ) {
    case ACE: 
      return 1;
    case TWO:
      return 2;
    case THREE: 
      return 3;
    case FOUR:
      return 4;
    case FIVE: 
      return 5;
    case SIX:
      return 6;
    case SEVEN: 
      return 7;
    case EIGHT:
      return 8;
    case NINE:
      return 9;
    case TEN: 
      return 10;
    case JACK:
      return 10;
    case QUEEN: 
      return 10;
    case KING:
      return 10;
  }
  return 0; // unreachable code
}

void Card::flip() {
  this->isFaceUp = !isFaceUp;
}


std::ostream& operator<<(std::ostream& os, Card& card) {

  std::string ranks[13] = {
    "A",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "10",
    "J",
    "Q",
    "K"
  };

  std::string suits[4] = {
    "C",
    "D",
    "H",
    "S",

  };

  if ( card.getValue() == 0 ) {
    os << "XX";
  }

  else {
    os << ranks[card.rank] << suits[card.suit];
  }

  return os;

}
