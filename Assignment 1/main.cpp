#include <iostream>
#include "interface.h"
#include "implementation.cpp"

using namespace std;

int main()
{
    counterType myCounter(0);
    myCounter.setCount(0);
    myCounter.increment();
    cout << "Counter is increased to: " << myCounter.getcount() << endl;
    myCounter.decrement();
    cout << "Counter is decreased to: " << myCounter.getcount() << endl;

    return 0;
};

