#ifndef DEAL_H_INCLUDED
#define DEAL_H_INCLUDED

#include "Contract.h"
#include "Player.h"

#include <iostream>
#include <algorithm>

using namespace std;

class Deal {
private:
    Contract *_contract;
    array<Player *, 4> _players;
    int _dealer;
    int _contractor;
    array<Card *, 52> _deck;

    void dealing();

    void bidding();

    void playing();

    void scoring();

    int scoreIfWon(int nbrOfOddTricks);

    int scoreIfLost(int nbrOfOddTricks);

public:
    Deal(array<Card *, 52> deck, array<Player *, 4> players, int dealer);

    void play();
};

#endif // DEAL_H_INCLUDED
