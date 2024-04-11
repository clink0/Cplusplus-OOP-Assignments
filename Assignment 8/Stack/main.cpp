/*
Write and test the stack class that we (will) outlined in lecture. 
In particular, it should use linked lists and have the following:

constructor
destructor
push method to add a node to the stack
pop method to remove a node from the stack
display method to print the nodes
isEmpty method to determine if the list is empty
*/


#include <iostream>
#include "stack.h"

using namespace std;


int main()
{
	//Initialize stack
	stack myStack;

	//Push test
	myStack.push(11);
	myStack.push(22);
	myStack.push(33);
	myStack.push(44);

	myStack.display();


	//Pop test
	myStack.pop();
	myStack.pop();

	myStack.display();

	myStack.pop();
	myStack.pop();

	//isEmpty test
	if (myStack.isEmpty())
		cout << "Your stack is empty" << endl;
	else
		cout << "Your stack is not empty" << endl;

    return 0;
}