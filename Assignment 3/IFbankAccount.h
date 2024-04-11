#pragma once

class bankAccount
{
protected:
    int accountNumber;
    double balance;

public:
    bankAccount();
    bankAccount( int num, double amount );
    int getAccountNumber() const;
    double getBalance() const;
    void setAccountNumber( double num );    
    void deposit( double );
    void withdraw( double );
    void print() const;
};
