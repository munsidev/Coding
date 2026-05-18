#include<stdio.h>
int main(){
    int array[20];
    for(int i=0;i<20;i++){
        scanf("%d",&array[i]);
    }
        int temp;
    for(int i=0,j=19;i<j;i++,j--){
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }

    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,array[i]);
    }
    return 0;
}