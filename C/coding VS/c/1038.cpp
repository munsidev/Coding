#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==1){
        printf("Total: R$ %f\n",y*4.00);
    }
    if(x==2){
        printf("Total: R$ %f\n",y*4.50);
    }
    if(x==3){
        printf("Total: R$ %f\n",y*5.00);
    }
    if(x==4){
        printf("Total: R$ %f\n",y*2.00);
    }
    if(x==5){
        printf("Total: R$ %f\n",y*1.50);
    }
    return 0;
}