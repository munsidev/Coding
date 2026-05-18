#include<stdio.h>
int main(){
    int N,min=21,index=0,T;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&T);
        if(T<min){
            min=T;
            index=i;
        }
    }
    printf("%d\n",index);
    return 0;
}