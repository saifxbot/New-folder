#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    *ptr = 10;
    *(ptr+1) = 20;
    *(ptr+2) = 30;
    *(ptr+3) = 40;
    *(ptr+4) = 50;
    for(int i=0; i<5; i++){
        printf("Value of arr[%d]: %d\n", i, arr[i]);
    }
    return 0;
}