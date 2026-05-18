#include <stdio.h>

int bs(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right-left) / 2; 

        if (arr[mid] == target)
            return mid; 
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 5, 8, 10, 12}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 3;

    int result = bs(arr, size,search);

    if (result != -1)
        printf("Element found at index %d\n", result+1);
    else
        printf("Element not found\n");

    return 0;
}
