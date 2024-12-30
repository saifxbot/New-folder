
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    do
    {
        if(a==2){
            printf("skipped 2nd iteration\n");
            a++;
            continue;
            
        }
        printf("Continues after 2nd iteration\n");
        a++;
    } while (a<=10);
    
    return 0;
}