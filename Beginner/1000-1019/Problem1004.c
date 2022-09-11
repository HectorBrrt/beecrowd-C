/*
Simple Product
Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. 

Input
The input file contains 2 integer numbers.

Output
Print the message "PROD" and PROD according to the following example, with a blank space before and after the equal signal.
*/

#include <stdio.h>

int main() {
    int n1,n2;

    printf("A: ");
    scanf("%d", &n1);

    printf("B: ");
    scanf("%d", &n2);
    int PROD = n1*n2;

    printf("PROD = %d", PROD);
}
