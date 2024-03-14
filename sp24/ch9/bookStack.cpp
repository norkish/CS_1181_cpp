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
    Book b1;
    Book b2;
    Book b3;
    Book b4;
};

void printBook(const Book &b){
    cout << "\t" << b.title << " by "
         << b.author << " (" << b.numPages
         << " pgs, read " << b.readCount << " times, "
         << b.averageRating << " stars)" << endl;
}

void printBookStack(const BookStack &bs) {
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

void rateBook(Book &b) {
    cout << "Please rate " << b.title << " on a scale of 1 to 5: ";
    string userInput;

    int newRating;
    cin >> newRating;

    b.averageRating = ((b.averageRating * b.readCount) + newRating) / (b.readCount+1);
    b.readCount += 1;
}

int promptUserForChoice() {
    int userChoice;
    cout << endl << "Which book do you wanna read? ";
    cin >> userChoice;
    return userChoice;
}

/**
 *
 * @param book
 * @return number of pages read
 */
int readBook(Book &book) {
    printBook(book);
    rateBook(book);

    return book.numPages;
}

void moveBookToTopOfStack(int bookPosition, BookStack &bookStack) {
    if (bookPosition == 1) {
        // do nothing
    } else if (bookPosition == 2) {
        swap(bookStack.b1, bookStack.b2);
    } else if (bookPosition == 3) {
        swap(bookStack.b3, bookStack.b2);
        swap(bookStack.b2, bookStack.b1);
    } else if (bookPosition == 4) {
        swap(bookStack.b4, bookStack.b3);
        swap(bookStack.b3, bookStack.b2);
        swap(bookStack.b2, bookStack.b1);
    }
}


int main() {
    string title = "The Count of Monte Cristo";
    string author = "Alexandre Dumas";
    int pageCount = 1136;

    Book book1 = {title, author, pageCount, 0, 0};
    Book book2 = {"The Hatchet", "Gary Paulsen", 195, 0, 0};
    Book book3 = {"Holes", "Louis Sachar", 288, 0, 0};
    Book book4 = {"The Cat in the Hat", "Dr. Seuss", 61, 0, 0};

    BookStack bookStack = {"Paul's bookstack", book1, book2, book3, book4};

    int pagesReadSoFar = 0;
    while (true) {
        printBookStack(bookStack);
        cout << endl << pagesReadSoFar << " pages read so far" << endl;

        int userChoice = promptUserForChoice();

        if (userChoice == 1) {
            pagesReadSoFar += readBook(bookStack.b1);
        } else if (userChoice == 2) {
            pagesReadSoFar += readBook(bookStack.b2);
        } else if (userChoice == 3) {
            pagesReadSoFar += readBook(bookStack.b3);
        } else if (userChoice == 4) {
            pagesReadSoFar += readBook(bookStack.b4);
        }
        moveBookToTopOfStack(userChoice, bookStack);
        
        cout << endl;
    }

    return 0;
}
