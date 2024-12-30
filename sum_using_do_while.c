#include <stdio.h>

int main(){
    
    int num,i=1, sum=0;

    do
    {
        sum+=i;
        i++;
    } while (i<=num);
    printf("The sum of the first %d natural number are: %d\n", num, sum);
    return 0;
}