#include <iostream>
#include "matrixes.h"

matrix::matrix(double aa, double ab, double ac, double ba, double bb, double bc, double ca,  double cb, double cc)
{
    arr[0][0] = aa;
    arr[0][1] = ab;
    arr[0][2] = ac;
    arr[1][0] = ba;
    arr[1][1] = bb;
    arr[1][2] = bc;
    arr[2][0] = ca;
    arr[2][1] = cb;
    arr[2][2] = cc;
}

matrix::matrix(const matrix &other)
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            arr[i][j] = other.arr[i][j];
        }
    }
}

void matrix::display() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl; // Move to the next line after each row
    }
}

matrix matrix::operator+(const matrix &other)
{
    matrix sum;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum.arr[i][j] = arr[i][j] + other.arr[i][j];
        }
    }
    return sum;
}

matrix matrix::operator-(const matrix &other)
{
    matrix diff;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            diff.arr[i][j] = arr[i][j] - other.arr[i][j];
        }
    }
    return diff;
}

matrix matrix::operator*(const matrix &other)
{
    matrix product;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product.arr[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product.arr[i][j] += arr[i][k] * other.arr[k][j];
            }
        }
    }
    return product;
}

matrix matrix::operator*(double scalar)
{
    matrix product;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product.arr[i][j] = this->arr[i][j] * scalar;
        }
    }
    return product;
}

matrix matrix::operator/(double scalar)
{
    matrix quotient;
    if (scalar == 0)
    {
        std::cout << "Illegal division by 0" << std::endl;
        scalar = 1;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                quotient.arr[i][j] = this->arr[i][j] / scalar;
            }
        }
    }
    return quotient;
}

bool matrix::operator==(const matrix &other)
{
    //return true if this->arr[i][j] == other.arr[i][j];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (this->arr[i][j] != other.arr[i][j])
            {
                return false;
            }
        }
    } 
    return true;
}

bool matrix::operator!=(const matrix &other)
{
    //return true if this->[i][j] != other.arr[i][j];
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (this->arr[i][j] != other.arr[i][j])
            {
                return true;
            }
        }
    } 
    return false;
}