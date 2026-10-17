// Even Or Odd Check
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number to check even or odd:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even number", num);
    }
    else
    {
        printf("%d is odd number", num);
    }
}
