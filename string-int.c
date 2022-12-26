// Converting character string into integer value.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp[] = "143";                     // String
    int a = atoi(inp);                      // atoi() is used in conversion of string to int.
    a = a * 10;                             // This operation can only be done if it's converted into integer value.
    printf("The converted value of \'a\' = %d", a); // 143 x 10 = 1430
}
