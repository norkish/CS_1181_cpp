#include <iostream>

using namespace std;


void printHeadingRow(int numCols){
    cout << "  ";
    int currColIdx = 0;
    while (currColIdx < numCols) {
        // add extra space between after the num_cols/2th seat
        if (currColIdx == numCols / 2) {
            cout << "  ";
        }

        char colHeader = currColIdx + 'A';
        cout << colHeader << " ";

        currColIdx = currColIdx + 1;
    }
    cout << endl;
}

void printOneSeatingRow(int rowNumber, int numCols) {
    // The ith row starts with the number i
    cout << rowNumber;
    int currCol = 0;
    while (currCol < numCols) {
        // add extra space between after the num_cols/2th seat
        if (currCol == numCols / 2) {
            cout << "  ";
        }
        // then print _ for each seat
        cout << " _";
        currCol = currCol + 1;
    }
    cout << endl;
}

void printSeatingRows(int numRows, int numCols){
    // Then I'm going to do a loopy thing for each row
    int currRowNumber = 1;
    while (currRowNumber <= numRows) {
        printOneSeatingRow(currRowNumber, numCols);
        currRowNumber = currRowNumber + 1;
    }
}

void printAirplaneSeating(int numRows, int numCols){
    printHeadingRow(numCols);
    printSeatingRows(numRows, numCols);
}


int main() {

    int numRows = 8;
    int numCols = 10;

    printAirplaneSeating(numRows, numCols);

    return 0;
}
