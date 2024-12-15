#include <stdio.h>

void largestNumberFinder()
{
    int a, b, c, d;
    printf("Enter your four number:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("The largest number among them is: %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The largest number among them is: %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The largest number among them is: %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The largest number among them is: %d", d);
    }
}
int main()
{
    largestNumberFinder();
    return 0;
}