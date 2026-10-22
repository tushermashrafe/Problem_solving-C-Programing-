#include <stdio.h>
void main()
{
    int n;
    // Taking user input for the size of array
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n]; // Array Declaration
    printf("Enter %d elements to store.\n", n);
    // Input element's
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = arr[0]; // Let first element as largest element

    // Finding Largest Element
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > l)
            {
                l = arr[j];
            }
        }
    }

    int sl = arr[0]; // Let first element as second largest element
    int found = 0;
    // Finding Second largest element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < l)
        {
            if (found == 0 || arr[i] > sl)
            {
                sl = arr[i];
                found = 1;
            }
        }
    }
    if (found == 1)
    {
        printf("Second Largest Element is %d\n", sl);
    }
    else
    {
        printf("Second largest distinct element does not exist.\n");
    }
}
