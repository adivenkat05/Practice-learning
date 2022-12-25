// Dynamic
// Taking input from user.

#include <stdio.h>
int main()
{
    int a[2][2];
    int i, j;
    printf("Enter the value for array: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[*] a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
}