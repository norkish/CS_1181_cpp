#include <iostream>
using namespace std;

int main() {
    // define two integers
    int a = 0;
    int b = 0;

    // prompt for values
    cout << "Input an integer A: ";
    cin >> a;

    cout << "Input an integer B: ";
    cin >> b;

    // Adds them together and displays the result.
    int sum = a+b;
    cout << "A+B=" << a+b << endl;

    // Subtracts the second number from the first and displays the result.
    cout << "B-A=" << b-a << endl;

    // Multiplies the two numbers and displays the result.
    cout << "A*B=" << a*b << endl;

    // Divides the first number by the second (integer division) and displays the result.
    cout << "A/B=" << a/b << endl;
}
