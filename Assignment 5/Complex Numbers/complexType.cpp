#include "complexType.h"
#include <iostream>

complexType::complexType(double a, double b)
{
    setNum(a, b);
}

complexType::complexType(const complexType &other)
{
    this->real = other.real;
    this->imaginary = other.imaginary;
}

void complexType::setNum(double a, double b)
{
    real = a;
    imaginary = b;
}

double complexType::getReal() const
{
    return real;
}

double complexType::getImaginary() const
{
    return imaginary;
}

void complexType::display() const
{
    std::cout << real << " + " << imaginary << "i";
}

complexType complexType::operator+(const complexType &other) const
{
    double sum1 = this->real + other.real;
    double sum2 = this->imaginary + other.imaginary;
    complexType complexSum(sum1, sum2);
    return complexSum;
}

complexType complexType::operator-(const complexType &other) const
{
    double diff1 = this->real - other.real;
    double diff2 = this->imaginary - other.imaginary;
    complexType complexDifference(diff1, diff2);
    return complexDifference;
}

complexType complexType::operator/(const complexType &other) const
{
    double a = this->real, b = this->imaginary, c = other.real, d = other.imaginary;
    double denominator = ((c * c) + (d * d));
    if (denominator == 0)
    {
        std::cout << "Operation failed, cannot divide by zero.";
        complexType nonReal(0,0);
        return nonReal;
    } else
    {
        double realCo = ((a * c) + (b * d)) / (denominator);
        double imaginaryCo = ((b * c) - (a * d)) / (denominator);
        complexType complexQuo(realCo, imaginaryCo);
        return complexQuo;
    }

}

complexType complexType::operator*(const complexType &other) const
{
    double a = this->real, b = this->imaginary, c = other.real, d = other.imaginary;
    double realCo = ((a * c) - (b * d));
    double imaginaryCo = ((a * d) + (b * c));
    complexType complexProduct(realCo, imaginaryCo);
    return complexProduct;
}

complexType& complexType::operator+=(const complexType &other)
{
    real += other.real;
    imaginary += other.imaginary;
    return *this;
}

bool complexType::operator==(const complexType &other) const
{
    return (real == other.real && imaginary == other.imaginary);
}

bool complexType::operator!=(const complexType &other) const
{
    return (real != other.real || imaginary != other.imaginary);
}


std::ostream& operator<<(std::ostream& out, const complexType& other)
{
    out << other.real;
    if (other.imaginary != 0)
    {
        if (other.imaginary < 0)
        {
            out << " - " << other.imaginary << "i";
        }
        else
        {
            out << " + " << other.imaginary << "i";
        }
        
    }
    return out;
}

std::istream& operator>>(std::istream& in, complexType& other) 
{
    in >> other.real >> other.imaginary;
    return in;
}