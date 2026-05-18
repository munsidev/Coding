#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]*b[i];
    }
    sort(c,c+n,greater<long long>());
    for(int i=0;i<n;i++)
    {
        printf("%lld ",c[i]);
    }
    printf("\n");
    return 0;

}