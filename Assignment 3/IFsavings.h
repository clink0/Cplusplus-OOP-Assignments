#pragma once
#include "IFbankAccount.h"

class savingsAccount : bankAccount
{
protected:
    double interestRate;

public:
    savingsAccount();
    savingsAccount( int num, double amount, double rate);

    void setInterestRate( double );
    double getInterestRate() const;
    double postInterest();
    void withdraw( double amount );
    void print();
};