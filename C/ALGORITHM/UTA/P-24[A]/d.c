#include<stdio.h>
int main()
{
    int n;
    long long x,c=0;
    scanf("%d %lld",&n,&x);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<n;i++)
    {
       long long r=x/a[i];
       long long cb;
       if(r<b[i]){
        cb=r;
       }else{
        cb=b[i];
       }
       c+=cb;
       x-=cb*a[i];
      
    }
    printf("%lld\n",c);
    return 0;
}