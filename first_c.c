#include <stdio.h>

// Function to calculate the volume of a cylinder
void volumeOfCylinder() {
   int height, radius;
   printf("Enter the height: ");
   scanf("%d", &height);

   printf("Enter the radius: ");
   scanf("%d", &radius);

   printf("The volume of the cylinder is: %.2f\n", 3.1416 * radius * radius * height);
}

// Function to convert Celsius to Fahrenheit
void cTof() {
   float C;
   printf("Enter the temperature in Celsius: ");
   scanf("%f", &C);

   printf("In Fahrenheit: %.2f\n", (C * 9 / 5) + 32);
}

// Function to calculate simple interest
void calculateInterest() {
   float P, R, T;
   printf("Enter the principal amount: ");
   scanf("%f", &P);

   printf("Enter the rate of interest: ");
   scanf("%f", &R);

   printf("Enter the time in years: ");
   scanf("%f", &T);

   printf("The Simple Interest is: %.2f\n", (P * R * T) / 100);
}

// Function to demonstrate basic arithmetic with different data types
void datatype() {
   float a = 3.0;
   int b = 8;
   printf("The value of 3.0 * 8 - 2 is: %.2f\n", a * b - 2);
}

void divisibleChecker(){
   int a;
   printf("Enter the the number to check divible:");
   scanf("%d", &a);
   printf("%d\n", a%97);
}

void evaluation() {
   int  x=2, y=3, z=3, k=1;
   printf("Value of the 3*x/y - z+k is: %d", 3*x/y-z+k);
}



// Main function
int main() {
   divisibleChecker();
   evaluation();
   return 0;
}
