#include <iostream>

using namespace std;

void printBracket(int currentRound, string indentation, int numberOfRoundsToPrint) {
    if (currentRound > numberOfRoundsToPrint) {
        return;
    }

    // printTopBracket
    printBracket(currentRound + 1, indentation + "\t", numberOfRoundsToPrint);

    // print self
    cout << indentation << currentRound << ". _______________" << endl;

    // printBottomBracket
    printBracket(currentRound + 1, indentation + "\t", numberOfRoundsToPrint);
}


int main() {

    int numRounds = 3;
    int startRound = 1;

    printBracket(startRound, "", numRounds);

    return 0;
}
