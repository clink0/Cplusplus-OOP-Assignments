main: main.o node.o queue.o
	g++ main.o node.o queue.o -o main

main.o: main.cpp
	g++ -c main.cpp

node.o: node.cpp node.h
	g++ -c node.cpp

queue.o: queue.cpp queue.h
	g++ -c queue.cpp

clean:
	rm *.o main