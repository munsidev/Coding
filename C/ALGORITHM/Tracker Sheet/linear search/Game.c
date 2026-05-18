#include<stdio.h>
int kit(int n)
{
    int h[30],g[30],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&h[i],&g[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j && h[i]==g[j])
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int n,c;
    scanf("%d",&n);
    c = kit(n);
    printf("%d\n",c);
    return 0;
}