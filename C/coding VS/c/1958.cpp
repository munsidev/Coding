#include<stdio.h>
int main(){
    float priceList[]={1.50,2.50,3.50,4.50,5.50};
    int p,code,q;
    float total,price;
    scanf("%d",&p);
    for(int i=1;i<=p;i++){
        scanf("%d%d",&code,&q);
        price=priceList[code-1001]*q;
        total+=price;
    }
    printf("%.2f\n",total);
    return 0;
}