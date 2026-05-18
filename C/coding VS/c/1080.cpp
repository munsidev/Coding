#include<stdio.h>
int main(){
    int array[100];
    int i=0;
    while(i<100){
        scanf("%d",&array[i]);
        i++;
    }
    int max=array[0];
    i=0;
    while(i<100){
        if(max<array[i]){
            max=array[i];
        }
        i++;
    }
    printf("%d\n",max);
    int count=0;
    i=0;
    while(i<100){
        if(array[i]==max){
            count++;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
}