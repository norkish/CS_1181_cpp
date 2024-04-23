#include <assert.h>
#include <iostream>
#include <vector>

using namespace std;

class Date {
    int month;
    int day;
    int year;
    const vector<int> numDaysPerMonth = {31,28,31,30,31,30,31,31,30,31,30,31};

    void checkInvariant() {
        assert(month > 0);
        assert(month <= 12);
        assert(day > 0);
//        cout << numDaysPerMonth[_month+10000000000] << endl;
        assert(day <= numDaysPerMonth[month-1]);
    }

public:
    /*
     * Assuming 1-based indexing for month and day
     */
    Date(int _month, int _day, int _year) {
        month = _month;
        day = _day;
        year = _year;

        checkInvariant();
    }


    void printYMD() {
        cout << year << "/" << month << "/" << day << endl;
    }

    void addDays(int daysToAdd) {
        assert(daysToAdd >= 0);
        day += daysToAdd;

        // as long as day is > number of day in the curr month
        while (day > numDaysPerMonth[month-1]) {
            // subtract number of days in the curr month
            day -= numDaysPerMonth[month-1];

            // add one to the curr month
            month++;

            // if adding one to month goes over 12, add one to year
            if (month > 12) {
                month = 1;
                year++;
            }

        }


        checkInvariant();
    }

    void addMonths(int monthsToAdd) {

    }

    void addYears(int yearsToAdd) {

    }

    int differenceInDays(Date date) {
        return -1;
    }

    bool isAfter(Date date) {
        return true;
    }
};

int main() {

    Date date1(2,28,2024);
    Date date2(4,24,2024);

    date1.printYMD();
    date1.addDays(31);
    date1.printYMD();

//    int numDaysDifference = date1.differenceInDays(date2);
//
//    bool date1IsLater = date1.isAfter(date2);
//
//    assert(date1IsLater); // check that day 1 is later

    return 0;
}
