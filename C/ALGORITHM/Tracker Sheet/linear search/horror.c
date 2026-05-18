#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int s[n];
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
        }
        int max=s[0];
        for(int i=0;i<n;i++){
            if(max<s[i])
            max=s[i];
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}