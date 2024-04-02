#include "rectangle.h"

double Rectangle::getArea() {
    double area = width * height;
    return area;
}

double Rectangle::getPerimeter () {
    double perimeter = 2 * width + 2 * height;
    return perimeter;
}
