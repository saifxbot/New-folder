#include <stdio.h>

int main(){
    int i=0;
    int j=9;
    float k=0.00;
    
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", &j);
    printf("The address of i is %u", &k);
    return 0;
}