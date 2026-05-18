#include<stdio.h>
int check2(int n)
{
    while(n>0){
        int num=n%10;
        if(num!=4&&num!=7){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int check(int n){
    for(int i=1;i<=n;i++)
    {
        if(check2(i)&&n%i==0)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
   if(check(n))
   printf("YES\n");
   else
   printf("NO\n");
   return 0;
    
}
