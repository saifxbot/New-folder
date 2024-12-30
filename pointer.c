#include <stdio.h>

int main(){
    
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer: %d\n", *p);
    printf("Address of a: %p\n", &a);
    printf("Address of a using pointer: %p\n", p);
    return 0;
}