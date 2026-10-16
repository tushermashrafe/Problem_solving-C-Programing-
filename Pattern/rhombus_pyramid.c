#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
