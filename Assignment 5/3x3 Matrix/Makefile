main: main.o matrixes.o
	g++ main.o matrixes.o -o main

main.o: main.cpp
	g++ -c main.cpp

matrixes.o: matrixes.cpp matrixes.h
	g++ -c matrixes.cpp

clean:
	rm *.o main