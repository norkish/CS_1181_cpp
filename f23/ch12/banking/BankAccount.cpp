//
// Created by Paul Bodily on 11/9/23.
//

#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(const long newId, const string &new_name, const string& new_password) {
    id = newId;
    name = new_name;
    password = new_password;
    balance = 0.0;
}

bool BankAccount::promptForAndValidatePassword() const {
    cout << "Please enter password: ";
    string candidatePassword;
    cin >> candidatePassword;
    return candidatePassword == password;
}

bool BankAccount::withdraw(double withdrawlAmount) {
    if (promptForAndValidatePassword() && balance >= withdrawlAmount){
        balance -= withdrawlAmount;
        transaction_history.push_back({transaction_history.size(), Date(), -withdrawlAmount, "withdrawl"});
        return true;
    }
    return false;
}

void BankAccount::deposit(double depositAmount) {
    balance += depositAmount;
    transaction_history.push_back({transaction_history.size(), Date(), depositAmount, "deposit"});
}

void BankAccount::printAccountSummary() const {
    cout << name << " (" << id << ")\t\t$" << balance << endl;
}

void BankAccount::printTransactions() const {
    for (int i = 0; i < transaction_history.size(); ++i) {
        transaction_history[i].printSummary();
    }
}




