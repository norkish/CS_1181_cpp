#include <iostream>

using namespace std;

struct PassengerInfo {
    string name;
    int row;
    char seat;
    int numBags;
    string ffid;
};

void printSummary(PassengerInfo& pInfo) {
    cout << pInfo.name << " (" << pInfo.row << pInfo.seat << ")" << endl;
}

int main() {

    PassengerInfo p1Info = {"Gary", 5, 'A', 3, "ADU98A"};
    PassengerInfo p2Info = {"Marissa", 6, 'C', 4, "*&FD*&"};
    PassengerInfo p3Info = {"Paul", 9, 'D', 0, "FUFUFAUFD"};
    PassengerInfo p4Info = {"Melaniia", 7, 'F', 3, "DF(*DSF&AD&"};

    printSummary(p1Info);
    printSummary(p2Info);
    printSummary(p3Info);
    printSummary(p4Info);

    int totalBags = p1Info.numBags + p2Info.numBags + p3Info.numBags + p4Info.numBags;

    cout << "Total bags: " << totalBags << endl;

    return 0;
}
