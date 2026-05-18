#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int x[T];
    for(int i=0;i<T;i++){
        scanf("%d",&x[i]);
        int n=x[i];
        long long a=0;
        long long b=1;
        long long c=0;
        for(int j=2;j<=n;j++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("Fib(%d) = %lld\n",x[i],c);
    }
    return 0;
}