#include <iostream>
#include <random>

using namespace std;

static std::random_device random_dev;
static std::mt19937 rng(random_dev());

int generateRandomInteger() {
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, INT_MAX);
    return (int)dist(rng);
}



char getComputerChoice() {
    // return r, p, or s randomly
    int random0to2 = generateRandomInteger() % 3;
    char computersChoice;
    // assign numbers 0 = r, 1 = p, 2, s
    if (random0to2 == 0) {
        computersChoice = 'r';
    } else if (random0to2 == 1) {
        computersChoice = 'p';
    } else { // random0to2 == 2
        computersChoice = 's';
    }

    return computersChoice;
}

char getUserChoice() {
    cout << "r, p, or s? ";
    char userChoice;
    cin >> userChoice;
    if (userChoice != 'r' && userChoice != 'p' && userChoice != 's'){
        return getUserChoice();
    } else {
        return userChoice;
    }
}

char determineWinner(char usersChoice, char computersChoice) {
    // if user choice equals computers choice, then draw
    if (usersChoice == computersChoice) {
        return 'd';
    }

    // if (userChoice = r and computerChoice is s) OR ...
    if ((usersChoice == 'r' && computersChoice == 's') ||
            (usersChoice == 'p' && computersChoice == 'r') ||
            (usersChoice == 's' && computersChoice == 'p')) {
        // user wins
        return 'u';
    }

    return 'c';
}

char playRound() {
    // get partner (user)'s choice
    char usersChoice = getUserChoice();

    // shoot (i.e., pick one at random)
    char computersChoice = getComputerChoice();
    cout << "Computer chose " << computersChoice << endl;

    // decide winner
    char winner = determineWinner(usersChoice, computersChoice);

    // if it's a tie, repeat back
    if (winner == 'd') {
        return playRound();
    } else {
        return winner;
    }

}

int playRounds(int roundsLeft) {
    if (roundsLeft == 0) {
        return 0;
    }

    int computerWins = 0;

    // each round
    char winner = playRound();

    // update the score
    if (winner == 'c') {
        cout << "Computer wins!" << endl << endl;
        computerWins = computerWins + 1;
    } else {
        cout << "User wins!" << endl << endl;
    }

    int additionalComputerWins = playRounds(roundsLeft - 1);

    return computerWins + additionalComputerWins;
}

int main() {

    int rounds = 3;
    int computerWinCount = playRounds(rounds);
    int userWinCount = rounds - computerWinCount;

    // announce the winner
    cout << "Computer won " << computerWinCount << " times (" << (100.0 * computerWinCount / rounds) << "%)" << endl;
    cout << "User won " << userWinCount << " times (" << (100.0 * userWinCount / rounds) << "%)" << endl;

    if (computerWinCount > userWinCount) {
        cout << "Computer is the champion!" << endl;
    } else {
        cout << "User is the champion!" << endl;
    }

    return 0;
}
