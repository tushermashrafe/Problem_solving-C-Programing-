//print unique elements
#include <stdio.h>
void main()
{
    int size;
    printf("Input the number of elements to be stored in the array:\n");
    scanf("%d", &size);

    int arr[size];
    printf("Input %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are\n");
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d\n", arr[i]);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("No unique elements.\n");
    }
}
