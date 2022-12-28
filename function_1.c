#include <stdio.h>

int add(int x, int y)

{

    return x + y;

}

int subtract(int x, int y)

{

    return x - y;

}

int multiply(int x, int y)

{

    return x * y;

}

int divide(int x, int y)

{

    return x / y;

}

int main()

{

    printf("[*] Sum of 10 and 12 is %d\n", add(10, 12));

    printf("[*] Difference between 12 and 10 is %d\n", subtract(12, 10));

    printf("[*] Multiplication of 10 and 12 is %d\n", multiply(10, 12));

    printf("[*] Division of 12 and 10 is %d\n", divide(12, 10));

}
