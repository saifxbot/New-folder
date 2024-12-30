#include <stdio.h>

int main(){
    int a, factorial = 1, i=1; 
    scanf("%d", &a);

    while (i<=a)
    {
        factorial*=i;
        i++;
    }
    
    printf("The factorial of %d is %d\n", a, factorial); 
    return 0;
}
