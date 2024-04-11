//
// Created by Paul Bodily on 4/4/24.
//

#ifndef BANKACCOUNT_BANKACCOUNT_H
#define BANKACCOUNT_BANKACCOUNT_H

#include <iostream>
#include <vector>

#include "accountTransaction.h"
#include "date.h"

using namespace std;

struct BankAccount {
    string name;
    double balance;
    Date creationDate;
    vector<AccountTransaction> transactionHistory;

    BankAccount(string _name);
    void print();

    void conductTransaction(double depositAmount, string _description);
    void deposit(double depositAmount, string _description);
    void withdraw(double depositAmount, string _description);

    void printTransactions();
};


#endif //BANKACCOUNT_BANKACCOUNT_H
