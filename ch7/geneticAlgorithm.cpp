#include <iostream>
#include <climits>
#include <random>

using namespace std;

static std::random_device random_dev;
static std::mt19937 rng(random_dev());

int STRING_LEN = 5;

int randomInteger() {
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, INT_MAX);
    return (int)dist(rng);
}

string getUserInput() {
    cout << "Input target word (caps please): ";
    string userGuess;
    while (userGuess.length() != STRING_LEN) {
        cin >> userGuess;
    }
    return userGuess;
}

char getRandomLetter() {
    char letter = randomInteger() % 26 + 'A';
    return letter;
}

string generateRandomString(int stringLength) {
    string s = "";

    while (s.length() < stringLength) {
        s = s + getRandomLetter();
    }

    return s;
}

string randomlyChangeALetter(string s) {
    // TODO: randomly change a letter in s
    int idx = randomInteger() % s.length();

    s[idx] = getRandomLetter();

    return s;
}

int matchScore(string s1, string s2) {
    int score = 0;

    // TODO: calculate the number of matches across all positions
    int idx = 0;
    while (idx < s1.length()) {
        if (s1[idx] == s2[idx]) {
            score = score + 1;
        }
        idx = idx + 1;
    }

    return score;
}

int main() {
    string target = getUserInput();

    string genome = generateRandomString(STRING_LEN);

    int generation = 0;
    while (genome != target) {
        string new_genome = randomlyChangeALetter(genome);

        int oldScore = matchScore(genome, target);
        int newScore = matchScore(new_genome, target);

        cout << genome << " (" << oldScore << ") -> " << new_genome << " (" << newScore << ")" << endl;

        if (newScore > oldScore) {
            genome = new_genome;
        }

        generation++;
    }

    cout << "Success! " << generation << " generations required";

    return 0;
}
