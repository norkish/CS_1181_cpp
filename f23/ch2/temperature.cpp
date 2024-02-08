#include <iostream>
using namespace std;

int main() {

    int temperature_in_celsius = 0;
    cout << "Input a temperature (in Celsius): ";
    cin >> temperature_in_celsius;

    cout << temperature_in_celsius << "C = " << (temperature_in_celsius*9/5) + 32 << "F" << endl;

    return 0;
}
