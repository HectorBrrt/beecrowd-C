/*
Simple Sum
Read two integer values, in this case, the variables A and B. 
After this, calculate the sum between them and assign it to the variable SUM. 
Write the value of this variable.

Input
The input file contains 2 integer numbers.

Output
Print the message "SUM" with all the capital letters, 
with a blank space before and after the equal signal followed by the corresponding value to the sum of A and B. 
*/

#include <stdio.h>

int main() {
    int A,B;

    printf("A: ");
    scanf("%d", &A);

    printf("B: ");
    scanf("%d", &B);

    int SUM = A+B;

    printf("X: %d", SUM);
}
