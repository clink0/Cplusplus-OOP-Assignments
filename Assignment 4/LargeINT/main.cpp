#include <iostream>
#include "largeInt.h"
using namespace std;


int main()
{
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //constructor test
    std::cout << "Constructor test" << std::endl;

    largeInt myInt("99999999999999999999999999");
    largeInt myOtherInt("88888888888888888888888888888");
    myInt.print();
    myOtherInt.print();

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //copy constructor test
    std::cout << "Copy constructor test" << std::endl;

    largeInt myOtherOtherInt(myInt);
    myInt.print();
    myOtherOtherInt.print();

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //setLargeInt test
    std::cout << "SetLargeInt test" << std::endl;

    myInt.setLargeInt("329037432841894782941423423414234");
    myInt.print();

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //getLargeInt test
    std::cout << "getLargeInt test" << std::endl;

    std::cout << myInt.getLargeInt() << std::endl;

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //overload operator= test
    std::cout << "Overload operator= test" << std::endl;

    myInt = myOtherInt;
    myInt.print();
    myOtherInt.print();

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //overload operator+
    std::cout << "Overload operator+ test" << std::endl;

    myInt.setLargeInt("34723189423105329834732");    
    myOtherInt.setLargeInt("789048347549343534533455");
    myOtherOtherInt = (myInt + myOtherInt);
    myInt.print();
    myOtherInt.print();
    myOtherOtherInt.print();

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //overload operator==
    std::cout << "Overload operator== test" << std::endl;

    //true case
    std::cout << "True case" << std::endl;

    myInt.setLargeInt("22222222222222211222242222277222222222");
    myOtherInt.setLargeInt("22222222222222211222242222277222222222");
    if (myInt == myOtherInt)
    {
        std::cout << "These largeInts are equal." << std::endl;
    } else
    {
        std::cout << "These largeInts are not equal." << std::endl;
    }

    //false by length case
    std::cout << "False by length case" << std::endl;

    myInt.setLargeInt("22222222222222277222222222");
    myOtherInt.setLargeInt("22222222222222211222242222277222222222");
    if (myInt == myOtherInt)
    {
        std::cout << "These largeInts are equal." << std::endl;
    }
    else
    {
        std::cout << "These largeInts are not equal." << std::endl;
    }

    //false by char case
    std::cout << "False by char case" << std::endl;

    myInt.setLargeInt("22222222222222211222242222277222222221");
    myOtherInt.setLargeInt("22222222222222211222242222277222222222");
    if (myInt == myOtherInt)
    {
        std::cout << "These largeInts are equal." << std::endl;
    }
    else
    {
        std::cout << "These largeInts are not equal." << std::endl;
    }

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //overload operator< test
    std::cout << "Overload operator< test" << std::endl;

    //true by length case
    std::cout << "True by length case" << std::endl;

    myInt.setLargeInt("993403234");
    myOtherInt.setLargeInt("124321432112343");
    if (myInt < myOtherInt)
    {
        std::cout << "myInt is less than myOtherInt" << std::endl;
    }
    else
    {
        std::cout << "myInt is not less than myOtherInt" << std::endl;
    }

    //true by char case
    std::cout << "True by char case" << std::endl;

    myInt.setLargeInt("124321432112342");
    myOtherInt.setLargeInt("124321432112343");
    if (myInt < myOtherInt)
    {
        std::cout << "myInt is less than myOtherInt" << std::endl;
    }
    else
    {
        std::cout << "myInt is not less than myOtherInt" << std::endl;
    }

    //false by equal case
    std::cout << "False by equal case" << std::endl;

    myInt.setLargeInt("22222222222222277222222222");
    myOtherInt.setLargeInt("22222222222222277222222222");
    if (myInt < myOtherInt)
    {
        std::cout << "myInt is less than myOtherInt" << std::endl;
    }
    else
    {
        std::cout << "myInt is not less than myOtherInt" << std::endl;
    }

    std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    //overload operator> test
    std::cout << "Overload operator> test" << std::endl;

    // true by length case    
    std::cout << "True by length case" << std::endl;

    myInt.setLargeInt("993224324172342341234124334");
    myOtherInt.setLargeInt("123123412343");
    if (myInt > myOtherInt)
    {
        std::cout << "myInt is greater than myOtherInt" << std::endl;
    }
    else
    {
        std::cout << "myInt is not greater than myOtherInt" << std::endl;
    }

    // true by char case
    std::cout << "True by char case" << std::endl;

    myInt.setLargeInt("993224324172342341234124334");
    myOtherInt.setLargeInt("993224324172342341234124332");
    if (myInt > myOtherInt)
    {
        std::cout << "myInt is greater than myOtherInt" << std::endl;
    }
    else
    {
        std::cout << "myInt is not greater than myOtherInt" << std::endl;
    }

    // equal case
    std::cout << "False by equal case" << std::endl;

    myInt.setLargeInt("22222222222222277222222222");
    myOtherInt.setLargeInt("22222222222222277222222222");
    if (myInt > myOtherInt)
    {
        std::cout << "myInt is greater than myOtherInt" << std::endl;
    }
    else
    {
        std::cout << "myInt is not greater than myOtherInt" << std::endl;
    }

    return 0;
}