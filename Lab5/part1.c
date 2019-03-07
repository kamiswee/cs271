// CS 271 
// Program Name: part1.c 
// Author: Kay Sweebe 
// Date: 05/05/19 
// Purpose: Practice use of pointers and file processing
//  

#include <stdio.h>
#include <stdlib.h> // rand and srand
#include <time.h> //time is used from time.h to seed the random number generator

// Declare function prototypes
void shiftLeft(int * const first, int * const last);
void fillArray(int data[], size_t length, int min, int max);
void neatPrint(int data[], size_t length, int numPerLine, int fieldSize);

int main(void){
    
    // 1. Prompt the user to enter the size of the array and read the size
    //    entered by the user.
    printf("Enter size of the array: ");
    int size;
    scanf("%d", &size);
    
    // 2. Declare a variable-length array of integers (int) of the size entered
    //    by the user.
    int arr[size];
    
    // 3. Seed the random number generator
    srand(time(NULL));
    
    // 4. Prompt the user to enter maximum possible value for array elements
    printf("Enter max possible value for array elements: ");
    int maxValue;
    scanf("%d", &maxValue);
    
    // 5. Fill the array with random numbers between 1 and max (inclusive).
    fillArray( arr, size, 1, maxValue);
    
    // 6. Print the array
    printf("Random array:\n");
    neatPrint( arr, size, 10, 6);
    
    // 7. Call the shiftLeft function
    shiftLeft(arr, (arr+(size-1)));
    
    // 8. Print the array
    printf("Left shift array:\n");
    neatPrint( arr, size, 10, 6);
    
}// end main

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


// Produces a left shit on an array
void shiftLeft( int * const firstPtr, int * const lastPtr)
{
    
    // Declare a holdFirst variable to hold the first data entry in the array
    int holdFirst = *firstPtr;
    
    // Declare an iterable pointer variable
    int *iterPtr;
    
    // Swap elements from (firstPtr to  lastPtr - 1) to (firstPtr + 1 to 
    // lastPtr);
    for(iterPtr = firstPtr; iterPtr <= lastPtr; iterPtr++){
        *iterPtr = *(iterPtr + 1);
    }
    
    // Make the final swap
    *lastPtr = holdFirst;

}// end shiftLeft
