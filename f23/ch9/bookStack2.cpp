#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int numPages;
    double averageRating;
    int readCount;
};

struct BookStack {
    string name;
    // b1 is the top, b4 is the bottom
    Book b1, b2, b3, b4;
};

void printBook(int number, const Book& b){
    cout << "\t" << number << ". " << b.title << " by "
         << b.author << " (" << b.numPages
         << " pgs, read " << b.readCount << " times, "
         << b.averageRating << " stars)" << endl;
}

void printBookStack(const BookStack& bs) {
    cout << bs.name << endl;

    printBook(1, bs.b1);
    printBook(2, bs.b2);
    printBook(3, bs.b3);
    printBook(4, bs.b4);
}

int pickAndReadBook(int choice, BookStack& bs) {
    if (choice == 2) {
        Book tmp = bs.b2;
        bs.b2 = bs.b1;
        bs.b1 = tmp;
    } else if (choice == 3) {
        Book tmp = bs.b3;
        bs.b3 = bs.b2;
        bs.b2 = bs.b1;
        bs.b1 = tmp;
    } else if (choice == 4) {
        Book tmp = bs.b4;
        bs.b4 = bs.b3;
        bs.b3 = bs.b2;
        bs.b2 = bs.b1;
        bs.b1 = tmp;
    }

    // Other
//    if (choice >= 4) {
//        swap(bs.b3, bs.b4);
//    }
//    if (choice >= 3) {
//        swap(bs.b2, bs.b3);
//    }
//    if (choice >= 2) {
//        swap(bs.b1, bs.b2);
//    }


    double newRating;
    cout << "How would you rate " << bs.b1.title << "? ";
    cin >> newRating;

    bs.b1.averageRating = ((bs.b1.averageRating*bs.b1.readCount) + newRating)/ (bs.b1.readCount+1);
    bs.b1.readCount++;

    return bs.b1.numPages;
}

int main() {
    string title = "The Count of Monte Cristo";
    string author = "Alexandre Dumas";
    int pageCount = 1136;

    Book book1 = {title, author, pageCount, 0, 0};
    Book book2 = {"The Hatchet", "Gary Paulsen", 195, 0, 0};
    Book book3 = {"Holes", "Louis Sachar", 288, 0, 0};
    Book book4 = {"The Cat in the Hat", "Dr. Seuss", 61, 0, 0};

    BookStack bStack = {"Paul's favorite books", book1, book2, book3, book4};

    int totalPages = 0;
    while(true) {
        //Print the bookstack
        printBookStack(bStack);

        cout << endl;
        //Print the total number of pages read so far
        cout << "Total pages read: " << totalPages << endl;
        cout << endl;

        //Solicit the user to choose a book to read
        int userChoice;
        cout << "Select a book: ";
        cin >> userChoice;

        cout << endl;

        //Remove book from BookStack, and put book back on top of stack
        int numPagesRead = pickAndReadBook(userChoice, bStack);

        //Update total num pages read so far
        totalPages += numPagesRead;

        //Update the books stats, including readCount, avgRating
    }

    return 0;
}
