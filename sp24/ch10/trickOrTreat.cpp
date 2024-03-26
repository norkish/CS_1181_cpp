#include <iostream>
#include <vector>

using namespace std;

// Write a function printVector() to print out the list of strings using a while loop
void printVector(const vector<string> &vecToPrint) {
    int index = 0;
    while (index < vecToPrint.size()){
        cout << index << ". " << vecToPrint[index] << endl;

        index += 1;
    }
}

// Write a function printVector() to print out the list of strings using a while loop
void printVectorWithForLoop(const vector<string> &vecToPrint) {
    for (int index = 0; index < vecToPrint.size(); index += 1){
        cout << index << ". " << vecToPrint[index] << endl;
    }
}

int main() {
    // Create a vector of strings standardCandyBowl representing standard
    // types of candy: 3 Musketeers, Milky Ways, and Snickers
    vector<string> standardCandyBowl(3);

    standardCandyBowl[0] = "3 Musketeers";
    standardCandyBowl[1] = "Milky Ways";
    standardCandyBowl[2] = "Snickers";

    printVector(standardCandyBowl);

    printVectorWithForLoop(standardCandyBowl);

    return 0;
}
