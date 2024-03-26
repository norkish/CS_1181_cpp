#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<double> &vecToPrint) {
    size_t index = 0;
    while (index < vecToPrint.size()) {
        cout << "Heart rate number " << (index+1) << " is " << vecToPrint[index] << " bpm" << endl;

        index += 1;
    }
}

void printVectorWithForLoop(const vector<double> &vecToPrint) {
    for(size_t index = 0; index < vecToPrint.size(); index += 1) {
        cout << "Heart rate number " << (index+1) << " is " << vecToPrint[index] << " bpm" << endl;
    }
}

int main() {
    vector<double> heartRateReadings(5);

    heartRateReadings[0] = 98;
    heartRateReadings[1] = 67;
    heartRateReadings[2] = 99;
    heartRateReadings[3] = 92;
    heartRateReadings[4] = 120;

    printVector(heartRateReadings);

    return 0;
}
