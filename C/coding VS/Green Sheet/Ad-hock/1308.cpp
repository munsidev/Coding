#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    while(m--){
    long long int x;
    long long int count=0;
    scanf("%lld",&x);
    for(long long int i=0;;i++){
        x-=i;
        if(i>=x)
        break;
        count++;
    }
    printf("%lld\n",count);
    }
    return 0;
}