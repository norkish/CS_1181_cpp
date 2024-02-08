//
// Created by Paul Bodily on 11/9/23.
//

#ifndef BANKING_BANKACCOUNT_H
#define BANKING_BANKACCOUNT_H

#include <iostream>
#include <vector>
#include "AccountTransaction.h"

using namespace std;

struct BankAccount {
    int id;
    string name, password, passphrase;
    double balance;
    vector<AccountTransaction> transaction_history;

    bool validatePassword(const string& candidatePassword) const;
    bool validatePassphrase(const string& candidatePassword) const;
    void deposit(double depositAmount);
    bool withdraw(double withdrawlAmount);
    void changeName(const string& newName);
};


#endif //BANKING_BANKACCOUNT_H
