#include<stdio.h>
int main(){
    int n,h;
    float salary,total;
    scanf("%d%d%f",&n,&h,&salary);
    total=h*salary;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",n,total);
    return 0;
}