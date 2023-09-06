#include <iostream>
#include <cmath>
using namespace std;

void prompt_for_radius() {
    cout << "Input radius in inches: ";
}
void compute_and_print_area(double pi, double rad) {
    // Write a program that calculates the area of a circle,
    double area = pi * rad * rad;
    cout << "Circle Area: " << area << " sq inch " << endl;
}

void compute_and_print_volume(double pi, double rad) {
    // Write a program that calculates the area of a circle,
    double volume = 4.0 / 3 * pi * pow(rad, 3);
    cout << "Sphere Volume: " << volume << " cubic inches " << endl;
}

void compute_and_print_surface_area(double pi, double rad) {
    double surface_area = 4.0 * pi * pow(rad, 2);
    cout << "Sphere surface: " << surface_area << " sq inches " << endl;
}

int main() {
    double pi = 3.14159;
    double radius;

    prompt_for_radius();
    cin >> radius;

    compute_and_print_area(pi, radius);

    compute_and_print_volume(pi, radius);

    compute_and_print_surface_area(pi, radius);

    return 0;
}
