#include<stdio.h>
#include<math.h>
int main()
{
    long long r,g;
    double a,b;
    scanf("%lld %lld",&r,&g);
    
    a=(4.0/3.0)*3.1415*pow(r,3);
    
    b=g/a;
    printf("%lld\n",(long long)b);
    return 0;
}