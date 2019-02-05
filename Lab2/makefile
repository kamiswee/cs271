lab2functions.o: lab2functions.c
	gcc -c lab2functions.c
	
lab2.o: lab2functions.h lab2.c
	gcc -c lab2.c
	
lab2: lab2functions.o lab2.o
	gcc lab2functions.o lab2.o -o lab2
	
all: lab2

clean:
	rm *.o
