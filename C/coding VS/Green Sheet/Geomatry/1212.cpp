#include <stdio.h>
#include <string.h>
int countCarries(char num1[], char num2[]) {
    int carry = 0, carryCount = 0, i;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = len1 > len2 ? len1 : len2;
    for (i = 0; i < maxLen; i++) {
        int digit1 = (i < len1) ? num1[len1 - 1 - i] - '0' : 0;
        int digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        if (sum >= 10) {
            carry = 1;
            carryCount++;
        } else {
            carry = 0;
        }
    }
    return carryCount;
}
int main() {
    char num1[11], num2[11];
    while (1) {
        scanf("%s %s", num1, num2);
        if (strcmp(num1, "0") == 0 && strcmp(num2, "0") == 0) break;
        int carryCount = countCarries(num1, num2);
        if (carryCount == 0) {
            printf("No carry operation.\n");
        } else if (carryCount == 1) {
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", carryCount);
        }
    }
    return 0;
}
