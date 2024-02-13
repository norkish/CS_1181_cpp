#include <iostream>

using namespace std;

int main() {

    int num = 0;
    while (num <= 10) {
        // print out the number raised to the 2nd power, and then the result
        cout << num << "^2=\t" << pow(num, 2) << endl;
        num = num + 1;
    }


    return 0;
}
