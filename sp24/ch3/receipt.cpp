#include <iostream>

using namespace std;

int main() {

    string item1, item2, item3;
    double price1, price2, price3, tax = 0.078;

    cout << "Item 1: ";
    getline(cin, item1);
    cout << "Price: $";
    cin >> price1;

    double item1_sales_tax = price1 * tax;
    cout << "Sales tax for item 1: $" << item1_sales_tax << endl;
    cout << endl;

    cout << "Item 2: ";
    getline(cin, item2);
    cout << "Price: $";
    cin >> price2;

    double item2_sales_tax = price2 * tax;
    cout << "Sales tax for item 2: $" << item2_sales_tax << endl;
    cout << endl;

    cout << "Item 3: ";
    getline(cin, item3);
    cout << "Price: $";
    cin >> price3;

    double item3_sales_tax = price3 * tax;
    cout << "Sales tax for item 3: $" << item3_sales_tax << endl;
    cout << endl;

    return 0;
}
