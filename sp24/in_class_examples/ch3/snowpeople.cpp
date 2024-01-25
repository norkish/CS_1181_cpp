#include <iostream>
#include <cmath>

using namespace std;

void printBallVolume(double radius){
    double pi = acos(-1.0);
    double volume = 4.0/3 * pi * pow(radius, 3);
    cout << "A ball with radius " << radius << " ft and volume " << volume << " ft^3" << endl;
}

void printSnowPerson(double r1, double r2, double r3) {
    printBallVolume(r1);
    printBallVolume(r2);
    printBallVolume(r3);
}

int main() {
    printSnowPerson(0.5, 1.0, 1.5);
    return 0;
}
