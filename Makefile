#/***           Makefile                ***/


main: main.o sorting.o
	gcc main.o sorting.o -o main


main.o: main.c sorting.c sorting.h
	gcc -c  main.c sorting.c


clear:
	rm *.o 
