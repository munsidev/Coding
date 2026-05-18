#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]*(i+1)>max)
        max=a[i]*(i+1);
    }
    printf("%d\n",max);
    return 0;
}