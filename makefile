CC=g++
CFLAGS=-c
TYPE=.exe
SOURCE=$(wildcard src/*.c)
HEADERS=$(wildcard src/*.h)

make:
	$(CC) $(CFLAGS) $(HEADERS) $(CFLAGS) $(SOURCE) -o out/itd$(TYPE)

clean:
	-rm out/*

