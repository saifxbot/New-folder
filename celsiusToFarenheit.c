#include <stdio.h>

void cToF()
{
    float a;
    float farenheit = (a * 9 / 5) + 32;
    scanf("%f", &a);
    printf("The temparature in farenheigt is: %.2f", farenheit);
}
int main()
{
    cToF();
    return 0;
}