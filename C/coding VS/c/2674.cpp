#include<stdio.h>
#include<stdbool.h>
bool prime(int y){
    for(int i=2;i*i<=y;i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
bool superPrime(int x){
    if(!prime(x)){
        return false;
    }
    else{
        while(x!=0){
            int digit=x%10;
            if(digit!=2&&digit!=3&&digit!=5&&digit!=7){
                return false;
            }
            x=x/10;
        }
    }
    return true;
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n<=1){
            printf("Nada\n");
            continue;
        }
        else if(superPrime(n)){
            printf("Super\n");
        }
        else if(prime(n)){
            printf("Primo\n");
        }
        else{
            printf("Nada\n");
        }
    }
    return 0;
}