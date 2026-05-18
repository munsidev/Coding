#include <stdio.h>
#include <string.h>
int main() {
    int T;
    while (scanf("%d", &T) && T) {
        long long food = 0;
        for (int I = 0; I < T; I++) {
            int n;
            char str[20];
            scanf("%d", &n);
            getchar(); 
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';
            if (strcmp(str, "suco de laranja") == 0) {
                food += n * 120;
            } else if (strcmp(str, "morango fresco") == 0 || strcmp(str, "mamao") == 0) {
                food += n * 85;
            } else if (strcmp(str, "goiaba vermelha") == 0) {
                food += n * 70;
            } else if (strcmp(str, "manga") == 0) {
                food += n * 56;
            } else if (strcmp(str, "laranja") == 0) {
                food += n * 50;
            } else if (strcmp(str, "brocolis") == 0) {
                food += n * 34;
            }
        }
        if (food < 110) {
            printf("Mais %lld mg\n", 110 - food);
        } else if (food > 130) {
            printf("Menos %lld mg\n", food - 130);
        } else {
            printf("%lld mg\n", food);
        }
    }
    return 0;
}
