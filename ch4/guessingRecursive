#include <iostream>
#include <ctime>

void giveFeedback(int guess, int answer);

using namespace std;

int UPPER_GUESS_LIMIT = 100;

void executeNextGuess(int answer, int guessesLeft) {

    if (guessesLeft == 0) {
        cout << "No more guesses" << endl;
        return;
    }

    cout << "You have " << guessesLeft << " guesses left" << endl;

    cout << "Guess a num between 1 and " << UPPER_GUESS_LIMIT << ": ";

    // user guesses
    int guess;
    cin >> guess;

    // if guess = answer, say good job
    if (guess == answer) {
        cout << "Correct!" << endl;
    }
    else if (guess <= 0) {
        // else if guess <= 0, out of range
        cout << "Out of range" << endl;
        executeNextGuess(answer, guessesLeft-1);
    }
    else if (guess > UPPER_GUESS_LIMIT) {
        // else if guess > 10, out of range
        cout << "Out of range" << endl;
        executeNextGuess(answer, guessesLeft-1);
    }
    else if (guess < answer) {
        // else if guess < answer, too low
        cout << "Too low" << endl;
        executeNextGuess(answer, guessesLeft-1);
    }
    else {
        // else (guess > answer) too high
        cout << "Too high" << endl;
        executeNextGuess(answer, guessesLeft-1);
    }
}

int main() {

    int numGuesses = 5;

    // come up with a number
    time_t seed = time(0);
    srand(seed);
    int answer = (rand() % UPPER_GUESS_LIMIT) + 1;

    // make recursive call to prompt user and give feedback
    executeNextGuess(answer, numGuesses);



    return 0;
}

