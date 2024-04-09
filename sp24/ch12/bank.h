//
// Created by Paul Bodily on 4/9/24.
//

#ifndef BANKACCOUNT_BANK_H
#define BANKACCOUNT_BANK_H

#include "bankAccount.h"

struct Bank {

    vector<BankAccount> accounts;

    void openNewAccount(string accountHolderName);
    BankAccount findAccount(string accountHolderName);
};


#endif //BANKACCOUNT_BANK_H
