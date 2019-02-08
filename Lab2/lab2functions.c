// CS 271
// Program Name: lab2functions.c
// Author: Kay Sweebe
// Date: February 7, 2019
// Purpose: Define functions printCharArray, countLetters, numMatches, capitalize.
//
//      printCharArray will print the elements of a char array, 10 per line. The characters 
//          should be separated by one space. The parameters to the function are:
//                  1) an array of characters 
//                  2) the size of the array (of type size_t)
//
//      countLetters will count and return the number of letters (either uppercase or 
//          lowercase) that appear in the array. The parameters to the function are: 
//                  1) an array of characters 
//                  2) the size of the array (of type size_t) 
//
//      numMatches compares the elements in two arrays and counts how many elements are the 
//          same. The function only compares array elements with the same index, array1[0] 
//          with array2[0], array1[1] with array2[1], etc. The arrays are assumed to have the 
//          same number of elements. The parameters to the function are: 
//                  1) the first array of characters 
//                  2) the second array of characters 
//                  3) the size of the arrays (of type size_t ) 
//
//      capitalize looks for lowercase letters in the array. When a lowercase letter is 
//          found, the array element should be changed to the corresponding capital letter. 
//          The parameters to the function are: 
//                  1) an array of characters 
//                  2) the size of the array (of type size_t)


#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
// implementation of printCharArray
size_t length;
void printCharArray(size_t length, char A[length]){
    // iterate through elements of the array A
    for(size_t i = 0; i < length; i++){
<<<<<<< HEAD
        // print the characters 
        printf("%c ", A[i]);
        
        // after every 10th char, print a new line
=======
        // print the characters 10 per line
        if(A[i] != '\0'){
            printf("%c ", A[i]);
        }
        else{
            printf("_");
        }
        
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
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
<<<<<<< HEAD
void capitalize(size_t length, char A[length]){
    // iterate through elements of array A
    for(size_t i=0; i<length; i++){
        if('a' <= A[i] && A[i] <= 'z'){
            A[i] = A[i] - 32;
=======
int capitalize(size_t length, char A[length]){
    // iterate through elements of array A
    for(size_t i=0; i<length; i++){
        if('a' <= A[i] && A[i] <= 'z'){
            printf("lowercase");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
        }// end if
    }// end for
    
}// end implementation of capitalize
<<<<<<< HEAD
=======

>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
