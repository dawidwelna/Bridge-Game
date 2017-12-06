#ifndef FINAL_PLAYER_H
#define FINAL_PLAYER_H

#include <string>
#include "Card.h"
#include "Team.h"

using namespace std;

class Player {
protected:
    list<Card> _hand;
    Team* _team;
    bool _isDummy;
    string _name;
public:
    void giveCard();
    virtual Card* playCard() = 0;
    void discardHand();
    void displayHand();
    virtual Contract proposeContract() = 0;
};


#endif //FINAL_PLAYER_H
