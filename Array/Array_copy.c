// array copy c program
#include <stdio.h>
main()
{
    int size;
    printf("Enter the size of array:\n");
    scanf("%d", &size);
    int arr1[size], arr2[size];

    printf("Enter %d element:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("The elements stored in the first array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr1[i]);
    }

    printf("------------------\n");
    printf("------------------");

    printf("\nThe elements copied into the second array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr2[i]);
    }
}
