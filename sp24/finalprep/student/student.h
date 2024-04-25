#include <iostream>
#include <vector>

using namespace std;
#ifndef STUDENT_H
#define STUDENT_H

class Student {
    int SID;
    string name;
    vector<string> classes;

public:
    Student(string _name);

    void addClass(string classToAdd);
    void print();
};

#endif