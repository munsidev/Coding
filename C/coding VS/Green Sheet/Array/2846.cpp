#include <stdio.h>
#include<iostream>
#define MAXSIZE 100100
long long fibo[MAXSIZE];
long long _fibonot[MAXSIZE];
void fib(){
    int i, j, k;
    fibo[0] = 0; fibo[1] = 1;
    for (i = 2; i  <= MAXSIZE; ++i)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    for (i = 1, j = 2, k = 1; i  <= MAXSIZE; ++i)
        if (fibo[j] != i)
            _fibonot[k++] = i;
        else
            ++j;
}
int main (void)
{
    int n;
    fib();
    scanf("%d", &n);
    printf("%lld\n", _fibonot[n]);
    
}

