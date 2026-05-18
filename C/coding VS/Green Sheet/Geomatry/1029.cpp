#include <stdio.h>
int cont;
int fib(int n){
    cont++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else
    return fib(n-1) + fib(n-2);
}
int main(){
    int n, x;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
            scanf("%d",&x);
            cont = 0;
            printf("fib(%d) = %d calls = %d\n",x,cont-1,fib(x));
    }
    return 0;
}