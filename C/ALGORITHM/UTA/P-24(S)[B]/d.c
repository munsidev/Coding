#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+x==a[j])
            {
                printf("Yes\n");
                return 0;

            }
        }
    }
    printf("No\n");
    return 0;

}