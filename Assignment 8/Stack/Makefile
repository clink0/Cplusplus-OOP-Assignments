main: main.o node.o stack.o
	g++ main.o node.o stack.o -o main

main.o: main.cpp
	g++ -c main.cpp

node.o: node.cpp node.h
	g++ -c node.cpp

stack.o: stack.cpp stack.h
	g++ -c stack.cpp

clean:
	rm *.o main