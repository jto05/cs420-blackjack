#include "../headers/hand.h"

Hand::Hand() {
  cards.reserve(7);
}

Hand::~Hand() {
  clearHand();
}

void Hand::add( Card* card ) {
  cards.push_back(card);
}

void Hand::clearHand() {
  for ( Card* iter : cards ) {
    iter = NULL;
  }
  cards.clear();

}

int Hand::getTotal() {
  if ( cards.empty() ) return 0;
  if ( cards[0]->getValue() == 0 ) return 0;

  int total = 0;
  bool hasAce = false;
  for ( Card* c : cards ) {
    total += c->getValue();
    if ( c->getValue() == 1 ) hasAce = true;
  }

  if ( hasAce && total <= 11 ) 
    total += 10;

  return total;
}
