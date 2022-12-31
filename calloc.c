/* calloc -> Contiguous allocation
malloc and calloc is similar but the difference between the both are :-
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().
*/

#include <stdio.h>
#include <stdlib.h>
  
int main()
{
  
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
  
    // Get the number of elements for the array
    n = 5;
    printf("Entered number of elements: %d\n", n);
  
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
  
    // Check if the memory has been successfully
    // allocated by calloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");
  
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
  
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
  
    return 0;
}
