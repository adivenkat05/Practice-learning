#include <stdio.h>
int main()
{
    int a = 10;                         // ptr = address of a. Similarly, *ptr = value of a.
    int *ptr;                           //
    ptr = &a;                           // The value of a will copied into *ptr.
    printf("Data in ptr = %d\n", *ptr); // The value of *ptr is 10 because a also has 10.
    printf("Address of a: %p\n", &a);
    printf("Address of a using ptr: %p\n", ptr);
    *ptr = *ptr * 20;                   // *ptr = 10 x 20
    printf("The value of a = %d\n", a); // Now, *ptr is modified so a will also change its value according to *ptr.
}