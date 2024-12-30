#include <stdio.h>

int main(){
    int a, factorial = 1; 
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        factorial*=i;
    }
    
    printf("The factorial of %d is %d\n", a, factorial); 
    return 0;
}
