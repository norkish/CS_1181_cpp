#include <iostream>
#include <cmath>
using namespace std;

double getRadiusAndCalcVol(int numSnowballsLeft) {

    if (numSnowballsLeft == 0) {
        return 0.0;
    }

    // prompt the user for 3 doubles
    // wait for input
    cout << "Input 1 radius value in inches for a snowman: ";

    double radius;
    cin >> radius;

    // for each of the 3 values, compute volume of a sphere
    double volume = 4.0/3 * M_PI * pow(radius, 3);

    cout << "Total volume for snowball: " << volume << endl;

    double otherVolumes = getRadiusAndCalcVol(numSnowballsLeft-1);

    return volume + otherVolumes;
}

bool isValid(int numOfSnowballs) {
    return numOfSnowballs >= 0;

//    if (numOfSnowballs >= 0) {
//        return true;
//    } else {
//        return false;
//    }
}

int main() {

    int numSnowballs;

    cout << "How many snowballs? ";
    cin >> numSnowballs;

    bool numSnowballsIsValid = isValid(numSnowballs);
    if (!numSnowballsIsValid) {
        cout << "Error: " << numSnowballs << " not valid" << endl;
        return -1;
    }

    double volume = getRadiusAndCalcVol(numSnowballs);

    cout << "Total volume: " << volume << " cubic inches" << endl;

    return 0;
}
