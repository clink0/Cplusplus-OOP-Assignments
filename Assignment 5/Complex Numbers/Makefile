main: main.o complexType.o
	g++ main.o complexType.o -o main

main.o: main.cpp
	g++ -c main.cpp

complexType.o: complexType.cpp complexType.h
	g++ -c complexType.cpp

clean:
	rm *.o main