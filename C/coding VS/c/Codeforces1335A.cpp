#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long n,ways;
        scanf("%lld",&n);
        ways=(n-1)/2;
        printf("%lld\n",ways);
    }
    return 0;
}