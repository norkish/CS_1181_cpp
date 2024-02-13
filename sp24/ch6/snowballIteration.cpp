#include <iostream>
#include <math.h>

using namespace std;

const double pi = acos(-1.0);

int main() {

    // prompts the user for a number n representing the number of balls
    cout << "How many balls in your snowman? ";
    int numSnowballs;
    cin >> numSnowballs;

    // for as many snowballs as you chose
    int currSnowballNumber = 1;
    while (currSnowballNumber <= numSnowballs) {
        // figure out the radius
        double currSnowballRadius = currSnowballNumber;

        // compute the volume of snow needed
        double currSnowballVolume = 4.0 / 3 * pi * pow(currSnowballRadius, 3);

        cout << "Snowball #" << currSnowballNumber << " has radius " << currSnowballRadius
         << " in and volume " << currSnowballVolume << " in^3" << endl;

        // go on to the next snowball
        currSnowballNumber = currSnowballNumber + 1;
    }

    // the ith ball has a radius of i

    return 0;
}
