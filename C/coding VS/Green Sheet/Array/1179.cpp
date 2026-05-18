
#include <stdio.h>

int main() {
    int n = 15;
    int x;
    int par[5];
    int impar[5];
    int y = 0, z = 0;
    while (n--) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            if (y < 5) {
                par[y] = x;
                y++;
            }
        } else {
            if (z < 5) {
                impar[z] = x;
                z++;
            }
        }
        if (y == 5) {
            for (int i = 0; i < 5; i++) {
                printf("par[%d] = %d\n", i, par[i]);
            }
            y = 0;
        }
        if (z == 5) {
            for (int i = 0; i < 5; i++) {
                printf("impar[%d] = %d\n", i, impar[i]);
            }
            z = 0;
        }
    }
    for (int i = 0; i < z; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < y; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}
