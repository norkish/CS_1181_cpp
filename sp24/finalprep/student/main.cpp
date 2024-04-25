#include <iostream>

#include "student.h"

using namespace std;

Student createStudentFromCommandLine() {
    string sName;
    cout << "Input student name: ";
    getline(cin, sName);
    Student newStudent(sName);
    return newStudent;
}

int main() {

    Student s1("Paul Bodily");

    s1.addClass("CS 1181");

    s1.print();

    return 0;
}
