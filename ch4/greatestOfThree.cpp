#include <iostream>

using namespace std;

void printLargestNumber(int numberToPrint) {
    cout << numberToPrint << " is the largest!" << endl;
}

int main() {
    int num1, num2, num3;
    cout << "Input 3 numbers separated by spaces: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            printLargestNumber(num1);
        }
        else {
            // num3 > num1
            printLargestNumber(num3);
        }
    }
    else {
        // we know num2 > num1
        if (num2 >= num3) {
            printLargestNumber(num2);
        }
        else {
            printLargestNumber(num3);
        }
    }


    return 0;
}
