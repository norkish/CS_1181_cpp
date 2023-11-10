//
// Created by Paul Bodily on 11/9/23.
//
#include <iostream>
#include "Date.h"

using namespace std;

void Date::print() const {
    cout << toString();
}

string Date::toString() const {
    string result = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    return result;
}