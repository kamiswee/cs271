#include "helperfunctions.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

// Prints the array elements in nice, neat columns using the parameters numPerLine and
// fieldSize to control the layout.
void neatPrint( int data[], size_t length, int numPerLine, int fieldSize )
{
    // iterate through elements of the array data
    for(size_t i = 0; i < length; i++){
        // print the characters 
        printf("%*d", fieldSize, data[i]);
        
        // after every numPerLineth char, print a new line
        if( ((i + 1) % numPerLine) == 0 ){
            printf("\n");
            
        }// end if 10th line 
    }// end for
}// end neatPrint


// Fills the array elements with random integers in the range min to max (inclusive).
void fillArray( int data[], size_t length, int min, int max )
{
        // fill the array with random integers in the range of 1 to 999 inclusive
    for(size_t i = 0; i < length; i++){
        // create a random integer
        int randomInt;
        randomInt = min + rand() % (max + 1 - min);
        
        // fill random integer into array at ith place
        data[i] = randomInt;
    }
    return;
}// end fillArray


// Exchanges the contents of the two memory locations.
void swap ( int *num1Ptr, int *num2Ptr )
{
    // declare a variable to hold a value
    int hold;
    
    // place
    hold = *num1Ptr;
    *num1Ptr = *num2Ptr;
    *num2Ptr = hold;
    return; 
}// end swap
