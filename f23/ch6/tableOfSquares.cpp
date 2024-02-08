#include <iostream>

using namespace std;

int main() {

    int x = 0;
    while(x < 11) {
        cout << x << "^2=\t" << (x*x) << endl;
        x += 1;
    }

    return 0;
}
