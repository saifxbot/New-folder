#include <stdio.h>

int main() {
    int table[10];
    int i;

    // Store multiplication table of 5 in the array
    for (i = 0; i < 10; i++) {
        table[i] = 5 * (i + 1);
    }

    // Print the multiplication table
    printf("Multiplication table of 5:\n");
    for (i = 0; i < 10; i++) {
        printf("5 x %d = %d\n", i + 1, table[i]);
    }

    return 0;
}