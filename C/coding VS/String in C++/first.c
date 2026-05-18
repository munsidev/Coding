#include<stdio.h>
int main(){
    int a=5;
    int &b=a;
    printf("%d",b);
    return 0;
}