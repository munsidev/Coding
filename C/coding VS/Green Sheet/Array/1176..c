#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&x[i]);
         int t=x[i];
    
    long long a=0,b=1,c=0;
    for(int i=1;i<=t;i++){
        a=b;
        b=c;
         c=a+b;
        
    }
    printf("Fib(%d) = %lld\n",x[i],c);
    }
return 0;
    
}