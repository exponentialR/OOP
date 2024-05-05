//
// Created by iamshri on 04/05/24.
//

#include <iostream>

int main() {
    double weight;
    int planet_number;

    std::cout << " What is your current earth weight in Kg \n";

    std::cin >> weight;

    std:: cout << "Please enter a number (1-7) for the planet you want to fight on: \n";
    std::cin >> planet_number;

    if (planet_number == 1) {
        weight = weight * 0.78;
        std::cout << "You have picked Mercury as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }
    else if (planet_number == 2) {
        weight = weight * 0.39;
        std::cout << "You have picked Mercury as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }

    else if (planet_number == 3) {
        weight = weight * 2.65;
        std::cout << "You have picked Mars as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }

    else if (planet_number == 4) {
        weight = weight * 1.17;
        std::cout << "You have picked Jupiter as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }

    else if (planet_number == 5) {
        weight = weight * 1.05;
        std::cout << "You have picked Saturn as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }

    else if (planet_number == 6) {
        weight = weight * 1.23;
        std::cout << "You have picked Uranus as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }

    else  {
        std::cout << " You have picked Neptune as your planet to fight on! \n" << "So your weight will be " << weight << "\n";
    }

    return 0;
}