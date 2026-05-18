#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
double div(double a,double b){
    return a/b;
}
int main(){
    int a,b;
    char x; 
    scanf("%c %d%d",&x,&a,&b);
    if(x=='+'){
        printf("Add = %d\n",add(a,b));
    }
    else if(x=='-'){
        printf("Subtraction = %d\n",sub(a,b));
    }
    else if(x=='*'){
        printf("Multiplication = %d\n",mul(a,b));
    }
    else if(x=='/'){
        printf("Division = %.3lf  or  %.2e\n",div(a,b),div(a,b));
    }

return 0;
}