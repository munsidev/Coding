#include<stdio.h>
int main()
{
   
    while(1)
    {
     int n,m,count[10001]={0};
    scanf("%d%d",&n,&m);
    if(n==0 && m==0)
    {
        break;
    }
    
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        count[x]++;
     }
     int num=0;
   for(int i=0;i<=n;i++)
   {
    if(count[i]>1)
    {
       num++;
    }

   }
    printf("%d\n",num);
    }
return 0;
    
}