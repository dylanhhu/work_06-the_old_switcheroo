all: work06.o
	gcc -o work06.out work06.o

work06.o: work06.c
	gcc -c work06.c

run:
	./work06.out

comprun: all
	./work06.out
