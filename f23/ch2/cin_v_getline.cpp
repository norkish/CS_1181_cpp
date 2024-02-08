#include <iostream>

using namespace std;

int main() {
    int quantity;
    string item_name;

    cout << "Enter the quantity: ";
    cin >> quantity;	//⚠️: leaves "\n" in buffer

    cin.ignore();		//✅: clears the buffer

    cout << "Enter the item: ";
    getline(cin, item_name);

    cout << "You entered \"" << quantity << " " << item_name << "\"" << endl;

    return 0;
}
