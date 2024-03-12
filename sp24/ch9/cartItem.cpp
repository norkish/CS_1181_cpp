#include <iostream>

using namespace std;

struct CartItem {
    string name;
    int quantity;
    double price;
};

void printItem(const CartItem &item) {
    cout << item.name << " (qty. " << item.quantity << ", $" << item.price << ")" << endl;
}

int main() {

    CartItem item1 = {"Milk", 1, 3.50};
    printItem(item1);

    return 0;
}
