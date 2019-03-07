// CS 271 
// Program Name: part2.c 
// Author: Kay Sweebe 
// Date: 05/05/19 
// Purpose: Practice use of pointers and file processing
//  
#include <stdio.h>


// prototypes
void circumference(double radius);
void area(double radius);
void volume(double radius);

int main(void)
{
    // Variable Declarations
    double radius; // var to hold radius
    
    // init array of 3 ptrs to functions that each take an int arg and ret void
    void( *f[3] )( double ) = {circumference, area, volume};

    // Prompt user to choose a function
    printf("%s", "Enter 0 for circumference, 1 for area, 2 for volume, 3 to end: ");
    size_t choice; // var to hold user choice
    scanf("%u", &choice);
    

    // process a user's choice
    while (choice >= 0 && choice < 3){
        
        // prompt user to enter radius
        printf("Please enter radius: ");
        scanf("%lf", &radius);   
        
        // invoke function at location choice in array f and pass choice as arg
        ( *f[choice] )(radius);
        
        printf("%s", "Enter 0 for circumference, 1 for area, 2 for volume, 3 to end: ");
        scanf("%u", &choice);

        
    }// end while
    
    puts("Program execution completed.");
} // end main

void circumference(double radius)
{
    double const pi = 3.14159265;
    double c = 2 * pi * radius;
    printf("Circumference: %lf\n\n", c);
}
void area(double radius)
{
    double const pi = 3.14159265;
    double a = pi * radius * radius;
    printf("Area: %lf\n\n", a);
}
void volume(double radius)
{
    double const pi = 3.14159265;
    double v = (4/3) * pi * radius * radius * radius;
    printf("Volume: %lf\n\n", v);
}

