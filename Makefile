CC = gcc
CFLAGS = -g -Wall

main: main.o
	$(CC) $(CFLAGS) -o main  main.o
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
