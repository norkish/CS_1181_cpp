#include <iostream>
#include <math.h>

using namespace std;

double getSnowballRadiusFromUser(int snowballNumber) {
    cout << "How big you want the snowball #" << snowballNumber << "? ";
    double radius;
    cin >> radius;

    if (radius >= 0) { // base case
        return radius;
    } else {
        cout << "Invalid radius entered: " << radius << endl;
        radius = getSnowballRadiusFromUser(snowballNumber);
        return radius;
    }
}

double calculateVolumeFromRadius(double radius) {
    double pi = acos(-1.0);
    return 4.0 / 3 * pi * pow(radius, 3);
}

double calculateSnowmanVolume(double radius1, double radius2, double radius3) {
    // calculate the volume of the first snowball
    double volume1 = calculateVolumeFromRadius(radius1);
    cout << "Snowball 1 has radius " << radius1 << " and volume " << volume1 << endl;

    // calculate the volume of the second snowball
    double volume2 = calculateVolumeFromRadius(radius2);
    cout << "Snowball 2 has radius " << radius2 << " and volume " << volume2 << endl;

    // calculate the volume of the third snowball
    double volume3 = calculateVolumeFromRadius(radius3);
    cout << "Snowball 3 has radius " << radius3 << " and volume " << volume3 << endl;

    // added 'em up
    double totalVolume = volume1 + volume2 + volume3;

    return totalVolume;
}

int main() {

    // ask how big you want the first snow ball (radius)
    double radius1 = getSnowballRadiusFromUser(1);

    // ask how big you want the second snow ball (radius)
    double radius2 = getSnowballRadiusFromUser(2);

    // ask how big you want the third snow ball (radius)
    double radius3 = getSnowballRadiusFromUser(3);

    double totalVolume = calculateSnowmanVolume(radius1, radius2, radius3);

    cout << "Total volume: " << totalVolume << endl;

    return 0;
}
