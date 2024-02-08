#include <cassert>
#include <iostream>

using namespace std;

class Date {
    int year, month, day;

    // 0th month is invalid, 1st month is January
    vector<int> maxDaysPerMonth = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // private functions
    void invariantCheck();
    bool isLeapYear() const;
    int getDaysInCurrentMonth() const;

public:
    Date(int y, int m, int d);

    void printYMD() const;
    void addDays(int daysToAdd);
};

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
    invariantCheck();
}

void Date::printYMD() const {
    cout << year << "-" << month << "-" << day << endl;
}

void Date::invariantCheck() {
    // month > 0, month <= 12
    assert(month > 0 && month <= 12);
    // day > 0 , day <= 31
    assert(day > 0);

    int daysInMonth = getDaysInCurrentMonth();
    assert(day <= daysInMonth);
}

bool Date::isLeapYear() const {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

void Date::addDays(int daysToAdd) {
    invariantCheck();
    day += daysToAdd;

    while (day > getDaysInCurrentMonth()) {
        day = day - getDaysInCurrentMonth();
        month++;
        if (month > 12) {
            month = month - 12;
            year++;
        }
    }

    invariantCheck();
}

int Date::getDaysInCurrentMonth() const {
    if(month == 2 && isLeapYear()) {
        return 29;
    } else {
        return maxDaysPerMonth[month];
    }
}

int main() {
    Date d1(2023, 2, 28);

    d1.printYMD();

    d1.addDays(367);

    d1.printYMD();

    return 0;
}
