#include "../headers/game.h"
#include "../headers/card.h"
#include "../headers/house.h"

#include <iostream>

int main() {
  using namespace std;

  Card c = Card( Card::SUIT::DIAMONDS, Card::RANK::ACE, false );

  House h = House();

  h.add( new Card( Card::SUIT::DIAMONDS, Card::RANK::ACE, false ));
  h.add( new Card( Card::SUIT::SPADES, Card::RANK::TWO, false ));
  
  
  cout << h << endl;


  return 0;
}

