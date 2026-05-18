#include <stdio.h>

int main() {
    int n, x, y = 0;
    scanf("%d", &n); 
    while (n--) {
        scanf("%d", &x);
        int a[x];
        for (int i = 0; i < x; i++) {
            scanf("%d", &a[i]);
        }
        int k = 0, m;
        for (int i = 1; i < x; i++) {
            if (a[i] - a[i - 1] > k) {
                k = a[i] - a[i - 1];
            }
        }
        m = k;
        for (int i = 1; i < x; i++) {
            if (a[i] - a[i - 1] == k) {
                k--;
            } else if (a[i] - a[i - 1] > k) {
                m++;
                break;
            }
        }
        printf("Case %d: %d\n", ++y, m);
    }
    
    return 0;
}
