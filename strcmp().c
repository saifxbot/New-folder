#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    char str3[] = "world";
    
    printf("Comparing str1 and str2: %d\n", strcmp(str1, str2));
    printf("Comparing str1 and str3: %d\n", strcmp(str1, str3));
    printf("Comparing str3 and str1: %d\n", strcmp(str3, str1));
    
    return 0;
}