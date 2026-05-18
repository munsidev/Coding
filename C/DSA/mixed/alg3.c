#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D,r1,r2,rp,ip;
    scanf("%d %d %d", &a, &b, &c);
    D = pow(b,2)-(4*a*c);
    if(D>=0)
    {
        r1= (-b+(sqrt(D)))/(2*a);
        r2= (-b-(sqrt(D)))/(2*a);
        printf("%d\n%d",r1,r2);
    }
}