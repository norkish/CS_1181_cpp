#include <iostream>
#include "Date.h"
#include "AccountTransaction.h"
#include "BankAccount.h"

using namespace std;

int main() {
    Date d = {11,9,2023};
    cout << d.toString() << endl;

    AccountTransaction t1 = {0, d, -200.00, "CS 1181 Pizza Party"};
    t1.printSummary();
    cout << endl;

    BankAccount a1 = {0, "Paul Bodily", "password1", "pizza", 1000000000000.0};

    cout << boolalpha << a1.validatePassword("password1");

    cout << boolalpha << a1.withdraw(200);

    return 0;
}
