#include <iostream>
#include <vector>

using namespace std;

int findMax(const vector<int> &vec) {
    if (vec.size() == 0) {
        cout << "Vector is dead empty" << endl;
        exit(-1);
    }

    int biggestSoFar = vec[0];
    for(int i = 0; i < vec.size(); i++) {
        if (vec[i] > biggestSoFar) {
            biggestSoFar = vec[i];
        }
    }

    return biggestSoFar;
}


/**
 * Return the minimum element in a vector
 * @return the minimum element in a vector
 */
int findMinimum(const vector<int> &vec) {
    if (vec.size() == 0) {
        return -1;
    }

    int smallestSoFar = vec[0];
    for (int i = 0; i < vec.size(); ++i) {
    // go through each number and compare against smallest so far
        int ithNumber = vec[i];
        if (ithNumber < smallestSoFar) {
            smallestSoFar = ithNumber;
        }
    }

    return smallestSoFar;
}

int main() {

    vector<int> numbers = {5,2,7,9,3,6,12,3,9};

    // calculate sum
    int runningTotal = 0;
    for(int i = 0; i < numbers.size(); i++) {
        // when looking at the ith element
//        runningTotal += numbers[i];

        int ithNumber = numbers[i];
        runningTotal = runningTotal + ithNumber;
    }
    cout << "Sum: " << runningTotal << endl;

    // calculate average value
    double avg = runningTotal * 1.0 / numbers.size();
    cout << "Avg: " << avg << endl;

    // find minimum
    int min = findMinimum(numbers);
    cout << "Min: " << min << endl;

    // find maximum
    int max = findMax(numbers);
    cout << "Max: " << max << endl;

    // count number of 9's and 6's
    int matchesSoFar = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == 6 || numbers[i] == 9) {
            matchesSoFar++;
        }
    }
    cout << "Matches: " << matchesSoFar << endl;


    // percentage of numbers less than 5
    int countSoFar = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i]< 5) {
            countSoFar++;
        }
    }
    cout << "Percentage: " << countSoFar * 100.0 / numbers.size() << endl;

    return 0;
}
