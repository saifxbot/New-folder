#include <stdio.h>

void string_input(){
        char name[20];
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Your name is: %s\n", name);
}



int main(){
     char name [] = "Saif";
     char first_string[] = {'s', 'a', 'm', 'p', 'l', 'e', ' ', 's', 't', 'r', 'i', 'n', 'g', '\0'};
     printf("second string: %s\n", first_string);
     printf("First string: %s\n", name);
     string_input();
     return 0;
}