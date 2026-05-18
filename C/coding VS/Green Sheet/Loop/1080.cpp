#include<stdio.h>
int main(){
    int array[100];
    int position;
    for(int i=0;i<100;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=0;i<100;i++){
        if(max<array[i]){
            max=array[i];
            position=i+1;
        }
    }
    printf("%d\n%d\n",max,position);
    return 0;
}