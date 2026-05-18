#include<stdio.h>
int main(){
    int n,Petya,Vasya,Tonya,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&Petya,&Vasya,&Tonya);
        if(Petya+Vasya+Tonya>=2){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
