all: build run

build: build_i build_s build_o
	gcc -Wall -Wextra -Werror -Wpedantic -o demo_gcc main.o

run:
	./demo_gcc

clean: 
	rm -f main.i main.s main.o demo_gcc

build_i:
	cpp -o main.i main.c

build_s:
	gcc -S -o main.s main.i

build_o:
	as -o main.o main.s