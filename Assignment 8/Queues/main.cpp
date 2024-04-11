/*
Write and test a class for queues including the same methods as the above 
(but in the context of a queue!).

Insertions happen at the end
Removals happen at the beginning
*/


#include <iostream>
#include "queue.h"


using namespace std;


int main()
{
	//Initialize stack
	queue myQueue;

	//Push test
	myQueue.push(11);
	myQueue.push(22);
	myQueue.push(33);
	myQueue.push(44);

	myQueue.display();

	//Pop test
	myQueue.pop();
	myQueue.pop();

	myQueue.display();

	myQueue.pop();
	myQueue.pop();

	//isEmpty test
	if (myQueue.isEmpty())
		cout << "Your stack is empty" << endl;
	else
		cout << "Your stack is not empty" << endl;

    return 0;
}