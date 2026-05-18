#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    long long a[n];
    scanf("%d",&a[0]);
    for(int i=1;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]==a[0])
        {
            c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            printf("YES\n");
            return 0;
        }
    }
    if(c==n){
        printf("NO\n");
    }else{
    printf("YES\n");}
    return 0;


}
