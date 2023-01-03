#include<stdio.h>
int main()
{
    char name[8] = "Adithyan";
    
    for(int i = 0; i < 8; i++){
        printf("name[%d] = %c\n", i, name[i]); //Direct way to access an array.
    }

    printf("\n-------------------------------------\n");

    for(int i = 0; i < 8; i++){
        printf("name[%d] using pointer = %c\n", i, *(name + i)); //Indirect way to access an array.
    }

}
