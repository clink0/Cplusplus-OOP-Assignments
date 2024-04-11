#include <iostream>
#include <string>
#include "interface.h"
using namespace std;

//implement class member functions
    lineType::lineType(double a, double b, double c)
    {
        setCoefficients(a,b,c);
    }

    void lineType::setCoefficients(double a, double b, double c)
    {
        if (a == 0 && b == 0)
        {
            A = 0;
            B = 1;
            cout << "Both a and b cannot be 0, a is set to 0 and b is set to 1." << endl;
        } else
        {
            A = a;
            B = b;
        }
        C = c;
    }

    double lineType::findSlope() const
    {
        double slope = (-(A/B));
        if (B == 0){
            cout << "Your line is vertical and has no slope." << endl;
            return (0);
        } else
        {
            return slope;            
        }
    }

    bool lineType::checkEqual(const lineType& otherLine) const
    {
        double constA = otherLine.A/A;
        double constB = otherLine.B/B;
        double constC = otherLine.C/C;
        
        bool equal = (constA == constB && constB == constC && constA == constC);
        if (equal == true)
        {
            return equal;            
        } else
        {
            return equal;
        }

    }

    bool lineType::checkParallel(const lineType& otherLine) const
    {
        bool parallel = findSlope() == otherLine.findSlope();
        if (parallel == true)
        {
            return true;
        } else 
        {
            return false;
        }
    }

    double lineType::findIntersectX(const lineType& otherLine) const
    {
        if (checkParallel(otherLine) == true)
        {
            cout << "These lines do not intersect." << endl;
            return 0;
        } else
        {
        double intersectX = -(((B*otherLine.C)-(otherLine.B*C))/((A*otherLine.B)-(otherLine.A*B)));
        return intersectX;
        }
    }

    double lineType::findIntersectY(const lineType& otherLine) const
    {
        if (checkParallel(otherLine) == true)
        {
            cout << "These lines do not intersect." << endl;
            return 0;
        } else
        {
            double intersectY = -(((C*otherLine.A)-(otherLine.C*A))/((A*otherLine.B)-(otherLine.A)*B));
            return intersectY;
        }
    }

    bool lineType::checkPerpendicular(const lineType& otherLine) const
    {
        if (this->findSlope()*otherLine.findSlope() == -1)
        {
            return (true);
        } else 
        {
            return (false);
        }
    }

    void boolDecoder(bool boo = 0)
    {
        if (boo == true)
        {
            cout << "true" << endl;
        } else
        {
            cout << "false" << endl;
        }
    }

    void lineType::printOneLine() const
    {
        cout << "The equation of the line with given coefficients is: " << A << "x + " << B << "y = " << C << endl;
        cout << "The slope of this line is: " << findSlope() << endl;
    }

    void lineType::printTwoLine(const lineType& otherLine) const
    {
        printOneLine();
        cout << "The equation of the line with given coefficients is: " << otherLine.A << "x + " << otherLine.B << "y = " << otherLine.C << endl;
        cout << "The slope of this line is: " << otherLine.findSlope() << endl << endl;        
        cout << "These lines are equal: ";
        boolDecoder(checkEqual(otherLine));
        cout << endl << "These lines are parallel: ";
        boolDecoder(checkParallel(otherLine));
        cout << endl << "These lines are perpendicular: ";
        boolDecoder(checkPerpendicular(otherLine));
        cout << endl << "The x intercept of the lines is: " << findIntersectX(otherLine) << endl;
        cout << "The y intercept of the lines is: " << findIntersectY(otherLine) << endl;
    }