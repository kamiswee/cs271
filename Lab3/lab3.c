#include <stdio.h>
#include <stdlib.h> // header contains rand() to generate random integers
#include <ctype.h>
#include "helperfunctions.h"
#include "sortingfunctions.h"
#define ARRAYSIZE 60
int main (void) 
{
    // declare an array of size ARRAYSIZE
    int array[ARRAYSIZE];
    
    // fill the array with random integers in the range of 1 to 999 inclusive
    fillArray( array, ARRAYSIZE, 1, 999 );
    
    // print the array, 10 elements per line, field size 5
    neatPrint(array, ARRAYSIZE, 10, 5);
    
    // sort the array using selection sort and
    size_t comparisons_made = selectionSort(array, ARRAYSIZE);
    
    // print the number of comparisons that are made
    printf("Selection sort comparisons: %d\n", comparisons_made);
    
    // print the array, 10 elements per line, field size 5
    neatPrint(array, ARRAYSIZE, 10, 5);
    // fill the array again with random integers in the range of 10 to 500 inclusive
    // print the array, 12 elements per line, field size 4
    // sort the array with insertion sort and
    // print the number of comparisons that are made
    // print the array, 12 elements per line, field size 4
} // end function main
