#include <stdio.h>
int main() {
    double V,D,pi=3.14;
    while(scanf("%lf%lf",&V,&D)!=EOF) {
        double r=D/2;
        double h=V/(pi*r*r);
        double area=pi*r*r;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",area);
    }
    return 0;
}