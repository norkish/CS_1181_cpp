//
// Created by Paul Bodily on 4/4/24.
//

#ifndef BANKACCOUNT_BANKACCOUNT_H
#define BANKACCOUNT_BANKACCOUNT_H

#include <iostream>

#include "date.h"

using namespace std;

struct BankAccount {
    string name;
    double balance;
    Date creationDate;
//    - transactionHistory

    BankAccount(string _name);
    void print();
    void deposit(double depositAmount);
};


#endif //BANKACCOUNT_BANKACCOUNT_H
