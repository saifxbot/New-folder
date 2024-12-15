#include <stdio.h>

void leapyearChecker()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("This is a leapyear");
    }
    else
    {
        printf("this is not a leapyear");
    }
}
int main()
{
    leapyearChecker();
}