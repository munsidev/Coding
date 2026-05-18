#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1,j=0;i<=n;i++,j++){
        int a=i;
        int b=i*i;
        int c=a*b;
        int d=i*i+1;
        int e=a*d-j;
        printf("%d %d %d\n",a,b,c);
        printf("%d %d %d\n",a,d,e);
    }
    return 0;
}