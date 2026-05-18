#include<stdio.h>
int main(){
    int n,count,temp;
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        y[i]=-1;
    }
     for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++)
       {
        if(x[i]>x[j])
        {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
       }
     }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(x[i]==x[j]){
               count++;
               y[j]=0;
            }
        }
        if(y[i]!=0){
        y[i]=count;}
    }
    for(int i=0;i<n;i++)
    {
        if(y[i]!=0){
            printf("%d aparece %d vez(es)\n",x[i],y[i]);
        }
    }
 return 0;
}