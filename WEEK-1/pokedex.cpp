//
// Created by iamshri on 04/05/24.
//
#include <iostream>

int main() {
    int number =9;

    switch(number){
        case 1 :
            std::cout << "Bulbusaur \n";
            break;
        case 2 :
            std::cout << "Ivysaur\n";
            break;
        case 3 :
            std::cout << "Venusaur\n";
            break;
        case 4 :
            std::cout << "Charmander\n";
            break;
        case 5 :
            std::cout << "Charmeleon\n";
            break;
        case 6 :
            std::cout << "Charizard\n";
            break;
        case 7 :
            std::cout << "Squirtle\n";
        case 8 :
            std::cout << "Wartortle\n";
        case 9 :
            std::cout << "Blastoise\n";
        default :
            std::cout << "Unknown\n";
            break;
    }
}