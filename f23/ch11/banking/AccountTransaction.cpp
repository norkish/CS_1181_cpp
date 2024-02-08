//
// Created by Paul Bodily on 11/9/23.
//

#include <iostream>
#include "AccountTransaction.h"

using namespace std;

void AccountTransaction::printSummary() const {
    cout << "Transaction #" << id << ": " << description << "\t$" <<
    amount << " (" << date.toString() << ")";
}
