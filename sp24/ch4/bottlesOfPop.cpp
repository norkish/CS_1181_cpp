#include <iostream>

using namespace std;

/**
 * Print lyrics to pop on the wall starting at numOfBottlesLeft
 * @param numOfBottlesLeft starting number
 */
void printLyrics(int numOfBottlesLeft){
    if (numOfBottlesLeft == 0) {
        return;
    }
    cout << "\t" << numOfBottlesLeft << " bottles of 🍺 on the wall, " << numOfBottlesLeft << " bottles of 🍺! "
            "Take one down, pass it around, " << numOfBottlesLeft - 1 <<
         " bottles of 🍺 on the wall!" << endl;
    printLyrics(numOfBottlesLeft - 1);
}


int main() {
    cout << "Printing lyrics for 5 bottles of pop 🍺 on the wall: " << endl;

    printLyrics(500);

    return 0;
}
