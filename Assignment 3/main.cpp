#include <iostream>
#include "IFbankAccount.h"
#include "IFsavings.h"
#include "IFchecking.h"

int main ()
{
    //bankAccount class tests
    std::cout << "********************************************" << std::endl << std::endl;
    std::cout << "Constructor test" << std::endl;
    bankAccount lukesAccount(1, 250);
    lukesAccount.print();
    std::cout << std::endl;

    std::cout << "setAccountNumber test" << std::endl;
    lukesAccount.setAccountNumber(2);
    std::cout << "Account number is: " << lukesAccount.getAccountNumber() << std::endl;
    std::cout << "Balance is: " << lukesAccount.getBalance() << std::endl <<std::endl;

    std::cout << "deposit test" << std::endl;
    lukesAccount.deposit(500);
    lukesAccount.print();
    std::cout << std::endl;

    std::cout << "negative deposit test" << std::endl;
    lukesAccount.deposit(-500000);
    lukesAccount.print();
    std::cout << std::endl;

    std::cout << "withdraw test" << std::endl;
    lukesAccount.withdraw(25);
    lukesAccount.print();
    std::cout << std::endl;    

    std::cout << "withdraw more than balance test" << std::endl;
    lukesAccount.withdraw(300000);
    lukesAccount.print();
    std::cout << std::endl;    

    std::cout << "withdraw negative amount test" << std::endl;
    lukesAccount.withdraw(-500);
    lukesAccount.print();
    std::cout << std::endl;    

    //savingsAccount class tests
    std::cout << "********************************************" << std::endl << std::endl;
    std::cout << "savingsAccount class tests" << std::endl;
    std::cout << "Constructor test" << std::endl;
    savingsAccount irisAccount(2, 450, .09);
    irisAccount.print();
    std::cout << std::endl;   

    std::cout << "setInterestRate test" << std::endl;
    irisAccount.setInterestRate(.1);
    irisAccount.print();
    std::cout << std::endl; 

    std::cout << "setInterestRate too high test" << std::endl;
    irisAccount.setInterestRate(2);
    irisAccount.print();
    std::cout << std::endl; 

    std::cout << "setInterestRate negative test" << std::endl;
    irisAccount.setInterestRate(-.08);
    irisAccount.print();
    std::cout << std::endl; 

    std::cout << "getInterestRate test" << std::endl;
    std::cout << "Interest rate is: " << irisAccount.getInterestRate() << std::endl << std::endl;

    std::cout << "postInterest test" << std::endl;
    irisAccount.postInterest();
    irisAccount.print();
    std::cout << std::endl; 

    std::cout << "withdraw test" << std::endl;
    irisAccount.withdraw(20);
    irisAccount.print();
    std::cout << std::endl; 

    std::cout << "withdraw more than balance test" << std::endl;
    irisAccount.withdraw(500000000);
    irisAccount.print();
    std::cout << std::endl; 

    std::cout << "withdraw negative amount test" << std::endl;
    irisAccount.withdraw(-300);
    irisAccount.print();
    std::cout << std::endl; 


    //checkingAccount class tests
    std::cout << "********************************************" << std::endl << std::endl;
    std::cout << "checkingAccount class tests" << std::endl;
    std::cout << "Constructor test" << std::endl;
    checkingAccount taylorAccount(3, 700, .08, 100, 15);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "setInterestRate test" << std::endl;
    taylorAccount.setInterestRate(.05);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "setInterestRate negative test" << std::endl;
    taylorAccount.setInterestRate(-.05);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "setInterestRate too high test" << std::endl;
    taylorAccount.setInterestRate(2);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "setMinimumBalance test" << std::endl;
    taylorAccount.setMinimumBalance(50);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "setMinimumBalance negative test" << std::endl;
    taylorAccount.setMinimumBalance(-200);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "getMinimumBalance test" << std::endl;
    std::cout << "Minimum balance is: " << taylorAccount.getMinimumBalance() << std::endl << std::endl;

    std::cout << "setServiceCharge test" << std::endl;
    taylorAccount.setServiceCharge(45);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "setServiceCharge negative test" << std::endl;
    taylorAccount.setServiceCharge(-45);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "getServiceCharge test" << std::endl;
    std::cout << "Service charge is: " << taylorAccount.getServiceCharge() << std::endl << std::endl;

    std::cout << "checkMinimumBalance above test" << std::endl;    
    std::cout << "Account is below minimum balance: " << taylorAccount.checkMinimumBalance() << std::endl << std::endl;

    std::cout << "checkMinimumBalance below test" << std::endl;
    taylorAccount.withdraw(620);
    std::cout << "Account is below minimum balance: " << taylorAccount.checkMinimumBalance() << std::endl;

    std::cout << "writeCheck test" << std::endl;
    taylorAccount.writeCheck(35);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "writeCheck negative test" << std::endl;
    taylorAccount.writeCheck(-10);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "writeCheck more than balance test" << std::endl;
    taylorAccount.writeCheck(6006900);
    taylorAccount.print();
    std::cout << std::endl; 
    
    std::cout << "withdraw test" << std::endl;
    taylorAccount.withdraw(45);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "withdraw negative test" << std::endl;
    taylorAccount.withdraw(-123);
    taylorAccount.print();
    std::cout << std::endl; 

    std::cout << "withdraw more than balance test" << std::endl;
    taylorAccount.withdraw(78909888);
    taylorAccount.print();
    std::cout << std::endl; 

    return 0;
}