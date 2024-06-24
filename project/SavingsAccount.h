//
// Created by Samuel Adebayo on 22/06/24.
//
#include "account.h"

#ifndef OOP_SAVINGSACCOUNT_H
#define OOP_SAVINGSACCOUNT_H


class SavingsAccount: public Account{
private:
    double interestRate;
public:
    SavingsAccount(const std::string& name, const std::string& num, double bal, double rate);

    // Getters
    double getInterestRate() const { return interestRate; };
    void setInterestRate(double rate) { interestRate = rate; };

    // Member functions
    void applyMonthlyChanges() override;
    void display() const override;


};


#endif //OOP_SAVINGSACCOUNT_H
