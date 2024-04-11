#pragma once
#include <iostream>

class complexType
{
friend std::ostream& operator<<(std::ostream& out, const complexType& other);
friend std::istream& operator>>(std::istream& in, complexType& other);

private:
    double real;
    double imaginary;


public:
    complexType(double a = 0, double b = 0);
    complexType(const complexType &other);

    void setNum(double a = 0, double b = 0);
    double getReal() const;
    double getImaginary() const;
    void display() const;

    //make sure that this and other objects are not the same object before deallocating
    //other memory

    //return complexType object

    complexType operator+(const complexType &other) const;
    complexType operator-(const complexType &other) const;
    complexType operator/(const complexType &other) const;
    complexType operator*(const complexType &other) const;
    complexType& operator+=(const complexType &other);
    bool operator==(const complexType &other) const;
    bool operator!=(const complexType &other) const;
};