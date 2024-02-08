#include <iostream>

using namespace std;

int main() {

    string p1_name = "Jane D";
    cout << "Player 1 name: ";
    getline(cin, p1_name);

    string p2_name = "Sarah A";
    string p3_name = "Anna B";

    char p1_pos = 'P';
    cout << "Player 1 position: ";
    cin >> p1_pos;

    char p2_pos = 'L';
    char p3_pos = '1';

    int p1_quant = 3;
    int p2_quant = 5;
    int p3_quant = 12;

    int p1_price = 2;
    int p2_price = 4;
    int p3_price = 1;

    int p1_total = p1_quant * p1_price;
    int p2_total = p2_quant * p2_price;
    int p3_total = p3_quant * p3_price;

    int total_quant = p1_quant + p2_quant + p3_quant;
    int total_sales = p1_total + p2_total + p3_total;

    cout << "Name\t\tPosition\tQuantity\tPrice/bar\tTotal\n" <<
         p1_name << "\t\t" << p1_pos << "\t\t\t" << p1_quant <<
         "\t\t\t$" << p1_price << "\t\t\t$" << p1_total << "\n" <<
         p2_name << "\t\t" << p2_pos << "\t\t\t" << p2_quant <<
         "\t\t\t$" << p2_price << "\t\t\t$" << p2_total << "\n" <<
         p3_name << "\t\t" << p3_pos << "\t\t\t" << p3_quant <<
         "\t\t\t$" << p3_price << "\t\t\t$" << p3_total << "\n"
                                                           "------------------------------------------------\n"
                                                           "Total\t\t\t\t\t" << total_quant << "\t\t\t\t\t\t$" << total_sales << endl;

    return 0;
}
