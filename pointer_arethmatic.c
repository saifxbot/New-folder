#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr=arr;

    printf("Initial pointer value: %p, Value: %d\n", arr, arr[0]);

    ptr++;
    printf("After incrementing pointer: %p, Value: %d\n", arr, *ptr);
    return 0;
}