#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
{
    scanf("%d",&n);
    if(n==2)
    {
        printf("%d eh primo\n",n);
        continue;
    }
    int count=0;
    for(int j=2;j*j<=n;j++)
    {
        if(n%j==0)
        {
            count++;
            break;
        }
    }
    if(count == 0 && n>1)
    {
        printf("%d eh primo\n",n);
    }else{
        printf("%d nao eh primo\n",n);
    }
}
return 0;
}