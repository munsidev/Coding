#include <stdio.h>
#include <math.h>

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int goalsBrazil = floor((double)N / 90);
        int goalsGermany = ceil((double)N * 7 / 90);


        printf("Brasil %d x Alemanha %d\n", goalsBrazil, goalsGermany);
    }
    return 0;
}