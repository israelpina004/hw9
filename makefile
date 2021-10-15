all: hw9.o
	gcc -o hw9 hw9.o

hw9.o: hw9.c
	gcc -c hw9.c

run:
	./hw9

clean:
	rm *.o
	rm *~
