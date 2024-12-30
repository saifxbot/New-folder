#include <stdio.h>

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum_natural(n - 1) + n;
    }
}

int main()
{
    int n;
    printf("Enter the number to get the sum");
    scanf("%d", &n);

    printf("The sum of first %d is %d", n, sum_natural(n));
    return 0;
}