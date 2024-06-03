//
// Created by vboxuser on 28/05/2024.
//

#include "Book.h"

int main() {
    Book book1("1984", "George Orwell", 328);
    book1.display();

    Book book2;
    book2.setTitle("To Kill a Mockingbird");
    book2.setAuthor("Harper Lee");
    book2.setPages(281);
    book2.display();

    book1.updatePages(300);
    book1.display();

    if (book1.comparePages(book2)) {
        std::cout << "Both books have the same number of pages.\n";
    } else {
        std::cout << "The books have different numbers of pages.\n";
    }

    return 0;
}
