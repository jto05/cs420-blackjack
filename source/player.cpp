#include "../headers/player.h"
#include "../headers/generic_player.h"

#include <iostream>

Player::Player(std::string name) : GenericPlayer(name) {
}

Player::~Player() {

}

bool Player::isHitting() {
  using namespace std;
  char input;

  while ( true ) {
    cout << getName() << ", would you like to hit? (Y/N)" << endl;

    cin >> input;

    switch ( input ){
    case 'Y':
      return true;
    case 'N':
      return false;
    default:
      continue;
    }
  }
}

bool Player::win(){
  using namespace std;
  cout << "Congratulations, " << getName() << "! You have won!" << endl;
  return true;
};

bool Player::lose(){
  using namespace std;
  cout << "Oh no, " << getName() << "! Looks like you have lost..." << endl;
  return false;
};

bool Player::push() {
  using namespace std;
  cout << "Aw dang, " << getName() << "... A push!" << endl;
  return false;
};
