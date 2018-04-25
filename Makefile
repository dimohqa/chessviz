flags = -g3 -O0 -Wall -Werror

./bin/board : ./build/main.o ./build/board.o bin
	gcc $(flags) -o ./bin/board ./build/main.o ./build/board.o -lm

./build/main.o : ./src/main.c ./src/board.h build
	gcc $(flags) -o ./build/main.o -c ./src/main.c

./build/board.o :./src/board.c ./src/board.h build
	gcc $(flags) -o ./build/board.o -c ./src/board.c

build:
	mkdir build

bin:
	mkdir bin


.PHONY: clean open
clean :
	rm -rf ./build/ ./bin/
open :
	./bin/board
