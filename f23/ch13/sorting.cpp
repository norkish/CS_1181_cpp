#include <iostream>
#include <vector>
using namespace std;

void doOnePass(vector<int>& numbers) {
    // For each pass,
    for (int i = 0; i < numbers.size()-1; ++i) {
        // we will move left to right swapping adjacent elements as needed.
        int left = numbers[i];
        int right = numbers[i+1];

        if (left > right) {
            // swap
            swap(numbers[i], numbers[i+1]);
        }
    }
}

void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << v[i];
    }
    cout << endl;
}

void bubbleSort(vector<int> &myNums) {
    for (int i = 0; i < myNums.size(); ++i) {
        doOnePass(myNums);
    }
}

int main() {
    vector<int> myNums;
    srand(time(nullptr));

    for(int i = 0; i < 10; i++) {
        myNums.push_back(rand() % 100);
    }

    printVector(myNums);
    bubbleSort(myNums);
    printVector(myNums);

    return 0;
}
