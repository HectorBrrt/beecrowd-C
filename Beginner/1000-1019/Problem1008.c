/*
Salary:
Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour.
Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
Don’t forget the space before and after the equal signal and after the U$.

Input
The input file contains 2 integer numbers and 1 value of floating point, representing the number,
worked hours amount and the amount the employee receives per worked hour.

Output
Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.
*/

#include <stdio.h>
#include <stdio.h>

int main(){
    int emp_num, w_hou;
    double pay;

    printf("Employee's number: ");
    scanf("%d", &emp_num);

    printf("Worked hours (in a month):");
    scanf("%d", &w_hou);

    printf("Amount received per hour: R$ ");
    scanf("%lf", &pay);

    printf("Salary  = R$ %.2f", pay*w_hou);
}
