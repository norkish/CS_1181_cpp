#include <iostream>

using namespace std;

int main() {

    // The user inputs the hour in a 24-hour format
    cout << "Enter the hour (24-hour format): ";
    int time24;
    cin >> time24;

    //Your program should output the time in a 12-hour format
    int time12;
    if (time24 > 12) {
        time12 = time24 % 12;
    } else {
        time12 = time24;
    }
    cout << "The time in 12-hour format is " << time12;
    if (time24 >= 12) {
        cout << " p.m." << endl;
    } else {
        cout << " a.m." << endl;
    }

    return 0;
}
