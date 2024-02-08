#include <iostream>

#include "Disk.h"
#include "Game.h"

using namespace std;

int main() {
    Game g;

//    Disk d(3);
//    cout << d.width << endl;
//
//    Tower t;
//
//    cout << t.numDisks() << endl;
//    cout << boolalpha<< t.isEmpty() << endl;
//
//    t.push(d);
//    cout << t.numDisks() << endl;
//    cout << boolalpha<< t.isEmpty() << endl;
//
//    Disk d1 = t.top();
//    cout << d1.width << endl;
//    cout << t.numDisks() << endl;
//    cout << boolalpha<< t.isEmpty() << endl;
//
//    Disk d2 = t.pop();
//    cout << d2.width << endl;
//    cout << t.numDisks() << endl;
//    cout << boolalpha<< t.isEmpty() << endl;

    g.printCurrentConfiguration();
    g.printInstructions();

    int from, to;
    while(!g.hasWinningConfiguration()) {
        cout << endl << "Input two 0-based integers representing the from- and to-indices: " ;
        cin >> from >> to;

        g.move(from, to);
        g.printCurrentConfiguration();
    }

    g.printWinningMessage();

    return 0;
}
