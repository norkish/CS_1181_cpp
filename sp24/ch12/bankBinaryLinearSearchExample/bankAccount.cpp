//
// Created by Paul Bodily on 4/4/24.
//

#include "bankAccount.h"

BankAccount::BankAccount(string _name) {
    name = _name;
    balance = 0.0;
    creationDate = {3,7,1984};
}

void BankAccount::print() {
    cout << "Name: " << name << endl;
    creationDate.print();
    cout << endl << "Balance: " << balance << endl;
}

// deposit amount may be positive or negative
void BankAccount::conductTransaction(double depositAmount, string _description) {
    // update balance
    balance += depositAmount;

    // create new account transaction
    AccountTransaction transaction(depositAmount, _description);

    // add the transaction to this account
    transactionHistory.push_back(transaction);
}

void BankAccount::deposit(double depositAmount, string _description) {
    conductTransaction(depositAmount, _description);
}

void BankAccount::withdraw(double withdrawlAmount, string _description) {
    conductTransaction(-withdrawlAmount, _description);
}

void BankAccount::printTransactions() {

    // go through list of transactions and for each transaction
    for (int i = 0; i < transactionHistory.size(); i++) {
        // print a summary of the transaction
//        AccountTransaction ith_transaction = transactionHistory[i];
//        ith_transaction.print();

        transactionHistory[i].print();
        cout << endl;
    }

}