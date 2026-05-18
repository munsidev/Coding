#include<stdio.h>
int main(){
    int m,n,temp;
    while(1){
         int sum=0;
    scanf("%d%d",&m,&n);
    if(m<=0||n<=0){
        break;
    }
    if(n<m){
        temp=m;
        m=n;
        n=temp;
    }
   
    for(int i=m;i<=n;i++){
        printf("%d ",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);
    }
    return 0;
}