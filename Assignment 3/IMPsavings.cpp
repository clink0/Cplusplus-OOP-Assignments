#include <iostream>
#include "IFsavings.h"

savingsAccount::savingsAccount()
{
    interestRate = 0;
}

savingsAccount::savingsAccount( int num, double amount, double rate )
{
    setAccountNumber( num );
    setInterestRate( rate );
    deposit(amount);
}

void savingsAccount::setInterestRate( double num )
{
    if ( num < 0)
    {
        std::cout << "Interest rate cannot be negative." << std::endl;
    } else if ( num > 1 )
    {
        std::cout << "Interest rate cannot be that high." << std::endl;
    } else
    {
        interestRate = num;    
    }
}

double savingsAccount::getInterestRate() const
{
    return interestRate;
}

double savingsAccount::postInterest()
{
    return balance += ( balance * interestRate );
}

void savingsAccount::withdraw( double amount )
{
    if ( amount < 0 || amount > balance )
    {
        if ( amount < 0 )
        {
            std::cout << "Cannot withdraw a negative amount." << std::endl;        
        } else
        {
            std::cout << "Insufficent funds" << std::endl;
        }
    } else
    {
        balance -= amount;
    }
}

void savingsAccount::print()
{
    std::cout << "Account number: " << getAccountNumber() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
    std::cout << "Interest rate: " << getInterestRate() << std::endl;
}
