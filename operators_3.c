#include <stdio.h>
/*
RELATIONAL OPERATOR
Greater than >
Less than <
Greater than or equal to <=
Less than or equal to >=
Not equal !=
Both equal or not ==
*/

int main()
{
    int a = 10, b = 12;
    printf("[*] a greater than b = %d\n", a > b);
    printf("[*] a less than b = %d\n", a < b);
    printf("[*] a greater than or equal to b = %d\n", a <= b);
    printf("[*] a less than or equal to b = %d\n", a >= b);
    printf("[*] a not equal to b = %d\n", a != b);
    printf("[*] a both equal or not to b = %d", a == b);
}