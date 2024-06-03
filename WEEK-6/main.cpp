//
// Created by Samuel Adebayo on 03/06/2024.
//
// main.cpp
#include "Movie.h"
int main() {
    Movie m("The Lion King", 1994, "Adventure");
    m.printDetails();
    m.setTitle("Forrest Gump");
    std::cout << "New title: " << m.getTitle() << std::endl;
}
