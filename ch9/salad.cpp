#include <iostream>

using namespace std;

struct Salad {
    string roughage;
    int tomatoes;
    int croutons;
    int baconBits;
    string dressing;
};

void printSalad(const Salad& s){
    cout << "The salad: " << s.roughage << " with " << s.tomatoes << " tomatoes, "
    << s.croutons << " croutons, and " << s.dressing << " dressing" << endl;
}

bool checkIfVegetarian(const Salad& s){
    return (s.baconBits == 0);
}

void makeVegetarian(Salad& s){
    s.baconBits = 0;
}

int main() {
    Salad michaelsSalad = {"Lettuce", 0, 0, 0, "Ranch"};
    Salad marissasSalad = {"Spinach", 1, 50, 100, "Ranch"};

    printSalad(michaelsSalad);
    printSalad(marissasSalad);

    makeVegetarian(marissasSalad);

    if(checkIfVegetarian(michaelsSalad)) {
        cout << "Michael's salad is vegetarian" << endl;
    }
    if(checkIfVegetarian(marissasSalad)) {
        cout << "Marissa's salad is vegetarian" << endl;
    }


    return 0;
}
