#include <stdio.h>

// Function prototype
int sumArray(int *arr, int size);

int main() {
    // Define and initialize an array
    int array[] = {5, 10, 15, 20, 25};
    int size = sizeof(array) / sizeof(array[0]);

    // Compute the sum of the array elements using recursion
    int totalSum = sumArray(array, size);

    // Print the result
    printf("The sum of the array elements is: %d\n", totalSum);

    return 0;
}

// Recursive function to calculate the sum of an array
int sumArray(int *arr, int size) {
    // Base case: if the size is 0, return 0
    if (size <= 0) {
        return 0;
    }

    // Recursive case: sum the first element and the sum of the rest of the array
    return arr[size - 1] + sumArray(arr, size - 1);
}
