#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character from str1 if present
    str1[strcspn(str1, "\n")] = 0;
    // Remove newline character from str2 if present
    str2[strcspn(str2, "\n")] = 0;
    strcat(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}