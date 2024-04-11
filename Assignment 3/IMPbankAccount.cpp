#include <iostream>
#include "IFbankAccount.h"

bankAccount::bankAccount()
{
    balance = 0;
}

bankAccount::bankAccount( int num, double amount )
{
    setAccountNumber( num );
    deposit( amount );
}

void bankAccount::setAccountNumber( double num )
{
    accountNumber = num;
}

int bankAccount::getAccountNumber() const
{
    return accountNumber;
}

double bankAccount::getBalance() const
{
    return balance;
}

void bankAccount::deposit( double num )
{
    if (num < 0)
    {
        std::cout << "Cannot deposit a negative amount." << std::endl;
    } else 
    {
        balance += num;
    }
}

void bankAccount::withdraw( double num )
{
    if ( num < 0 || num > balance )
    {
        if ( num < 0 )
        {
            std::cout << "Cannot withdraw a negative amount." << std::endl;        
        } else
        {
            std::cout << "Insufficent funds" << std::endl;
        }
    } else
    {
        balance -= num;
    }
}

void bankAccount::print() const
{
    std::cout << "Account Number: " << getAccountNumber() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
}
