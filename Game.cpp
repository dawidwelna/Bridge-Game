#include "Game.h"

array<Card *, 52> Game::_deck = {};

Game::Game(array<Player *, 4> players) {
    _players = players;
    setTeams();
    setDeck(); // Todo: It should be setted once.

}

void Game::setDeck() {
    int i = 0;
    for (const auto cardValue : CardValue::All) {
        for (const auto color : Color::All) {
            _deck[i] = new Card(cardValue, color);
            i++;
        }
    }
}

void Game::setTeams() {
    Team *team1 = new Team(_players[0], _players[2]);
    Team *team2 = new Team(_players[1], _players[3]);
    _teams = {team1, team2};
}

void Game::play() {
    int dealer = 0;
    bool isFinished = false;
    while (!isFinished) {
        Deal deal = Deal(getDeck(), _players, dealer);
        deal.play();
        isFinished = true;
    }
}

array<Card *, 52> Game::getDeck() {
    return Game::_deck;
}
