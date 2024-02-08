//
// Created by Paul Bodily on 11/16/23.
//

#ifndef HANOI_TOWER_H
#define HANOI_TOWER_H

using namespace std;

struct Tower{
    vector<Disk> disks;

    bool isEmpty() const;
    Disk top() const;
    Disk pop();
    void push(const Disk& d);
    int numDisks() const;
};

#endif //HANOI_TOWER_H
