#include "HumanPlayer.h"

Contract *HumanPlayer::proposeContract(Contract *current_max) {
    int color = -1, trick_amount;
    displayHand();
    if (current_max) {
        cout << "Current contract: " << *current_max << endl;
    }
    int i = 0;
    cout << i << " : Pass" << endl;
    i++;
    for (string const &c : Color::Values) {
        cout << i << " : " << c << endl;
        i++;
    }

    while (true) {
        cout << "Choose: ";
        cin >> color;
        if (color >= 0 && color <= 5) {
            break;
        } else if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Incorrect entry. Try again: ";
    }

    if (color == 0) {
        return Contract::Pass();
    } else {
        cout << "Trick Amount: ";
        cin >> trick_amount;

        if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        if (trick_amount < 1) {
            trick_amount = 1;
        } else if (trick_amount > 6) {
            trick_amount = 6;
        }

        return new Contract(trick_amount, Color::All[color - 1]);
    }

}

Card *HumanPlayer::makeDecision(std::vector<Card *> available_cards) {
    cout << "It's Player " << *this << "'s turn." << endl;

    displayHand();

    cout << "Playable Cards: " << endl;
    int i = 0, card_no = -1;
    for (Card *c: available_cards) {
        cout << i++ << ":" << *c << endl;
    }

    while (true) {
        cout << "Play: ";
        cin >> card_no;
        if (card_no >= 0 && card_no < available_cards.size()) {
            break;
        } else if (cin.fail()) {
            cin.clear();
            cin.ignore();
        }
        cout << "Incorrect entry. Try again: ";
    }

    Card *card = available_cards[card_no];
    return card;
}
