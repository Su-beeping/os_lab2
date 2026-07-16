all: dateapp

dateapp: test.o Date.o
	g++ test.o Date.o -o dateapp

test.o: test.cpp Date.h
	g++ -c test.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

clean:
	rm -rf *.o dateapp
