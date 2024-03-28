#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << endl << "Reading in 6 numbers into a vector" << endl;
    vector<int> nums;
    for (int i = 0; i < 6; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
        cout << num << " ";
    }
}
