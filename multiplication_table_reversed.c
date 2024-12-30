#include <stdio.h>

int main(){
    int num, i = 10;

    printf("Enter the Number to get Multiplication table: \n");
    scanf("%d", &num);

    while (i >=0)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i--;
    }

    return 0;
}