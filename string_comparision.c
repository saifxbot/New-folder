#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    char str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("Comparison result: %d\n", strcmp(str, str2));
    
    return 0;
}