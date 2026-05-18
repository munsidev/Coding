#include<stdio.h>
int main(){
    long long n;
    while(scanf("%lld",&n)>0){
        long long sum=0,rem;
        while(n!=0){
            if(n==0){
            printf("0\n");
            continue;
        }
            rem=n%3;
            sum=sum*10+rem;
            n=n/3;
        }
        long long ternary=0;
        while(sum!=0){
            rem=sum%10;
            ternary=ternary*10+rem;
            sum=sum/10;
        }
        printf("%lld\n",ternary);
    }
    return 0;
}