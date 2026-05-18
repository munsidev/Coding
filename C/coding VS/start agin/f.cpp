#include <stdio.h>
#include <math.h>
int main() {
    int first, second, third;
    int a, b, c;
    scanf("%d %d %d", &first,&second,&third);
    a = sqrt((first * second) / third);
    b = sqrt((first * third) / second);
    c = sqrt((second * third) / first);
    int total = 4 * (a + b + c);
    printf("%d\n", total);
    return 0;
}
