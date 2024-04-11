#include <iostream>
#include <vector>

using namespace std;

const int TOWER_HEIGHT = 4;

struct Disk {
    int width;

    Disk(int _width) {
        width = _width;
    }
};

struct Tower {
    vector<Disk> disks;

    void push_back(int diskWidth) {
        Disk newDisk(diskWidth);
        disks.push_back(newDisk);
    }

    void push_back(Disk diskToPush) {
        disks.push_back(diskToPush);
    }

    Disk pop() {
        Disk retrievedDisk = disks.back();
        disks.pop_back();
        return retrievedDisk;
    }

    bool checkIfComplete() {
        if (disks.size() == 3 &&
        disks[0].width == 3 &&
        disks[1].width == 2 &&
        disks[2].width == 1) {
            return true;
        }

        return false;
    }

    void print() {
        for (int i = 0; i < TOWER_HEIGHT; ++i) {
            if (i >= disks.size()) {
                cout << "-";
            } else {
                cout << disks[i].width;
            }
        }
        cout << endl;
    }
};

struct Game {
    vector<Tower> towers;

    Game() {
        Tower tower1;
        tower1.push_back(3);
        tower1.push_back(2);
        tower1.push_back(1);
        towers.push_back(tower1);

        Tower tower2;
        towers.push_back(tower2);

        Tower tower3;
        towers.push_back(tower3);
    }

    void move(int srcTowerIdx, int destTowerIdx) {
        Disk retrievedDisk = towers[srcTowerIdx].pop();
        towers[destTowerIdx].push_back(retrievedDisk);
    }

    bool checkIfWin() {
        Tower lastTower = towers[towers.size()-1];

        if (lastTower.checkIfComplete()) {
            return true;
        }

        return false;
    }

    void printGame(){
        for (int i = 0; i < 3; ++i) {
            towers[i].print();
        }
        cout << endl;
    }
};

int main() {
    Game game;
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(0, 2);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(0, 1);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(2, 1);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(0, 2);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(1, 0);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(1, 2);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    game.move(0, 2);
    game.printGame();

    if (game.checkIfWin()) {
        cout << "You da bomb!" << endl;
    }

    return 0;
}
