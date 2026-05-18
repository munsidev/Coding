#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int cameras[N+1][N+1];
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N; j++) {
            scanf("%d", &cameras[i][j]);
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int count = cameras[i][j] + cameras[i][j+1] + cameras[i+1][j] + cameras[i+1][j+1];
            if(count >= 2) {
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }
    return 0;
}
