#include <iostream>

using namespace std;

string getUserInput() {
    cout << "Input: ";
    string input;
    getline(cin, input);
    return input;
}

bool isPalindrome(string candidate) {
    string reverseCandidate = candidate;
    // create the reverse
    reverse(reverseCandidate.begin(), reverseCandidate.end());

    //do direct string comparison
    if (reverseCandidate == candidate) {
        return true;
    } else {
        return false;
    }
}

string removeWhiteSpace(string s) {
    string new_s;
    // iterate over each char
    int currLetterIdx = 0;
    while (currLetterIdx < s.length()) {
        //	if char isn't space
        char currLetter = s[currLetterIdx];
        if (!isspace(currLetter)) {
            //		add it to the growing new string
            new_s += currLetter;
        }

        currLetterIdx += 1;
    }

    return new_s;
}

int main() {

    string userInput = getUserInput();
    userInput = removeWhiteSpace(userInput);
    cout << "With spaces removed: " << userInput << endl;

    if(isPalindrome(userInput)) {
        cout << "Your input——ignoring spaces——is a palindrome" << endl;
    } else {
        cout << "Your input——ignoring spaces——is NOT a palindrome" << endl;
    }

    return 0;
}
