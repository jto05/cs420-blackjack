#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card {

private:
  bool isFaceUp;

public:

  enum RANK {
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
  };

  enum SUIT {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
  };

  Card( SUIT suit, RANK rank, bool isFaceUp );
  int getValue();
  void flip();

  friend std::ostream& operator<<(std::ostream& os, Card& card);

protected:
  RANK rank;
  SUIT suit;

};

#endif
