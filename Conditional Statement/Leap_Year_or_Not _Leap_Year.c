// Leap year or not Leap year
#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // Leap Year Logic:(year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
    {
        printf("%d is leap year.", year);
    }
    else
    {
        printf("%d is not leap year.", year);
    }
}
