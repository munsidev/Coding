#include<stdio.h>
int main()
{
    int n,p1=0,q1=0,r1=0,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        p1=1;
        if(a[i]==q)
        q1=1;
        if(a[i]==r)
        r1=1;
    }
    if(p1&&q1&&r1){
    printf("%d\n",p*q*r);
    return 0;
    }
    if(p1)
    f+=p;
    if(q1)
    f+=q;
    if(r1)
    f+=r;
    printf("%d\n",f);
    return 0;

}