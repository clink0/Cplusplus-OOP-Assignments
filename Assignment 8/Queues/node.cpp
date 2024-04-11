#include <iostream>
#include "node.h"

node::node(int num)
{
    this->data = num;
    this->next = nullptr;
}