#include<bits/stdc++.h>
using namespace std;
int coin()
{
    int n,count=0;
    long long k;
    scanf("%d %lld",&n,&k);
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n,greater<long long>());
    for(int i=0;i<n&&k>0;i++)
    {
        int num;
        if(arr[i]<=k)
        {
            num=k/arr[i];
            count+=num;
            k%=arr[i];

        }
    }
    if(k!=0)
    return -1;
    else
    return count;
}
int main()
{
    int c;
    c=coin();
    printf("%d\n",c);
    return 0;
}