#include <stdio.h>

int main(){
    int arr[5] = {100, 2, 30, 4, 5};
    int max = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum value in the array: %d\n", max);
    return 0;
}