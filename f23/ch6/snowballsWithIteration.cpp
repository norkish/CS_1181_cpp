#include <iostream>

using namespace std;

int promptUserForNumBalls() {
    int userInput;

    cout << "Enter of number of snowballs: ";
    cin >> userInput;

    return userInput;
}

double calcVol(double radius) {
    return 4.0/3 * M_PI * pow(radius, 3);
}

int main() {

    // Write a program that prompts the user for a number n representing the number of balls
    int numBalls = promptUserForNumBalls();

    cout << "radius\tvolume" << endl;
    //Then compute the volume of snow needed for that many balls where the ith ball has a radius of i

    double totalVolume = 0.0;

    int currBall = 1;
    while(currBall <= numBalls) {
        int radius;

        cout << "Radius? ";
        cin >> radius;

        double volume = calcVol(radius);
        cout << radius << "\t\t" << volume << " in^3" << endl;

        totalVolume = totalVolume + volume;

        //Total volume: 418.8790204786 in^3
        currBall = currBall + 1;
    }

    cout << "Total volume: " << totalVolume << " in^3" << endl;

    return 0;
}
