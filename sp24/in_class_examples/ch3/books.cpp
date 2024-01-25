#include <iostream>

using namespace std;

void printBook(string title, string author, int pageCount){
    cout << "The book " << title << ", written by " << author
            << ", has " << pageCount << " pages." << endl;
}

void printBookShelf(){
    string title = "The Count of Monte Cristo";
    string author = "Alexandre Dumas";
    int pages = 2500;

    printBook(title, author, pages);

    printBook("The Secret Garden", "Frances Hodges Burnett", 300);

    printBook("Frankenstein", "Mary Shelly", 450);
}

int main() {

    printBookShelf();

    return 0;
}
