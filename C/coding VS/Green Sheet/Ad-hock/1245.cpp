#include <stdio.h>
int main() {
    int N;
    int MAX_SIZE=61;
    while (scanf("%d", &N) != EOF) { 
        int left[MAX_SIZE] = {0};
        int right[MAX_SIZE] = {0};
        int size;
        char side;
        for (int i = 0; i < N; i++) {
            scanf("%d %c", &size, &side);
            if (side == 'E') {
                left[size]++;
            } else if (side == 'D') {
                right[size]++;
            }
        }
        int pairs = 0;
        for (int i = 30; i <= 60; i++) {
            if(left[i]<right[i]){
                pairs+=left[i];
            }
            else{
                pairs+=right[i];
            }
        }
        printf("%d\n", pairs);
    }
    return 0;
}
