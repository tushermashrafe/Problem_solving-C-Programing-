// Array Reverse Display
#include <stdio.h>
void main()
{
    int size;
    // Taking user input for the array size
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int array[size]; // Declare an array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]); // Taking element's and saving in array
    }
    printf("You'r elements in reverse order:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\n", array[i]); // Printing element's in reverse order
    }
}
