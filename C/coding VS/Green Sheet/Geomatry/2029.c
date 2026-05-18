#include<stdio.h>
#include<math.h>
int main()
{
    double v,d;
    while(scanf("%lf%lf",&v,&d)!=EOF)
    {
        double r=d/2;
        double area=3.14*pow(r,2);
        double h=v/area;

        printf("ALTURA = %0.2lf\n",h);
        printf("AREA = %0.2lf\n",area);
    }
    return 0;
}