#include <iostream>

using namespace std;

struct Salad {
    string roughage;
    string dressing;
    bool hasMeat;
    bool hasTomatoes;
    bool hasOnions;
};

bool isVegetarian(const Salad &s){
    if (s.hasMeat) {
        return false;
    }

    return true;
}

void printSalad(const Salad &s) {
    cout << "Salad: " << s.roughage << " with " << s.dressing << " dressing";
    if (s.hasMeat) {
        cout << " and meat";
    }
    if (s.hasTomatoes) {
        cout << " and tomatoes";
    }
    if (s.hasOnions) {
        cout << " and onions";
    }
    cout << "." << endl;
}

void makeVegetarian(Salad &s){
    s.hasMeat = false;
}

void copySalad(const Salad& s, Salad& other) {
    other.hasMeat = s.hasMeat;
    other.hasTomatoes = s.hasTomatoes;
    other.hasOnions = s.hasOnions;
    other.dressing = s.dressing;
    other.roughage = s.roughage;
}

int main() {
    Salad caesarSalad = {"Romaine", "Caesar", true, false, false};
//    Salad otherCaesarSalad = caesarSalad;
    Salad otherCaesarSalad;
    copySalad(caesarSalad, otherCaesarSalad);

    printSalad(caesarSalad);
    printSalad(otherCaesarSalad);

    makeVegetarian(otherCaesarSalad);

    printSalad(caesarSalad);
    printSalad(otherCaesarSalad);

    if (isVegetarian(caesarSalad)) {
        cout << "Caesar salad is vegetarian" << endl;
    }

    return 0;
}
