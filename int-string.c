// Converting integer value into character string.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int x;
    printf("Enter the value: ");
    scanf("%d", &x);
    sprintf(str, "%d", x); // The value given in double quotes will get stored in 'str' variable instead of printing it in the console.
    printf("The value of \'x\' in \'str\' string: %s", str);
}
