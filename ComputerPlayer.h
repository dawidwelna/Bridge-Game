#ifndef FINAL_COMPUTERPLAYER_H
#define FINAL_COMPUTERPLAYER_H


#include "Player.h"

class ComputerPlayer : public Player {
public:
    ComputerPlayer(const string name) : Player(name) {

    }

private:
    Card *playCard(Color::Type color, Color::Type trump_color);

    Contract *proposeContract(Contract* current_max);

};


#endif //FINAL_COMPUTERPLAYER_H
