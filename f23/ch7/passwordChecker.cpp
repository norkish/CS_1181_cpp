#include <iostream>

using namespace std;

int MIN_PASSWORD_LEN = 12;

bool checkForCharsInRange(string password, char lowerBound, char upperBound) {
    int counter = 0;
    while (counter < password.length()) {
        if (password[counter] >= lowerBound && password[counter] <= upperBound) {
            return true;
        }
        counter = counter + 1;
    }

    return false;
}


int main() {

    while(true) {

        // Develop a program that checks the strength of a user-entered password. A strong password has the following characteristics:
        string userPassword;
        cout << "Enter a password: ";
        cin >> userPassword;

        bool isLongEnough = false;
        bool hasCapitals = false;
        bool hasLowercase = false;
        bool hasNumerical = false;
        bool hasSpecial = false;
        bool passwordIsASubstring = false;

        //length >= 12
        if (userPassword.length() >= MIN_PASSWORD_LEN) {
            isLongEnough = true;
        }

        //contains capital letters
        hasCapitals = checkForCharsInRange(userPassword, 'A', 'Z');

        //contains lowercase letters
        hasLowercase = checkForCharsInRange(userPassword, 'a', 'z');

        //contains a number
        hasNumerical = checkForCharsInRange(userPassword, '0', '9');

        //contains at least one special character (i.e., chars with ascii value [33,47])
        hasSpecial = checkForCharsInRange(userPassword, '!', '/');

        //does not contain the substring "password"
        if (userPassword.find("password") != -1)  {
            passwordIsASubstring = true;
        }

        //Output whether or not the password is strong. If it is not strong, output a message saying what needs to be improved.
        //The program should loop until a strong password is entered.

        if (isLongEnough && hasCapitals && hasLowercase && hasNumerical && hasSpecial && !passwordIsASubstring) {
            cout << "You have strong password." << endl;
            return 0;
        } else {
            cout << "Your password is weak. ";

            if (!isLongEnough) {
                cout << "Not long enough! ";
            }
            if (!hasCapitals) {
                cout << "Needs capitals! ";
            }
            if (!hasLowercase) {
                cout << "Needs lowercase! ";
            }
            if (!hasNumerical) {
                cout << "Needs numbers! ";
            }
            if (!hasSpecial) {
                cout << "Needs special characters! ";
            }
            if (passwordIsASubstring)  {
                cout << "Cannot contain the word \"password\"!";
            }
        }
    }

    return 0;
}
