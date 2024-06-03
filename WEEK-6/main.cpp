//
// Created by Samuel Adebayo on 03/06/2024.
//
// main.cpp
#include "movie.h"
#include <iostream>
using namespace std;

int main() {
    Movie m("The Lion King", 1994, "Adventure");
    m.printDetails();
    m.setTitle("Forrest Gump");
    cout << "New title: " << m.getTitle() << endl;
}
