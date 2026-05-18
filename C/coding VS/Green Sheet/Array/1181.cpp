#include <stdio.h>
int main() {
    int L,i,j;
    char T;
    double M[12][12], result = 0.0;
    scanf("%d", &L);
    scanf(" %c", &T);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (j = 0; j < 12; j++) {
        result += M[L][j];
    }

    if (T == 'M') {
        result /= 12.0;
    }

    printf("%.1lf\n", result);

    return 0;
}