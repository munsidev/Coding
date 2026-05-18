#include <stdio.h>
#include <stdbool.h>

bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    bool isAlmostLucky = false;
    for (int i = 4; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            isAlmostLucky = true;
            break;
        }
    }

    printf("%s\n", isAlmostLucky ? "YES" : "NO");

    return 0;
}
