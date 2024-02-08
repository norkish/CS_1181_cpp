#include <iostream>

using namespace std;

void print_sales_tax(double sales_tax) {
    cout << "Sales tax for item: $" << sales_tax << endl;
}

int main() {

    string item1, item2, item3;
    double price1, price2, price3, tax = 0.078;

    cout << "Item 1: ";
    cin >> ws;
    getline(cin, item1);
    cout << "Price: $";
    cin >> price1;

    double item1_sales_tax = price1 * tax;
    print_sales_tax(item1_sales_tax);
    cout << endl;

    cout << "Item 2: ";
    cin >> ws;
    getline(cin, item2);
    cout << "Price: $";
    cin >> price2;

    double item2_sales_tax = price2 * tax;
    print_sales_tax(item2_sales_tax);
    cout << endl;

    cout << "Item 3: ";
    cin >> ws;
    getline(cin, item3);
    cout << "Price: $";
    cin >> price3;

    double item3_sales_tax = price3 * tax;
    print_sales_tax(item3_sales_tax);
    cout << endl;

    return 0;
}
