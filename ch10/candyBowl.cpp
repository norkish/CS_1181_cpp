#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<string>& v){
//    int i = 0;
//    while(i < v.size()){
//        cout << v[i] << endl;
//        i++;
//    }

    for (int j = 0; j < v.size(); ++j) {
        cout << j << ". " << v[j] << endl;
    }
    cout << endl;
}

string selectRandom(const vector<string> &v){
    int i = rand() % v.size();
    return v[i];
}

vector<string> selectNRandom(int n, const vector<string> & v){
    vector<string> returnVector;
    for (int i = 0; i < n; ++i) {
        returnVector.push_back(selectRandom(v));
    }

    return returnVector;
}

int countMatches(const vector<string> & v, const string & stringToMatch) {
    int counter = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == stringToMatch) {
            counter++;
        }
    }
    return counter;
}

int main(){
    srand(time(nullptr));
    vector<string> standardCandyBowl = {"3 Musketeers", "Milky Ways", "Snickers"};

    vector<string> myCandyBowl = standardCandyBowl;

    string dadsFavoriteCandy = "Reese's Peanut Butter Cups";
    myCandyBowl.push_back(dadsFavoriteCandy);

    cout << "Standard Candy Bowl:" << endl;
    printVector(standardCandyBowl);
    cout << "My Candy Bowl:" << endl;
    printVector(myCandyBowl);

    cout << "Random candies: " << endl;
    vector<string> bagOfCandy = selectNRandom(6, myCandyBowl);
    printVector(bagOfCandy);

    int numMatches = countMatches(bagOfCandy, dadsFavoriteCandy);
    cout << "We got " << numMatches << " " << dadsFavoriteCandy << endl;

    return 0;
}
