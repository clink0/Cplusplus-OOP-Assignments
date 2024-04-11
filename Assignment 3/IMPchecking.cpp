#include <iostream>
#include "IFchecking.h"

checkingAccount::checkingAccount()
{
    interestRate = 0;
    serviceCharge = 0;
    minimumBalance = 0;
}

checkingAccount::checkingAccount( int num, double amount, double rate, double minBalance, double charge )
{
    setAccountNumber( num );
    setInterestRate( rate );
    setMinimumBalance( minBalance );
    setServiceCharge( charge );
    balance = amount;
}

void checkingAccount::setInterestRate( double num )
{
    if ( num < 0 )
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

void checkingAccount::setMinimumBalance( double num )
{
    if ( num < 0 )
    {
        std::cout << "Minimum balance cannot be negative." << std::endl;
    } else
    {
        minimumBalance = num;
    }

}

void checkingAccount::setServiceCharge( double num )
{
    if ( num < 0 )
    {
        std::cout << "Service charge cannot be negative." << std::endl;
    } else
    {
        serviceCharge = num;        
    }

}

double checkingAccount::getServiceCharge()
{
    return serviceCharge;
}

double checkingAccount::getMinimumBalance() const
{
    return minimumBalance;
}

bool checkingAccount::checkMinimumBalance() const
{
    if ( balance <= minimumBalance )
    {
        std::cout << "True" << std::endl;
        return true;
    } else
    {
        std::cout << "False" << std::endl;
        return false;
    }
}

void checkingAccount::writeCheck( double num )
{
    withdraw(num);
}

void checkingAccount::withdraw( double num )
{
    if ( num < 0 || num > balance )
    {
        if ( num < 0 )
        {
            std::cout << "Cannot withdraw a negative amount." << std::endl;
        } else
        {
            std::cout << "Insufficient funds." << std::endl;
        }
    } else
    {
        if (( balance - num ) >= minimumBalance )
        {
            balance -= num;  
        } else
        {
            balance -= ( num + serviceCharge );
        }

    }
}

void checkingAccount::print()
{
    std::cout << "Account number: " << getAccountNumber() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
    std::cout << "Minimum balance: " << getMinimumBalance() << std::endl;
    std::cout << "Service charge: " << getServiceCharge() << std::endl;
    std::cout << "Interest rate: " << interestRate << std::endl;
}
