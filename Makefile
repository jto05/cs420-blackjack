# Author: Julian To
# RedID: 130405272

CXX=g++

CXXFLAGS=-std=c++11 -Wall -g3 -c

OBJS = card.o hand.o deck.o generic_player.o player.o house.o game.o 

PROGRAM = blackjack

$(PROGRAM) : $(OBJS)
	$(CXX) -o $(PROGRAM) $^

card.o : headers/card.h
	$(CXX) $(CXXFLAGS) source/card.cpp

hand.o : headers/hand.h
	$(CXX) $(CXXFLAGS) source/hand.cpp

deck.o : headers/deck.h
	$(CXX) $(CXXFLAGS) source/deck.cpp

generic_player.o : headers/generic_player.h
	$(CXX) $(CXXFLAGS) source/generic_player.cpp

player.o : headers/player.h
	$(CXX) $(CXXFLAGS) source/player.cpp

house.o : headers/house.h
	$(CXX) $(CXXFLAGS) source/house.cpp
	
game.o : headers/game.h
	$(CXX) $(CXXFLAGS) source/game.cpp

main.o : headers/game.h
	$(CXX) $(CXXFLAGS) source/main.cpp
	
clean :
	rm -f *.o $(PROGRAM)


