flags = -g3 -O0 -Wall -Werror

./bin/board : ./build/main.o ./build/board.o
	gcc $(flags) -o ./bin/board ./build/main.o ./build/board.o -lm

./build/main.o : ./src/main.c ./src/board.h
	gcc $(flags) -o ./build/main.o -c ./src/main.c

./build/board.o :./src/board.c ./src/board.h
	gcc $(flags) -o ./build/board.o -c ./src/board.c


.PHONY: clean adddir open gdb
adddir :
	mkdir build bin
clean :
	rm -rf ./build/ ./bin/
open :
	./bin/board
gdb :
	./bin/board