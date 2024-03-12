#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int numPages;
    double averageRating;
    int readCount;
};

void printBook(Book b){
    cout << "\t" << b.title << " by "
         << b.author << " (" << b.numPages
         << " pgs, read " << b.readCount << " times, "
         << b.averageRating << " stars)" << endl;
}

int main() {
    string title = "The Count of Monte Cristo";
    string author = "Alexandre Dumas";
    int pageCount = 1136;

    Book book1 = {title, author, pageCount, 0, 0};
    Book book2 = {"The Hatchet", "Gary Paulsen", 195, 0, 0};
    Book book3 = {"Holes", "Louis Sachar", 288, 0, 0};
    Book book4 = {"The Cat in the Hat", "Dr. Seuss", 61, 0, 0};

    printBook(book1);
    printBook(book2);
    printBook(book3);
    printBook(book4);

    return 0;
}
