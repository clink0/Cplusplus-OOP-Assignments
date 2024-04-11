#include <iostream>
#include "stack.h"

using namespace std;

stack::stack()
{
    head = nullptr;
}

stack::~stack()
{
    while (head != nullptr)
        pop();
}

void stack::push(int data)
{
    node *temp = new node(data);

    temp->data = data;
    temp->next = head;
    head = temp;
}

void stack::pop()
{
    node *temp;

    if (head == nullptr)
    {
        return;
    }
    else
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

bool stack::isEmpty()
{
    return head == nullptr;
}

void stack::display()
{
    node *temp;

    if (head == nullptr)
    {
        return;
    }
    else
    {
        temp = head;
        while (temp != nullptr)
        {
            cout << temp->data;
            temp = temp->next;

            if (temp != nullptr)
                cout << ", ";
        }
        cout << endl;
    }
}