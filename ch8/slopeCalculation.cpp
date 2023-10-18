#include <iostream>

using namespace std;

struct Point {
    double x = 0;
    double y = 0;
};

double calculateSlope(Point p1, Point p2) {

    double slope = (p2.y - p1.y)/(p2.x - p1.x);
    return slope;
}

void printPoint(Point p) {
    cout << "x: " << p.x << " y: " << p.y << endl;
}

void swapXValues(Point &point1, Point &point2) {
    double tmp = point1.x;
    point1.x = point2.x;
    point2.x = tmp;
}

int main() {
    Point p1 = {0,0};
    Point p2 = {2,1};

    printPoint(p1);
    printPoint(p2);

    double slope = calculateSlope(p1, p2);

    cout << "Slope is: " << slope << endl;

    cout << "Swapping..." << endl;
    swapXValues(p1, p2);

    printPoint(p1);
    printPoint(p2);

    slope = calculateSlope(p1, p2);

    cout << "Slope is: " << slope << endl;

    return 0;
}
