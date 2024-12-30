#include <stdio.h>
#include <string.h>

void copy_string(){
    char source[] = "Hello, World!";
    char destination[50];
    strcpy(destination, source);
}

int main() {
    char *str;
    printf("Enter a string: ");
    scanf("%s", str);
    strlen(str);
    printf("Length of the string: %zu\n", strlen(str)); 
    printf("String: %s\n", str); 
    printf("Third character: %c\n", str[2]);
    copy_string();
    return 0; 
}
