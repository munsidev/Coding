#include<stdio.h>
int main(){
    int increment=1,decrement=1;
    int array[5];
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
        if(array[i]<1||array[i]>13){
            i--;
        }
    }
    for(int i=1;i<5;i++){
        if(array[i]<array[i-1]){
            increment=0;
            break;
        }
    }
    for(int i=1;i<5;i++){
        if(array[i]>array[i-1]){
            decrement=0;
            break;
    }
    }
    if(increment){
        printf("C\n");
    }
    else if(decrement){
        printf("D\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}