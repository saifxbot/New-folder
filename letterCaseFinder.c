#include <stdio.h>

void caseFinder()
{
    char input;
    printf("Input the letter to check its case wether it is upper or lowercase: ");
    scanf("%c", &input); //input and the proccessing for the input must be in char // 

    if (input >= 65 && input <= 90)
    {
        printf("This is uppercase");
    }
    else if (input >= 97 && input <= 122)
    {
        printf("This is lowercase");
    }
    else
    {
        printf("this is not a letter");
    }
}

int main()
{
    caseFinder();
    return 0;
}