#include <stdio.h>
void main()
{
    int n;

    // User input
    printf("Enter size:\n");
    scanf("%d", &n);

    // First Half Pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Second Half Pyramid
    for (int i = n - 1; i >= 1; i--)
    {
        for (int l = 1; l <= n - i; l++)
        {
            printf("  ");
        }
        for (int m = 1; m <= 2 * i - 1; m++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
