// Calculator using switch statement.
#include <stdio.h>
int main()
{
   int choice, a, b;
   printf("[*] Enter 1 for Addition:\n");
   printf("[*] Enter 2 for Subtraction:\n");
   printf("[*] Enter 3 for Multiplication:\n");
   printf("[*] Enter 4 for Division:\n");
   printf("Enter you choice: ");
   scanf("%d", &choice);
   printf("Enter two values for a & b: ");
   scanf("%d%d", &a, &b);

   switch (choice)
   {
   case 1:
      printf("Addition of a and b is %d\n", a + b);
      break;

   case 2:
      printf("Difference between a and b is %d\n", a - b);
      break;

   case 3:
      printf("Multiplication of a and b is %d\n", a * b);
      break;

   case 4:
      printf("Division of a and b is %d\n", a / b);
      break;

   default:
      printf("ERROR!! You're entered input is not within 1 - 4\n");
   }
}