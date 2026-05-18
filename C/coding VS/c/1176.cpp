#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int x[T];
    for(int i=0;i<T;i++){
        scanf("%d",&x[i]);
        int n=x[i];
        long long y[n];
        y[0]=0;
        y[1]=1;
        for(int j=2;j<=n;j++){
            y[j]=y[j-1]+y[j-2];
        }
        printf("Fib(%d) = %lld\n",x[i],y[n]);
    }
    return 0;
}