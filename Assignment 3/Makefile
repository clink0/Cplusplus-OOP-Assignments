main: main.o IMPbankAccount.o IMPchecking.o IMPsavings.o
	g++ main.o IMPbankAccount.o IMPchecking.o IMPsavings.o -o main

main.o: main.cpp
	g++ -c main.cpp

IMPbankAccount.o: IMPbankAccount.cpp
	g++ -c IMPbankAccount.cpp

IMPchecking.o: IMPchecking.cpp
	g++ -c IMPchecking.cpp

IMPsavings.o: IMPsavings.cpp
	g++ -c IMPsavings.cpp

clean:
	rm *.o main