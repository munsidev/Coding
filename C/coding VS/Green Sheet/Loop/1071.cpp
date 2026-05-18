#include<stdio.h>
int main(){
    int a,b,temp,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a+1;i<b;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}