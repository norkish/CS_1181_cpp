#include <iostream>

using namespace std;

char oppositeOf(char c) {
    if (c == 'X') {
        return 'O';
    } else {
        return 'X';
    }
}

void printRowStartingWithX(int numCols, int currRow){
    int currCol = 0;

    char startChar;
    if(currRow % 2 == 0) {
        startChar = 'O';
    } else {
        startChar = 'X';
    }

    while(currCol < numCols) {
        // one char after another changing between X's and O' up to dimension

        if (currCol % 2 == 0) {
            cout << startChar;
        } else {
            cout << oppositeOf(startChar);
        }
        currCol++;
    }
    cout << endl;
}

/**
 * Generates a square chess board with dimension input by user
 * @return 0 if no errors
 */
int main() {
    int numRows;

    int currRow = 0;
    // asked for number of rows/columns
    cout << "Gimme number of rows please: ";
    cin >> numRows;

    while(currRow < numRows) {
    // repeated alternating first char

        // printed a row starting with x
        printRowStartingWithX(numRows, currRow);

        currRow = currRow + 1;
    }

    return 0;
}
