#include <stdio.h>

void marksAnalyzer(){
    int mark1, mark2, mark3;
    printf("Enter the marks:\n");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    printf("your marks are :%d ,%d and %d\n", mark1, mark2,mark3);

    if((mark1+mark2+mark3)/3 < 40){
        printf("You failed due to less percentage in average and also indivually\n");
    }
    else if(mark1<33 || mark2<33 || mark3<33){
        printf("you failed due to individual subjects\n");
    }
    else{
        printf("welldone u got passsed!");
    }    
}

void taxCalculate(){
    float income;
    printf("Enter your income:");
    scanf("%f", &income);

    if(income<=250000){
        printf("No tax needed to pay");
    }
    else if(income>250000 && income<=500000){
        printf("The amount for paying tax is :%.2f", 0.05*income);
    }
    else if(income>500000 && income<=1000000){
        printf("The amount for paying tax is :%.2f", 0.2*income);
    }
    else if(income>1000000){
        printf("The amount for paying tax is :%.2f", 0.3*income);
    }
    
}

int main(){
    marksAnalyzer();
    taxCalculate();
}