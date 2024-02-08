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

int findLengthOfLongestElement(const vector<string> &bowl) {
    int largest = 0;

    for (int i = 0; i < bowl.size(); ++i) {
        string currString = bowl[i];
        if (currString.length() > largest) {
            largest = currString.length();
        }
    }

    return largest;
}

/**
 * this function generates a histogram where the count at index i equals the number of
 * occurrences of the bowl's ith string in the bag vector
 * @param bag
 * @param bowl
 * @return
 */
vector<int> generateHistogram(const vector<string> &bag, const vector<string> &bowl) {
    vector<int> histogram(bowl.size());

    // for each candy x in myCandyBowl
    for (int i = 0; i < bowl.size(); ++i) {
        string currCandyBar = bowl[i];
        // count how many x's are in Austin's bag
        int count = countMatches(bag, currCandyBar);
        histogram[i] = count;
    }

    return histogram;
}

void printHistogram(const vector<int> &histogram, const vector<string> &labels) {

    int length = findLengthOfLongestElement(labels);

    // at each index
    for (int i = 0; i < histogram.size(); ++i) {
        cout << i << ". " << labels[i] << " ";
        for (int j = 0; j < (length - labels[i].length()); ++j) {
            cout << " ";
        }
        // get the count (n)
        int count = histogram[i];
        // and print n X's
        for (int j = 0; j < count; ++j) {
            cout << "X";
        }
        cout << endl;
    }
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

    cout << "Austin's Bag: " << endl;
    vector<string> bagOfCandy = selectNRandom(6, myCandyBowl);
    printVector(bagOfCandy);

    int numMatches = countMatches(bagOfCandy, dadsFavoriteCandy);
    cout << "Austin got " << numMatches << " " << dadsFavoriteCandy << endl;

    double dadTax = double(rand()) / RAND_MAX;
    cout << "Random Dad Tax: " << dadTax << endl;

    cout << "Dad is owed " << numMatches * dadTax << " " << dadsFavoriteCandy << endl;

    vector<int> histogram = generateHistogram(bagOfCandy, myCandyBowl);

    printHistogram(histogram, myCandyBowl);

    return 0;
}
