
#include <ctype.h>
#include "helperfunctions.h"







// The functions should do the following:
//      1) Sort the array using the selection sort algorithm.
//      2) When a swap is needed, you must call your swap function (defined in your 
//          helperfunctions.c file).
//      3) The return value is a count of the number of comparisons that are made. 
//          Specifically, you should count the number of times that an if statement compares 
//          the value of an array element.
int selectionSort ( int data[], size_t length)
{
    size_t count = 0;
    
    // Iterate over length-1 elements
    for( size_t i = 0; i < length - 1; i++){
        // first index of remaining array is the smallest since we sort left to right
        size_t smallest = i; 
        size_t j;
        // for each element after our leftmost element, we want to see if there exists a smaller such element.
        for( j = i + 1; j < length; j++){
            // Compare to see if any array[j] < array[i]; ie. check if there exists an element in the 
            // array less than the current least element
            if( data[j] < data[smallest]){
                // if it is the smallest, keep track of the index
                smallest = j;
            }// end if
            
            // Increment count for each comparison made
            count++;
        }// end inner for
        
        // Swap the least such element i with a smaller or same element smallest.
        swap(data + i, data + smallest);
            
            
    }// end outer for
    
   
    
    // return count
}

// The functions should do the following:
//      1) Sort the array using the insertion sort algorithm.
//      2) When a swap is needed, you must call your swap function (defined in your 
//          helperfunctions.c file).
//      3) The return value is a count of the number of comparisons that are made. 
//          Specifically, you should count the number of times that an if statement compares 
//          the value of an array element.
int insertionSort ( int data[], size_t length )
{
    return 0;
}
