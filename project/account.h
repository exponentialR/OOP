//
// Created by Samuel Adebayo on 22/06/24.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>

class Account {
protected:
    std::string accountName;
    std::string accountNumber;
    double balance;

public:
    Account(const std::string& name, const std::string& num, double bal);

    // Getters
    std::string getAccountName() const { return accountName; }
    std::string getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }

    // Setters - Declaration only
    void setAccountName(const std::string& name);
    void setAccountNumber(const std::string& num);
    void setBalance(double bal);

    void deposit(double amount);
    void withdraw(double amount);
    virtual void applyMonthlyChanges() = 0;
    virtual void display() const;
};

#endif

