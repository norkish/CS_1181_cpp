//
// Created by Paul Bodily on 4/9/24.
//

#include "accountTransaction.h"


AccountTransaction::AccountTransaction(double _amt, string _desc) {
    date = {4,9,2024};
    amount = _amt;
    description = _desc;
}

void AccountTransaction::print() {
    cout << "Account transaction: $" << amount << " (" << description << ", ";
    date.print();
    cout << ")";
}