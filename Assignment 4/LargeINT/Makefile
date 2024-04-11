main: main.o largeInt.o
	g++ main.o largeInt.o -o main

main.o: main.cpp
	g++ -c main.cpp

largeInt.o: largeInt.cpp largeInt.h
	g++ -c largeInt.cpp

clean:
	rm *.o main