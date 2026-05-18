#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
           c++;
        }
    }
    printf("%d\n",c);
    return 0;
}