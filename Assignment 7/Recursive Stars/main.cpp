/*
Write a recursive function that takes a non-negative integer and prints out the follow-
ing pattern of stars. For example, if the integer is 4, the output should be:
****
***
**
*
*
**
***
****
*/

#include <iostream>
#include <string>

using namespace std;

void makeStars(int x)
{
    char asterisk = '*';
    string stars;
    x+=1;
    for (int i = 1; i < x; i++)
    {
        stars += asterisk;
    }
    cout << stars << endl;
};

int stars(int x)
{
    if (x == 0)
    {
        return 1;
    } else {
        makeStars(x);
        stars(x-1);
        makeStars(x);
    }
};

int main()
{
    stars(7);

    return 0;
}