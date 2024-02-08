#include <iostream>

using namespace std;

struct Course{
};

struct Student{
    int SID;
    string name;
    vector<Course> courseList;

    Student(){}
    Student(string name) {}
    void print() const;
    void addCourse(const Course & c);
    void changeName(const string& newName);
};

void process(int &value) {
    cout << "Value passed into function: " << value << endl;
    value = 10;
    cout << "Value before leaving function: " << value << endl;
}

int countVowels(const string& s) {
    int counter = 0;

    for(int i = 0; i < s.size(); i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u') {
            counter++;
        }
    }

    return counter;
}

int main() {

    Student s;
    Student me("jason");

    int someValue = 7;

    cout << "Value before function call: " << someValue << endl;
    process(someValue);
    cout << "Value after function call: " << someValue << endl;
    return 0;
}

