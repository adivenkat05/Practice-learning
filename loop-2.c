// While loop

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the value of number: ");
    scanf("%d", &number);

    while (number <= 10)
    {
        printf("Value of number: %d\n", number * 10);
        number = number + 1;
    }
}