#include <iostream>

#include "rectangle.h"

using namespace std;

int main() {
    Rectangle myRectangle = {2.0, 4.0};
    cout << myRectangle.width << endl;

    double area = myRectangle.getArea();
    cout << "Area = " << area << endl;

    double perimeter = myRectangle.getPerimeter();
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
