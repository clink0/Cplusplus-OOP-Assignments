/*
In this problem you will write a recursive function to determine the greatest common
divisor (GCD) of two integers a and b. The following recursive definition is what you
should be coding up.
gcd(a, b) = (a if b = 0
            gcd(b, a%b) if b != 0
Be sure to test your function!
*/

#include <iostream>

using namespace std;

double gcd(int a, int b)
{
    if(b != 0)
        return gcd(b, a % b);
    else
        return a;
};

int main()
{
    cout << "The greatest common divisor of 24 and 48 is: " << gcd(24, 48) << endl;
    cout << "The greatest common divisor of 85 and 175 is: " << gcd(85, 175) << endl;

    return 0;
}