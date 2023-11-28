//
// Created by Paul Bodily on 11/16/23.
//
#include <iostream>

#include "Disk.h"
#include "Tower.h"

using namespace std;

/**
 *
 * @return true if the disk stack at this location is empty
 */
bool Tower::isEmpty() const{
    return numDisks() == 0;
}

/**
 * Returns (but does not remove) the topmost disk of this tower
 * program exits with error code and message if tower is empty
 * @return
 */
Disk Tower::top() const{
    if (isEmpty()){
        cout << "Can't call top() on empty tower" << endl;
        exit(-1);
    }

    Disk returnDisk = disks.back();
    return returnDisk;
}

/**
 * Returns and removes the topmost disk of this tower
 * program exits with error code and message if tower is empty
 * @return
 */
Disk Tower::pop() {
    Disk returnDisk = top();
    disks.pop_back();
    return returnDisk;
}

/**
 *
 * @return the number of disks on this Tower as an integer
 */
int Tower::numDisks() const {
    return disks.size();
}

/**
 * Adds Disk d to top of this Tower's disk stack
 * @param d
 */
void Tower::push(const Disk& d) {
    disks.push_back(d);
}