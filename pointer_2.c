// Accessing array using pointer.

#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40};
    int *ptr;
    ptr = a;
    for (int i = 0; i < 4; i++)
    {
        printf("[*] %d data in address %p\n", *ptr, ptr);
        ptr = ptr + 1;
    }
}