#include <iostream>

// Function to check if the year is a leap year
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;  // Divisible by 400, hence a leap year
            }
            return false;     // Divisible by 100 but not by 400, not a leap year
        }
        return true;  // Divisible by 4 but not by 100, a leap year
    }
    return false;     // Not divisible by 4, not a leap year
}

// Main function to drive the program
int main() {
    int year;
    std::cout << "Enter a four-digit year: ";
    std::cin >> year;

    // Check for four-digit year input
    while (year < 1000 || year > 9999) {
        std::cout << "Invalid input. Please enter a four-digit year: ";
        std::cin >> year;
    }

    // Check and display if the year is a leap year
    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
