#include "../headers/deck.h"

#include <iostream>
#include <algorithm>
#include "../headers/card.h"

Deck::Deck() {
  std::srand(time(0));
  cards.reserve(52);
  populate();
}

Deck::~Deck() {
}

void Deck::populate() {
  clearHand();
  // iterate through suits
  for ( int i = 0; i < 4; i++ ) {
    Card::SUIT suit = static_cast<Card::SUIT>(i);

    // iterate through ranks
    for ( int j = 0; j < 13; j++ ) {
      Card::RANK rank = static_cast<Card::RANK>(j);
      add( new Card( suit, rank, true ) );
    }
  }
}

void Deck::shuffle() {
  std::random_shuffle(cards.begin(), cards.end());
}

void Deck::deal( Hand& hand ) {
  if ( !cards.empty() ) {
    hand.add( cards.back() );
    cards.pop_back();
  } else {
    std::cout << "Looks like there are no more cards left! (Cannot deal anymore)" << std::endl;
  }
}

void Deck::additionalCards( GenericPlayer& gp ) {
  while ( !gp.isBusted() && gp.isHitting() ) {
    deal( gp );

    std::cout << gp << std::endl;

    if ( gp.isBusted() ) 
      gp.bust();
  }

};

