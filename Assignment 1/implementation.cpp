#include <iostream>
#include "interface.h"
using namespace std;

void counterType::increment(int i)
{
    counter = counter + i;
}

void counterType::decrement(int i)
{
    counter = counter - i;
}

int counterType::getcount() const
{
    return counter;
}

void counterType::setCount(int num)
{
    do 
    {
        cout << "Input a non-negative integer to set the counter to: ";
        cin >> num;
 
        if (num < 0)
        {
            cout << "no no no, try again: " << endl;
        }
    } 
    while (num < 0);

    counter = num;
    cout << "You did it!!!" << endl << "Your counter is now set to: " << num << endl;
}

counterType::counterType(int amount)
{
    counter = amount;
}
