//
// Created by Paul Bodily on 11/16/23.
//
#include <iostream>

#include "constants.h"
#include "Disk.h"
#include "Game.h"

using namespace std;

/**
 * Constructor that properly adds towers and disks in the game's initial configuration
 * The number of disks and towers is set by the constants NUM_DISKS and NUM_TOWERS
 */
Game::Game() {
    for (int i = 0; i < NUM_TOWERS; ++i) {
        Tower newTower;
        towers.push_back(newTower);
    }

    for (int i = NUM_DISKS; i > 0; --i) {
        Disk newDisk(i);
        towers[0].push(newDisk);
    }
}


void Game::printInstructions() const {
    cout << "Object of the game is to move all the disks over to Tower 3." << endl
         << "But you cannot place a larger disk onto a smaller disk." << endl << endl;
}

void Game::printWinningMessage() const {
    cout << "You won! Congratulations!!" << endl;
}

/**
 * Moves topmost disk on tower at index fromTower atop disk stack at index toTower. If source tower is empty
 * or move would result in wider disk atop thinner disk, message is printed and move is not executed.
 * @param fromTower 0-based index of source tower
 * @param toTower 0-based index of destination tower
 */
void Game::move(int fromTower, int toTower) {
    if (towers[fromTower].isEmpty() ||
        !towers[toTower].isEmpty() && towers[fromTower].top().width > towers[toTower].top().width ||
        fromTower < 0 || fromTower >= NUM_TOWERS || toTower < 0 || toTower >= NUM_TOWERS) {
        cout << "Invalid move" << endl;
    } else {
        Disk d = towers[fromTower].pop();
        towers[toTower].push(d);
    }
}

/**
 *
 * @return true if game is in a winning configuration (i.e., all disks are on leftmost Tower)
 */
bool Game::hasWinningConfiguration() const {
    return towers[NUM_TOWERS-1].numDisks() == NUM_DISKS;
}

/**
 * prints an ascii text representation of the game in its current configuration
 */
void Game::printCurrentConfiguration() const {
    for (int j = NUM_DISKS - 1; j >= 0; --j) {
        for (int i = 0; i < NUM_TOWERS; ++i) {
            cout << "\t\t";
            if (towers[i].numDisks() <= j) {
                cout << "|";
            } else {
                cout << towers[i].disks[j].width;
            }
            cout << "\t\t";
        }
        cout << endl;
    }
    for (int i = 0; i < NUM_TOWERS*2; ++i) {
        cout << "========";
    }
    cout << "========" << endl;
}