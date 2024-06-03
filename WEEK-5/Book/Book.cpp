//
// Created by vboxuser on 28/05/2024.
//

#include "Book.h"
#include <iostream>

Book::Book() : title("Unknown"), author("Unknown"), pages(0) {}

Book::Book(std::string ttl, std::string athr, int pgs) : title(ttl), author(athr), pages(pgs) {}

Book::~Book() {
    std::cout << "Book destroyed: " << title << "\n";
}

void Book::setTitle(const std::string& ttl) {
    title = ttl;
}

void Book::setAuthor(const std::string& athr) {
    author = athr;
}

void Book::setPages(int pgs) {
    pages = pgs;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getPages() const {
    return pages;
}

void Book::display() const {
    std::cout << "Book: " << title << ", Author: " << author << ", Pages: " << pages << "\n";
}

void Book::updatePages(int newPages) {
    pages = newPages;
}

bool Book::comparePages(const Book& other) const {
    return pages == other.getPages();
}
