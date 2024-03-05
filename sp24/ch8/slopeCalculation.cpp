#include <iostream>

using namespace std;

// Create a structure Point with instance variables x and y
struct Point {
    // list instance variables
    int x;
    int y;
};

double calculateSlope(Point p1, Point p2) {
    // calculate slope, rise (y2 - y1) over run (x2 - x1)
    double slope = (p2.y - p1.y)*1.0/(p2.x - p1.x);

    return slope;
}

void swapXCoordinates(Point& p1, Point& p2) {
    // Swap x coordinates
    int temp = p1.x;
    p1.x = p2.x;
    p2.x = temp;
}

int main() {
    // Creating an instance of an object is similar to creating any other variable
    int var1 = 5; // not used, just included for comparison
    Point firstPoint = {5, 7};
    Point secondPoint = {3, 4};

    // access instance variables from a point object
    cout << "Point 1: " << firstPoint.x << ", " << firstPoint.y << endl;
    cout << "Point 2: " << secondPoint.x << ", " << secondPoint.y << endl;

    // Create a function that calculates and returns the slope
    double slope = calculateSlope(firstPoint, secondPoint);
    cout << "Slope: " << slope << endl;

    swapXCoordinates(firstPoint, secondPoint);

    slope = calculateSlope(firstPoint, secondPoint);
    cout << "Slope: " << slope << endl;



    return 0;
}
