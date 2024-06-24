//
// Created by Samuel Adebayo on 22/06/24.
//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "account.h"

class CheckingAccount : public Account {
private:
    double transactionFee;

public:
    CheckingAccount(const std::string& name, const std::string& num, double bal, double fee);

    // Getter and Setter for Transaction Fee
    double getTransactionFee() const { return transactionFee; }
    void setTransactionFee(double fee) { transactionFee = fee; }

    void applyMonthlyChanges() override;
    void display() const override;
};

#endif
