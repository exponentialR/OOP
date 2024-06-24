//
// Created by Samuel Adebayo on 22/06/24.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(const std::string& name, const std::string& num, double bal, double fee)
        : Account(name, num, bal), transactionFee(fee) {}

void CheckingAccount::applyMonthlyChanges() {
    if (balance < 500) {  // Example condition
        balance -= transactionFee;
    }
}

void CheckingAccount::display() const {
    Account::display();
    std::cout << "Transaction Fee: $" << transactionFee << std::endl;
}
