#include <stdio.h>
#include <string.h>
int main() {
    char str[10001];
    int count=0;
    scanf("%s", str);
    char x[] = "UUDDLRLRBA";
    int len = strlen(x);
    int str_len = strlen(str);
    for (int i = 0; i <= str_len - len; i++) {
        if (strncmp(str + i, x, len) == 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
