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

bool isValid(char input) {
    if (input != 'r' && input != 's' && input != 'r') {
        cout << "INVALID INPUT. TRY AGAIN." << endl;
        return false;
    } else {
        return true;
    }
}

char getValidInput() {
    cout << "Rock (r), paper (p), or scissors (s)? ";

    char input;
    cin >> input;
    if (!isValid(input)) {
        return getValidInput();
    } else { // base case
        return input;
    }
}

bool playRockPaperScissors(){
    char compChoice = getComputerChoice();

    //the user is prompted for their choice
    char userChoice = getValidInput();
    cout << "Computer chooses " << compChoice << endl;

    if (userChoice != compChoice) {
        if (computerWins(compChoice, userChoice)) {
            cout << "Computer wins" << endl;
            return false;
        } else {
            cout << "User wins" << endl;
            return true;
        }
    } else {
        cout << "Draw" << endl;
        return playRockPaperScissors();
    }
}

int playGames(int gamesLeft) {

    if (gamesLeft == 0) {
        return 0;
    }

    bool userWinsThisRound = playRockPaperScissors();

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
