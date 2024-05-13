//
// Created by qub-hri on 13/05/24.
//
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main () {
    srand (time(NULL));
    int coin = rand() % 2;

    if (coin == 0) {
    std::cout << "Heads\n";
    }
    else {
    std::cout << "Tails\n";
    }
}