#include<stdio.h>
int main(){
    int km;
    float fuel,mileg;
    scanf("%d%f",&km,&fuel);
    mileg=km/fuel;
    printf("%.3f km/l\n",mileg);
    return 0;
}