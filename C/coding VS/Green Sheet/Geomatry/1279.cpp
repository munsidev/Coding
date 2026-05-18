#include<stdio.h>
int main(){
    while(1){
        int n;
        int x=0,y=0;
        if(scanf("%d",&n)==EOF){
            break;
        }
        if((n%4==0&&n%100!=0)||n%400==0){
            x=1;
            printf("This is leap year.\n");
            if(n%55==0){
                printf("This is bulukulu festival year.\n");
            }
        }
          if(n%15==0){
            y=1;
            printf("This is huluculu festival year.\n");
        }
        if(x==0&&y==0){
            printf("This is an ordinary year.\n");
        }
        printf("\n");
    }
    return 0;
}