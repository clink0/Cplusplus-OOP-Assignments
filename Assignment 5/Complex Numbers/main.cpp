#include <iostream>
#include "complexType.h"

using namespace std;

int main()
{
    //constructor test 
    std::cout << "***************************************************" << std::endl << std::endl;
    std::cout << "Constructor test" << std::endl;
    complexType complexNum(2, 5);
    complexNum.display();
    std::cout << std::endl;

    //copy constructor test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
    std::cout << "Copy constructor test" << std::endl;
    complexType copyComplexNum(complexNum);
    copyComplexNum.display();
    std::cout << std::endl;

    //setNum() test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
    std::cout << "setNum() test" << std::endl;
    complexNum.setNum(1,1);
    complexNum.display();
    std::cout << std::endl;

    //getReal() getImaginary() test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
    std::cout << "getReal() getImaginary() test" << std::endl << "Your complex number is: " << complexNum.getReal() << " + " << complexNum.getImaginary() << "i" << std::endl;


    //overload operator+ test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
    std::cout << "Overload operator+ test" << std::endl;
    std::cout << "Output should be (1+1i) + (2+2i) = (3+3i)" << std::endl;
    complexType complexNum1(1,1);
    complexType complexNum2(2,2);
    complexType complexSum;
    complexSum = complexNum1 + complexNum2;
    std::cout << "Sum of these complex numbers is: ";    
    complexSum.display();  
    std::cout << std::endl; 

    //overload operator- test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
    std::cout << "Overload operator- test" << std::endl;
    std::cout << "Output should be (2+2i) - (1+1i) = (1+1i)" << std::endl;
    complexNum1.setNum(1,1);
    complexNum2.setNum(2,2);
    complexType complexDiff;
    complexDiff = complexNum2 - complexNum1;
    std::cout << "Difference between these complex numbers is: ";    
    complexDiff.display();  
    std::cout << std::endl;

    //overload operator/ test
        //nonzero denominator
        std::cout << std::endl << "***************************************************" << std::endl << std::endl;
        std::cout << "Overload operator/ test" << std::endl;
        std::cout << "With nonzero denominator" << std::endl;
        std::cout << "Output should be (2+2i) / (1+1i) = (2+0i)" << std::endl;
        complexNum1.setNum(2,2);
        complexNum2.setNum(1,1);
        complexType complexQuotient1;
        complexQuotient1 = complexNum1 / complexNum2;
        std::cout << "Quotient of these complex numbers is: ";    
        complexQuotient1.display();  
        std::cout << std::endl <<std::endl;

        //zero denominator
        std::cout << "With zero denominator" << std::endl;
        std::cout << "Output should be an error message." << std::endl;
        complexNum1.setNum(2,2);
        complexNum2.setNum(0,0);
        complexType complexQuotient2;
        complexQuotient2 = complexNum1 / complexNum2; 
        std::cout << std::endl;

    //overload operator* test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
    std::cout << "Overload operator* test" << std::endl;
    std::cout << "Output should be (2+2i) * (3+3i) = (0+12i)" << std::endl;
    complexNum1.setNum(2,2);
    complexNum2.setNum(3,3);
    complexType complexProduct;
    complexProduct = complexNum1 * complexNum2;
    std::cout << "Product of these complex numbers is: ";    
    complexProduct.display();  
    std::cout << std::endl;

    //overload operator== test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
        //true
        std::cout << "Overload operator== test" << std::endl;
        std::cout << "True case" << std::endl;
        std::cout << "Output should be 1" << std::endl;
        complexNum1.setNum(1,1);
        complexNum2.setNum(1,1);
        if (complexNum1 == complexNum2)
        {
            std::cout << true << std::endl;
        } else
        {
            std::cout << false << std::endl;
        }
        std::cout << std::endl;

        //false
        std::cout << "False case" << std::endl;
        std::cout << "Output should be 0" << std::endl;
        complexNum1.setNum(2,2);
        complexNum2.setNum(0,0);
        if (complexNum1 == complexNum2)
        {
            std::cout << true << std::endl;
        } else
        {
            std::cout << false << std::endl;
        }

    //overload operator!= test
    std::cout << std::endl << "***************************************************" << std::endl << std::endl;
        //true
        std::cout << "Overload operator!= test" << std::endl;
        std::cout << "True case" << std::endl;
        std::cout << "Output should be 1" << std::endl;
        complexNum1.setNum(2,2);
        complexNum2.setNum(1,1);
        if (complexNum1 != complexNum2)
        {
            std::cout << true << std::endl;
        } else
        {
            std::cout << false << std::endl;
        }
        std::cout << std::endl;

        //false
        std::cout << "False case" << std::endl;
        std::cout << "Output should be 0" << std::endl;
        complexNum1.setNum(2,2);
        complexNum2.setNum(2,2);
        if (complexNum1 != complexNum2)
        {
            std::cout << true << std::endl;
        } else
        {
            std::cout << false << std::endl;
        }


    return 0;
}