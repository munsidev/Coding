#include<stdio.h>
int main()
{
    int n,m,d=1,e,index,a[10];
    scanf("%d",&n);
    
    while(n--)
    {   
        index=0;
        scanf("%d",&m);
        
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
         index=i/2;
       e=a[index+1];
    }
   
    
    printf("Case %d: %d\n",d,e);
    d++;
    }
    return 0;
}