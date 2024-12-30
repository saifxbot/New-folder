#include <stdio.h>

void starPrinter(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    starPrinter(n);
    return 0;
}