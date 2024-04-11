main: main.o implementation.o
	g++ main.o implementation.o -o main

main.o: main.cpp
	g++ -c main.cpp

implementation.o: implementation.cpp
	g++ -c implementation.cpp

clean:
	rm *.o main