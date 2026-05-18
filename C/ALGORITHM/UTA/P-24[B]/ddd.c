#include <stdio.h>

#define MAXN 100005

long long coins[MAXN];

int main() {
    int n;
    long long k;
    scanf("%d %lld", &n, &k);
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &coins[i]);
    }

    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (coins[i] <= k) {
            long long use = k / coins[i];
            long long available = 1;
            int j = i - 1;
            while (j >= 0 && coins[j] == coins[i]) {
                available++;
                j--;
            }
            if (use > available) use = available;

            k -= use * coins[i];
            count += use;
            i = j + 1;
        }
    }
    if (k == 0)
        printf("%d\n", count);
    else
        printf("-1\n");

    return 0;
}
