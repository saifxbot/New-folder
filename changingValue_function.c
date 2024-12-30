#include <stdio.h>

void change_to_10times(int* a)
{
    *a = *a * 10;
}

int main()
{
    int m = 5;
    printf("The value of the m is %d\n", m);
    change_to_10times(&m);
    printf("The value of the m is %d\n", m);
    
    return 0;
}