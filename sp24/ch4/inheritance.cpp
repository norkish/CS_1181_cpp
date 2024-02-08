#include <iostream>

using namespace std;

void divvy_items(string item_type, int people_count) {
    if (people_count <= 0) {
        cout << "Can't divide " << item_type << " among " << people_count << " people." << endl;
        return;
    }

    int num_items;
    cout << "How many " << item_type << " are there? ";
    cin >> num_items;

    if (num_items < 0) {
        cout <<  "Invalid amount: " << num_items << " " << item_type << endl;
        return;
    }

    cout << people_count << " people get " << num_items / people_count << " " << item_type << " each." << endl;
    cout << num_items % people_count << " " << item_type << " go to charity." << endl;
}

void divvy_inheritance(int num_people){
    if (num_people <= 0) {
        cout << "Can't divide inheritance among " << num_people << " people." << endl;
        return;
    }

    divvy_items("dollars", num_people);
    cout << endl;
    divvy_items("books", num_people);
    cout << endl;
    divvy_items("cats", num_people);
    cout << endl;
}

int main() {

    int num_heirs;
    cout << "How many heirs are there? ";
    cin >> num_heirs;

    divvy_inheritance(num_heirs);

    return 0;
}
