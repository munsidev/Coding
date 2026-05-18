#include<stdio.h>
int main(){
    int n,fibonacci=0;
    scanf("%d",&n);
    int array[n];
    array[0]=0;
    array[1]=1;
    for(int i=2;i<n;i++){
        array[i]=array[i-2]+array[i-1];
    }
    for(int i=0;i<n;i++){
        if(i==n-1){
            printf("%d\n",array[i]);
        }
        else{
            printf("%d ",array[i]);
        }
    }
    return 0;
}