#include <stdio.h>

int count_positive_numbers(int arr[], int size, int positive_arr[]);

int main()
{
    int arr[] = {1, -2, 3, 4, -5, 6, -7, 8, 9, -10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_arr[size]; // Array to store positive numbers
    int count = count_positive_numbers(arr, size, positive_arr);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print the positive numbers array
    printf("Positive numbers array: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", positive_arr[i]);
    }
    printf("\n");

    printf("Number of positive integers: %d\n", count);
    return 0;
}

int count_positive_numbers(int arr[], int size, int positive_arr[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            positive_arr[count] = arr[i];
            count++;
        }
    }
    return count;
}