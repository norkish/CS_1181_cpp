#include <iostream>
#include "Date.h"
#include "AccountTransaction.h"
#include "BankAccount.h"

using namespace std;

/**
 * This function takes a list of BankAccounts and looks for a BankAccount
 * whose id equals acctNumber
 * @param accounts list of BankAccounts
 * @param acctNumber number to search for a match
 * @return index in the accounts list where the match was found OR -1 if not match found
 */
int findAccountLinear(vector<BankAccount> accounts, long acctNumber) {
    for (int i = 0; i < accounts.size(); ++i) {
        // if i == acctNumber
        if(accounts[i].id == acctNumber) {
            return i;
        }
    }

    return -1;
}

/**
 * This function takes a list of BankAccounts and looks for a BankAccount
 * whose id equals acctNumber
 * @param accounts list of BankAccounts
 * @param acctNumber number to search for a match
 * @return index in the accounts list where the match was found OR -1 if not match found
 */
int findAccountBinary(vector<BankAccount> accounts, long acctNumber, int low, int high) {
        if (high < low) return -1;

        int mid = (high + low) / 2;

        // if we found the bank account, return its index
        if (accounts[mid].id == acctNumber) return mid;

        // otherwise, compare the account to the middle card
        if (accounts[mid].id > acctNumber) {
            // search the first half of the deck
            return findAccountBinary (accounts, acctNumber, low, mid-1);
        } else {
            // search the second half of the deck
            return findAccountBinary (accounts, acctNumber, mid+1, high);
        }
    }


int main() {
    srand(time(nullptr)); // initializing the random generator seed
    vector<string> names = {"Paul", "Austin", "Courtney", "Autumn", "Siena", "Aurora"};

    long next_account_id = rand();

    vector<BankAccount> accounts; // initializing empty list of BankAccounts
    for (size_t i = 0; i < names.size(); ++i) {
        // for each name in names
        BankAccount newAccount = BankAccount(next_account_id, names[i], "password"+to_string(i));
        newAccount.deposit(rand() % 1000);
        accounts.push_back(newAccount);
        next_account_id += rand();
    }

    for (size_t i = 0; i < accounts.size(); ++i) {
            accounts[i].printAccountSummary();
    }

    // prompt for account number
    cout << "Enter Account #: ";
    long acctNo;
    cin >> acctNo;

//    int index = findAccountLinear(accounts, acctNo);
    int index = findAccountBinary(accounts, acctNo, 0, accounts.size()-1);

    if (index != -1) {
        if(accounts[index].promptForAndValidatePassword()){
            accounts[index].printAccountSummary();
        }
    } else {
        cout << "No account exists with number " << acctNo;
    }

    return 0;
}
