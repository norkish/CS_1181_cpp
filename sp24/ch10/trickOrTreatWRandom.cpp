#include <cstdlib> // needed for random
#include <iostream>
#include <vector>

using namespace std;

// Write a function printVector() to print out the list of strings using a while loop
void printVector(const vector<string> &vecToPrint) {
    for (int index = 0; index < vecToPrint.size(); index += 1){
        cout << index << ". " << vecToPrint[index] << endl;
    }
}

// Write a function selectRandom() to sample a random string from a vector
string selectRandom(const vector<string> &choices) {
    int randomNumber = random() % choices.size();
    return choices[randomNumber];
}

// randomly select n elements (with replacement) from vector
vector<string> selectNRandom(int n, const vector<string> &choices) {
    vector<string> randomElements;

    // populate randomElements
    // one at a time, over and over
    for (int i = 0; i < n; ++i) {
        // randomly picking a piece of candy
        string randomChoice = selectRandom(choices);
        randomElements.push_back(randomChoice);
    }

    return randomElements;
}

int countMatches(const vector<string> &vec, const string& stringToMatch) {
    int tally = 0;

    // adjust numMatches to the correct value
    // for each item in the list
    for (int i = 0; i < vec.size(); ++i) {
        // check if it's reeses
        if (vec[i] == stringToMatch) {
            // if it is, increase my tally
            tally++;
        }
    }

    return tally;
}


int main() {
    // Create a vector of strings standardCandyBowl representing standard
    // types of candy: 3 Musketeers, Milky Ways, and Snickers
    vector<string> standardCandyBowl(3);

    standardCandyBowl[0] = "3 Musketeers";
    standardCandyBowl[1] = "Milky Ways";
    standardCandyBowl[2] = "Snickers";

    cout << "Standard bowl:" << endl;
    printVector(standardCandyBowl);

    cout << endl << "Copying standard bowl to my bowl" << endl;
    vector<string> myCandyBowl(standardCandyBowl);

    string lastItem = myCandyBowl.back();
    cout << endl << "Removing " << lastItem << " from my bowl" << endl;
    myCandyBowl.pop_back();

    cout << endl << "My bowl:" << endl;
    printVector(myCandyBowl);

    cout << endl << "Adding to standard bowl" << endl;
    standardCandyBowl.push_back("Reeses");

    cout << endl << "Standard bowl:" << endl;
    printVector(standardCandyBowl);

    int numChoices;
    cout << endl << "How many candies do people get? ";
    cin >> numChoices;

    cout << "Calling selectNRandom for Trevor" << endl;
    vector<string> trevorsBag = selectNRandom(numChoices, standardCandyBowl);
    printVector(trevorsBag);

    int numberOfMatches = countMatches(trevorsBag, "Reeses");
    cout << "Num Reeses: " << numberOfMatches << endl;

    numberOfMatches = countMatches(trevorsBag, "Snickers");
    cout << "Num Snickers: " << numberOfMatches << endl;

    vector<string> kids = {"Austin", "Siena", "Autumn", "Aurora"};
    int totalReesesOwed = 0;

    for (int i = 0; i < kids.size(); ++i) {
        cout << endl << "Calling selectNRandom for " << kids[i] << endl;
        vector<string> bag = selectNRandom(numChoices, standardCandyBowl);
        printVector(bag);

        numberOfMatches = countMatches(bag, "Reeses");
        cout << endl << "Num Reeses: " << numberOfMatches << endl;
        double dadTax = 0.33;
        totalReesesOwed += round(numberOfMatches * dadTax);
        cout << kids[i] << " owes Dad " << round(numberOfMatches * dadTax) << endl;
    }

    cout << endl << "Dad gets " << totalReesesOwed << " total Reeses" << endl;

    return 0;
}
