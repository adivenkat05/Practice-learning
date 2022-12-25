// Calculator
#include <stdio.h>
int main()
{
    int choice;
    int a;
    int b;
    printf("[*] Enter 1 for Addition:\n");
    printf("[*] Enter 2 for Subtraction:\n");
    printf("[*] Enter 3 for Multiplication:\n");
    printf("[*] Enter 4 for Division:\n");
    printf("Enter you choice: ");
    scanf("%d", &choice);
    printf("Enter two values for a & b: ");
    scanf("%d%d", &a, &b);

    if (choice == 1)
    {
        printf("Addition of a and b is %d\n", a + b);
    }
    else if (choice == 2)
    {
        printf("Difference between a and b is %d\n", a - b);
    }
    else if (choice == 3)
    {
        printf("Multiplication of a and b is %d\n", a * b);
    }
    else if (choice == 4)
    {
        printf("Division of a and b is %d\n", a / b);
    }
    else
    {
        printf("ERROR!! You're entered input is not within 1 - 4\n");
    }
}