#include <iostream>
#include "temperature.h"

int main() {
    int tip = 0;
    std::cout << "Please enter the tip amount ";
    std::cin >> tip;
    std::cout << "You are tipping £" << tip << "\n" ;

    double tempf;
    double tempc;
    std::cout << "Please enter your temperature in Fahrenheit: ";
    std::cin >> tempf;
    if (!std::cin){
        std::cout << "Invalid Input." << std::endl;
        // clear error flag
        std::cin.clear();
//        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input until the end of the line

        // Ignore remianing input until the end of the line
        return 1;

    } else{
        std::cout << "You entered: " << tempf << " Fahrenheit" << std::endl;

        // Assuming temp_conversion_celsius is a function you have defined
        tempc = temp_conversion_celcius(tempf);
        std::cout << "Temperature in Celsius is " << tempc << " degrees." << std::endl;

    }

    return 0;
}
