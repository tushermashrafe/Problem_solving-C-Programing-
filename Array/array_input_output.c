#include <stdio.h>
void main()
{
    int size;
    // User input for the size of array.
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d element's to store and print.", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]); // Store value in array
    }
    printf("================\n"); // Printing
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}
