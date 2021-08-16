CC=g++
CFLAGS=-g
TYPE=.exe
SOURCE=$(wildcard src/*.cpp)
HEADERS=$(wildcard src/*.h)
ALL=$(SOURCE) $(HEADERS)

make:
	$(CC) $(CFLAGS) $(ALL) -o out/itd

clean:
	-rm out/*

