#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Invalid Array Size...!");
        return 0;
    }
    int arr[size];
    printf("Enter %d elements\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int leader = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                leader = 0;
            }
        }
        if (leader == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
