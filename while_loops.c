#include <stdio.h>

int main(){
    int a;
    printf("Enter the number for the loop: ");
    scanf("%d", &a);

    while (a < 10)
    {
    printf("happy birthday\n");
    a++;
    }
    
    return 0;
}