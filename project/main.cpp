//
// Created by Samuel Adebayo on 22/06/24.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>
#include <ctime>
#include "account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

bool checkAdminCredentials() {
    std::string storedUsername, storedPassword;
    std::string inputUsername, inputPassword;
    std::ifstream file("admin_password.txt");

    if (file.is_open()) {
        std::cout << "Enter admin username: ";
        std::cin >> inputUsername;

        while (file >> storedUsername >> storedPassword) {
            if (storedUsername == inputUsername) {
                std::cout << "Enter password for " << inputUsername << ": ";
                std::cin >> inputPassword;
                return inputPassword == storedPassword;
            }
        }
        std::cerr << "Username not found." << std::endl;
        return false;
    } else {
        std::cerr << "Error opening password file." << std::endl;
        return false;
    }
}

void displayHeader() {
    // Current date/time based on current system
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::cout << "Authentication successful. Welcome to the system!\n";

    // Display date in Day-Month-Year format
    std::cout << "\nWelcome to Samuel Adebayo Inc Bank\n";
    std::cout << "Date: " << ltm->tm_mday << "-" << 1 + ltm->tm_mon << "-" << 1900 + ltm->tm_year << std::endl;
    std::cout << "Admin Name: Samuel Adebayo" << std::endl << std::endl;
}

void displayMenu() {
    std::cout << "Bank Account Management System\n";
    std::cout << "1. Create Savings Account\n";
    std::cout << "2. Create Checking Account\n";
    std::cout << "3. Deposit Money\n";
    std::cout << "4. Withdraw Money\n";
    std::cout << "5. Display All Accounts\n";
    std::cout << "6. Apply Monthly Updates\n";
    std::cout << "7. Exit\n";
    std::cout << "Enter your choice: ";
}

void createAccount(std::vector<std::shared_ptr<Account>>& accounts, bool isSavings) {
    std::string name, number;
    double balance, rateOrFee;

    std::cout << "Enter account holder's name: ";
    std::cin >> name;
    std::cout << "Enter account number: ";
    std::cin >> number;
    std::cout << "Enter opening balance: ";
    std::cin >> balance;

    if (isSavings) {
        std::cout << "Enter interest rate (%): ";
        std::cin >> rateOrFee;
        accounts.push_back(std::make_shared<SavingsAccount>(name, number, balance, rateOrFee));
    } else {
        std::cout << "Enter transaction fee: ";
        std::cin >> rateOrFee;
        accounts.push_back(std::make_shared<CheckingAccount>(name, number, balance, rateOrFee));
    }
}

void depositOrWithdraw(std::vector<std::shared_ptr<Account>>& accounts, bool isDeposit) {
    std::string number;
    double amount;

    std::cout << "Enter account number: ";
    std::cin >> number;
    std::cout << "Enter amount: ";
    std::cin >> amount;

    for (auto& account : accounts) {
        if (account->getAccountNumber() == number) {
            if (isDeposit) {
                account->deposit(amount);
            } else {
                account->withdraw(amount);
            }
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void displayAccounts(const std::vector<std::shared_ptr<Account>>& accounts) {
    for (const auto& account : accounts) {
        account->display();
    }
}

void applyMonthlyUpdates(std::vector<std::shared_ptr<Account>>& accounts) {
    for (auto& account : accounts) {
        account->applyMonthlyChanges();
    }
}

int main() {
    if (!checkAdminCredentials()) {
        std::cout << "Invalid credentials. Exiting...\n";
        return 1;
    }

    // Display header with the bank name, current date, and admin name
    displayHeader();

    std::vector<std::shared_ptr<Account>> accounts;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                createAccount(accounts, true);
                break;
            case 2:
                createAccount(accounts, false);
                break;
            case 3:
                depositOrWithdraw(accounts, true);
                break;
            case 4:
                depositOrWithdraw(accounts, false);
                break;
            case 5:
                displayAccounts(accounts);
                break;
            case 6:
                applyMonthlyUpdates(accounts);
                break;
            case 7:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid option, please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
