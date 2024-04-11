#include <iostream>
#include "largeInt.h"
#include <cstring>


largeInt::largeInt( std::string number )
{
    setLargeInt( number );
}

largeInt::largeInt( const largeInt &other )
{
    length = other.length;

    arr = new char[length];

    for (int i = 0; i < length; i++)
    {
        arr[i] = other.arr[i];
    }
}

largeInt::~largeInt()
{
    delete[] arr;
    arr = nullptr;
}

void largeInt::setLargeInt( std::string number )
{
    length = number.length();
    arr = new char[length];
    for (int i = 0; i < length; i++)
    {
        arr[i] = number[i];
    }
}

char* largeInt::getLargeInt()
{
    return arr;
}

void largeInt::print() const
{
    std::cout << "Your integer is equal to: " << std::endl;
    for (int i = 0; i <= length; i++)
    {
        std::cout << arr[i];            
    }
    std::cout << std::endl;
}

largeInt &largeInt::operator=(const largeInt &other)
{
    if (this == &other)
    {
        return *this;
    }

    delete[] arr;

    length = other.length;
    arr = new char[length];

    for (int i = 0; i < length; i++)
    {
        arr[i] = other.arr[i];
    }

    return *this;
}

largeInt largeInt::operator+(const largeInt &other) const
{
    int maxLength = std::max(this->length, other.length);

    std::string result = "";

    int carry = 0;

    for (int i = 0; i < maxLength; i++)
    {

        int digitThis;
        if (i < this->length)
        {
            digitThis = this->arr[this->length - 1 - i] - '0';
        } else
        {
            digitThis = 0;
        }

        int digitOther;
        if (i < other.length)
        {
            digitOther = other.arr[other.length - 1 - i] - '0';
        } else
        {
            digitOther = 0;
        }

        int sum = digitThis + digitOther + carry;

        result += (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry > 0)
    {
        result += carry + '0';
    }

    std::reverse(result.begin(), result.end());

    return largeInt(result);
}

bool largeInt::operator==(const largeInt &other) const
{
    if (this->length != other.length)
    {
        return false;
    }

    for (int i = 0; i < this->length; i++)
    {
        if (this->arr[i] != other.arr[i])
        {
            return false;
        }
    }

    return true;
}

bool largeInt::operator<( const largeInt &other ) const 
{
    if (this->length < other.length)
    {
        return true;
    } else if (this->length > other.length)
    {
        return false;
    }

    for (int i = 0; i < this->length; i++)
    {
        if (this->arr[i] < other.arr[i])
        {
            return true;
        } else if (this->arr[i] > other.arr[i])
        {
            return false;
        }
    }

    return false;
}

bool largeInt::operator>( const largeInt &other ) const
{
    if (this->length > other.length)
    {
        return true;
    }
    else if (this->length < other.length)
    {
        return false;
    }

    for (int i = 0; i < this->length; i++)
    {
        if (this->arr[i] > other.arr[i])
        {
            return true;
        }
        else if (this->arr[i] < other.arr[i])
        {
            return false;
        }
    }

    return false;
}