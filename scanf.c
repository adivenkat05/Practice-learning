#include <stdio.h>
int main()
{
    char string[20];
    printf("Enter your full name: ");
    scanf("%[^\n]", string); // %[\n] is used to get user input with spaces.
    printf("Your full name is %s\n", string);
}