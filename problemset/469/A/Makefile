CC = g++
CFLAG = -std=c++17 -Wall -Og -g

default: all

all:
	$(CC) $(CFLAG) -H main.cpp -o main

header:
	$(CC) $(CFLAG) *.h

run: all
	./main

