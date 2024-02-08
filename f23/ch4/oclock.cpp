#include <iostream>

using namespace std;

int main() {

    cout << "What o'clock is it? ";
    int oclock;
    cin >> oclock;

    // check non-negative
    if (oclock < 0) {
        cout << "out of range" << endl;
        return 0;
    }

    // check less than 24
    if (oclock > 23) {
        cout << "out of range" << endl;
        return 0;
    }

    // assume oclock is valid
    cout << "Input duration: ";
    int duration;
    cin >> duration;


    int finalTime = (oclock + duration) % 24;

    cout << "The time " << duration << " hours after now (" << oclock << ") will be "
    << finalTime << ":00" << endl;

    return 0;
}
