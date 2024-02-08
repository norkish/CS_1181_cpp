#include <iostream>

using namespace std;

string hiddenWord = "MAPLE";

int MAX_GUESSES = 6;
int WORD_LEN = 5;

void printFeedback(string userGuess) {
    string feedback;

    // iterate over the chars in the user guess
    int charIndex = 0;
    while (charIndex < userGuess.length()) {
        char userGuessChar = userGuess[charIndex];
        char hiddenWordChar = hiddenWord[charIndex];

        //	if they match the hiddenword
        if (userGuessChar == hiddenWordChar) {
            //		add an 'x' to string
            feedback += 'X';
        } else if (hiddenWord.find(userGuessChar) != -1) {
            //	else if char from user guess is in hidden word
            //		add an 'o' to string
            feedback += 'O';
        } else {
            //	else
            //		add a ' '
            feedback += ' ';
        }
        charIndex++;
    }

    cout << feedback << "  !" << endl;
}

string getUserGuess() {
    string userGuess;
    while (userGuess.length() != WORD_LEN ) {
        cin >> userGuess;
    }
    return userGuess;
}

int main() {

    string userGuess;
    cout << "Ready... Set... Guess! (only uppercase please)" << endl;

    int currGuessNumber = 0;
    while (currGuessNumber < MAX_GUESSES) {
        userGuess = getUserGuess();

        printFeedback(userGuess);

        if (userGuess == hiddenWord) {
            cout << "Congrats!" << endl;
            return 0;
        }

        currGuessNumber = currGuessNumber + 1;
    }

    cout << "The answer was \"" << hiddenWord << "\". Better luck next time!" << endl;
    return 0;
}
