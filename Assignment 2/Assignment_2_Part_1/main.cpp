#include <iostream>
#include <string>
#include "interface.h"

using namespace std;

int main ()
{
    //test all inputs for a single line
    lineType line1(1,2,3);
    line1.printOneLine();
    cout << endl << endl;

    line1.setCoefficients(0,2,3);
    line1.printOneLine();
    cout << endl << endl;

    line1.setCoefficients(1,0,3);
    line1.printOneLine();
    cout << endl << endl;

    line1.setCoefficients(0,0,3);
    line1.printOneLine();
    cout << endl << endl;

    line1.setCoefficients(1,2,0);
    line1.printOneLine();
    cout << endl << endl;

    line1.setCoefficients(0,2,0);
    line1.printOneLine();
    cout << endl << endl;

    line1.setCoefficients(1,0,0);
    line1.printOneLine();
    cout << endl << endl;

    //test equal
    lineType line2(1,1,1);
    line1.setCoefficients(2,2,2);
    line1.printTwoLine(line2);
    cout << endl << endl;  

    //test parallel
    line1.setCoefficients(1,1,3);
    line2.setCoefficients(1,1,2);
    line1.printTwoLine(line2);
    cout << endl << endl;

    //test perpendicular
    line1.setCoefficients(1,1,1);
    line2.setCoefficients(-1,1,1);
    line1.printTwoLine(line2);
    cout << endl << endl;

    //test intercept
    line1.setCoefficients(4,5,1);
    line2.setCoefficients(-1,2,2);
    line1.printTwoLine(line2);
    cout << endl << endl;
};