#pragma once
#include "IFbankAccount.h"

class checkingAccount : bankAccount
{
private:
    double interestRate;
    double minimumBalance;
    double serviceCharge;

public:
    checkingAccount();
    checkingAccount( int num, double amount, double rate, double minBalance, double charge );
    
    void setInterestRate( double );
    void setMinimumBalance( double );
    void setServiceCharge( double );

    double getServiceCharge();
    double getMinimumBalance() const;
    bool checkMinimumBalance() const;
    void writeCheck( double );
    void withdraw( double );
    void print();
};