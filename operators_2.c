#include<stdio.h>
/* Bitwise operators

Bitwise AND => &
Bitwise OR => |
Bitwise XOR => ^

Letsay, a = 4, b = 2 
Binary value of a = 0100
Binary value of b = 0010

Bitwise a & b =     0001  => Decimal Value (1)
Bitwise a | b =     0111  => Decimal Value (7)
Biwwise a ^ b =     0110  => Decimal Value (6)

*/

int main(){
    int a = 4, b = 2;
    printf("BITWISE AND OR XOR OPERATORS\n");
    printf("Bitwise a AND b => %d\n", a&b);
    printf("Bitwise a OR b => %d\n", a|b);
    printf("Bitwise a XOR b => %d\n", a^b);

/*
Left shift operators 
a = 4, b = 2
a = 0100 
a << 2 [0100 -> 1000] 1000(8)
b = 0010
b << 2 [0010 -> 0000] 0000(0)
*/
printf("\nLEFT AND RIGHT SHIFT OPERATORS\n");
printf("Left Shift 4 by 2 = %d\n", a<<2);
printf("Right Shift 2 by 2 = %d\n", b>>2);

}
