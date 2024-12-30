#include <stdio.h>

int main()
{
    int num, i = 1, sum = 0;

    printf("Enter the Number to get Multiplication table: \n");
    scanf("%d", &num);

 
    while (i <= 10)
    {
        int product = num * i;  
        printf("%d * %d = %d\n", num, i, product);
        
        sum += product;  
        i++;  
    }

    
    printf("The total sum of the multiplication table is: %d\n", sum);

    return 0;
}
