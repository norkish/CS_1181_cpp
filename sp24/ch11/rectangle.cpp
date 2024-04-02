#include <iostream>

using namespace std;

struct Rectangle {
    double width, height;

    double getArea() {
        double area = width * height;
        return area;
    }

    double getPerimeter () {
        double perimeter = 2 * width + 2 * height;
        return perimeter;
    }
};

// non-member functions:
//getArea()
double getArea (const Rectangle & rectangle) {
    double area = rectangle.width * rectangle.height;
    return area;
}

//getPerimeter()
double getPerimeter (const Rectangle & rectangle) {
    double perimeter = 2 * rectangle.width + 2 * rectangle.height;
    return perimeter;
}

//print()

int main() {
    Rectangle myRectangle = {2.0, 4.0};
    cout << myRectangle.width << endl;

//    double area = getArea(myRectangle);
    double area = myRectangle.getArea();
    cout << "Area = " << area << endl;

//    double perimeter = getPerimeter(myRectangle);
    double perimeter = myRectangle.getPerimeter();
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
