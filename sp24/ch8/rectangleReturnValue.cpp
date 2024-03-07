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

void doubleSize(Rectangle & rectangle){
    // double width and height of the parameter
    rectangle.width = rectangle.width * 2;
    rectangle.height = rectangle.height * 2;
}

Rectangle getRectangleFromUser(){
    Rectangle r1;

    cout << "Input width: ";
    string widthString;
    getline(cin, widthString);
    r1.width = stoi(widthString);

    cout << "Input height: ";
    string heightString;
    getline(cin, heightString);
    r1.height = stoi(heightString);

    return r1;
}

int main() {

    Rectangle r1 = getRectangleFromUser();

    cout << r1.width << " " << r1.height << endl;

    double area = calculateArea(r1);

    cout << "Area: " << area << endl;

    doubleSize(r1);

    area = calculateArea(r1);

    cout << "Area: " << area << endl;

    return 0;
}
