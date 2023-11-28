//
// Created by Paul Bodily on 11/16/23.
//

#ifndef HANOI_GAME_H
#define HANOI_GAME_H
#include <vector>

#include "Tower.h"

using namespace std;

struct Game{
    vector<Tower> towers;

    Game();

    void printInstructions() const;
    void printWinningMessage() const;
    void move(int fromTower, int toTower);
    bool hasWinningConfiguration() const;
    void printCurrentConfiguration() const;
};

#endif //HANOI_GAME_H
