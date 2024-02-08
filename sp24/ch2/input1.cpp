#include <iostream>
using namespace std;

int main() {

    string name;
    string middle_name;
    string last_name;

    cout << "Input your name: ";
    cin >> name;
    cin >> middle_name;
    cin >> last_name;

    cout << "Your name is " << name << " " << middle_name << " " << last_name << endl;


    string favorite_class;
    cout << flush << "What's your favorite class: ";
    cin >> ws;
    getline(cin, favorite_class);

    cout << "Your favorite class is " << favorite_class << endl;

    return 0;

}
