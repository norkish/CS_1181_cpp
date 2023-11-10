//
// Created by Paul Bodily on 11/9/23.
//

#ifndef BANKING_DATE_H
#define BANKING_DATE_H

using namespace std;

struct Date {
    int month, day, year;

    void print() const;

    string toString() const;
};

#endif //BANKING_DATE_H
