# Author: Julian To
# RedID: 130405272

CXX=g++

CXXFLAGS=-std=c++11 -Wall -g3 -c

OBJS = card.o 
#OBJS = card.o hand.o deck.o generic_player.o player.o house.o game.o

PROGRAM = blackjack

$(PROGRAM) : $(OBJS)
	$(CXX) -o $(PROGRAM) $^

card.o : headers/card.h
	$(CXX) $(CXXFLAGS) source/card.cpp
	
clean :
	rm -f *.o $(PROGRAM)


