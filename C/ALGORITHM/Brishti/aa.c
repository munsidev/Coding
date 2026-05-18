#include <stdio.h>

// Function for binary search
int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return 1; // Found
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0; // Not found
}

int main() {
    int n, q, i, count = 0;
    
    // Read n
    scanf("%d", &n);
    int S[n];
    
    // Read sorted sequence S
    for (i = 0; i < n; i++)
        scanf("%d", &S[i]);
    
    // Read q
    scanf("%d", &q);
    int T[q];
    
    // Read sequence T and process
    for (i = 0; i < q; i++) {
        scanf("%d", &T[i]);
        if (binary_search(S, n, T[i]))
            count++;
    }
    
    // Output the count
    printf("%d\n", count);
    
    return 0;
}
