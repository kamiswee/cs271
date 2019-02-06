// header comments

#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
int main(void) 
{
    printf("Array A of size 50 where all elements are characters between a-bA-B\n");
    char A[50] = {'A','B','C','D','E','A','B','C','D','E','A','B','C','D','E','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'};

    
    printf("Test printCharArray\n");
    printCharArray(50,A);
    printf("\n\nTest countLetters\n");
    int A_size;
    A_size = countLetters(50, A);
    printf("Actual: %d\n", A_size);
    
    
    
    printf("Array B of size 50 where all elements but one are characters a-bA-B. The one character is the first character and it is a tab character\n");
    char B[50] = 
    {'\t','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e'};

    printf("Test printCharArray\n");
    printCharArray(50,B);
    printf("\n\nTest countLetters. Expected: 35\n");
    size_t B_size;
    B_size = countLetters(50, B);
    printf("Actual: %d\n", B_size);
    
    
            
    printf("Array C of size 50 where all elements but 6 are characters a-bA-B. The characters are the first three and they are a tab character\n, a number character, and a punctuation character. The last three are null.");
    char C[50] = 
    {'\t','1','.','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b','c','d','e','a','b'};
    printf("Test printCharArray\n");
    printCharArray(50,C);
    printf("\n\nTest countLetters. Expected: 47\n");
    size_t C_size;
    C_size = countLetters(50, C);
    printf("Actual: %d\n", C_size);
    
    printf("Array D of size 50 where all elements are not initialized");
    char D[50] = "";
    printf("Test printChaArray\n");
    printCharArray(50, D);
    printf("Test countLetters. Expected: 0\n");
    size_t D_size;
    D_size = countLetters(50, D);
    printf("Actual: %d\n", D_size);
        
    printf("Test numMatches(A,A). Expected: 50\n");
    size_t num_matches;
    num_matches = numMatches(50, A, A);
    printf("Actual: %d\n", num_matches);
    
    printf("Test numMatches(A,B). Expected: 49\n");
    num_matches = numMatches(50, A, B);
    printf("Actual: %d\n", num_matches);
    
    printf("Test numMatches(A,C). Expected: 44\n");
    num_matches = numMatches(50, A, C);
    printf("Actual: %d\n", num_matches);
    
    printf("Test numMatches(A,D). Expected: 0\n");
    num_matches = numMatches(50, A, D);
    printf("Actual: %d\n", num_matches);    
    
    return 0;    
    
} // end function main
