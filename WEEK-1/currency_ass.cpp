#include <iostream>

int main() {
    // Conversion rates
    const double USD_TO_GBP = 0.81;
    const double EUR_TO_GBP = 0.87;
    const double CNY_TO_GBP = 0.11;
    const double SGD_TO_GBP = 0.60;
    const double MYR_TO_GBP = 0.18;

    // Variables to hold the amount of each currency
    double usd, eur, cny, sgd, myr;

    // Prompt the user and read the amounts of each currency
    std::cout << "Enter the number of US Dollars: ";
    std::cin >> usd;
    std::cout << "Enter the number of Euros: ";
    std::cin >> eur;
    std::cout << "Enter the number of Chinese Yuan: ";
    std::cin >> cny;
    std::cout << "Enter the number of Singapore Dollars: ";
    std::cin >> sgd;
    std::cout << "Enter the number of Malaysian Ringgit: ";
    std::cin >> myr;

    // Convert each amount to GBP
    double pounds = (usd * USD_TO_GBP) + (eur * EUR_TO_GBP) +
                    (cny * CNY_TO_GBP) + (sgd * SGD_TO_GBP) +
                    (myr * MYR_TO_GBP);

    // Output the total in British Pounds
    std::cout << "Total in British Pounds = £" << pounds << std::endl;

    return 0;
}
