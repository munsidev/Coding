#include<stdio.h>
#define SIZE 100000
int main(){
    int x[SIZE],y[SIZE];
    int a=0,b=1,c=0;
    for(int i=0;i<SIZE;i++)
    {
        a=b;
        b=c;
        c=a+b;
        x[i]=c;
    }
    
    return 0;
}