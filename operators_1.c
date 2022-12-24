#include<stdio.h>
/* Operators
Addition = + 
Subtraction = -
Multiplication = *
Division = /
Modulo = % (reminder of division) */

int main(){
    int a = 10, b = 12;
    printf("Sum of %d + %d = %d\n", a, b, a + b);
    printf("Difference between %d and %d is %d\n", a, b, a - b);
    printf("Multiplication of %d and %d is %d\n", a, b, a*b);
    printf("Division of %d and %d is %d\n", a, b, a/b);
    printf("Reminder of %d and %d is %d\n", b, a, b%a);
}