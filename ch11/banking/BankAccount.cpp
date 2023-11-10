//
// Created by Paul Bodily on 11/9/23.
//

#include "BankAccount.h"

bool BankAccount::validatePassword(const string &candidatePassword) const {
    return candidatePassword == password;
}

bool BankAccount::withdraw(double withdrawlAmount) {
    cout << "Please enter password: ";
    string candidatePassword;
    cin >> candidatePassword;
    if (validatePassword(candidatePassword) && balance >= withdrawlAmount){
        balance -= withdrawlAmount;
        return true;
    }
    return false;
}
