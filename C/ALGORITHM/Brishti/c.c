#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);   
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } 
        else if (a[i] > min1 && a[i] < min2)
            min2 = a[i];    
    }
    printf("%d %d\n", min1, min2);   
    return 0;
}
