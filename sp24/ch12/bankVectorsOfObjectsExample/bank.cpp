//
// Created by Paul Bodily on 4/9/24.
//

#include "bank.h"

void Bank::openNewAccount(string accountHolderName) {
    // create new account
    BankAccount newAccount(accountHolderName);

    // add new account to list of accounts
    accounts.push_back(newAccount);
}

BankAccount Bank::findAccount(string accountHolderName) {
    for (int i = 0; i < accounts.size(); ++i) {
        if (accounts[i].name == accountHolderName) {
            return accounts[i];
        }
    }
}
