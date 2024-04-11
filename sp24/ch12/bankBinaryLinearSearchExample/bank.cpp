//
// Created by Paul Bodily on 4/9/24.
//

#include "bank.h"

void Bank::openNewAccount(const string & accountHolderName) {
    // create new account
    BankAccount newAccount(accountHolderName);

    // add new account to list of accounts
    accounts.push_back(newAccount);
}

int Bank::getAccountIndex(const string & accountHolderName) {
    int numSteps = 0;
    for (int i = 0; i < accounts.size(); ++i) {
        numSteps++;
        if (accounts[i].name == accountHolderName) {
            cout << "Took " << numSteps << " steps" << endl;
            return i;
        }
    }
    cout << "Took " << numSteps << " steps" << endl;

    return -1; // Sentinel
}

int Bank::getAccountIndexBinarySearch(const string & accountHolderName, int low, int high, int & numSteps) {
    numSteps += 1;

    if (low > high) {
        return -1;
    }

    // given the realm of possibilities defined by low and high
    // identify the middle index
    int midIndex = (high - low) / 2 + low;
    string currName = accounts[midIndex].name;
    // if the value (i.e., accountholder name) at middle index is a match
    if (currName == accountHolderName) {
        return midIndex;
    }
    else {
        // if value at mid index is higher than what we're looking for
        if (currName > accountHolderName) {
            // adjust high and search again
//            int indexFound = getAccountIndexBinarySearch(accountHolderName, 0, midIndex-1);
////            return indexFound;

            return getAccountIndexBinarySearch(accountHolderName, low, midIndex-1, numSteps);
        } else { // (i.e., value at mid index is lower than what we're looking for)
            // adjust low and search again
            return getAccountIndexBinarySearch(accountHolderName, midIndex+1, high, numSteps);
        }
    }
}

int Bank::getAccountIndexBinarySearch(const string & accountHolderName) {
    // start the binary search
    int numSteps = 0;
    int indexFound = getAccountIndexBinarySearch(accountHolderName, 0, accounts.size()-1, numSteps);

    cout << "Took " << numSteps << " steps" << endl;

    return indexFound;
}

BankAccount Bank::getAccountByIndex(int index) {
    if (index < 0 || index >= accounts.size()) {
        cout << "Invalid index" << endl;
        exit(-1);
    }

    return accounts[index];
}
