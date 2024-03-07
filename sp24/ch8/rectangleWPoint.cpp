#include <iostream>

using namespace std;

struct Location {
    int x;
    int y;
};

struct Rectangle {
    int width;
    int height;
    Location location;
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

int getIntegerFromUser(string prompt){
    cout << prompt;
    string s;
    getline(cin, s);
    int returnValue = stoi(s);
    return returnValue;
}

Location getLocationFromUser(){
    Location l1;

    l1.x = getIntegerFromUser("Input x-coordinate: ");
    l1.y = getIntegerFromUser("Input y-coordinate: ");

    return l1;
}

Rectangle getRectangleFromUser(){
    Rectangle r1;

    r1.width = getIntegerFromUser("Input width: ");
    r1.height = getIntegerFromUser("Input height: ");

    r1.location = getLocationFromUser();

    return r1;
}

int main() {

    Rectangle r1 = getRectangleFromUser();

    cout << "Width/height: " << r1.width << " " << r1.height << endl;
    cout << "Location: " << r1.location.x << " " << r1.location.y << endl;

    double area = calculateArea(r1);

    cout << "Area: " << area << endl;

    doubleSize(r1);

    area = calculateArea(r1);

    cout << "Area: " << area << endl;

    return 0;
}
