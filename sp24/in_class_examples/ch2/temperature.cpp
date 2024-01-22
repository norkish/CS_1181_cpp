#include <iostream>

using namespace std;

int main() {

    // Write a program to convert a temperature in Celsius to Fahrenheit.
    double c;


    cout << "Input a temperature (in Celsius): ";
    cin >> c;

    double f = (c * 9/5) + 32;

    cout << c << "C = " << f << "F" << endl;

    return 0;
}
