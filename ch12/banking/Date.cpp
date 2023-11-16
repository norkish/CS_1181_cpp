//
// Created by Paul Bodily on 11/9/23.
//
#include <iostream>
#include "Date.h"

using namespace std;

string Date::toString() const {
    string result = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    return result;
}

Date::Date() {
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    year = 1900 + local_time->tm_year;
    month = 1 + local_time->tm_mon;
    day = local_time->tm_mday;
}
