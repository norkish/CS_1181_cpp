#include <iostream>

#include "bankAccount.h"
#include "date.h"

using namespace std;

int main() {
    Date date1 = {4, 4, 2024};
    Date date2 = {4, 4, 2024};
    date1.print();

    BankAccount account1("Paul");
    account1.print();

    account1.deposit(50000000);
    account1.print();


    return 0;
}
