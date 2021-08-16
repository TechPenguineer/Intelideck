CC=gcc
CFLAGS=NULL
SOURCE=$(wildcard src/*.c)
HEADERS=$(wildcard src/*.h)

make:
	$(CC)