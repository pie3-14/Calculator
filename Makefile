all: calculator

calculator: main.o add.o minus.o multiply.o division.o
	gcc -o calculator main.o add.o minus.o multiply.o division.o

main.o: main.c add.h minus.h multiply.h division.h
	gcc -c -o main.o main.c

add.o: add.h add.c
	gcc -c -o add.o add.c

minus.o: minus.h minus.c
	gcc -c -o minus.o minus.c

multiply.o: multiply.h multiply.c
	gcc -c -o multiply.o multiply.c

division.o: division.h division.c
	gcc -c -o division.o division.c

clean:
	rm *.o

delete:
	rm calculator
