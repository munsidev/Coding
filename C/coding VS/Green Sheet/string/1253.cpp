#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    getchar();
    while (n--) {
        char str[51];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        int x;
        cin >> x;
        getchar();
        int l = strlen(str);
        for (int i = 0; i < l; i++) {
            int w = str[i] - x;
            if (w < 'A') {
                str[i] = 'Z' - ('A' - w - 1);
            } else {
                str[i] = w;
            }
        }
        printf("%s\n", str);
    }
    return 0;
}