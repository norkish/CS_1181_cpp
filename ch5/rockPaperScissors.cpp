#include <iostream>

using namespace std;

int ROCK = 0;
int SCISSORS = 1;

char getComputerChoice(){
    int randomNumber = rand() % 3;
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

void declareWinner(char compChoice, char userChoice) {
    if (computerWins(compChoice, userChoice)) {
        cout << "Computer wins" << endl;
    } else if (compChoice == userChoice) {
        cout << "Draw" << endl;
    } else {
        cout << "User wins" << endl;
    }
}

void executeRounds(int numRoundsLeft) {

    if (numRoundsLeft <= 0) {
        return;
    }

    char computerChoice = getComputerChoice();

    //the user is prompted for their choice
    char userChoice;
    cout << "Rock (r), paper (p), or scissors (s)? ";
    cin >> userChoice;

    cout << "I chose " << computerChoice << endl;

    //based on the computer's and user's choices, the winner is declared
    declareWinner(computerChoice, userChoice);

    executeRounds(numRoundsLeft - 1);
}

int main() {
    //the computer chooses R, P, or S (but doesn't share)
    srand(time(nullptr));

    int numberOfRounds = 3;

    executeRounds(numberOfRounds);

    return 0;
}
