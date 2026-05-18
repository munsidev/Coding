#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        printf("%d\n",a);
    }
}