#include<stdio.h>
#include<limits.h>
#define nINF INT_MIN
int main()
{
    int t,n,s[100001];
    scanf("%d",&t);
    while(t--)
    {
    
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        int min=s[0],max=s[0];
        int dif=INT_MIN;
        for(int i=1;i<n;i++)
        {
            dif=(max-s[i]>dif)? max-s[i]:dif;
            max=(s[i]>max)?s[i]:max;
            min=(s[i]<min)?s[i]:min;
        }
        printf("%d\n",dif);

    }
    return 0;
}
