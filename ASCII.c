#include <stdio.h>
int main()
{
    for (int i = 0; i < 128; i++)
    {
        printf("[*] ASCII of %d : %c\n", i, i);
    }
}