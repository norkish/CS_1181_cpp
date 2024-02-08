#include <iostream>

using namespace std;

// TODO: What is the return type of this function?
// TODO: What is the parameter type of this function?
int doSomething(int number) {
    // TODO: What is *printed* by this function?
    // TODO: What is *returned* by this function?
    cout << "doSomething: " << number << endl;
    return number * 2;
}

int myMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

void printNumsOneTo(int n) {

    int counter = 1;
    while (counter <= n) {

        cout << counter << " ";

        counter = counter + 1;
    }
    cout << endl;
}

bool areEqual(int num1, int num2) {
//    return num1 == num2;

    if (num1 == num2) {
        return true;
    } else {
        return false;
    }
}

void printRow(int currRow, int columns) {
    int currCol = 0;
    while (currCol < columns) {
        cout << pow(currRow, currCol) << "\t";
        currCol = currCol + 1;
    }
    cout << endl;
}

void printPowTable(int rows, int columns) {
    int currRow = 0;
    while (currRow < rows) {
        printRow(currRow, columns);
        currRow = currRow + 1;
    }
}

int main() {

    // TODO: What value is returned from this call to doSomething?
    int result = doSomething(5);
    cout << "main: " << result << endl;

    // TODO: Write a function max(int, int) that, given two integers, returns the max of the two
     result = myMax(9, 10);
     cout << "Max is " << result << endl;

    // TODO: Using max(), write a function to return the max of 3 integers
    // result = max(7, 8, 9);

    // TODO: Write a function to print the #'s 1 to n (where n is a parameter
    //  using a while loop
    printNumsOneTo(9);

    // TODO: Using while loops, write a function that prints a 2D table where
    //  the value on the ith row, jth column is i^j
    printPowTable(6,5);

    // TODO: Resolve the errors in the functions below main()

    return 0;
}

// TODO: Assume this function was written to get input from the user and return it to the calling function.
//  What is wrong with the following code as written? How do we fix it?
void promptUser(int userInput) {
    cout << "Give me your input: ";
    cin >> userInput;
}

/* TODO: Assume this recursive function was written to flip a coin flipsLeft number of times and return
 * the number of heads. What 3 things are wrong with the following code? How do we fix it?
 * 1.
 * 2.
 * 3.
 */
int flipCoin(int flipsLeft, int headsSoFar) {
    if (flipsLeft == 0) {
        return 0;
    } else {
        if (rand() % 2 == 0) {
            headsSoFar + 1;
        }
        flipCoin(flipsLeft - 1, headsSoFar);
    }
}
