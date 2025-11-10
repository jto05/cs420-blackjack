#include "../headers/game.h"

#include <iostream>
#include <cctype>


Game::Game( std::string name ) {

  player = Player(name);
  house = House();

  deck.populate();
  deck.shuffle();
}

Game::~Game() {

}

void Game::play() {

  using namespace std;

  // deal two cards to each player ( house and player )
  for ( int i = 0; i < 2; i++  ) {
    deck.deal( house );
    deck.deal( player );
  }

  // flip first card in House Object
  house.flipFirstCard();

  // display house and player
  cout << player << endl;
  cout << house << endl;

  // call additionalCards on player
  deck.additionalCards( player );

  // flip fist card
  house.flipFirstCard();

  // print house
  cout << house << endl;

  // 
  deck.additionalCards( house );

  if ( house.isBusted() ) {
    if ( !player.isBusted() ) player.win();
    else player.lose();

  } else {
    if ( !player.isBusted() ) {
      if ( player.getTotal() > house.getTotal() ) 
        player.win();

      else if ( player.getTotal() < house.getTotal() ) 
        player.lose();

      else 
        player.push();
    } else  {
      player.lose();
    }
  }



  player.clearHand();
  house.clearHand();

}

int main() {
  using namespace std;

  std::string name;
  bool running = true;
  char option;

  cout << "\033[2J\033[1;1H";"]]";
  cout << "Welcome to Blackjack!" << std::endl;
  cout << "\tWhat is your name?" << std::endl;
  cin >> name;


  Game game = Game(name);
  game.play();

  while (running) {

    cout << "\nWould you like to play again? (Y/N)" << endl;
    cin >> option;

    switch ( toupper(option) ) {
      case 'N':
        running = false;
        break;

      case 'Y': 
        cout << "\033[2J\033[1;1H";"]]";
        game.play();
        break;

      default:
        break;
    }
  }

  return 0;
}

