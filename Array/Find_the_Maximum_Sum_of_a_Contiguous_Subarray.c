// Find the Maximum Sum of a Contiguous Subarray

#include <stdio.h>
int main()
{
    int size;
  //Taking User input for array size
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
  //Taking elements
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_sum = arr[0];
    int start = 0;
    int end = 0;
    for (int i = 0; i < size; i++)
    {
        int current_sum = 0;
        for (int j = i; j < size; j++)
        {
            current_sum += arr[j];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                start = i;
                end = j;
            }
        }
    }
    printf("Maximum subarray sum:%d\n", max_sum);
    printf("\nSubarray:\n");
    for (int i = start; i <= end; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
