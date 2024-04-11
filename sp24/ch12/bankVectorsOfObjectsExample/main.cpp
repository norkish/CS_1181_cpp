#include <iostream>

#include "accountTransaction.h"
#include "bank.h"
#include "bankAccount.h"
#include "date.h"

using namespace std;

int main() {
    Bank myBank;
    myBank.openNewAccount("Paul Bodily");

    BankAccount retrievedAccount = myBank.findAccount("Paul Bodily");

    retrievedAccount.print();

    retrievedAccount.deposit(50000000, "Won lottery");
    retrievedAccount.withdraw(350, "Grease Monkey");
    retrievedAccount.withdraw(25, "Parking ticket");
    retrievedAccount.withdraw(150, "Groceries");
    retrievedAccount.withdraw(10000, "Lagoon");
    retrievedAccount.print();

    retrievedAccount.printTransactions();

    myBank.openNewAccount("Trevor");
    retrievedAccount = myBank.findAccount("Trevor");

    retrievedAccount.print();

    retrievedAccount.deposit(50000000, "Sold airplane");
    retrievedAccount.withdraw(350, "Walmart");
    retrievedAccount.withdraw(25, "Olive Garden");
    retrievedAccount.withdraw(150, "A in Dr. Bodily's class");
    retrievedAccount.print();

    retrievedAccount.printTransactions();
    return 0;
}
