#include<stdio.h>
int BS(int a[],int s, int t)
{
    int left=0,right=s-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==t)
        return 1;
        else if(a[mid]<t)
        left=mid+1;
        else
        right=mid-1;
    }
    return 0; //If not found.
}
int main()
{
    int n, q, i, count = 0;
    scanf("%d",&n);
    int s[n];
    
    for(i=0;i<n;i++)
    scanf("%d",&s[i]);

    scanf("%d",&q);
    int t[q];

    for(int i=0;i<q;i++){
        scanf("%d",&t[i]);
        if(BS(s, n, t[i]))
        count++;
    }
    printf("%d\n",count);
    return 0;
}