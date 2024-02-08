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
    long id;
    string name, password;
    double balance;
    vector<AccountTransaction> transaction_history;

    BankAccount(const long newId, const string& name, const string& password);

    bool promptForAndValidatePassword() const;
    void deposit(double depositAmount);
    bool withdraw(double withdrawlAmount);
    void printAccountSummary() const;
    void printTransactions() const;
};

#endif //BANKING_BANKACCOUNT_H
