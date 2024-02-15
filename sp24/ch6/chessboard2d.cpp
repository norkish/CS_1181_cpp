#include <iostream>

using namespace std;

char oppositeChar(char c){
    if (c == 'X') {
        return 'O';
    } else {
        return 'X';
    }
}

void printRow(bool isEven, int numCols){
    char currChar;
    if (isEven) { // set the starting character for the row
        currChar = 'X';
    } else {
        currChar = 'O';
    }

    // loop
    int currColNumber = 0;
    while (currColNumber < numCols) {
        cout << currChar << " ";

        currChar = oppositeChar(currChar); // swap the character for the next row
        currColNumber = currColNumber + 1;
    }

    // print a new line at the end of the row
    cout << endl;
}

int main() {

    int totalNumRowsCols = 10;

    // loopy thing
    int currRowNumber = 0;
    while (currRowNumber < totalNumRowsCols) {
        // print a row of alternating X's and O's starting with
        if (currRowNumber % 2 == 0) { // row number is even
            printRow(true, totalNumRowsCols);
        } else { // row number is odd
            printRow(false, totalNumRowsCols);
        }
        // a char different than the previous row started with
        currRowNumber = currRowNumber + 1;
    }
    return 0;
}
