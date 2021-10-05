all: funky.o
	gcc -o funky funky.o

funky.o: funky.c
	gcc -c funky.c

remove:
	rm funky.o
	rm funky

run:
	./funky
