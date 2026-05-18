#include<stdio.h>
#include<math.h>
int main(){
    int r,gass;
    double pi=3.1415;
    scanf("%d%d",&r,&gass);
    double area=(4/(double)3)*pi*pow(r,3);
    int n=gass/(int)area;
    printf("%d\n",n);
    return 0;
}