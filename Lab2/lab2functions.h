#include <stdio.h>
// Preprocessor wrapper to prevent code in a header file from being included into the same
// source code file more than once.
#ifndef LAB2FUNCTIONS
#define LAB2FUNCTIONS
    // here is where your 4 function prototypes will go
    void printCharArray(size_t l, char A[l]);
    int countLetters(size_t l, char A[l]);
    int numMatches(size_t length, char A[length], char B[length]);
    //int capitalize(size_t l, int A[l]);
    
    
    
    
#endif




