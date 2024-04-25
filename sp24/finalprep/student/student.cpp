#include "student.h"

Student::Student(string _name) {
    SID = 2123515;
    name = _name;
}

void Student::addClass(string classToAdd) {
    classes.push_back(classToAdd);
}

void Student::print() {
    cout << name << " (SID: " << SID << "):" << endl;
    for (int i = 0; i < classes.size(); ++i) {
        cout << "\t- " << classes[i] << endl;
    }
    cout << endl;
}