CC = gcc-13
CFLAGS = --std=c11 -Wall -pedantic
all: main.c vector.o
	$(CC) $(CFLAGS) main.c vector.o -o vector_test

vector.o: vector.c
	$(CC) $(CFLAGS) -c vector.c

clean:
	rm -rf *.o *.exe *.out vector_test