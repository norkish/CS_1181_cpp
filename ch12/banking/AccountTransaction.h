//
// Created by Paul Bodily on 11/9/23.
//

#ifndef BANKING_ACCOUNTTRANSACTION_H
#define BANKING_ACCOUNTTRANSACTION_H

#include <iostream>
#include "Date.h"

using namespace std;

struct AccountTransaction {
    size_t id;
    Date date;
    double amount;
    string description;

    void printSummary() const;
};


#endif //BANKING_ACCOUNTTRANSACTION_H
