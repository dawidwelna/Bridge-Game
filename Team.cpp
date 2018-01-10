#include "Team.h"

#include <utility>

Team::Team(string name, Player *player1, Player *player2) {
    _name.assign(name);
    _players = {player1, player2};
    player1->setTeam(this);
    player2->setTeam(this);
    _gameScore = 0;
}

void Team::winTrick(Trick *tr) {
    _tricksWon.push_back(tr);
}

int Team::getGameScore() const {
    return _gameScore;
}

void Team::addToGameScore(int n) {
    _gameScore += n;
}

void Team::newDeal() {
    _tricksWon.clear();
}

list<Trick *> Team::getWonTricks() const {
    return _tricksWon;
}

array<Player *, 2> Team::getPlayers() const {
    return _players;
}

std::ostream &operator<<(std::ostream &os, const Team &c) {
    auto players = c.getPlayers();
    os << c.getName() << ": ";
    os << *players[0] << " and " << *players[1] << endl;
    return os;
}

string Team::getName() const {
    return _name;
}


