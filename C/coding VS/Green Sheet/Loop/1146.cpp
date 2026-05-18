#include<stdio.h>
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(int i=1;i<=n;i++){
            if(i==n){
                printf("%d\n",i);
            }
            else{
                printf("%d ",i);
            }
        }
    }
       
}    