#include <stdio.h>

int main()
{
    int n, a = 1, sum = 0;
    scanf("%d", &n);

    while (a <= n)
    {
        sum += a;
        a++;
    }
    printf("The sum of first %d natural numebr is :%d\n", n, sum);
    return 0;
}