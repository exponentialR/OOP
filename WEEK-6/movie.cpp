//
// Created by Samuel Adebayo on 03/06/2024.
//
// Movie.cpp
#include "movie.h"
#include <iostream>

Movie::Movie() : title(""), year(-1), genre("") {}

Movie::Movie(std::string t, int y, std::string g) : title(t), year(y), genre(g) {}

std::string Movie::getTitle() const {
    return title;
}

void Movie::setTitle(std::string t) {
    title = t;
}

int Movie::getYear() const {
    return year;
}

void Movie::setYear(int y) {
    year = y;
}

std::string Movie::getGenre() const {
    return genre;
}

void Movie::setGenre(std::string g) {
    genre = g;
}

void Movie::printDetails() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Genre: " << genre << std::endl;
}
