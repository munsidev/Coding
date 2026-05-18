#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a[n];
    int rem = 0;
    long long prod = 1;
    int z = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        if (a[i] == 0) z++;
        else prod *= a[i];
    }

    if (z >= 2) {
        rem = 1;
    } else if (z == 1) {
        rem = 0;
    } else {
        for (int i = 0; i < n; i++) {
            if (prod / a[i] == prod) {
                rem = 1;
                break;
            }
        }
    }

    if (rem)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
