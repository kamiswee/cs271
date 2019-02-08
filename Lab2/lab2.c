// CS 271
// Program Name: lab2functions.c
// Author: Kay Sweebe
// Date: February 7, 2019
// Purpose: Create test cases for functions printCharArray, countLetters, numMatches, 
//      capitalize.

#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
int main(void) 
{
<<<<<<< HEAD
    // Test Case: alphabetic array only
    printf("\nArray A of size 50 where all elements are characters between a-bA-B\n");
=======
    printf("Array A of size 50 where all elements are characters between a-bA-B\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    char A[50] = {'A','B','C','D','E','A','B','C','D','E','A','B','C','D','E','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'};

    
    printf("Test printCharArray\n");
    printCharArray(50,A);
<<<<<<< HEAD
    printf("\nTest countLetters\n");
=======
    printf("\n\nTest countLetters\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    int A_size;
    A_size = countLetters(50, A);
    printf("Actual: %d\n", A_size);
    
    
<<<<<<< HEAD
    // Test case: 1 non-alphabetic character
    printf("\nArray B of size 50 where all elements but one are characters a-bA-B. The one character is the first character and it is a tab character\n");
=======
    
    printf("Array B of size 50 where all elements but one are characters a-bA-B. The one character is the first character and it is a tab character\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    char B[50] = 
    {'\t','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'};

    printf("Test printCharArray\n");
    printCharArray(50,B);
<<<<<<< HEAD
    printf("\nTest countLetters. Expected: 35\n");
=======
    printf("\n\nTest countLetters. Expected: 35\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    size_t B_size;
    B_size = countLetters(50, B);
    printf("Actual: %d\n", B_size);
    
    
<<<<<<< HEAD
    // Test case: Multiple non alphabetic characters and null characters        
    printf("\nArray C of size 50 where all elements but 6 are characters a-bA-B. The characters are the first three and they are a tab character\n, a number character, and a punctuation character. The last three are null.");
    char C[50] = 
    {' ','1','.','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b'};
    printf("Test printCharArray\n");
    printCharArray(50,C);
    printf("\nTest countLetters. Expected: 47\n");
=======
            
    printf("Array C of size 50 where all elements but 6 are characters a-bA-B. The characters are the first three and they are a tab character\n, a number character, and a punctuation character. The last three are null.");
    char C[50] = 
    {'\t','1','.','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b'};
    printf("Test printCharArray\n");
    printCharArray(50,C);
    printf("\n\nTest countLetters. Expected: 47\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    size_t C_size;
    C_size = countLetters(50, C);
    printf("Actual: %d\n", C_size);
    
<<<<<<< HEAD
    // Test case: All null characters
    printf("\nArray D of size 50 where all elements are not initialized");
    char D[50] = "";
    printf("Test printChaArray\n");
    printCharArray(50, D);
    printf("\nTest countLetters. Expected: 0\n");
=======
    printf("Array D of size 50 where all elements are not initialized");
    char D[50] = "";
    printf("Test printChaArray\n");
    printCharArray(50, D);
    printf("Test countLetters. Expected: 0\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    size_t D_size;
    D_size = countLetters(50, D);
    printf("Actual: %d\n", D_size);
        
<<<<<<< HEAD
    // Test case: A = A
    printf("\n\nTest numMatches(A,A). Expected: 50\n");
=======
    printf("Test numMatches(A,A). Expected: 50\n");
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    size_t num_matches;
    num_matches = numMatches(50, A, A);
    printf("Actual: %d\n", num_matches);
    
<<<<<<< HEAD
    // Test case: A != B
    printf("\n\nTest numMatches(A,B). Expected: 35\n");
    num_matches = numMatches(50, A, B);
    printf("Actual: %d\n", num_matches);
        
    // Test case: A != C
    printf("\n\nTest numMatches(A,C). Expected: 32\n");
    num_matches = numMatches(50, A, C);
    printf("Actual: %d\n", num_matches);
          
    // Test case: A != D  
    printf("\n\nTest numMatches(A,D). Expected: 0\n");
    num_matches = numMatches(50, A, D);
    printf("Actual: %d\n", num_matches);  
    
    
    // Test Case: alphabetic array only, some capital some not
    printf("\n\nTest capitalize(A)\n");
    capitalize(50, A);
    printCharArray(50, A);
    
    // Test case: 1 non-alphabetic character
    printf("\n\nTest capitalize(B)\n");
    capitalize(50, B);
    printCharArray(50, B);
    
    // Test case: Multiple non alphabetic characters and null characters
    printf("\n\nTest capitalize(C)\n");
    capitalize(50, C);
    printCharArray(50, C);
    
    // Test case: All null characters
    printf("\n\nTest capitalize(D)\n");
    capitalize(50, D);
    printCharArray(50, D);
    
=======
    printf("Test numMatches(A,B). Expected: 49\n");
    num_matches = numMatches(50, A, B);
    printf("Actual: %d\n", num_matches);
    
    printf("Test numMatches(A,C). Expected: 44\n");
    num_matches = numMatches(50, A, C);
    printf("Actual: %d\n", num_matches);
    
    printf("Test numMatches(A,D). Expected: 0\n");
    num_matches = numMatches(50, A, D);
    printf("Actual: %d\n", num_matches);    
>>>>>>> 2afe93e164b2deca23d9325287c141d0172d1d03
    
    return 0;    
    
} // end function main
