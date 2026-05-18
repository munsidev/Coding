#include<stdio.h>
#define SIZE 100100
int main(){
    int n;
    scanf("%d",&n);
    int x[SIZE],y[SIZE];
    int a=0,b=1,c=0,k;
    for(int i=0;i<SIZE;i++)
    {
        a=b;
        b=c;
        c=a+b;
        x[i]=c;
    }
    for(int i=1,j=2,k=0;i<=SIZE;i++)
    {
        if(x[j]!=i){
        y[k]=i;
        k++;
        }
        else{
        ++j;
        }
     }
      printf("%d\n",y[n]);
      return 0;
}