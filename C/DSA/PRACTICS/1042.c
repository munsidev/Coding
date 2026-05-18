#include <stdio.h>
int main(){
    int a,b,c;
    int temp;
    scanf("%d%d%d",&a,&b,&c);
    int _a=a,_b=b,_c=c;

    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",_a,_b,_c);
    return 0;
}