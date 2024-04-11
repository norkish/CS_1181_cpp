#include <iostream>

#include "accountTransaction.h"
#include "bank.h"
#include "bankAccount.h"
#include "date.h"

using namespace std;

int main() {
    Bank myBank;

    myBank.openNewAccount("Albus");
    myBank.openNewAccount("Black");
    myBank.openNewAccount("Cho");
    myBank.openNewAccount("Dobby");
    myBank.openNewAccount("Errol");
    myBank.openNewAccount("Fred");
    myBank.openNewAccount("George");
    myBank.openNewAccount("Hagrid");
    myBank.openNewAccount("Ickle Diddykins");
    myBank.openNewAccount("James");
    myBank.openNewAccount("Kreacher");
    myBank.openNewAccount("Luna");
    myBank.openNewAccount("Malfoy");
    myBank.openNewAccount("Neville");
    myBank.openNewAccount("Olympe");
    myBank.openNewAccount("Peter Pettigrew");
    myBank.openNewAccount("Quirrell");
    myBank.openNewAccount("Remus");
    myBank.openNewAccount("Snape");
    myBank.openNewAccount("Trelawney");
    myBank.openNewAccount("Umbridge");
    myBank.openNewAccount("Voldemort");
    myBank.openNewAccount("Wood");
    myBank.openNewAccount("Xenophilius");
    myBank.openNewAccount("Yaxley");
    myBank.openNewAccount("Zabini");

    cout << endl << "LINEAR SEARCH:" << endl;
    string lookupName = "Umbridge";
    int accountIndex = myBank.getAccountIndex(lookupName);
    if (accountIndex != -1) {
        BankAccount retrievedAccount = myBank.getAccountByIndex(accountIndex);
        retrievedAccount.print();
    } else {
        cout << "Could not find account for " << lookupName << endl;
    }

    cout << endl << "BINARY SEARCH:" << endl;
    accountIndex = myBank.getAccountIndexBinarySearch(lookupName);
    if (accountIndex != -1) {
        BankAccount retrievedAccount = myBank.getAccountByIndex(accountIndex);
        retrievedAccount.print();
    } else {
        cout << "Could not find account for " << lookupName << endl;
    }

    return 0;
}
