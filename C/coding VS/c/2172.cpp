#include<stdio.h>
int main(){
    long long int x,m,result;
    while(1){
        scanf("%lld%lld",&x,&m);
        if(x==0&&m==0){
            break;
        }
        result=x*m;
        printf("%lld\n",result);
    }
    return 0;
}