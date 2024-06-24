//
// Created by iamshri on 22/06/24.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const std::string& name, const std::string& num, double bal, double rate)
        : Account(name, num, bal), interestRate(rate) {}

void SavingsAccount::applyMonthlyChanges() {
    double interest = balance * (interestRate / 12);
    balance += interest;
}

void SavingsAccount::display() const {
    Account::display();
    std::cout << "Interest Rate: " << interestRate << "%" << std::endl;
}
