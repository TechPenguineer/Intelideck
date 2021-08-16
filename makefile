CC=g++
CFLAGS=-c
SOURCE=$(wildcard src/*.c)
HEADERS=$(wildcard src/*.h)

make:
	$(CC) $(CFLAGS) $(HEADERS) $(SOURCE) -o out/$@