all: lab3

helperfunctions.o: helperfunctions.c
	gcc -c helperfunctions.c

sortingfunctions.o: sortingfunctions.c
	gcc -c sortingfunctions.c
	
lab3.o: helperfunctions.h sortingfunctions.h lab3.c
	gcc -c lab3.c
	
lab3: helperfunctions.o sortingfunctions.o lab3.o
	gcc helperfunctions.o sortingfunctions.o lab3.o -o lab3


clean:
	rm -rf *.o
