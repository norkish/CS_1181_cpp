//
// Created by Paul Bodily on 4/9/24.
//

#ifndef BANKACCOUNT_BANK_H
#define BANKACCOUNT_BANK_H

#include "bankAccount.h"

struct Bank {

    vector<BankAccount> accounts;

    void openNewAccount(const string & accountHolderName);
    int getAccountIndex(const string & accountHolderName);
    int getAccountIndexBinarySearch(const string & accountHolderName, int low, int high, int & numSteps);
    int getAccountIndexBinarySearch(const string & accountHolderName);
    BankAccount getAccountByIndex(int index);
};


#endif //BANKACCOUNT_BANK_H
