// a program in c to find the sum of all element's of the array
#include <stdio.h>
void main()
{
    int size, sum = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    // Taking user input so we can declare an array according to this size.

    int array[size];
    // Declare Array

    printf("Enter %d number's:", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]); // Taking input's
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    printf("sum of all elements stored in the array is : %d", sum);
}
