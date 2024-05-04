//
// Created by iamshri on 04/05/24.
//
#include <iostream>
#include <stdlib.h>
#include <ctime>


int main (){
    srand (time(NULL));
    int coin = rand()%3;

    if (coin == 0){
        std::cout<< "Heads\n";

    }
    else if (coin == 1){
        std::cout <<"None \n";
    }
    else {
        std::cout <<"Tails\n";
    }
}