#include <stdio.h>

// Function prototypes
void reverseArray(int *arr, int start, int end);
void printArray(int *arr, int size);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    printArray(array, size);

    // Reverse the array using recursion
    reverseArray(array, 0, size - 1);

    printf("Reversed array:\n");
    printArray(array, size);

    return 0;
}

// Function to reverse an array using recursion
void reverseArray(int *arr, int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap the elements at start and end
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursively call the function for the next pair
    reverseArray(arr, start + 1, end - 1);
}

// Function to print the array
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
