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
    string title;
    // b1 is the top, b4 is the bottom
    Book b1, b2, b3, b4;
};

void printBook(const Book& b){
    cout << b.title << " by " << b.author << " (" << b.numPages
    << " pgs, read " << b.readCount << " times, " << b.averageRating
    << " stars)" << endl;
}

void printBookStack(const BookStack& bs) {
    cout << bs.title << endl;
    cout << "1. ";
    printBook(bs.b1);
    cout << "2. ";
    printBook(bs.b2);
    cout << "3. ";
    printBook(bs.b3);
    cout << "4. ";
    printBook(bs.b4);
}

void updateRating(Book& b) {
    double newRating;
    cout << "How was " << b.title << " on a scale of 0 to 5? ";
    cin >> newRating;

    b.averageRating = (b.averageRating * b.readCount + newRating) / (b.readCount + 1);
}

void incrementReadCount(Book& b) {
    b.readCount += 1;
}

int pickABook(const int& choice, BookStack& bs){
    // This logic percolates the chosen book to the top of the stack
    if (choice == 1) {
        // Do nothing
    } else if (choice == 2) {
        swap(bs.b1, bs.b2);
    } else if (choice == 3) {
        swap(bs.b3, bs.b2);
        swap(bs.b2, bs.b1);
    } else {
        swap(bs.b4, bs.b3);
        swap(bs.b3, bs.b2);
        swap(bs.b2, bs.b1);
    }

    // OPTION 2 to percolate chosen book to top of stack
//    if (choice == 4) {
//        swap(bs.b4, bs.b3);
//    }
//    if (choice >= 3) {
//        swap(bs.b3, bs.b2);
//    }
//    if (choice >= 2) {
//        swap(bs.b2, bs.b1);
//    }

    // solicit user for new rating,
    updateRating(bs.b1);

    // increment its readCount,
    incrementReadCount(bs.b1);
    
    // return number of pages read
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

    BookStack bookStack; // = {"Paul's Book Stack", book1, book2, book3, book4};
    bookStack.title = "Paul's Book Stack";
    bookStack.b1 = book1;
    bookStack.b2 = book2;
    bookStack.b3 = book3;
    bookStack.b4 = book4;

    int totalPagesRead = 0;
    while(true) {
        //Print the bookstack
        printBookStack(bookStack);

        cout << endl;
        //Print the total number of pages read so far
        cout << "Total pages read: " << totalPagesRead << endl << endl;

        //Solicit the user to choose a book to read
        int userChoice;
        cout << "Please choose a book: ";
        cin >> userChoice;

        cout << endl;

        //Remove book from BookStack, and put book back on top of stack
        int numPagesRead = pickABook(userChoice, bookStack);
        totalPagesRead += numPagesRead;
    }

    return 0;
}
