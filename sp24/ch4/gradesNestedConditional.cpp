#include <iostream>

using namespace std;

int main() {

    cout << "Input a grade: ";
    int score;
    cin >> score;

    char grade;
    if (0 > score) {
        cout << score << " is invalid" << endl;
    } else if (100 < score){
        cout << score << " is invalid" << endl;
    } else {
        // score is valid (0 to 100)
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "Grade is " << grade << endl;
    }

    return 0;
}
