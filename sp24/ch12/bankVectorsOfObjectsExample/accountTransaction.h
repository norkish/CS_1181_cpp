//
// Created by Paul Bodily on 4/9/24.
//

#ifndef BANKACCOUNT_ACCOUNTTRANSACTION_H
#define BANKACCOUNT_ACCOUNTTRANSACTION_H

#include <iostream>

#include "date.h"

using namespace std;

struct AccountTransaction{
    Date date;
    double amount;
    string description;

    AccountTransaction(double _amt, string _desc);

    void print();
};


#endif //BANKACCOUNT_ACCOUNTTRANSACTION_H
