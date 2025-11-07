#ifndef CARD_H
#define CARD_H

enum Rank {
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

enum Suit {
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES
};


class Card {
protected:
  Rank rank;
  Suit suit;

private:
  bool isFaceUp;

public:
  Card( Suit suit, Rank rank, bool isFaceUp );
  int getValue();
  void flip();

};

#endif
