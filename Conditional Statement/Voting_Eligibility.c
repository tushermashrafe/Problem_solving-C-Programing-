#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age <= 0)
    {
        printf("Enter a valid age...!\n");
    }
    else if (age < 18)
    {
        printf("Sorry...! You are not eligible for casting your vote.\n");
    }
    else if (age >= 18)
    {
        printf("congratulation...! You are eligible for casting your vote.\n");
    }
}
