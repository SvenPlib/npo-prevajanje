all: build run

build_i:
	cpp -o main.i main.c

build_s:
	gcc -S -o main.s main.i

build_o:
	as -o main.o main.s