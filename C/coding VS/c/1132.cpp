#include<stdio.h>
int main(){
    int x,y,temp,sum=0;
    scanf("%d%d",&x,&y);
    if(y<x){
        temp=y;
        y=x;
        x=temp;
    }
    int i=x;
    while(i<=y){
        if(i%13!=0){
            sum+=i;
        }
        i++;
    }
    printf("%d\n",sum);
    return 0;
}