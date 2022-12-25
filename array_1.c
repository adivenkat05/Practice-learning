/* ARRAY
It looks something like this.
int number[4] = {1, 2, 3, 4};
number[0] will be 1
number[1] will be 2
number[2] will be 3
number[3] will be 4 */

#include <stdio.h>
int main()
{
    // Static Initialization
    int a[5] = {1, 2, 3, 4, 5};
    printf("The values are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}