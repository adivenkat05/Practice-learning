/*
CONTROL STRUCTURES

(Pseudocode)
if(condition){
    if conditions are satisfied the statements are executed
} else{
    if conditions aren't satisfied the statements in else block are executed
}
*/

#include <stdio.h>
int main()
{
    int age;
    printf("Enter you're age: ");
    scanf("%d", &age); // The value will get stored in '&age'.
    if (age >= 18)
    {
        printf("You're allowed to vote.\n");
    }
    else
    {
        printf("You're not allowed to vote.\n");
    }
}