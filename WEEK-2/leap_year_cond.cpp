#include <iostream>

int main() {
    int year;
    std::cout << "Enter a four-digit year: ";
    std::cin >> year;

    // Check for four-digit year input
    if (year < 1000 || year > 9999) {
        std::cout << "Invalid input. Please enter a four-digit year only." << std::endl;
    } else {
        // Determine if it's a leap year
        if (year % 4 == 0) {  // First check divisible by 4
            if (year % 100 == 0) {  // Then check divisible by 100
                if (year % 400 == 0) {  // Finally, check divisible by 400
                    std::cout << year << " is a leap year." << std::endl;
                } else {
                    std::cout << year << " is not a leap year." << std::endl;
                }
            } else {
                std::cout << year << " is a leap year." << std::endl;
            }
        } else {
            std::cout << year << " is not a leap year." << std::endl;
        }
    }

    return 0;
}
