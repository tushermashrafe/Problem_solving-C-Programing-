#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is a positive number.\n", n);
    }
    else if (n < 0)
    {
        printf("%d is a negative number.\n", n);
    }
    else
    {
        printf("Enter a valid number.\n", n);
    }
}
