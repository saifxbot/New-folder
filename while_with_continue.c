#include <stdio.h>

int main()
{
    int a=0;

    while (a < 10)
    {
        if (a == 2 || a == 3)
        {
            a++;
            continue;
        }
        printf("%d\n", a);
        a++;
    }

    return 0;
}