#include <stdio.h>
void main()
{
    int size;
    int total_sum = 0;
    int left_sum = 0;
    int right_sum = 0;
    int point = 0;
    printf("Enter the size of array.\n");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Invalid Array Size...!\n");
        return 0;
    }
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        total_sum = total_sum + arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        right_sum = total_sum - left_sum - arr[i];
        if (left_sum == right_sum)
        {
            printf("Equilibrium Indices = %d\n", i);
            printf("Left side sum =%d\n", left_sum);
            printf("Right side sum =%d\n", right_sum);
            point = 1;
        }
        left_sum = left_sum + arr[i];
    }

    if (point == 0)
    {
        printf("No equilibrium indicces...!\n");
    }
}
