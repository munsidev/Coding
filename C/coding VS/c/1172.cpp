#include<stdio.h>
int main(){
    int x[10];
    for(int i=0;i<10;i++){
        scanf("%d",&x[i]);
        if(x[i]<=0){
            x[i]=1;
        }
        printf("X[%d] = %d\n",i,x[i]);
    }
    return 0;
}