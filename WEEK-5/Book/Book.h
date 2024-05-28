//
// Created by vboxuser on 28/05/2024.
//

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pages;

public:
    Book();
    Book(std::string ttl, std::string athr, int pgs);
    ~Book();

    void setTitle(const std::string& ttl);
    void setAuthor(const std::string& athr);
    void setPages(int pgs);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getPages() const;

    void display() const;
    void updatePages(int newPages);
    bool comparePages(const Book& other) const;
};

#endif // BOOK_H
