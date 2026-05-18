#include<stdio.h>
int main(){
    double a,b,c,pi=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("TRIANGULO: %.3lf\n",0.5*a*c);
    printf("CIRCULO: %.3lf\n",pi*c*c);
    printf("TRAPEZIO: %.03lf\n",0.5*(a+b)*c);
    printf("QUADRADO: %.03lf\n",b*b);
    printf("RETANGULO: %.03lf\n",a*b);
    return 0;
}