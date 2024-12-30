#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int Num_of_guesses=0;
    int guessed_number;
    int randomNumber=(rand()%100)+1;
    
    do
    {
        printf("Enter the number to guess:\n");
        scanf("%d", &guessed_number);

        if (guessed_number>randomNumber)
        {
            printf("Lower number please\n");
        }
        else if (guessed_number<randomNumber){
            printf("Higer number please\n");
        }else{
            printf("Congrats\n");
        }
        Num_of_guesses++;
        
    } while (guessed_number!=randomNumber);

    printf("You guessed the number in %d times", Num_of_guesses);
    

    return 0;
}