#include <stdio.h>

int main()
{
    int a = 10;
    for (int i = 0; i < a; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("value of i %d\n", i);
    }

    return 0;
}