/*
Salary:
Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money).
Considering that this seller receives 15% over all products sold,
write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
- Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values,
that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[30];
    double fixed_salary, sales_made;

    printf("Name: ");
    scanf("%s", name);

    printf("Fixed salary: U$ ");
    scanf("%lf", &fixed_salary);

    printf("Total sales made (in money): U$ ");
    scanf("%lf", &sales_made);

    double total = fixed_salary + sales_made*0.15;

    printf("Total salary: U$ %.2lf", total);
}
