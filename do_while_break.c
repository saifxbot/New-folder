#include <stdio.h>

int main() {
    int a = 0;

    do {
        if (a == 5) {
            printf("Loop terminated at a = %d\n", a);
            break; // Exit the loop when a equals 5
        }
        printf("Current value of a: %d\n", a);
        a++;
    } while (a < 10);

    return 0;
}
