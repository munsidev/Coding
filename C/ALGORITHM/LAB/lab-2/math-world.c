#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p,q,r;
    long long int result=0;
    scanf("%d %d %d",&p,&q,&r);
    int e1=0,e2=0,e3=0;
    for(int i=0;i<n;i++)
    {     
        if(a[i]==p)e1=1;
        if(a[i]==q)e2=1;
        if(a[i]==r)e3=1;           
    }
    if(e1&&e2&&e3){
        result=p*q*r;
    }else{
        if(e1)result+=p;
        if(e2)result+=q;
        if(e3)result+=r;
    }
    printf("%lld\n",result);
    return 0;
}