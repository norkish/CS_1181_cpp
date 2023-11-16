//
// Created by Paul Bodily on 11/16/23.
//
#include <iostream>

#include "constants.h"
#include "Disk.h"
#include "Game.h"

using namespace std;

/**
 * Constructor that properly adds towers and disks in the games initial configuration
 * The number of disks and towers is set by the constants NUM_DISKS and NUM_TOWERS
 */
Game::Game() {
    // TODO
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
    // TODO
}

/**
 *
 * @return true if game is in a winning configuration (i.e., all disks are on leftmost Tower)
 */
bool Game::hasWinningConfiguration() const {
    // TODO
}

/**
 * prints an ascii text representation of the game in its current configuration
 */
void Game::printCurrentConfiguration() const {
    // TODO
}