#include <iostream>
#include <ctime>

void giveFeedback(int guess, int answer);

using namespace std;

int main() {

    // come up with a number
    time_t seed = time(0);
    srand(seed);
    int answer = (rand() % 10) + 1;

    // ask user to guess num between 1 and 10
    cout << "Guess a num between 1 and 10: ";

    // user guesses
    int guess;
    cin >> guess;

    // gave feedback as appropriate (based on guess and correct answer)
    giveFeedback(guess, answer);

    // guess again
    cout << "Guess a num between 1 and 10: ";
    cin >> guess;

    // gave feedback as appropriate (based on guess and correct answer)
    giveFeedback(guess, answer);

    // guess again
    cout << "Guess a num between 1 and 10: ";
    cin >> guess;

    // gave feedback as appropriate (based on guess and correct answer)
    giveFeedback(guess, answer);

    return 0;
}

void giveFeedback(int guess, int answer) {
    // if guess = answer, say good job
    if (guess == answer) {
        cout << "Correct!" << endl;
    }
    else if (guess <= 0) {
        // else if guess <= 0, out of range
        cout << "Out of range" << endl;
    }
    else if (guess > 10) {
        // else if guess > 10, out of range
        cout << "Out of range" << endl;
    }
    else if (guess < answer) {
        // else if guess < answer, too low
        cout << "Too low" << endl;
    }
    else {
        // else (guess > answer) too high
        cout << "Too high" << endl;
    }
}
