#include <stdio.h>

int main(){
    int a=3;
    for (int i = 0; i < a; i++)
    {
        if(i==5){
            printf("terminated at 5");
            break;
            
        }
        printf("%d\n", i);
    }
    
    return 0;
}