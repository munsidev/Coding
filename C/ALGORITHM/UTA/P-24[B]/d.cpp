#include<bits/stdc++.h>
using namespace std;
void greedy(long long coin[],int n,long long x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        long long use = x / coin[i];  
            x -= use * coin[i];
            count += use;
    }
    if(x==0)
    {
        printf("%d\n",count);
    }else{
        printf("-1\n");
    }
}
int main()
{
    int n;
    long long x;
    scanf("%d %lld",&n,&x);
    long long coin[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&coin[i]);
    }
    greedy(coin,n,x);
    return 0;

}