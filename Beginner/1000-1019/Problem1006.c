/*
Average 2:
Read three values (variables A, B and C), which are the three student's grades.
Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5.
Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input
The input file contains 3 values of floating points (double) with one digit after the decimal point.

Output
Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example,
with a blank space before and after the equal signal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    double A, B, C, average ;

    printf("Grade A = ");
    scanf("%lf", &A);

    printf("Grade B = ");
    scanf("%lf", &B);

    printf("Grade C = ");
    scanf("%lf", &C);

    average  = (A*2+B*3+C*5)/10;

    printf("MEDIA = %.1f", average);
}
