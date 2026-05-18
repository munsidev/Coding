#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    a=fabs(a-b);
    c=ceil(b/a);
    printf("%.0lf\n",c);
    return 0;
}