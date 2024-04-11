#include <iostream>
#include "matrixes.h"


int main() {
    // Constructor test
    std::cout << "***************************************************\n\n";
    std::cout << "Constructor test\n";
    matrix m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
    // Display function not provided, assuming you have or will implement it
    m1.display();
    std::cout << std::endl;

    // Copy constructor test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Copy constructor test\n";
    matrix m2(m1);
    m2.display();
    std::cout << std::endl;

    // Addition test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator+ test\n";
    matrix m3 = m1 + m2;
    m3.display();
    std::cout << std::endl;

    // Subtraction test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator- test\n";
    matrix m4 = m3 - m1;
    m4.display();
    std::cout << std::endl;

    // Scalar multiplication test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator* (scalar) test\n";
    matrix m5 = m1 * 2.0;
    m5.display();
    std::cout << std::endl;

    // Matrix multiplication test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator* (matrix) test\n";
    matrix m6 = m1 * m2;
    m6.display();
    std::cout << std::endl;

    // Scalar division test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator/ test\n";
    matrix m7 = m6 / 2.0;
    m7.display();
    std::cout << std::endl;

    // Equality test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator== test\n";
    std::cout << "Are m1 and m2 equal? " << (m1 == m2 ? "Yes" : "No") << std::endl;

    // Inequality test
    std::cout << "\n***************************************************\n\n";
    std::cout << "Operator!= test\n";
    std::cout << "Are m1 and m3 unequal? " << (m1 != m3 ? "Yes" : "No") << std::endl;

    return 0;
}