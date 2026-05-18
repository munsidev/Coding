#include<stdio.h>
int main(){
    int x,y,count=0;
    scanf("%d%d",&x,&y);
        for(int j=1;j<=y;j++){
            printf("%d",j);
            count++;
            if(count%x==0){
                printf("\n");
            }
            else{
                printf(" ");
            }
            
    }
    return 0;
}