#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
       if(a[i]<a[i-1])
       {
        m=i+1;
        break;
       }else{
        m=0;
        
       }
    }
    printf("%d\n",m);
    return 0;
}