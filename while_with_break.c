#include <stdio.h>

int main()
{
    int a = 0;

    while (a < 10)

    {
        if (a == 5)
        {
            a++;
            break;
        }
        printf("%d\n", a);
        a++;
    }

    return 0;
}