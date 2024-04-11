#include <iostream>
#include "queue.h"

using namespace std;

queue::queue()
{
    head = nullptr;
    tail = nullptr;
}

void queue::push(int data)
{
    node *temp = new node(data);

    if (head == nullptr)
    {
        head = tail = temp;
        return;
    }

    tail->next = temp;
    tail = temp;
}

void queue::pop()
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

queue::~queue()
{
    while (head != nullptr)
        pop();
}

bool queue::isEmpty()
{
    return head == nullptr;
}

void queue::display()
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