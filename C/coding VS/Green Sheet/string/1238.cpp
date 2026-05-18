#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char s1[51], s2[51];
        scanf("%s %s", s1, s2);
        int l1 = strlen(s1);
        int l2 = strlen(s2);
        int i = 0;
        for (; i < l1 || i < l2; i++) {
            if (i < l1) {
                printf("%c", s1[i]);
            }
            if (i < l2) {
                printf("%c", s2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
