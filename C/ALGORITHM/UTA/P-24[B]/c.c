#include<stdio.h>
int main()
{
    int n;
    long long k;
    scanf("%d %lld",&n,&k);
    long long a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            
            if((a[i]*a[j])%k==0){
                printf("YES\n");
                return 0;
                
            }

        }
    }
    printf("NO\n");
    return 0;
}