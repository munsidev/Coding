#include<stdio.h>
int main(){
    int a,b,c[10],d,e=1,f,i;
    scanf("%d",&a);
    while(a--){
            d=0;
            scanf("%d",&b);
        for(i=1;i<=b;i++){
        scanf("%d",&c[i]);
        d=i/2;
        f=c[d+1];
        }
        printf("Case %d: %d\n",e,f);
        e++;
    }
    return 0;
}
