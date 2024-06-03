// Movie.h
#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
    std::string title;
    int year;
    std::string genre;

public:
    Movie();
    Movie(std::string t, int y, std::string g);

    std::string getTitle() const;
    void setTitle(std::string t);

    int getYear() const;
    void setYear(int y);

    std::string getGenre() const;
    void setGenre(std::string g);

    void printDetails() const;
};

#endif //MOVIE_H
