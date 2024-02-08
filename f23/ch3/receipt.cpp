#include <iostream>

using namespace std;

double idahoSalesTax = 0.06;

void computeAndPrintSalesTax(string label, double cost) {
    double itemSalesTax = idahoSalesTax * cost;
    cout << label << " sales tax\t\t$" << itemSalesTax << endl;
}
void printHeaderInformation() {
    cout << "Benny's Boutique\n"
            "123 Main St. \n"
            "Pocatello, Idaho" << endl << endl;
}

int main() {
    // print header information
    printHeaderInformation();

    // prompt item 1 and wait for input
    cout << "Item 1\t\t\t\t\t$";
    double item1Cost;
    cin >> item1Cost;

    // compute and print sales tax for item 1
    computeAndPrintSalesTax("Item 1", item1Cost);

    // prompt item 2 and wait for input
    cout << "Item 2\t\t\t\t\t$";
    double item2Cost;
    cin >> item2Cost;

    // compute and print sales tax for item 2
    computeAndPrintSalesTax("Item 2", item2Cost);

 // prompt item 3 and wait for input
    cout << "Item 3\t\t\t\t\t$";
    double item3Cost;
    cin >> item3Cost;

    // compute and print sales tax for item 2
    computeAndPrintSalesTax("Item 3", item3Cost);

    // total up and print before-tax costs
    double totalCost = item1Cost + item2Cost + item3Cost;
    cout << "Before tax:\t\t\t$" << totalCost << endl;

    // total up and print sales tax
    computeAndPrintSalesTax("Total", totalCost);

    // add before-tax + tax and print
    double totalCostPlusTax = totalCost * (1.0 + idahoSalesTax);
    cout << "After tax:\t\t\t$" << totalCostPlusTax << endl;

    return 0;
}
