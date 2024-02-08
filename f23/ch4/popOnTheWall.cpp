#include <iostream>

using namespace std;

void printLyricsOfPopOnWall(int numberOfBottles) {
    if (numberOfBottles <= 0) {
        cout << "No more bottles of beer on the wall!" << endl;
    } else {
        cout << numberOfBottles << " bottles of 🍺 on the wall, " <<
        numberOfBottles << " bottles of 🍺! Take one down, pass it around, " <<
        (numberOfBottles - 1) << " bottles of 🍺 on the wall!" << endl;

        printLyricsOfPopOnWall(numberOfBottles - 1);
    }
}


int main() {
    int  numBottles = 99;

    cout << "Printing lyrics for " << numBottles << " bottles of pop on the wall:" << endl;

    printLyricsOfPopOnWall(numBottles);

    return 0;
}
