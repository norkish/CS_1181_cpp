#include <iostream>

using namespace std;

/**
 * Print integers from 1 to n (inclusive)
 * @param n the number at which to stop printing
 */
void countUpToN(int n) {
    if (n <= 0) { // base case
        return;
    }
    countUpToN(n-1);
    cout << n << " ";
}

/**
 * Print integers from n down to 1 (inclusive)
 * @param n the number at which to start printing
 */
void countDownFromN(int n) {
    if (n <= 0) { // base case
        return;
    }
    cout << n << " ";
    countDownFromN(n-1);
}

/**
 * Print characters from m to n (inclusive)
 * @param m letter at which to start
 * @param n letter at which to end
 */
void printLettersInRange(char m, char n) {
    cout << m << " ";
    if (m < n) { // base case is opposite of this
        printLettersInRange(m+1, n);
    }
}

/**
 * Computes the sum of consecutive integers in range m to n (inclusive)
 * @param m beginning of range
 * @param n end of range
 * @return the sum of integers in range [m,n]
 */
int sumFromMtoN(int m, int n) {
    if (m == n) {
        cout << m;
        return m;
    } else {
        cout << m << " + ";
        return m + sumFromMtoN(m+1, n);
    }
}

/**
 * Prints one row of length m of the character c
 * @param m length of row (i.e., number of columns)
 * @param c character to be printed in each column
 */
void printOneRowWithMColumns(int m, char c) {
    if (m <= 0) {
        return;
    }
    cout << c << " ";
    printOneRowWithMColumns(m-1, c);
}

/**
 * Prints 2d matrix with n rows and m columns
 * @param n number of rows to print
 * @param m number of columns to print
 * @param c character to print
 */
void printNRowsOfMColumns(int n, int m, char c) {
    if (n <= 0) {
        return;
    }
    printOneRowWithMColumns(m, c);
    cout << endl;
    printNRowsOfMColumns(n-1, m, c);
}

int main() {

    int high = 10;
    cout << "Counting up to " << high << ": " << endl;
    countUpToN(high);
    cout << endl << endl;

    cout << "Counting down from " << high << ": " << endl;
    countDownFromN(high);
    cout << endl << endl;

    int low = 5;
    cout << "Summing numbers from " << low << " to " << high << ": " << endl;
    int sum = sumFromMtoN(low, high);
    cout << " = " << sum << endl << endl;


    char first = 'L';
    char last = 'P';
    cout << "Printing letters from " << first << " to " << last << ": " << endl;
    printLettersInRange(first, last);
    cout << endl << endl;

    int rows = 5;
    int cols = 6;
    char charToPrint = 'X';
    cout << "Printing 2d grid with " << rows << " rows and " << cols << " columns:" << endl;
    printNRowsOfMColumns(rows, cols, charToPrint);



    return 0;
}
