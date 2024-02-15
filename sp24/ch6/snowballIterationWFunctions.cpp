#include <iostream>
#include <math.h>

using namespace std;


double calculateSnowballVolume(double radius) {
    double pi = acos(-1.0);
    double volume = 4.0 / 3 * pi * pow(radius, 3);
    return volume;
}

int main() {

    // prompts the user for a number n representing the number of balls
    cout << "How many balls in your snowman? ";
    int numSnowballs;
    cin >> numSnowballs;

    double totalVolume = 0.0;
    // for as many snowballs as you chose
    int currSnowballNumber = 1;
    while (currSnowballNumber <= numSnowballs) {

        // figure out the radius
        double currSnowballRadius = currSnowballNumber;

        // compute the volume of snow needed
        double currSnowballVolume = calculateSnowballVolume(currSnowballRadius);
        totalVolume = totalVolume + currSnowballVolume;

        cout << "Snowball #" << currSnowballNumber << " has radius " << currSnowballRadius
         << " in and volume " << currSnowballVolume << " in^3" << endl;

        // go on to the next snowball
        currSnowballNumber = currSnowballNumber + 1;
    }

    cout << "Total volume: " << totalVolume << " in^3" << endl;

    return 0;
}
