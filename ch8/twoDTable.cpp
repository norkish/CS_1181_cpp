#include <iostream>
using namespace std;

void printRow(int row, int columns) {
    // the +1 to the rows (starting the counter at 0)
    int currCol = 0;
    // Use while loops to establish  and also the columns.
    while (currCol < columns) {
        cout << row + currCol << "\t";
        currCol = currCol + 1;
    }
}

void printAdditionTable (int rows, int columns) {
    int currRow = 0;
    while (currRow < rows) {
        printRow(currRow, columns);
        cout << endl;
        currRow++;
    }
}

int main(){
    printAdditionTable(5, 6);
}
