#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("%d\n",c);
        }else{
            printf("%d ",c);
        }
        a=b;
        b=c;
        c=b+a;
     }
    return 0;
}