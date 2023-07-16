all: main.c vector.o
	gcc --std=c11 -Wall -pedantic main.c vector.o -o vector_test

vector.o: vector.c
	gcc --std=c11 -Wall -pedantic -c vector.c

clean:
	rm -rf *.o *.exe *.out vector_test
