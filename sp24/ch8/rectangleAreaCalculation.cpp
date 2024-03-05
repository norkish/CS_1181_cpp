#include <iostream>

using namespace std;

struct Rectangle {
    int width;
    int height;
};

double calculateArea(Rectangle rectangle){
    double area = rectangle.height * rectangle.width;
    return area;
}

int main() {

    Rectangle r1 = {4,5};

    cout << r1.width << " " << r1.height << endl;

    double area = calculateArea(r1);

    cout << "Area: " << area << endl;

    return 0;
}
