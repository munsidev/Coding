#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n,greater<long long>());
 
    for(int i=0;i<n;i++)
    {
        printf("%lld ",a[i]);
    }
    printf("\n");
    return 0;
}
