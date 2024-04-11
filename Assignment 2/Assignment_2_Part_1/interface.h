#pragma once
#include <iostream>
#include <string>

using namespace std;

class lineType
{
private:
    double A;
    double B;
    double C;

public:
    //constructors
    lineType(double a = 0, double b = 0, double c = 0);

    //setters
    void setCoefficients(double a, double b, double c);

    //getters
    double findSlope() const;
    bool checkEqual(const lineType& otherLine) const;
    bool checkParallel(const lineType& otherLine) const;
    bool checkPerpendicular(const lineType& otherLine) const;
    double findIntersectX(const lineType& otherLine) const;
    double findIntersectY(const lineType& otherline) const;
    void printOneLine() const;
    void printTwoLine(const lineType& otherLine) const;
};