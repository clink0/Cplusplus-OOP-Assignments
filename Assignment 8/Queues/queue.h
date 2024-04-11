#pragma once
#include "node.h"

class queue
{
    node* head;
    node* tail;

public:
    queue();
    ~queue();

    void push(int data);
    void pop();

    bool isEmpty();
    void display();
};