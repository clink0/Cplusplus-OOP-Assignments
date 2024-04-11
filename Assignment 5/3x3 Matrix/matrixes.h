#pragma once

class matrix
{
public:
    double arr[3][3];

    matrix( double aa = 0, double ab = 0, double ac = 0, 
            double ba = 0, double bb = 0, double bc = 0, 
            double ca = 0,  double cb = 0, double cc = 0);

    matrix(const matrix &other);

    void display() const;
    matrix operator+(const matrix &other);
    matrix operator-(const matrix &other);
    matrix operator*(const matrix &other);
    matrix operator*(double scalar);
    matrix operator/(double scalar);
    bool operator==(const matrix &other);
    bool operator!=(const matrix &other);
};