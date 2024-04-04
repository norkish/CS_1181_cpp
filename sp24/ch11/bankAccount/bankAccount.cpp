//
// Created by Paul Bodily on 4/4/24.
//

#include "bankAccount.h"

BankAccount::BankAccount(string _name) {
    name = _name;
    balance = 0.0;
    creationDate = {3,7,1984};
}

void BankAccount::print() {
    cout << "Name: " << name << endl;
    creationDate.print();
    cout << "Balance: " << balance << endl;
}

void BankAccount::deposit(double depositAmount) {
    balance += depositAmount;
}
