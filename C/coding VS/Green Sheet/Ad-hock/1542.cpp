#include<stdio.h>
int main(){
    while(1){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==0||b==0||c==0)
        break;
        int x=(a*b*c)/(c-a);
        if(x>1){
            printf("%d paginas\n",x);
        }
        else{
            printf("%d pagina\n",x);
        }
    }
    return 0;
}