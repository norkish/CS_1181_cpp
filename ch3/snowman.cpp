#include <iostream>
#include <cmath>
using namespace std;

double inchesPerFeet = 12.0;

int main() {

    // prompt the user for 3 doubles
    // wait for input
    cout << "Input 1 radius value in inches for a snowman: ";

    double radius1;
    cin >> radius1;

    // for each of the 3 values, compute volume of a sphere
    double volume1 = 4.0/3 * M_PI * pow(radius1, 3);

    cout << "Input 1 radius value in inches for a snowman: ";

    double radius2;
    cin >> radius2;

    // for each of the 3 values, compute volume of a sphere
    double volume2 = 4.0/3 * M_PI * pow(radius2, 3);

    cout << "Input 1 radius value in inches for a snowman: ";

    double radius3;
    cin >> radius3;

    // for each of the 3 values, compute volume of a sphere
    double volume3 = 4.0/3 * M_PI * pow(radius3, 3);

    // add the three volumes
    double totalVolumeInInch = volume1 + volume2 + volume3;

    // convert sq in to sq ft
    double totalVolumeInFt = totalVolumeInInch / pow(inchesPerFeet, 3);

    // output result
    cout << "Total volume in cubic inches: " << totalVolumeInInch << endl;
    cout << "Total volume in cubic feet: " << totalVolumeInFt << endl;

    return 0;
}
