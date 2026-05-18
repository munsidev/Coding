#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
    while (1) {
        char x[27];
        int y;
        if (scanf("%s %d", x, &y) == EOF) {
            break;
        }
        char a;
        scanf("%c", &a);
        int n = strlen(x);
        int arr[y];
        for (int i = 0; i < y; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < y; i++) {
                printf("%c", x[arr[i] - 1]);
        }
        printf("\n");
    }
    return 0;
}
