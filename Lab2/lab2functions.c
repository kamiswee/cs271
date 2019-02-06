// header comments

#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
// implementation of printCharArray
size_t length;
void printCharArray(size_t length, char A[length]){
    // iterate through elements of the array A
    for(size_t i = 0; i < length; i++){
        // print the characters 10 per line
        if(A[i] != '\0'){
            printf("%c ", A[i]);
        }
        else{
            printf("_");
        }
        
        if( ((i + 1) % 10) == 0 ){
            printf("\n");
        }// end if 10th line
        
    }// end for each element in the array
    
} // end printCharArray


// implementation of countLetters
int countLetters(size_t length, char A[length]){

    // declare counter
    int count;
    count = 0;
    
    // iterate through elements of the array A
    for(size_t i=0; i<length; i++){

        // check if char is an upper or lowercase letter 
        if( isalpha(A[i]) ){
            count++;
        }// end if
        
    }// end for
    return count;
}// end countLetters

// implementation of numMatches
int numMatches(size_t length, char A[length], char B[length]){
    // declare counter
    size_t match_count;
    match_count = 0;
    
    // iterate through elements of arrays A and B
    for(size_t i=0; i<length; i++){
        if(A[i] == B[i]){
            match_count++;
        }// end if
    }// end for
    return match_count;

    // initialize a counter
    size_t count;
    count = 0;
    
    // iterate through the elements of A and B
    for( size_t i=0; i<length; i++){
        // compare if the element in A is the same as the element in B
        if( A[i] == B[i] ){
            count++;
        }// end if
    }// end for
}// end numMatches

// implementation of capitalize
int capitalize(size_t length, char A[length]){
    // iterate through elements of array A
    for(size_t i=0; i<length; i++){
        if('a' <= A[i] && A[i] <= 'z'){
            printf("lowercase");
        }// end if
    }// end for
    
}// end implementation of capitalize

