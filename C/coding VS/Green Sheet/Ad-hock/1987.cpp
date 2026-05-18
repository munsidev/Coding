#include<stdio.h>
int main(){
    int n;
    long long m;
    while(scanf("%d%lld",&n,&m)!=EOF){
        long long sum=0;
        while(m!=0){
            sum+=m%10;
            m/=10;
        }
        printf("%lld ",sum);
        if(sum%3==0) {
            printf("sim\n");
        }
        else{
            printf("nao\n");
        }
    }
    return 0;
}