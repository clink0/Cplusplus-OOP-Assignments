#pragma once
#include "node.h"

class stack
{
    node* head;

public:
    stack();
    ~stack();

    void push(int data);
    void pop();

    bool isEmpty();
    void display();
};