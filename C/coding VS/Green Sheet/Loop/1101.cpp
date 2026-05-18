#include<stdio.h>
int main(){
    int a,b,temp,sum=0;
    while(1){
        scanf("%d%d",&a,&b);
        if(a<=0||b<=0)
        break;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(int i=a;i<=b;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
        }
    return 0;
}