// CS 271
// Program Name: lab1.c
// Author: Kay Sweebe
// Date: 23 January 2019
// Purpose: Allows a user (teacher) to input up to 4 exams per student and 
// outputs the information back as well as the average (numeric and alphabetic) 
// of the exams per student.

#include <stdio.h>
#include<math.h>

// function definition: grade in bounds warns a teacher whether or not the input grade was inclusively between 0 and 100
//void grade_in_bounds(int x );

int main (void) {
    
    // sentinel indicates the end of use by the user
    int sentinel=-1;
    
    // a, b, c, d will be used to store the four exam scores per student
    // i is an iterator
    int x, a, b, c, d, i=0;
    
    // sum will be used to calculate the total sum of the exam scores
    int sum=0;
    
    // avg will hold the average score of the exam per student
    float avg;
    
    // allow user to run program until -1 is input
    while( a != sentinel || b != sentinel || c != sentinel | d != sentinel ){
        printf("Enter the four scores:\n");
        
        // exam 1
        scanf("%d  ", &a);
        
        // exam 2
        scanf("%d  ", &b);
        
        // exam 3
        scanf("%d  ", &c);
        
        // exam 4
        scanf("%d  ", &d);
        
        // display exam scores
        printf("\n%-20s: %d  %d  %d  %d", "Exam scores", a, b, c, d);
        
        // calculate and display average
        avg = ( a + b + c + d ) / 4.0;
        printf("\n%-15s: %.2f", "Average", avg);
        
        
        // display letter grade
        if( 0 <= avg && avg < 60 ){
            printf("\nLetter grade: F\n\n");
            
        } else if ( 60 <= avg && avg < 70 ){
            printf("\nLetter grade: D\n\n");
            
        } else if ( 70 <= avg && avg < 80 ){
            printf("\nLetter Grade: C\n\n");
            
        } else if ( 80 <= avg && avg < 90 ){
            printf("\nLetter grade: B\n\n");
            
        } else if ( 90 <= avg && avg <= 100){
            printf("\nLetter grade: A\n\n");            
        }// end if
        
        
            
    
        
    }// end while    
} // end main


