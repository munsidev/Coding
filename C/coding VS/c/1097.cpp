#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=9;i+=2){
        for(int j=i+6;j>=i+4;j--){
            printf("I=%d J=%d\n",i,j);
        }
    }
    return 0;
}