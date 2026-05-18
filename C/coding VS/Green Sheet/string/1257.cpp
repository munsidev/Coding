#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        getchar();
        int total = 0;
        for (int x = 0; x < m; x++) {
            char str[51];
            fgets(str, sizeof(str), stdin);
            str[strlen(str) - 1] = '\0';
            for (int i = 0; i < strlen(str); i++) {
                total += (str[i] - 65) + x + i;
            }
        }
        cout << total << endl;
    }
    return 0;
}
