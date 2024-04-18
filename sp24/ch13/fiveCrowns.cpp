#include <iostream>
#include <random>
#include <vector>

using namespace std;

enum Suit {
    STARS, CLUBS, DIAMONDS, HEARTS, SPADES
};

enum Rank { THREE = 3, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE,
    TEN, JACK, QUEEN, KING };

struct Card {
    Rank value;
    Suit suit;

    Card(Rank _v, Suit _s) {
        value = _v;
        suit = _s;
    }

    void print() {
        switch(value) {
            case THREE:
            case FOUR:
            case FIVE:
            case SIX:
            case SEVEN:
            case EIGHT:
            case NINE:
            case TEN:
                cout << value;
                break;
            case JACK:
                cout << "J";
                break;
            case QUEEN:
                cout << "Q";
                break;
            case KING:
                cout << "K";
                break;
            default:
                break;
        }

//        if (suit == STARS) {
//            cout << "⭐";
//        } else if (suit == CLUBS) {
//            cout << "♣";
//        } else if (suit == DIAMONDS) {
//            cout << "♦";
//        } else if (suit == HEARTS) {
//            cout << "♥";
//        } else if (suit == SPADES) {
//            cout << "♠";
//        }

        switch(suit) {
            case STARS:
                cout << "⭐";
                break;
            case CLUBS:
                cout << "♣";
                break;
            case DIAMONDS:
                cout << "♦";
                break;
            case HEARTS:
                cout << "♥";
                break;
            case SPADES:
                cout << "♠";
                break;
            default:
                break;
        }

        cout << endl;
    }
};

struct Deck {
    vector<Card> cards;

    Deck() {
        // for each of 2 "decks"
        for (int i = 0; i < 2; i++) {
            // for each of 5 suits
            for (Suit suit = STARS; suit <= SPADES; suit = Suit(suit + 1)) {
                // add 11 cards
                for (Rank cardValue = THREE; cardValue <= KING; cardValue = Rank(cardValue+1)) {
                    Card card(cardValue, suit);
                    cards.push_back(card);
                }
            }
        }
    }

    Deck(vector<Card> &cardsInDeck) {
        cards = cardsInDeck;
    }

    void shuffleCards() {
        cout << "EVERY DAY I'M SHUFFLIN'" << endl;
        auto rng = default_random_engine {};
        shuffle(begin(cards),end(cards), rng);
    }

    Deck deal(int numCardsToDeal) {
        vector<Card> dealtCards;
        Deck deck(dealtCards);

        for (int i = 0; i < numCardsToDeal; ++i) {
            Card dealtCard = cards.back();
            cards.pop_back();
            deck.addCard(dealtCard);
        }

        return deck;
    }

    void addCard(Card & cardToAdd) {
        cards.push_back(cardToAdd);
    }

    int hasBook() {
        vector<int> values;
        for (int i = 0; i < cards.size(); ++i) {
            values.push_back(cards[i].value);
        }
        sort(begin(values), end(values));

        for (int i = 0; i < values.size()-2; ++i) {
            if (values[i] == values[i+1] && values[i] == values[i+2]) {
                return values[i];
            }
        }

        return -1;
    }

    void print() {
        for (int i = 0; i < cards.size(); ++i) {
            cards[i].print();
        }
    }
};

int main() {
    Deck gameDeck;

    gameDeck.shuffleCards();

    Deck hand1 = gameDeck.deal(25);

    cout << "HAND 1" << endl;
    hand1.print();

    int bookType = hand1.hasBook();
    if (bookType != -1) {
        cout << "Has book of " << bookType << "s" << endl;
    }

    cout << endl << "GAME DECK" << endl;
    gameDeck.print();

    return 0;
}
