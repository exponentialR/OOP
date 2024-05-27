//
// Created by iamshri on 27/05/24.
//

#include <iostream>
#include <string>

int main() {
    // Declare variables
    std::string dogName;
    int dogAge;
    int humanYears;

    // Prompt the user to enter the dog's name and age
    std::cout << "Enter your dog's name: ";
    std::getline(std::cin, dogName);

    std::cout << "Enter your dog's age in dog years: ";
    std::cin >> dogAge;

    // Calculate the dog's age in human years
    if (dogAge <= 2) {
        humanYears = dogAge * 10.5;
    } else {
        humanYears = 21 + (dogAge - 2) * 4;
    }

    // Output the result
    std::cout << dogName << " is " << humanYears << " years old in human years." << std::endl;

    return 0;
}
