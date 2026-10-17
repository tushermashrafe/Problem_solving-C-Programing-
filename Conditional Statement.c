//Equality Check
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("%d and %d are equal.\n", num1, num2);
    }
    else
    {

        printf("num1 and num2 are not equal.\n", num1, num2);
    }
}
