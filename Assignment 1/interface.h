#pragma once

class counterType
{
private:
    int counter;

public:
    void increment(int i = 1);
    void decrement(int i = 1);
    void setCount(int num);
    int getcount() const;
    counterType(int amount = 0); //look here
};