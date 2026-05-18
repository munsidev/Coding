#include<stdio.h>
int main(){
    int x,y,reminder;
    int temp;
    scanf("%d%d",&x,&y);
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for(int i=x+1;i<y;i++){
        reminder=i%5;
        if(reminder==2||reminder==3){
            printf("%d\n",i);
        }
    }
    return 0;
}