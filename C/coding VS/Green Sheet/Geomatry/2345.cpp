#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,c,d;
    long long int x;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    x=abs((a+d)-(b+c));
    printf("%lld\n",x);
}