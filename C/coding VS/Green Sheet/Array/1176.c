#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   int n[t];
   for(int i=0;i<t;i++)
   {
    scanf("%d",&n[i]);
    int x=n[i];
    long long a=0,b=1,c=0;
    for(int j=2;j<=x;j++)
    {

    
     c=a+b;
    a=b;
    b=c;
   
    }
    printf("Fib(%lld) = %lld\n",n[i],c);
   }
  
}