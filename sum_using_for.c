#include <stdio.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }


    printf("The sum of the first %d natural numbers is: %d\n", num, sum);

    return 0;
}
