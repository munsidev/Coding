#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1])
        {
            if(a[i]>0)
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}