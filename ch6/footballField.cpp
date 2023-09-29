#include <iostream>

using namespace std;

void printRowOfChars(char charToPrint, int numCharsToPrint){
    int currCol = 0;
    while (currCol < numCharsToPrint) {
        cout << charToPrint;
        currCol++;
    }
}

int main() {
    int charsPerRow;
    cout << "How many chars per row? ";
    cin >> charsPerRow;

    int finalYdLine = 104;

    int currYdLine = -4;
    while (currYdLine <= finalYdLine) {
        cout << '|';
        if (currYdLine % 10 == 0 && currYdLine != 0 && currYdLine != 100) {
            cout << 50 - abs(currYdLine-50) << ' ';
            printRowOfChars('-', charsPerRow-6);
            cout << ' ' << 50 - abs(currYdLine-50);
        } else if (currYdLine % 5 == 0 || currYdLine == -4 || currYdLine == finalYdLine) {
            printRowOfChars('-', charsPerRow);
        } else if (currYdLine < 0 || currYdLine > 100){
            printRowOfChars('X', charsPerRow);
        } else {
            cout << '-';
            printRowOfChars(' ', charsPerRow-2);
            cout << '-';
        }
        cout << '|' << endl;

        currYdLine++;
    }

    return 0;
}
