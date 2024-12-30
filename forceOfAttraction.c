#include <stdio.h>

int main()
{
    float f;
    float acceleration = 9.8;
    printf("Enter the force to claculate force of attraction: ");
    scanf("%f", &f);

    float FOA = f * acceleration;

    printf("The force of attraction is: %.2f N", FOA);

    return 0;
}