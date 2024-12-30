#include <stdio.h>

void avg()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float result = (a + b + c) / 3;
    printf(" The average of %.2f, %.2f and %.2f is %.2f", a, b, c, result);
}

int main()
{
    avg();
    return 0;
}
