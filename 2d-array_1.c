// 2 Dimensional Array
// Static

#include<stdio.h>

int main()
{
    int a[2][2] = {{5, 10},{15, 20}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++){
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
}