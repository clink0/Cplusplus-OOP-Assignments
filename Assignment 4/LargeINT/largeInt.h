#pragma once
#include <iostream>
#include <string>

class largeInt
{
private:
    char *arr;
    int length;

public:
    largeInt(std::string number);
    largeInt( const largeInt &other );
    ~largeInt();
    void setLargeInt(std::string number);
    char* getLargeInt();

    largeInt &operator=( const largeInt &other );
    largeInt operator+( const largeInt &other ) const;
    bool operator==( const largeInt &other ) const;
    bool operator<( const largeInt &other ) const;
    bool operator>( const largeInt &other ) const;
    void print() const;    
};