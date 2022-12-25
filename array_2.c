// Dynamic Initialization

#include <stdio.h>
int main()
{
    int x[5];
    printf("Enter the values: "); // Input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n[*] The entered value: \n"); // Output
    for (int i = 0; i < 5; i++)
    {
        printf("=> %d\n", x[i]);
    }
}
