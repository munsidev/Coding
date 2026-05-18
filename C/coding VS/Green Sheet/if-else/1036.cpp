#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,up,down;
    scanf("%lf%lf%lf",&a,&b,&c);
    up=pow(b,2)-4*a*c;
    down=2*a;
    if(up<0||down==0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n",(-b+sqrt(up))/down);
        printf("R2 = %.5lf\n",(-b-sqrt(up))/down);
    }
return 0;
}