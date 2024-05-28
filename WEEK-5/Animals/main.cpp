//
// Created by vboxuser on 28/05/2024.
//
#include "Animal.h"

int main() {
    Animal animal1("Tiger", 5, 220.5);
    animal1.display();

    Animal animal2;
    animal2.setSpecies("Elephant");
    animal2.setAge(10);
    animal2.setWeight(5000.0);
    animal2.display();

    animal1.updateWeight(230.0);
    animal1.display();

    if (animal1.compareWeight(animal2)) {
        std::cout << "The animals have the same weight.\n";
    } else {
        std::cout << "The animals have different weights.\n";
    }

    return 0;
}
