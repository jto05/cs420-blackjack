#include "../headers/house.h"

#include <iostream>

House::House( std::string name ) : GenericPlayer(name) { 
}

House::~House() {
};

bool House::isHitting() {
  int total = getTotal();
  return ( total <= 16 );

}
void House::flipFirstCard() {
  if ( !cards.empty() ) {
    cards[0]->flip();
  } else {
    std::cout << getName() << ": My hand is empty!" << std::endl;
  }
}
