#include<stdio.h>
int main(){
    int code1,code2,n1,n2;
    float p1,p2,total;
    scanf("%d%d%f",&code1,&n1,&p1);
    scanf("%d%d%f",&code2,&n2,&p2);
    total=n1*p1+n2*p2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}