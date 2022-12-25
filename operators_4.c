#include <stdio.h>
/*
LOGICAL OPERATORS
 AND && = a && b
 OR || = a || b
 NOT ! = !(a<b)
*/

int main()
{
    int a = 10, b = 12;
    printf("a&&b => %d\n", a && b);
    printf("a||b => %d\n", a || b);
    printf("!(a<b) => %d\n", !(a < b));
}