#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }  
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[index]) {
            index = i;
        }
    }
    int temp = a[index];
    a[index] = a[n - 1];
    a[n - 1] = temp; 
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }  
    return 0;
}