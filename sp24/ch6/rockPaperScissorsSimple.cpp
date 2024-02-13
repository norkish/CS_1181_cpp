#include <climits>
#include <iostream>
#include <random>

using namespace std;

const int ROCK = 0;
const int SCISSORS = 1;

static std::random_device random_dev;
static std::mt19937 rng(random_dev());

int generateRandomInteger() {
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, INT_MAX);
    return (int)dist(rng);
}

char getComputerChoice(){
    int randomNumber = generateRandomInteger() % 3;
    if (randomNumber == ROCK) {
        return 'r';
    } else if (randomNumber == SCISSORS) {
        return 's';
    } else {
        return 'p';
    }
}

bool computerWins(char compChoice, char userChoice) {
    return (compChoice == 'r' && userChoice == 's') ||
           (compChoice == 'p' && userChoice == 'r') ||
           (compChoice == 's' && userChoice == 'p');
}

bool declareWinner(char compChoice, char userChoice) {
    if (computerWins(compChoice, userChoice)) {
        cout << "Computer wins" << endl;
    } else if (compChoice == userChoice) {
        cout << "Draw" << endl;
    } else {
        cout << "User wins" << endl;
        return true;
    }

    return false;
}

int playGames(int gamesLeft) {

    if (gamesLeft <= 0) {
        return 0;
    }

    char computerChoice = getComputerChoice();

    //the user is prompted for their choice
    char userChoice;
    cout << "Rock (r), paper (p), or scissors (s)? ";
    cin >> userChoice;

    cout << "I chose " << computerChoice << endl;

    //based on the computer's and user's choices, the winner is declared
    bool userWinsThisRound = declareWinner(computerChoice, userChoice);

    // execute subsequent rounds
    int usrWinCt = playGames(gamesLeft - 1);

    if (userWinsThisRound) {
        usrWinCt = usrWinCt + 1;
    }

    return usrWinCt;
}

int main() {
    //the computer chooses R, P, or S (but doesn't share)
    int numberOfRounds = 3;

    int userWinCount = playGames(numberOfRounds);

    cout << "User won " << userWinCount << " out of " << numberOfRounds << " times ("
            << (100.0 * userWinCount/numberOfRounds) << "%)" << endl;

    return 0;
}
