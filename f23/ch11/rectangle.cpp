#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

struct Rectangle {
    Point upperLeft;
    Point lowerRight;

    Rectangle();
    Rectangle(int ulx, int ulr, int lrx, int lry);
    void print() const;
    void shift(int deltaX, int deltaY);
    int area() const;
    int perimeter() const;
};

Rectangle::Rectangle(){
    upperLeft = {0,0};
    lowerRight = {0,0};
}

Rectangle::Rectangle(int ulx, int ulr, int lrx, int lry){
    upperLeft = {ulx,ulr};
    lowerRight = {lrx,lry};
}

void Rectangle::print() const {
    cout << "ul = (" << upperLeft.x << "," << upperLeft.y << "), ";
    cout << " lr = (" << lowerRight.x << "," << lowerRight.y << ")" << endl;
}


void Rectangle::shift(int deltaX, int deltaY) {
    upperLeft.x += deltaX;
    lowerRight.x += deltaX;
    upperLeft.y += deltaY;
    lowerRight.y += deltaY;
}

int Rectangle::area() const {
    int deltaX = abs(upperLeft.x - lowerRight.x);
    int deltaY = abs(upperLeft.y - lowerRight.y);

    int result = deltaX * deltaY;
    return result;
}

int Rectangle::perimeter() const {
    int deltaX = abs(upperLeft.x - lowerRight.x);
    int deltaY = abs(upperLeft.y - lowerRight.y);

    int result = 2*deltaX + 2*deltaY;
    return result;
}

int main() {
    Rectangle r0;

    r0.print();

    Rectangle r1(0,10,10,0);
    Rectangle r2(0,100,100,0);

    r1.print();
    r2.print();

    r1.shift(-5, 0);

    r1.print();

    r1.shift(0, -5);

    r1.print();

    cout << "area: " << r1.area() << endl;
    cout << "perimeter: " << r1.perimeter() << endl;

    return 0;
}
